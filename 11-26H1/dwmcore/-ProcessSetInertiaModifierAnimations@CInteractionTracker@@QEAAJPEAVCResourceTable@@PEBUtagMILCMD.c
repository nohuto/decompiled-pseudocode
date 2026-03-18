/*
 * XREFs of ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x180270ED8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaModifierAnimations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 Resource; // rax
  unsigned __int64 v9; // rsi
  SIZE_T v10; // rax
  CExpressionManager *v11; // rcx

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x22u);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)this + *((unsigned int *)a3 + 2) + 59, Resource);
  operator delete(*((void **)this + *((unsigned int *)a3 + 2) + 63));
  v9 = (unsigned __int64)a5 >> 2;
  *((_QWORD *)this + *((unsigned int *)a3 + 2) + 63) = 0LL;
  *((_DWORD *)this + *((unsigned int *)a3 + 2) + 134) = v9;
  if ( v9 )
  {
    v10 = 4 * v9;
    if ( !is_mul_ok(v9, 4uLL) )
      v10 = -1LL;
    *((_QWORD *)this + *((unsigned int *)a3 + 2) + 63) = operator new[](v10);
    memcpy_0(*((void **)this + *((unsigned int *)a3 + 2) + 63), a4, 4 * v9);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker *))(*(_QWORD *)this + 272LL))(this) )
  {
    v11 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 816LL);
    *((_BYTE *)v11 + 418) = 1;
    CExpressionManager::Invalidate(v11);
  }
  return 0LL;
}
