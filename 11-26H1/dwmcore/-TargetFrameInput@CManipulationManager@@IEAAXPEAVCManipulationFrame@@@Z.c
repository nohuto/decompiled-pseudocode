/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801136A4
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113030 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180114240 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1800AC724 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z @ 0x1801128DC (-TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z.c)
 *     ?ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180112950 (-ProcessHandledInteractionsForNonHandlers@CGestureTargetingManager@@SAJPEAUIManipulationContext@.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180113F58 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned __int64 v2; // r15
  unsigned int i; // esi
  unsigned __int64 v6; // r11
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  struct CManipulationContext *v9; // r14
  void *v10; // r8
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // r14
  unsigned int v14; // r8d
  int v15; // eax
  struct CManipulationContext *v16; // [rsp+60h] [rbp+8h] BYREF
  void *v17; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = *((_QWORD *)this + 35);
    v7 = 248LL * i;
    if ( v6 )
      v8 = *(_QWORD *)((char *)a2 + v7 + 448) / v6 * *((_QWORD *)this + 36)
         + *((_QWORD *)this + 36) * (*(_QWORD *)((char *)a2 + v7 + 448) % v6) / v6;
    else
      v8 = 1000LL * *(unsigned int *)((char *)a2 + v7 + 432);
    if ( v2 < v8 )
      v2 = v8;
    if ( (*((_BYTE *)a2 + 176) & 2) == 0 || *(_QWORD *)((char *)a2 + v7 + 392) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (char *)this + 160,
        &v16,
        (char *)a2 + v7 + 372);
      if ( (*(_DWORD *)((_BYTE *)a2 + v7 + 380) & 0x20000) != 0 && (*(_DWORD *)((_BYTE *)a2 + v7 + 380) & 4) == 0 )
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 *)&v16, (_QWORD *)this + 30);
      v9 = v16;
      v10 = 0LL;
      v17 = 0LL;
      if ( v16 )
      {
        CManipulationManager::TargetPointer(this, v16, a2, i, &v17);
        v10 = v17;
      }
      *(_QWORD *)((char *)a2 + v7 + 392) = v10;
      if ( v10 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 176) |= 1u;
        if ( (*((_BYTE *)a2 + 176) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, *(_DWORD *)((char *)a2 + v7 + 372), v10, i);
      }
      if ( v9 )
      {
        v11 = *(_QWORD *)v9;
        v16 = 0LL;
        (*(void (__fastcall **)(struct CManipulationContext *))(v11 + 8))(v9);
      }
    }
  }
  v12 = 0;
  if ( *((int *)this + 48) > 0 )
  {
    v13 = 0LL;
    do
    {
      v14 = 0;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 95) & 0x800000) != 0 )
      {
        v15 = *((_DWORD *)a2 + 110);
        if ( v15 == 571 )
        {
          v14 = 1;
        }
        else if ( v15 == 572 )
        {
          v14 = 2;
        }
      }
      CGestureTargetingManager::ProcessHandledInteractionsForNonHandlers(
        *(_QWORD *)(v13 + *((_QWORD *)this + 23)),
        v2,
        v14,
        (__int64)a2 + 184);
      ++v12;
      v13 += 8LL;
    }
    while ( v12 < *((_DWORD *)this + 48) );
  }
}
