/*
 * XREFs of RtlpHpLfhSubsegmentReformatCheck @ 0x180063920
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x180062764 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x180062990 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x180063150 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatCheck(__int64 a1, unsigned __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 *v4; // rbx
  unsigned int v6; // edi
  int v9; // eax
  int v10; // edx
  __int64 *i; // r8
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // r14
  __int16 *v17; // rbx
  __int16 *v18; // rbp
  __int16 *v19; // r8
  __int16 v20; // ax
  int v21; // edx
  __int16 v22; // cx
  _WORD v23[64]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = (__int64 *)(a2 + 64);
  v6 = *(unsigned __int16 *)(a2 + 34) - *(unsigned __int16 *)(a2 + 32);
  if ( *(_BYTE *)(a2 + 39) == 1 )
  {
    v9 = *(unsigned __int8 *)(a2 + 24);
    v10 = 0;
    for ( i = &v4[v9 - 8]; v4 < i; v10 += __popcnt((unsigned int)v12) )
      v12 = *v4++;
    if ( v10 - (-*(unsigned __int16 *)(a2 + 34) & 0x1Fu) < v6 )
      return 0LL;
    *a3 = 0;
    result = 1LL;
    *a4 = 0;
  }
  else
  {
    memset_thunk_772440563353939046(v23, 0, 0x80uLL);
    if ( (unsigned int)RtlpHpLfhSubsegmentConstructCommitState(v14, a2, v4, v23) < v6 )
      return 0LL;
    v15 = 0;
    LODWORD(v16) = 0;
    v17 = (__int16 *)(a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
    v18 = &v17[*(unsigned __int8 *)(a2 + 39)];
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 56));
    if ( v17 < v18 )
    {
      v19 = v23;
      do
      {
        v20 = *v17;
        v21 = v15 + 1;
        v22 = *v19;
        if ( *v17 )
          v21 = v15;
        if ( v20 != v22 )
        {
          v15 = v21;
          if ( v22 || v20 != -1 )
            break;
          if ( !(_DWORD)v16 )
            v16 = v19 - v23;
        }
        ++v17;
        ++v19;
        v15 = v21;
      }
      while ( v17 < v18 );
    }
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 56));
    if ( v17 < v18 )
    {
      return 0LL;
    }
    else
    {
      *a3 = v16;
      result = 1LL;
      *a4 = v15;
    }
  }
  return result;
}
