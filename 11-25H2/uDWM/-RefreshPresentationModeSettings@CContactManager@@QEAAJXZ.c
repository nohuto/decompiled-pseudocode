/*
 * XREFs of ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18002A120
 * Callers:
 *     ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z @ 0x18002985C (-NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18002B2AC (--0CContactManager@@QEAA@XZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::RefreshPresentationModeSettings(CContactManager *this)
{
  bool v2; // bl
  bool v3; // zf
  int pvParam; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  pvParam = 0;
  if ( SystemParametersInfoW(0x2018u, 0, &pvParam, 0) )
  {
    v3 = pvParam == 0;
    *((_BYTE *)this + 324) = pvParam == 2;
    v2 = v3;
  }
  else
  {
    *((_BYTE *)this + 324) = 0;
  }
  *((_BYTE *)this + 325) = v2;
  return 0LL;
}
