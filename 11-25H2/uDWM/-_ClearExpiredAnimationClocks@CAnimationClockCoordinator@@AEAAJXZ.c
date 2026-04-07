/*
 * XREFs of ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x1800508EC
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18004FEB0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050374 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationClock@@$0A@@@QEAAJI@Z @ 0x180050AB4 (-RemoveAt@-$DynArray@PEAVCAnimationClock@@$0A@@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x1800A5D84 (McTemplateU0j_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationClockCoordinator::_ClearExpiredAnimationClocks(CAnimationClockCoordinator *this)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 20) )
  {
    if ( v1 < 0 )
      break;
    v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v2);
    if ( *(_DWORD *)(v4 + 80) == 7 )
    {
      v1 = DynArray<CAnimationClock *,0>::RemoveAt((char *)this + 56, (unsigned int)v2);
      if ( v1 >= 0 )
      {
        v7 = *(_OWORD *)(v4 + 120);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0j_EtwEventWriteTransfer(v6, &UdwmAnimationClock_Destroy, &v7);
        CBaseObject::Release((CBaseObject *)v4);
      }
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v1;
}
