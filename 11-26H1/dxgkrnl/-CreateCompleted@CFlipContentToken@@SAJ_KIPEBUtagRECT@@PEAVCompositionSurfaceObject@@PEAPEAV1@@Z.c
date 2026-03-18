/*
 * XREFs of ?CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x140019C80
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001ACD0 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x1400199F0 (-Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z.c)
 *     ??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140019A74 (--0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipContentToken::CreateCompleted(
        unsigned __int64 a1,
        unsigned int a2,
        const struct tagRECT *a3,
        struct CompositionSurfaceObject *a4,
        struct CFlipContentToken **a5)
{
  CFlipContentToken *Pool2; // rax
  CFlipContentToken *v10; // rax
  struct CFlipContentToken *v11; // rbx
  int v12; // edi

  *a5 = 0LL;
  Pool2 = (CFlipContentToken *)ExAllocatePool2(256LL, 264LL, 1869892948LL);
  if ( Pool2 && (v10 = CFlipContentToken::CFlipContentToken(Pool2, a1, a4), (v11 = v10) != 0LL) )
  {
    v12 = CFlipContentToken::Initialize(v10, a2, a3);
    if ( v12 < 0 )
    {
      (**(void (__fastcall ***)(struct CFlipContentToken *, __int64))v11)(v11, 1LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CFlipContentToken *))(*(_QWORD *)v11 + 24LL))(v11);
      *a5 = v11;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
