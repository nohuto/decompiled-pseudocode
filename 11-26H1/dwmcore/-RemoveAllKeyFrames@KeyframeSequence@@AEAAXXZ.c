/*
 * XREFs of ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18010FC9C
 * Callers:
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x18010F078 (--1KeyframeSequence@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18001E240 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_EKeyframe@KeyframeSequence@@QEAAPEAXI@Z @ 0x18010FBF8 (--_EKeyframe@KeyframeSequence@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeSequence::RemoveAllKeyFrames(KeyframeSequence *this)
{
  __int64 v1; // rsi
  KeyframeSequence::Keyframe **i; // rdi
  KeyframeSequence::Keyframe *v4; // r14
  __int64 v5; // rcx

  v1 = 0LL;
  for ( i = (KeyframeSequence::Keyframe **)((char *)this + 96);
        (unsigned int)v1 < *((_DWORD *)this + 26);
        v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *i;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)*i + 3 * v1 + 1);
    v5 = *((_QWORD *)v4 + 3 * v1 + 2);
    if ( v5 )
    {
      *((_QWORD *)v4 + 3 * v1 + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( *i )
    KeyframeSequence::Keyframe::`vector deleting destructor'(*i);
  *((_BYTE *)this + 132) &= ~4u;
  *i = 0LL;
  *((_DWORD *)this + 26) = 0;
}
