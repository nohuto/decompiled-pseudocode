/*
 * XREFs of SiGetRegistryValue @ 0x140AC22E0
 * Callers:
 *     SiDisambiguateSystemDevice @ 0x14089B270 (SiDisambiguateSystemDevice.c)
 *     SiIsWinPEBoot @ 0x140AC21E0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x140AC225C (SiGetBootDeviceNameFromRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SiOpenRegistryKey @ 0x140AC245C (SiOpenRegistryKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, _QWORD *a5, ULONG *a6)
{
  _QWORD *v6; // r15
  ULONG *v7; // r14
  _DWORD *v8; // rsi
  HANDLE v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  _DWORD *Pool2; // rax
  void *v17; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG v20; // [rsp+70h] [rbp+30h] BYREF
  int v21; // [rsp+74h] [rbp+34h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF

  v21 = HIDWORD(a1);
  v6 = a5;
  v7 = a6;
  v8 = 0LL;
  v20 = 0;
  v9 = 0LL;
  ResultLength = 0;
  *a5 = 0LL;
  *v7 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !a3 || (v13 = SiOpenRegistryKey(v11, a3, v12, &Handle), v9 = Handle, v14 = v13, v13 >= 0) )
  {
    v15 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v14 = v15;
    if ( v15 == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v8 = Pool2;
      if ( !Pool2 )
      {
LABEL_14:
        v14 = -1073741670;
        goto LABEL_9;
      }
      v14 = ZwQueryValueKey(v9, &DestinationString, KeyValuePartialInformation, Pool2, ResultLength, &v20);
      if ( v14 < 0 )
        goto LABEL_9;
      if ( v8[1] == 1 )
      {
        ResultLength -= 12;
        v17 = (void *)ExAllocatePool2(0x100uLL);
        *v6 = v17;
        if ( v17 )
        {
          memmove(v17, v8 + 3, ResultLength);
          v14 = 0;
          *v7 = ResultLength;
          goto LABEL_9;
        }
        goto LABEL_14;
      }
      v14 = -1073741788;
    }
    else if ( v15 >= 0 )
    {
      v14 = -1073741823;
    }
  }
LABEL_9:
  if ( v9 )
    ZwClose(v9);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v14;
}
