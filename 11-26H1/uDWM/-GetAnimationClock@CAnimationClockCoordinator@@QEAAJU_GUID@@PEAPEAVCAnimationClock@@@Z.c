/*
 * XREFs of ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990
 * Callers:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x18003E928 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18003EAA4 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F320 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x180098B40 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x180098BB4 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180098C68 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 */

__int64 __fastcall CAnimationClockCoordinator::GetAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        struct CAnimationClock **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v8; // edi
  __int64 i; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( !memcmp_0(a2, &GUID_NULL, 0x10uLL) )
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2147942487LL;
  }
  else
  {
    v8 = -2147023728;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
      v11 = *(_QWORD *)(v10 + 120) - *(_QWORD *)&a2->Data1;
      if ( !v11 )
        v11 = _mm_srli_si128(*(__m128i *)(v10 + 120), 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
      if ( !v11 )
      {
        *a3 = (struct CAnimationClock *)v10;
        CBaseObject::AddRef((CBaseObject *)v10);
        v8 = 0;
        break;
      }
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    return v8;
  }
}
