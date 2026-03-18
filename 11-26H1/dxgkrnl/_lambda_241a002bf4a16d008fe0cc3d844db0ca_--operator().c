/*
 * XREFs of _lambda_241a002bf4a16d008fe0cc3d844db0ca_::operator() @ 0x14025F918
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025FB54 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_241a002bf4a16d008fe0cc3d844db0ca_::operator()(__int64 a1)
{
  int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int *v5; // rax
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax

  if ( **(_DWORD **)a1 >= **(_DWORD **)(a1 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1770;
  }
  v2 = **(_DWORD **)(a1 + 8);
  v3 = (unsigned int)(v2 - 1);
  v4 = (unsigned int)(v2 - 2);
  v5 = *(unsigned int **)a1;
  v6 = *(_DWORD *)(**(_QWORD **)(a1 + 16) + 4 * v3);
  v7 = **(_DWORD **)a1;
  if ( (unsigned int)v4 >= v7 )
  {
    v8 = (unsigned int)(v4 + 1);
    do
    {
      v9 = **(_QWORD **)(a1 + 16);
      v10 = *(_DWORD *)(v9 + 4 * v4);
      v4 = (unsigned int)(v4 - 1);
      *(_DWORD *)(v9 + 4 * v8) = v10;
      v8 = (unsigned int)(v8 - 1);
      v5 = *(unsigned int **)a1;
      v7 = **(_DWORD **)a1;
    }
    while ( (unsigned int)v4 >= v7 );
  }
  *v5 = v7 + 1;
  return v6;
}
