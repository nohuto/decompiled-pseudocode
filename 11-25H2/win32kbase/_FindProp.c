/*
 * XREFs of _FindProp @ 0x14003F430
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14015B7A8 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall FindProp(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // bx
  __int64 v6; // rcx
  __int64 result; // rax
  int i; // ecx
  __int16 v9; // dx

  v4 = a2;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19760)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 && v4 )
  {
    result = v6 + 8;
    for ( i = *(_DWORD *)(v6 + 4); i; --i )
    {
      if ( *(_WORD *)(result + 8) == v4 )
      {
        v9 = *(_WORD *)(result + 10) & 1;
        if ( a3 )
        {
          if ( v9 )
            return result;
        }
        else if ( !v9 )
        {
          return result;
        }
      }
      result += 16LL;
    }
  }
  return 0LL;
}
