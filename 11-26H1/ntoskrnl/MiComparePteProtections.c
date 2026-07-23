/*
 * XREFs of MiComparePteProtections @ 0x1402E8A6C
 * Callers:
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x140B51BA0 (MiSecureVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rdi
  _KPROCESS *Process; // r12
  __int64 v11; // rdx
  unsigned __int8 v12; // bp
  int v13; // ecx
  bool v14; // zf
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  v6 = 0;
  v9 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, a2, a3);
  while ( v9 <= a3 )
  {
    MiQueryAddressState(v9, a3, v12, a1, 0LL, (__int64)&v16);
    v13 = DWORD2(v16);
    if ( (_DWORD)v16 == 0x2000 )
    {
      if ( DWORD2(v16) )
        goto LABEL_5;
      v13 = (*(_DWORD *)(a1 + 48) >> 5) & 0x1F;
    }
    if ( !v13 )
      goto LABEL_12;
LABEL_5:
    if ( a5 )
    {
      if ( v13 != a4 )
        goto LABEL_12;
    }
    else if ( v13 == -1
           || (v13 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v14 = (v13 & 4) == 0) : (v14 = (v13 & 7) == 0), v14) )
    {
LABEL_12:
      v6 = -1073741755;
      break;
    }
    v9 = v17;
  }
  LOBYTE(v11) = v12;
  MiUnlockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink, v11);
  return v6;
}
