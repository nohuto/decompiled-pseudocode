/*
 * XREFs of ExWnfHiveUnloaded @ 0x140A3D814
 * Callers:
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     SeConvertStringSidToSid @ 0x1404EEA30 (SeConvertStringSidToSid.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExpWnfInvalidateDataStores @ 0x140B341C0 (ExpWnfInvalidateDataStores.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExWnfHiveUnloaded(PCUNICODE_STRING String2)
{
  struct _KTHREAD *CurrentThread; // rax
  PSID v3; // rbx
  wchar_t *v4; // rdi
  unsigned int v5; // esi
  wchar_t *Pool2; // rax
  int v7; // eax
  ULONG v8; // eax
  UNICODE_STRING v9; // [rsp+20h] [rbp-28h] BYREF
  PSID Sid; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&v9.Length = 2359330LL;
  v3 = 0LL;
  Sid = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = 0LL;
  v9.Buffer = L"\\Registry\\User\\S-";
  if ( RtlPrefixUnicodeString(&v9, String2, 1u) )
  {
    v5 = String2->Length - 30;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, String2->Buffer + 15, v5);
      v4[(unsigned __int64)v5 >> 1] = 0;
      v7 = SeConvertStringSidToSid(v4, (__int64 *)&Sid);
      v3 = Sid;
      if ( v7 >= 0 )
      {
        v8 = RtlLengthSid(Sid);
        ExpWnfInvalidateDataStores(v3, v8);
      }
    }
  }
  KeLeaveCriticalRegion();
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x20666E57u);
}
