/*
 * XREFs of ?Alloc@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800D9814
 * Callers:
 *     ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D96C0 (-CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDra.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Alloc()
{
  _DWORD *Value; // rbx
  int v1; // edx
  _QWORD *v2; // rcx
  HANDLE ProcessHeap; // rax
  CThreadContext *v5; // rax
  CThreadContext *v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v5 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v5 || (v6 = CThreadContext::CThreadContext(v5), (Value = v6) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v6);
  }
  v1 = Value[89];
  v2 = 0LL;
  if ( v1 )
  {
    v2 = (_QWORD *)*((_QWORD *)Value + 45);
    *((_QWORD *)Value + 45) = *v2;
    Value[89] = v1 - 1;
  }
  if ( !v2 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapAlloc(ProcessHeap, 0, 0x38uLL);
  }
  return v2;
}
