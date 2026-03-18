/*
 * XREFs of ??0KeyframeSequence@@QEAA@I@Z @ 0x18011011C
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEBUKeyframeData@@@Z @ 0x18010F11C (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??0Keyframe@KeyframeSequence@@QEAA@XZ @ 0x180110200 (--0Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

KeyframeSequence *__fastcall KeyframeSequence::KeyframeSequence(KeyframeSequence *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  bool v5; // cf
  SIZE_T v6; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  KeyframeSequence::Keyframe *v10; // rbx
  KeyframeSequence *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 132) &= ~0x10u;
  *((_DWORD *)this + 26) = a2;
  *((_DWORD *)this + 32) = 1065353216;
  if ( a2 < 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v3 = a2;
  v4 = 24LL * a2;
  if ( !is_mul_ok(a2, 0x18uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, v6);
  if ( !v8 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v8 = v3;
  v9 = v8 + 1;
  v10 = (KeyframeSequence::Keyframe *)(v8 + 1);
  do
  {
    KeyframeSequence::Keyframe::Keyframe(v10);
    v10 = (KeyframeSequence::Keyframe *)((char *)v10 + 24);
    --v3;
  }
  while ( v3 );
  result = this;
  *((_QWORD *)this + 12) = v9;
  return result;
}
