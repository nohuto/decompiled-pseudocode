/*
 * XREFs of ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180071A4C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMDisplay::RefreshRateChanged(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  char v2; // r10

  v2 = *((_BYTE *)this + 293);
  return v2 != *((_BYTE *)a2 + 293)
      || *((_DWORD *)this + 71) != *((_DWORD *)a2 + 71)
      || *((_DWORD *)this + 66) != *((_DWORD *)a2 + 66)
      || *((unsigned int *)this + 57) * (unsigned __int64)*((unsigned int *)a2 + 58) != *((unsigned int *)this + 58)
                                                                                      * (unsigned __int64)*((unsigned int *)a2 + 57)
      || v2
      && (*((_DWORD *)this + 67) != *((_DWORD *)a2 + 67)
       || *((_DWORD *)this + 68) != *((_DWORD *)a2 + 68)
       || *((_DWORD *)this + 69) != *((_DWORD *)a2 + 69)
       || *((_DWORD *)this + 70) != *((_DWORD *)a2 + 70));
}
