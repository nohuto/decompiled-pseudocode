/*
 * XREFs of SepRmFetchGlobalSacl @ 0x14081C804
 * Callers:
 *     SepRmGlobalSaclSetWrkr @ 0x14081C9E0 (SepRmGlobalSaclSetWrkr.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     RtlStringCchCatNW @ 0x14063F6D8 (RtlStringCchCatNW.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SepRegOpenKey @ 0x140AB4194 (SepRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmFetchGlobalSacl(STRSAFE_PCNZWCH *a1, ULONG *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  size_t v7; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // rsi
  void *v12; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(unsigned __int16 *)a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  v7 = v3 + 98;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  if ( RtlStringCbCopyW(Pool2, v7, L"\\Registry\\Machine\\SECURITY\\Policy\\GlobalSaclName") >= 0 )
    RtlStringCchCatNW(v9, v7 >> 1, a1[1], (unsigned __int64)*(unsigned __int16 *)a1 >> 1);
  v10 = SepRegOpenKey(v9, 0x201u, &KeyHandle);
  if ( v10 >= 0 )
  {
    v10 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ((int)(v10 + 0x80000000) < 0 || v10 == -1073741789) && ResultLength <= 0x1000B )
    {
      v10 = 0;
      if ( ResultLength > 0xC )
      {
        v11 = ExAllocatePool2(0x100uLL);
        if ( !v11 )
        {
LABEL_2:
          v10 = -1073741801;
          goto LABEL_17;
        }
        v10 = ZwQueryValueKey(
                KeyHandle,
                &DefaultKey,
                KeyValuePartialInformation,
                (PVOID)v11,
                ResultLength,
                &ResultLength);
        if ( v10 >= 0 )
        {
          ResultLength -= 12;
          v12 = (void *)ExAllocatePool2(0x100uLL);
          *a3 = v12;
          if ( v12 )
          {
            memmove(v12, (const void *)(v11 + 12), ResultLength);
            *a2 = ResultLength;
          }
          else
          {
            v10 = -1073741801;
          }
        }
        ExFreePoolWithTag((PVOID)v11, 0);
      }
      else
      {
        *a2 = 0;
        *a3 = 0LL;
      }
    }
  }
LABEL_17:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
