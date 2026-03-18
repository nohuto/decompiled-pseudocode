/*
 * XREFs of ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C7720
 * Callers:
 *     ??1MULTIDEVLOCKOBJ@@QEAA@XZ @ 0x1400C76F4 (--1MULTIDEVLOCKOBJ@@QEAA@XZ.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77A8 (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
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
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * i));
    SessionState = W32GetSessionState(this);
    GreReleaseSemaphoreExclusive<6,>(*(_QWORD *)(SessionState + 88));
    if ( *((_DWORD *)this + 1) )
    {
      do
        GreReleaseSemaphoreExclusive<4,PDEVOBJ>(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v1++));
      while ( v1 < *((_DWORD *)this + 1) );
    }
    *(_DWORD *)this &= ~4u;
  }
}
