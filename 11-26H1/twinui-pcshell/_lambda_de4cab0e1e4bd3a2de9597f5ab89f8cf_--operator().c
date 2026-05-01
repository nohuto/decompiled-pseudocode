/*
 * XREFs of _lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator() @ 0x18043AE54
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___::Run @ 0x18043E1B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043BA24 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator()(int **a1)
{
  int v2; // edx
  int *v3; // rcx
  int v4; // eax
  unsigned int v5; // eax
  int *v6; // rcx
  int v7; // edx
  __int16 v8; // ax

  v2 = **a1;
  v3 = a1[1];
  v4 = v3[45];
  if ( v2 == 1 )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  v3[45] = v5;
  v6 = a1[1];
  v7 = **a1;
  if ( (v6[45] & 0x40) == 0 )
  {
    *((_WORD *)v6 + 126) &= ~0x40u;
    v8 = 0;
    if ( v7 == 1 )
      v8 = 64;
    *((_WORD *)v6 + 126) |= v8;
    goto LABEL_10;
  }
  if ( !v7 )
  {
    *((_WORD *)v6 + 126) &= ~0x80u;
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)a1[1]);
    *((_WORD *)a1[1] + 126) |= 0x80u;
LABEL_10:
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)a1[1]);
  }
  return 0LL;
}
