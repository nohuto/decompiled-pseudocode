/*
 * XREFs of PnprGetPluginDriverImagePath @ 0x1407B2190
 * Callers:
 *     PnprLoadPluginDriver @ 0x1407B2878 (PnprLoadPluginDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     wcsncat_s @ 0x14053F010 (wcsncat_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprGetPluginDriverImagePath(PUNICODE_STRING DestinationString)
{
  __int64 Pool2; // rdi
  NTSTATUS CachedContextBaseKey; // ebx
  NTSTATUS v4; // eax
  int v5; // eax
  __int64 v6; // rax
  rsize_t v7; // r14
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+40h] BYREF
  void *v16; // [rsp+C8h] [rbp+48h] BYREF

  v16 = 0LL;
  ResultLength = 0;
  DestinationStringa = 0LL;
  KeyHandle = 0LL;
  Pool2 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 4LL, &v16);
  if ( CachedContextBaseKey >= 0 )
  {
    RtlInitUnicodeString(&DestinationStringa, L"Control\\Pnp");
    ObjectAttributes.RootDirectory = v16;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationStringa;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( CachedContextBaseKey >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"ReplaceDriver");
      v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
      CachedContextBaseKey = v4;
      if ( v4 == -2147483643 || v4 == -1073741789 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          CachedContextBaseKey = ZwQueryValueKey(
                                   KeyHandle,
                                   &ValueName,
                                   KeyValuePartialInformation,
                                   (PVOID)Pool2,
                                   ResultLength,
                                   &ResultLength);
          if ( CachedContextBaseKey >= 0 )
          {
            v5 = *(_DWORD *)(Pool2 + 4);
            if ( (v5 == 1 || v5 == 2) && (v6 = *(unsigned int *)(Pool2 + 8), (v6 & 1) == 0) )
            {
              v7 = (unsigned __int64)(v6 + 26) >> 1;
              v8 = (wchar_t *)ExAllocatePool2(0x100uLL);
              v9 = v8;
              if ( DestinationString )
              {
                wcscpy_s(v8, v7, L"\\systemroot\\");
                wcsncat_s(v9, v7, (const wchar_t *)(Pool2 + 12), (unsigned __int64)*(unsigned int *)(Pool2 + 8) >> 1);
                RtlInitUnicodeString(DestinationString, v9);
              }
              else
              {
                CachedContextBaseKey = -1073741670;
                if ( v8 )
                  ExFreePoolWithTag(v8, 0x51706E50u);
              }
            }
            else
            {
              CachedContextBaseKey = -1073741811;
            }
          }
        }
        else
        {
          CachedContextBaseKey = -1073741670;
        }
      }
      else if ( v4 >= 0 )
      {
        CachedContextBaseKey = -1073741823;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0x51706E50u);
  return (unsigned int)CachedContextBaseKey;
}
