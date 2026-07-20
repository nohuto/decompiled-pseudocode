/*
 * XREFs of SmpSearchKnownSubSysDatabase @ 0x140007A20
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x1400079F0 (SmpUnlockKnownSubSysList.c)
 */

volatile signed __int32 *__fastcall SmpSearchKnownSubSysDatabase(int a1, __int64 a2)
{
  __int64 *v3; // rcx
  volatile signed __int32 *v4; // rbx
  _QWORD **v6; // rdx
  _QWORD *i; // r8
  _QWORD *v9; // r10
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v3 = *(__int64 **)(a2 + 8);
  v4 = 0LL;
  LODWORD(v11) = 0;
  v10 = 0LL;
  if ( !v3 )
  {
    LODWORD(v10) = 1;
    v11 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
    RtlAcquireSRWLockShared(v11 + 16);
    v3 = &v10;
  }
  v6 = (_QWORD **)v3[1];
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = i - 9;
    if ( *((_DWORD *)i - 2) == a1 )
    {
      if ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == 1 && *((_DWORD *)v9 + 6) == *(_DWORD *)(a2 + 16) )
          v4 = (volatile signed __int32 *)(i - 9);
      }
      else if ( v9[6] == *(_QWORD *)(a2 + 16) )
      {
        v4 = (volatile signed __int32 *)(i - 9);
      }
      if ( v4 )
      {
        _InterlockedIncrement(v4);
        break;
      }
    }
  }
  if ( v3 == &v10 )
    SmpUnlockKnownSubSysList((__int64)v3);
  return v4;
}
