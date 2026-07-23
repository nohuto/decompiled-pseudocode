/*
 * XREFs of RtlQueryProcessLockInformation @ 0x180074010
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlIsAnyDebuggerPresent @ 0x180091250 (RtlIsAnyDebuggerPresent.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800BB000 (RtlpCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(__int64 a1)
{
  int v2; // edi
  _DWORD *DebugInfo; // rax
  _DWORD *v4; // rsi
  bool v5; // r13
  _QWORD *v6; // r15
  _UNKNOWN **v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // r8
  __int64 v12; // rax
  _UNKNOWN **v13; // [rsp+30h] [rbp-88h]

  v2 = 0;
  DebugInfo = (_DWORD *)RtlpCommitQueryDebugInfo(a1, 8LL);
  v4 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *DebugInfo = 0;
  v5 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v6 = RtlCriticalSectionList;
  v7 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v7 != &RtlCriticalSectionList )
  {
    v13 = v7 - 2;
    v8 = RtlpCommitQueryDebugInfo(a1, 48LL);
    if ( !v8 )
    {
      v2 = -1073741801;
      break;
    }
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_OWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)v8 = v13[1];
    *(_WORD *)(v8 + 8) = *(_WORD *)v13;
    *(_WORD *)(v8 + 10) = *((_WORD *)v13 + 1);
    if ( *(_WORD *)(v8 + 8) )
    {
      if ( *(_WORD *)(v8 + 8) == 1 )
      {
        v10 = v13[1];
        *(_DWORD *)(v8 + 28) = *(_DWORD *)(v10[11] + 36LL);
        *(_QWORD *)(v8 + 16) = v10[9];
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v10 + 17);
        *(_DWORD *)(v8 + 40) = *((_DWORD *)v10 + 12);
        *(_DWORD *)(v8 + 44) = *((_DWORD *)v10 + 16);
      }
      else if ( RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v9 = v13[1];
      *(_QWORD *)(v8 + 16) = v9[2];
      *(_DWORD *)(v8 + 24) = *((_DWORD *)v9 + 2);
      *(_DWORD *)(v8 + 36) = *((_DWORD *)v9 + 3);
      *(_DWORD *)(v8 + 28) = *((_DWORD *)v13 + 9);
      *(_DWORD *)(v8 + 32) = *((_DWORD *)v13 + 8);
    }
    ++*v4;
    v7 = (_UNKNOWN **)*v7;
    if ( v7 == v6 )
    {
      v2 = -1073741595;
      break;
    }
    if ( v5 )
      v6 = (_QWORD *)*v6;
    v5 = !v5;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v2 < 0 )
  {
    v12 = *(_QWORD *)(a1 + 72);
    if ( v4 == (_DWORD *)(v12 + a1 - 8) )
      *(_QWORD *)(a1 + 72) = v12 - 8;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = v4;
  }
  return (unsigned int)v2;
}
