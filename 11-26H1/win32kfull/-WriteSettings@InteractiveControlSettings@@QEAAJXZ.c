/*
 * XREFs of ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1402FC5D0
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1402F226C (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x14013F040 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 */

__int64 __fastcall InteractiveControlSettings::WriteSettings(InteractiveControlSettings *this, __int64 a2, __int64 a3)
{
  int v4; // esi
  unsigned int *v5; // rbx
  __int64 v6; // rbp
  const WCHAR *v7; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = InteractiveControlSettings::_OpenDeviceKey(this, 131078LL, a3, &KeyHandle);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int *)&unk_140358E78;
    v6 = 29LL;
    do
    {
      v7 = (const WCHAR *)*((_QWORD *)v5 - 1);
      if ( v7 )
      {
        RtlInitUnicodeString(&DestinationString, v7);
        if ( *((_DWORD *)this + 2 * *v5) != *((_DWORD *)this + 2 * *v5 + 1)
          || (ResultLength = 0,
              ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772) )
        {
          v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)this + 8 * *v5, 4u);
        }
      }
      v5 += 4;
      --v6;
    }
    while ( v6 );
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
