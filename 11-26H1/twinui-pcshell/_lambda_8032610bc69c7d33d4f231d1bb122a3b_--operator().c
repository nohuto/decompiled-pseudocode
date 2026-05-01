/*
 * XREFs of _lambda_8032610bc69c7d33d4f231d1bb122a3b_::operator() @ 0x180445CD0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8032610bc69c7d33d4f231d1bb122a3b___::Run @ 0x180447650 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8032610bc69c7d33d4f231d1bb122a3b___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_8032610bc69c7d33d4f231d1bb122a3b_::operator()(int **a1)
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
    UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)a1[1]);
    *((_WORD *)a1[1] + 126) |= 0x80u;
LABEL_10:
    UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)a1[1]);
  }
  return 0LL;
}
