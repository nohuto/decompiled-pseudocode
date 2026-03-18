/*
 * XREFs of RealGetProp @ 0x140048AE0
 * Callers:
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE160 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall RealGetProp(__int64 a1, int a2, int a3)
{
  __int16 v4; // si
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 *v9; // rbx
  __int64 v10; // rax
  _WORD *v11; // rcx
  int i; // eax
  __int16 v14; // dx

  v4 = a2;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION() != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  v9 = (__int64 *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 19792) && (unsigned int)GET_USERCRIT_DISPOSITION() != 2 )
  {
    if ( !(unsigned int)GET_USERCRIT_DISPOSITION() )
    {
LABEL_12:
      __int2c();
      goto LABEL_13;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8) )
    {
      v9 = (__int64 *)(a1 + 24);
      goto LABEL_12;
    }
  }
LABEL_13:
  v10 = *v9;
  if ( *v9 && v4 )
  {
    v11 = (_WORD *)(v10 + 8);
    for ( i = *(_DWORD *)(v10 + 4); i; --i )
    {
      if ( v11[4] == v4 )
      {
        v14 = v11[5] & 1;
        if ( a3 )
        {
          if ( v14 )
            return *(_QWORD *)v11;
        }
        else if ( !v14 )
        {
          return *(_QWORD *)v11;
        }
      }
      v11 += 8;
    }
  }
  return 0LL;
}
