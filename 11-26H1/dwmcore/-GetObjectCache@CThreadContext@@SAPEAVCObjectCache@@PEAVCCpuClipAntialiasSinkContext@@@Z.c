/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z @ 0x180188090
 * Callers:
 *     ??_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z @ 0x180187EC0 (--_GCCpuClipAntialiasSinkContext@@EEAAPEAXI@Z.c)
 *     ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z @ 0x180187FB8 (-Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CCpuClipAntialiasSinkContext *a1)
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
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v4);
  }
  return (struct CObjectCache *)(Value + 176);
}
