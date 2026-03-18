/*
 * XREFs of ??2CRoundedRectangleShape@@SAPEAX_K@Z @ 0x1800DE5E4
 * Callers:
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800DE4E0 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CRoundedRectangleShape::operator new()
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
  v1 = Value[17];
  v2 = 0LL;
  if ( v1 )
  {
    v2 = (_QWORD *)*((_QWORD *)Value + 9);
    *((_QWORD *)Value + 9) = *v2;
    Value[17] = v1 - 1;
  }
  if ( !v2 )
  {
    ProcessHeap = GetProcessHeap();
    v2 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( !v2 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  return v2;
}
