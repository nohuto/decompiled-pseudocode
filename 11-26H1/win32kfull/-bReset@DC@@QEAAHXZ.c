/*
 * XREFs of ?bReset@DC@@QEAAHXZ @ 0x1400A8378
 * Callers:
 *     GreBeginGdiRenderingToDxSurface @ 0x1400A6308 (GreBeginGdiRenderingToDxSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bReset(DC *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  __int64 v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = Gre::Base::Globals(this);
  v3 = *((_QWORD *)this + 21);
  v4 = v2;
  if ( v3 )
  {
    v7 = *((_QWORD *)this + 21);
    --*(_DWORD *)(v3 + 76);
    if ( !*(_DWORD *)(v7 + 76) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    *((_QWORD *)this + 21) = 0LL;
    DC::vReleaseRao(this, v4);
  }
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 20);
    --*(_DWORD *)(v5 + 76);
    if ( !*(_DWORD *)(v7 + 76) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
    *((_QWORD *)this + 20) = 0LL;
    DC::vReleaseRao(this, v4);
  }
  return 1LL;
}
