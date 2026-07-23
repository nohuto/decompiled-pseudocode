/*
 * XREFs of BiGetRegistryValue @ 0x1409A6CB4
 * Callers:
 *     BiIsPortableWorkspaceBoot @ 0x140899208 (BiIsPortableWorkspaceBoot.c)
 *     BiMarkTreatAsSystemStore @ 0x1409A0F8C (BiMarkTreatAsSystemStore.c)
 *     BiIsSystemStore @ 0x1409A1114 (BiIsSystemStore.c)
 *     BiIsSystemStoreCandidate @ 0x1409A119C (BiIsSystemStoreCandidate.c)
 *     BiUnloadHiveByHandle @ 0x1409A12A4 (BiUnloadHiveByHandle.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiWasFirmwareModified @ 0x1409A37F8 (BiWasFirmwareModified.c)
 *     BiIsWinPEBoot @ 0x1409A3868 (BiIsWinPEBoot.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     BiGetObjectDescription @ 0x1409A6BE0 (BiGetObjectDescription.c)
 *     BiGetSavedBootEntry @ 0x140B4E6F0 (BiGetSavedBootEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetRegistryValue(
        unsigned __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        ULONG *a6)
{
  const WCHAR *v7; // rax
  unsigned int i; // r12d
  _DWORD *Pool2; // r14
  NTSTATUS v11; // ebx
  HANDLE v12; // rsi
  void *v13; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  NTSTATUS v16; // [rsp+34h] [rbp-64h]
  ULONG v17; // [rsp+38h] [rbp-60h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v7 = a2;
  v17 = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    Pool2 = 0LL;
    KeyHandle = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v7);
    a1 &= ~2uLL;
    if ( a3 )
    {
      v11 = BiOpenKey(a1, a3, 131097LL, &KeyHandle);
      v16 = v11;
      v12 = KeyHandle;
      if ( v11 < 0 )
        goto LABEL_11;
    }
    else
    {
      v12 = (HANDLE)a1;
    }
    v11 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v16 = v11;
    if ( v11 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
      if ( !Pool2 )
        goto LABEL_18;
      v11 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, Pool2, ResultLength, &v17);
      v16 = v11;
      if ( v11 >= 0 )
      {
        if ( Pool2[1] == a4 )
        {
          ResultLength -= 12;
          v13 = (void *)ExAllocatePool2(0x102uLL);
          *a5 = v13;
          if ( v13 )
          {
            memmove(v13, Pool2 + 3, ResultLength);
            *a6 = ResultLength;
            v11 = 0;
          }
          else
          {
LABEL_18:
            v11 = -1073741670;
          }
        }
        else
        {
          BiLogMessage(4LL, L"Unexpected type for BCD element. Expected type: 0x%x Actual type: 0x%x", a4);
          v11 = -1073741788;
        }
        v16 = v11;
      }
    }
LABEL_11:
    if ( v12 != (HANDLE)a1 && v12 )
      ZwClose(v12);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    if ( v11 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v7 = a2;
  }
  return (unsigned int)v11;
}
