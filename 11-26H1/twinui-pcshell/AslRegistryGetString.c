/*
 * XREFs of AslRegistryGetString @ 0x18015C054
 * Callers:
 *     AslEnvBuildBasic @ 0x18015A770 (AslEnvBuildBasic.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18015BD48 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslRegistryGetStringExpand @ 0x18015C344 (AslRegistryGetStringExpand.c)
 * Callees:
 *     AslFree @ 0x18015C31C (AslFree.c)
 *     AslStringDuplicate @ 0x18015C594 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1802C3E28 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
  NTSTATUS v9; // eax
  const char *v11; // r9
  __int64 v12; // r8
  __int64 Length; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a3);
  v5 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v6 = v5;
  if ( v5 == -2147483643 || v5 == -1073741789 )
  {
    ResultLength += 2;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
    v8 = Heap;
    if ( !Heap )
    {
      v6 = -1073741801;
      AslLogCallPrintf(1LL, "AslRegistryGetString", 1348LL, "Out of memory");
      return v6;
    }
    v9 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
    v6 = v9;
    if ( v9 < 0 )
    {
      v11 = "Failed to query key value [%x]";
      v12 = 1360LL;
    }
    else
    {
      if ( v8[1] != 1 && v8[1] != 2 )
      {
        AslLogCallPrintf(1LL, "AslRegistryGetString", 1368LL, "Invalid value type");
        v6 = -1073741788;
        goto LABEL_6;
      }
      *((_WORD *)v8 + ((unsigned __int64)(unsigned int)v8[2] >> 1) + 6) = 0;
      v9 = AslStringDuplicate(a1);
      v6 = v9;
      if ( v9 >= 0 )
      {
LABEL_6:
        AslFree(NtCurrentPeb()->ProcessHeap, v8);
        return v6;
      }
      v11 = "Out of memory [%x]";
      v12 = 1378LL;
    }
    LODWORD(Length) = v9;
    AslLogCallPrintf(1LL, "AslRegistryGetString", v12, v11, Length);
    goto LABEL_6;
  }
  if ( v5 != -1073741772 )
    AslLogCallPrintf(1LL, "AslRegistryGetString", 1334LL, "Failed to query key value [%x]", v5);
  return v6;
}
