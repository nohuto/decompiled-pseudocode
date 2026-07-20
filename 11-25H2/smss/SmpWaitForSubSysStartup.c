/*
 * XREFs of SmpWaitForSubSysStartup @ 0x140008D90
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpCheckSubSysStatus @ 0x14000B880 (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 */

_QWORD *__fastcall SmpWaitForSubSysStartup(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 v8; // r10
  __int64 v9; // rcx
  _QWORD **v10; // rdi
  _QWORD *result; // rax
  _QWORD *v12; // rbp
  _QWORD *i; // rbx
  volatile signed __int32 *v14; // r12
  __int64 v15; // rcx
  _QWORD *v16; // rbp
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx

  v6 = a2;
  v8 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
  if ( a4 )
  {
    *(_QWORD *)(a4 + 8) = v8;
    *(_DWORD *)a4 = (a2 & 2) != 0;
  }
  v9 = v8 + 16;
  if ( (a2 & 2) != 0 )
  {
    result = (_QWORD *)RtlAcquireSRWLockShared(v9);
    for ( i = *(_QWORD **)(a4 + 8);
          (_QWORD *)*i == i;
          result = (_QWORD *)RtlSleepConditionVariableSRW(&SmpSubSysReadyCondition, i + 2, 0LL, 1LL) )
    {
      ;
    }
  }
  else
  {
    RtlAcquireSRWLockExclusive(v9, a2, a3);
    v10 = *(_QWORD ***)(a4 + 8);
LABEL_5:
    for ( result = *v10; result != v10; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result - 2) == a1 )
      {
        v12 = result - 9;
        if ( result == (_QWORD *)72 )
          return result;
        while ( 1 )
        {
          v14 = (volatile signed __int32 *)(v12 + 1);
          if ( (v6 & 1) == 0 || (*(_BYTE *)v14 & 1) != 0 )
          {
            if ( !(unsigned int)SmpCheckSubSysStatus(v12) )
            {
              _InterlockedIncrement((volatile signed __int32 *)v12);
              SmpWaitForStatusChange(v15, 0LL, a4);
              if ( (*(_BYTE *)v14 & 4) != 0 )
              {
                SmpDereferenceKnownSubSys(v12);
                goto LABEL_5;
              }
              SmpDereferenceKnownSubSys(v12);
            }
            result = (_QWORD *)v12[9];
            v16 = v12 + 9;
            if ( a3 )
            {
              _InterlockedOr(v14, 4u);
              v17 = *v16;
              if ( *(_QWORD **)(*v16 + 8LL) != v16
                || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16)
                || (*v18 = v17, *(_QWORD *)(v17 + 8) = v18, v19 = *(_QWORD **)(a3 + 8), *v19 != a3) )
              {
                __fastfail(3u);
              }
              *v16 = a3;
              v16[1] = v19;
              *v19 = v16;
              *(_QWORD *)(a3 + 8) = v16;
            }
          }
          else
          {
            result = (_QWORD *)*result;
          }
          if ( result != v10 )
          {
            v12 = result - 9;
            if ( *((_DWORD *)result - 2) == a1 )
              continue;
          }
          return result;
        }
      }
    }
  }
  return result;
}
