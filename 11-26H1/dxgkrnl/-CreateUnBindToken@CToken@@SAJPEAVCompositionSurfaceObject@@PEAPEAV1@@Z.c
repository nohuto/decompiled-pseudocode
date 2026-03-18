/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1400A190C
 * Callers:
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1400A11D0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140019AF0 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(struct CompositionSurfaceObject *a1, struct CToken **a2)
{
  CToken *v4; // rax
  CToken *v5; // rax
  struct CToken *v6; // rbx
  int v7; // edi
  void (__fastcall **v8)(_QWORD, _QWORD); // rax

  *a2 = 0LL;
  v4 = (CToken *)operator new(0x68uLL, 0x6F744D54u, 256LL);
  if ( v4 && (v5 = CToken::CToken(v4, 0LL, a1), (v6 = v5) != 0LL) )
  {
    v7 = (*(__int64 (__fastcall **)(CToken *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = *(void (__fastcall ***)(_QWORD, _QWORD))v6;
    if ( v7 < 0 )
    {
      ((void (__fastcall *)(struct CToken *))v8[7])(v6);
      (**(void (__fastcall ***)(struct CToken *, __int64))v6)(v6, 1LL);
    }
    else
    {
      ((void (__fastcall *)(struct CToken *))v8[3])(v6);
      *a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
