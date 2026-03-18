/*
 * XREFs of ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012DE38
 * Callers:
 *     ??1MULTIDEVLOCKOBJ@@QEAA@XZ @ 0x14012DDE8 (--1MULTIDEVLOCKOBJ@@QEAA@XZ.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008638C (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012DECC (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vUnlock(MULTIDEVLOCKOBJ *this)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  __int64 SessionState; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) != 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1); ++i )
      GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * i) + 48LL));
    SessionState = W32GetSessionState(this);
    GreReleaseSemaphoreExclusive<6,>(*(struct _ERESOURCE ***)(SessionState + 88));
    if ( *((_DWORD *)this + 1) )
    {
      do
        GreReleaseSemaphoreExclusive<4,PDEVOBJ>(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v1++));
      while ( v1 < *((_DWORD *)this + 1) );
    }
    *(_DWORD *)this &= ~4u;
  }
}
