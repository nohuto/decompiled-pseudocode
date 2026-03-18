/*
 * XREFs of ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x1400199F0
 * Callers:
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x140019C80 (-CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CToken@@MEAAJXZ @ 0x1400198A0 (-Initialize@CToken@@MEAAJXZ.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140019D4C (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipContentToken::Initialize(CFlipContentToken *this, unsigned int a2, const struct tagRECT *a3)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v9; // eax

  v6 = CToken::Initialize(this);
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = 0;
    if ( v6 >= 0 )
    {
      do
      {
        if ( v7 >= a2 )
          break;
        v9 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(**((_QWORD **)this + 12) + 40LL))(
               *((_QWORD *)this + 12),
               &a3[v7++]);
        v6 = v9;
      }
      while ( v9 >= 0 );
    }
  }
  return (unsigned int)v6;
}
