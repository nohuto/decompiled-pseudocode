/*
 * XREFs of ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180093F74
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180093CC0 (-Delete@CResource@@IEAAXXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18012AA60 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?EnqueueResourceToDestroy@CDeferredDestroys@@QEAAXPEAVCResource@@@Z @ 0x1801A45C8 (-EnqueueResourceToDestroy@CDeferredDestroys@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CComposition::AddDelayDeleteResource(CComposition *this, struct CResource *a2)
{
  CComposition *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CComposition *v5; // rcx

  v2 = g_pComposition;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pComposition + 5712);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pComposition + 5712));
  CDeferredDestroys::EnqueueResourceToDestroy((CComposition *)((char *)v2 + 5752), a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !CComposition::IsCompositionThread(v5) )
    CComposition::ScheduleCompositionPass(v2, 0LL, 512LL);
}
