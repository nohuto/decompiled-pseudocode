/*
 * XREFs of ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1801B0838
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1801B06E0 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801AF640 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1801AF8E0 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AFA28 (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x1801B124C (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnTouchSessionBegin(EdgyProcessorTarget *this, const struct TouchInfo *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  struct RegistryWatcher **v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 20) = -1;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 8) = 1;
  if ( EdgyImpl::HasCandidates((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL)) )
  {
    *((_DWORD *)this + 8) = 0;
    EdgyProcessorTarget::InteractionContext::Configure((EdgyProcessorTarget *)((char *)this + 168));
    v4 = EdgyProcessorTarget::ConfigureRecognizer(this);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    v7 = EdgeGestureMetrics::s_edgeGestureMetrics;
    if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
    {
      EdgeGestureMetrics::Initialize();
      v7 = EdgeGestureMetrics::s_edgeGestureMetrics;
    }
    *((_DWORD *)this + 10) = a2->TimeStamp + *((unsigned __int16 *)v7 + 9);
  }
  return 0LL;
}
