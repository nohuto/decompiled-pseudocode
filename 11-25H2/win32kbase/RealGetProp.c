/*
 * XREFs of RealGetProp @ 0x14003F4E0
 * Callers:
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14009D0E0 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall RealGetProp(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _WORD *v9; // rax
  int i; // ecx
  __int16 v12; // dx

  v4 = a2;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v7, v6) + 19760)
      && !IS_USERCRIT_OWNED_EXCLUSIVE()
      && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      if ( v4 )
      {
        v9 = (_WORD *)(v8 + 8);
        for ( i = *(_DWORD *)(v8 + 4); i; --i )
        {
          if ( v9[4] == v4 )
          {
            v12 = v9[5] & 1;
            if ( a3 )
            {
              if ( v12 )
                return *(_QWORD *)v9;
            }
            else if ( !v12 )
            {
              return *(_QWORD *)v9;
            }
          }
          v9 += 8;
        }
      }
    }
  }
  return 0LL;
}
