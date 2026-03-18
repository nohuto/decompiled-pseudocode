/*
 * XREFs of ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IV?$UserModePointer@PEAUHIMC__@@@@@Z @ 0x1402A103C
 * Callers:
 *     NtUserBuildHimcList @ 0x1402AFDB0 (NtUserBuildHimcList.c)
 * Callees:
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall _BuildHimcList(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r14
  __int64 j; // r14
  _QWORD *k; // r15
  _QWORD *i; // r14

  v5 = 0;
  if ( a1 )
  {
    for ( i = *(_QWORD **)(a1 + 824); i && v5 < a2; i = (_QWORD *)i[7] )
      RtlWriteULong64ToUser(a3 + 8LL * (int)v5++, *i);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    for ( j = *(_QWORD *)(v7 + 328); j; j = *(_QWORD *)(j + 696) )
    {
      for ( k = *(_QWORD **)(j + 824); k && v5 < a2; k = (_QWORD *)k[7] )
        RtlWriteULong64ToUser(a3 + 8LL * (int)v5++, *k);
    }
  }
  return v5;
}
