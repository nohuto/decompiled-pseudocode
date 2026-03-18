/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180125AD0
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@MEAAJXZ @ 0x1801257A0 (-Present@CIndirectSwapchainRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180125BF0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18020B854 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebx
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rsi
  int v7; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  v9 = 0;
  if ( *((_QWORD *)this + 308) )
  {
    v4 = *((unsigned int *)this + 610);
    if ( (_DWORD)v4 )
      v5 = *((_QWORD *)this + 302);
    else
      v5 = 0LL;
    v6 = (char *)this + 2416;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 307) + 64LL))(
           *((_QWORD *)this + 307),
           v4,
           v5);
    v9 = v7;
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1A4u, 0LL);
    }
    else
    {
      *(_WORD *)((char *)this + 2449) = 0;
      *((_BYTE *)this + 2451) = 0;
      *((_DWORD *)v6 + 6) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)v6, 1u);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 308) + 16LL))(*((_QWORD *)this + 308));
      *((_QWORD *)this + 308) = 0LL;
    }
    v2 = v1;
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v1, 0, &v9);
    v1 = v9;
    if ( v9 == -2005270490 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
      return 0;
    }
    else if ( v9 == -2003304307 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
    }
  }
  return v1;
}
