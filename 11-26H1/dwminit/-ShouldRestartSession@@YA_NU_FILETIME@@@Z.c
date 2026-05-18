/*
 * XREFs of ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000BEAC
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180007EC8 (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ?FallBackToBDD@@YA_NXZ @ 0x180008B84 (-FallBackToBDD@@YA_NXZ.c)
 */

char __fastcall ShouldRestartSession(struct _FILETIME a1)
{
  char v2; // di
  char v3; // cl
  int v4; // eax
  bool v5; // zf
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  pcbData = 4;
  pvData = 0;
  v2 = 1;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"DisableSessionTermination",
    0x20000010u,
    0LL,
    &pvData,
    &pcbData);
  if ( pvData == 1 )
    return 0;
  pvData = 0;
  pcbData = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"ForceBasicDisplayAdapterOnDWMRestart",
    0x20000010u,
    0LL,
    &pvData,
    &pcbData);
  if ( pvData != 1 )
  {
    v3 = byte_18001AC4C;
    if ( !byte_18001AC4C )
      goto LABEL_13;
    if ( (unsigned __int64)(*(_QWORD *)&a1 - qword_18001ADD0) >= 0x23C34600 )
    {
      v3 = 0;
      byte_18001AC4C = 0;
    }
    if ( v3 )
    {
      v4 = gDwmNumRetriesSoFar;
      if ( gDwmNumRetriesSoFar >= 7 )
      {
        v5 = !FallBackToBDD();
        v4 = gDwmNumRetriesSoFar;
        v2 = v5;
LABEL_15:
        gDwmNumRetriesSoFar = v4 + 1;
        return v2;
      }
    }
    else
    {
LABEL_13:
      byte_18001AC4C = 1;
      v4 = 0;
      qword_18001ADD0 = (__int64)a1;
    }
    v2 = 0;
    goto LABEL_15;
  }
  if ( FallBackToBDD() || byte_18001ACC0 )
  {
    v2 = 0;
    byte_18001ACC0 = 1;
  }
  return v2;
}
