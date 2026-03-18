/*
 * XREFs of ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x14019C148
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400B2CA8 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 */

bool __fastcall CInputGlobals::SetWakeableInputTypesToRegistry(CInputGlobals *this, int a2, int a3)
{
  NTSTATUS v6; // ebx
  void *PointerDeviceConfigurationKey; // r14
  unsigned int v8; // ebp
  char *v9; // rdi
  const WCHAR *v10; // rdx
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  BOOL Data; // [rsp+70h] [rbp+8h] BYREF

  W32AcquirePushLockExclusiveEx(this, 0);
  v6 = 0;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(8LL, 131078LL);
  if ( PointerDeviceConfigurationKey )
  {
    v8 = 0;
    v9 = (char *)&unk_14025C800;
    do
    {
      if ( (*(_DWORD *)v9 & a2) != 0 )
      {
        v10 = (const WCHAR *)*((_QWORD *)v9 + 1);
        Data = (*(_DWORD *)v9 & a3) != 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v10);
        v6 = ZwSetValueKey(PointerDeviceConfigurationKey, &DestinationString, 0, 4u, &Data, 4u);
        if ( v6 < 0 )
          break;
        v11 = *(_DWORD *)v9;
        v12 = *((_DWORD *)this + 36);
        if ( Data )
          v13 = v11 | v12;
        else
          v13 = ~v11 & v12;
        *((_DWORD *)this + 36) = v13;
      }
      ++v8;
      v9 += 16;
    }
    while ( v8 < 5 );
    ZwClose(PointerDeviceConfigurationKey);
  }
  else
  {
    v6 = -1073741811;
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
  return v6 >= 0;
}
