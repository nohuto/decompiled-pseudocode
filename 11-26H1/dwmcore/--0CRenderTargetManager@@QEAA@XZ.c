/*
 * XREFs of ??0CRenderTargetManager@@QEAA@XZ @ 0x180209EBC
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180110538 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRenderTargetManager *__fastcall CRenderTargetManager::CRenderTargetManager(CRenderTargetManager *this)
{
  struct CDrawingContext **v1; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = 0LL;
  v1 = (struct CDrawingContext **)((char *)this + 688);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_QWORD *)this + 4) = (char *)this + 48;
  *((_QWORD *)this + 5) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_QWORD *)this + 11) = (char *)this + 104;
  *((_QWORD *)this + 12) = (char *)this + 136;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = (char *)this + 208;
  *((_QWORD *)this + 24) = (char *)this + 208;
  *((_QWORD *)this + 25) = (char *)this + 688;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_DWORD *)this + 181) = 1065353216;
  *((_DWORD *)this + 182) = 1065353216;
  *((_DWORD *)this + 183) = 1065353216;
  *((_DWORD *)this + 180) = 0;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 188) = 0;
  *((_BYTE *)this + 756) = 0;
  v3 = *((_QWORD *)this + 86);
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CDrawingContext::Create(v1);
  return this;
}
