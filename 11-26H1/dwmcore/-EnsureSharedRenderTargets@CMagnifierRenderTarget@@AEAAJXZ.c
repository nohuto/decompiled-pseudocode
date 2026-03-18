/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1802584CC
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180124940 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180258680 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 i; // r14
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v10; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v11; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0;
  v10 = 0;
  v11 = 0LL;
  if ( *((_DWORD *)this + 596) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 596); i = (unsigned int)(i + 1) )
    {
      v5 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * i + 300),
             *(struct _LUID *)((char *)this + 32 * (unsigned int)i + 2408),
             *((HMONITOR *)this + 4 * (unsigned int)i + 302),
             &v11);
      v10 = v5;
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377C58, 2u, v5, 0x158u, 0LL);
        v2 = v1;
        goto LABEL_15;
      }
      v6 = *((_DWORD *)this + 578);
      v7 = v6 + 1;
      if ( v6 + 1 < v6 )
      {
        v1 = -2147024362;
        v8 = 183;
        v2 = -2147024362;
        goto LABEL_12;
      }
      v2 = 0;
      if ( v7 > *((_DWORD *)this + 577) )
      {
        v2 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2288, 8, 1, &v11);
        v1 = v2;
        if ( v2 < 0 )
        {
          v8 = 194;
LABEL_12:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, v8, 0LL);
          v10 = v1;
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377C58, 2u, v2, 0x15Bu, 0LL);
          goto LABEL_15;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 286) + 8LL * v6) = v11;
        *((_DWORD *)this + 578) = v7;
      }
      v1 = v2;
      v11 = 0LL;
      v10 = v2;
    }
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 408);
  }
LABEL_15:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v11);
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v1, 7, &v10);
    return v10;
  }
  return v1;
}
