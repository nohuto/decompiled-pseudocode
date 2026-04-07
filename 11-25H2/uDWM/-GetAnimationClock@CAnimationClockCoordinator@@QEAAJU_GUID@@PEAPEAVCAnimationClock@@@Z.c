/*
 * XREFs of ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180051094
 * Callers:
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050180 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050374 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180050BAC (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180051030 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800A612C (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A619C (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A625C (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CAnimationClockCoordinator::GetAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        struct CAnimationClock **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // rax
  unsigned int v9; // edi
  __int64 i; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    v9 = -2147023728;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
      v12 = *(_QWORD *)(v11 + 120) - *(_QWORD *)&a2->Data1;
      if ( !v12 )
        v12 = _mm_srli_si128(*(__m128i *)(v11 + 120), 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
      if ( !v12 )
      {
        *a3 = (struct CAnimationClock *)v11;
        CMILRefCountBase::AddRef((CMILRefCountBase *)v11);
        v9 = 0;
        break;
      }
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    return v9;
  }
  else
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2147942487LL;
  }
}
