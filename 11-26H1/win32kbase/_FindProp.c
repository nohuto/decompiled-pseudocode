/*
 * XREFs of _FindProp @ 0x140048A20
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400DEA38 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     RealInternalSetProp @ 0x1400DEB70 (RealInternalSetProp.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall FindProp(__int64 a1, int a2, int a3)
{
  __int16 v4; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  int i; // eax
  __int16 v10; // dx

  v4 = a2;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION() != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION() || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 && v4 )
  {
    v7 = v6 + 8;
    for ( i = *(_DWORD *)(v6 + 4); i; --i )
    {
      if ( *(_WORD *)(v7 + 8) == v4 )
      {
        v10 = *(_WORD *)(v7 + 10) & 1;
        if ( a3 )
        {
          if ( v10 )
            return v7;
        }
        else if ( !v10 )
        {
          return v7;
        }
      }
      v7 += 16LL;
    }
  }
  return 0LL;
}
