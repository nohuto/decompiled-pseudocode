/*
 * XREFs of MiMirrorReduceBlackWrites @ 0x140C09850
 * Callers:
 *     MiMirrorBlackPhase @ 0x140C07048 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiMirrorNodeFreeZeroPages @ 0x140BEF4D4 (MiMirrorNodeFreeZeroPages.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 */

__int64 __fastcall MiMirrorReduceBlackWrites(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v4; // r15d
  __int64 v5; // r12
  unsigned int v6; // ebp
  unsigned __int64 v8; // r8
  ULONG_PTR v9; // rdi
  _QWORD *v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  int v14; // [rsp+58h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  v5 = a1;
  v14 = v4;
  if ( (v2 & 8) == 0 && (v2 & 0x400) == 0 )
  {
    v6 = 0;
    if ( v4 )
    {
      v8 = 0xFFFFDE0000000000uLL;
      do
      {
        v9 = *(_QWORD *)(88LL * v6 + v5 + 3648);
        if ( v9 != 0x3FFFFFFFFFLL )
        {
          do
          {
            v10 = (_QWORD *)(v8 + 48 * v9);
            if ( MiIsDecayPfn(v9) )
            {
              v11 = v10[2];
              if ( qword_140E2D8C0 && (v11 & 0x10) == 0 )
                v11 &= qword_140E2D8C8;
              v12 = (v11 >> 12) & 0xFFFFFFFFFFLL;
              if ( v12 != v9 )
              {
                do
                {
                  MiMirrorOmitPagesFromCopy(a2, 0LL, v12, 1LL);
                  v12 = *(_QWORD *)(48 * v12 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
                }
                while ( v12 != v9 );
                v8 = 0xFFFFDE0000000000uLL;
              }
            }
            else
            {
              MiMirrorOmitPagesFromCopy(a2, 0LL, v9, 1LL);
              v8 = 0xFFFFDE0000000000uLL;
            }
            v9 = *v10 & 0xFFFFFFFFFFLL;
          }
          while ( v9 != 0x3FFFFFFFFFLL );
          v4 = v14;
          v5 = a1;
        }
        ++v6;
      }
      while ( v6 != v4 );
    }
  }
  return MiMirrorNodeFreeZeroPages(a2, v5, 2);
}
