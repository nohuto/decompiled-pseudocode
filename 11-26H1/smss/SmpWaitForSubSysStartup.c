/*
 * XREFs of SmpWaitForSubSysStartup @ 0x140008630
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpCheckSubSysStatus @ 0x14000B500 (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
 */

_QWORD *__fastcall SmpWaitForSubSysStartup(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 v8; // r10
  __int64 v9; // rcx
  _QWORD **v10; // rdi
  _QWORD *result; // rax
  volatile signed __int32 *v12; // rbp
  _QWORD *i; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx

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
        v12 = (volatile signed __int32 *)(result - 9);
        if ( result == (_QWORD *)72 )
          return result;
        while ( 1 )
        {
          if ( (v6 & 1) == 0 || (v12[2] & 1) != 0 )
          {
            if ( !(unsigned int)SmpCheckSubSysStatus(v12) )
            {
              _InterlockedIncrement(v12);
              SmpWaitForStatusChange(v14, 0LL, a4);
              if ( (v12[2] & 4) != 0 )
              {
                SmpDereferenceKnownSubSys(v12);
                goto LABEL_5;
              }
              SmpDereferenceKnownSubSys(v12);
            }
            result = (_QWORD *)*((_QWORD *)v12 + 9);
            v15 = v12 + 18;
            if ( a3 )
            {
              _InterlockedOr(v12 + 2, 4u);
              v16 = *v15;
              if ( *(_QWORD **)(*v15 + 8LL) != v15
                || (v17 = (_QWORD *)*((_QWORD *)v12 + 10), (_QWORD *)*v17 != v15)
                || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = *(_QWORD **)(a3 + 8), *v18 != a3) )
              {
                __fastfail(3u);
              }
              *v15 = a3;
              *((_QWORD *)v12 + 10) = v18;
              *v18 = v15;
              *(_QWORD *)(a3 + 8) = v15;
            }
          }
          else
          {
            result = (_QWORD *)*result;
          }
          if ( result != v10 )
          {
            v12 = (volatile signed __int32 *)(result - 9);
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
