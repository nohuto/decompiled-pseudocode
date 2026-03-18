/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x180054C88
 * Callers:
 *     ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x180054B14 (-Alloc@-$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z.c)
 *     ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x180054B80 (--_GCPolygonBuilder@@MEAAPEAXI@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CPolygonBuilder *a1)
{
  char *Value; // rbx
  CThreadContext *v3; // rax
  CThreadContext *v4; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v3 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v3 || (v4 = CThreadContext::CThreadContext(v3), (Value = (char *)v4) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v4);
  }
  return (struct CObjectCache *)(Value + 112);
}
