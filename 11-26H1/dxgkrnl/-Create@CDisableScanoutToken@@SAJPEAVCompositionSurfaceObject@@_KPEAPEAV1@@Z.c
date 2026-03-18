/*
 * XREFs of ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x14001885C
 * Callers:
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140029854 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     ??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x140019AF0 (--0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CDisableScanoutToken::Create(
        struct CompositionSurfaceObject *a1,
        unsigned __int64 a2,
        struct CDisableScanoutToken **a3)
{
  CToken *Pool2; // rax
  struct CDisableScanoutToken *v7; // rbx
  int v8; // edi
  __int64 v9; // rax

  *a3 = 0LL;
  Pool2 = (CToken *)ExAllocatePool2(256LL, 104LL, 1869892948LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    CToken::CToken(Pool2, a2, a1);
    *(_QWORD *)v7 = &CDisableScanoutToken::`vftable';
    v8 = ((__int64 (__fastcall *)(struct CDisableScanoutToken *))*(&CDisableScanoutToken::`vftable' + 1))(v7);
    v9 = *(_QWORD *)v7;
    if ( v8 < 0 )
    {
      (*(void (__fastcall **)(struct CDisableScanoutToken *))(v9 + 56))(v7);
      (**(void (__fastcall ***)(struct CDisableScanoutToken *, __int64))v7)(v7, 1LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CDisableScanoutToken *))(v9 + 24))(v7);
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
