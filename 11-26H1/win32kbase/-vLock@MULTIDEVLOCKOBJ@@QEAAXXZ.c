/*
 * XREFs of ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C640C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C7918 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vLock(MULTIDEVLOCKOBJ *this)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  __int64 SessionState; // rax
  int v5; // edx
  int v6; // r8d

  v1 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
      GreAcquireSemaphore<4,PDEVOBJ>(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * i));
    SessionState = W32GetSessionState(this);
    GreAcquireSemaphore<6,>(*(struct _ERESOURCE ***)(SessionState + 88), v5, v6);
    if ( *((_DWORD *)this + 1) )
    {
      do
        GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v1++));
      while ( v1 < *((_DWORD *)this + 1) );
    }
    *(_DWORD *)this |= 4u;
  }
}
