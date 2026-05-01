/*
 * XREFs of AslRegistryGetString @ 0x180099048
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 */

__int64 __fastcall AslRegistryGetString(_QWORD *a1, void *a2, const WCHAR *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
  NTSTATUS v9; // eax
  const char *v10; // r9
  __int64 v11; // r8
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
      v10 = "Failed to query key value [%x]";
      v11 = 1360LL;
LABEL_14:
      LODWORD(Length) = v9;
      AslLogCallPrintf(1LL, "AslRegistryGetString", v11, v10, Length);
      goto LABEL_15;
    }
    if ( v8[1] == 1 || v8[1] == 2 )
    {
      *((_WORD *)v8 + ((unsigned __int64)(unsigned int)v8[2] >> 1) + 6) = 0;
      v9 = AslStringDuplicate(a1, v8 + 3);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = "Out of memory [%x]";
        v11 = 1378LL;
        goto LABEL_14;
      }
    }
    else
    {
      AslLogCallPrintf(1LL, "AslRegistryGetString", 1368LL, "Invalid value type");
      v6 = -1073741788;
    }
LABEL_15:
    AslFree(NtCurrentPeb()->ProcessHeap, v8);
    return v6;
  }
  if ( v5 != -1073741772 )
    AslLogCallPrintf(1LL, "AslRegistryGetString", 1334LL, "Failed to query key value [%x]", v5);
  return v6;
}
