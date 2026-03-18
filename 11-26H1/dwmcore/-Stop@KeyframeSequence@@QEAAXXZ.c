/*
 * XREFs of ?Stop@KeyframeSequence@@QEAAXXZ @ 0x18010C3D0
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall KeyframeSequence::Stop(KeyframeSequence *this)
{
  __int64 v1; // r9
  __int64 v2; // r10
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    v2 = *((_QWORD *)this + 12);
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 24 * v1 + 8) + 20LL) != 1
        && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v2 + 24 * v1 + 8) + 20LL) - 2) >= 2 )
      {
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 26) );
  }
  v3 = *((_DWORD *)this + 18);
  *((_BYTE *)this + 132) &= 0xFCu;
  *((_DWORD *)this + 21) = v3;
}
