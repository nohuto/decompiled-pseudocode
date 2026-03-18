/*
 * XREFs of ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x140134164
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400864A4 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140134208 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vLock(MULTIDEVLOCKOBJ *this)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  __int64 SessionState; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
      GreAcquireSemaphore<4,PDEVOBJ>(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * i));
    SessionState = W32GetSessionState(this);
    GreAcquireSemaphore<6,>(*(struct _ERESOURCE ***)(SessionState + 88));
    if ( *((_DWORD *)this + 1) )
    {
      do
        GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v1++));
      while ( v1 < *((_DWORD *)this + 1) );
    }
    *(_DWORD *)this |= 4u;
  }
}
