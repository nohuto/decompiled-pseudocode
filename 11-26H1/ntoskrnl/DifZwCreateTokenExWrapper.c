/*
 * XREFs of DifZwCreateTokenExWrapper @ 0x1406A2920
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwCreateTokenEx @ 0x140724DB0 (ZwCreateTokenEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwCreateTokenExWrapper(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  __int128 *APIThunkContextById; // rax
  __int64 v21; // rdx
  __int128 *v22; // rsi
  int v23; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v25; // r14
  __int128 *i; // rbx
  __int64 v27; // rdx
  BOOLEAN v28; // di
  _QWORD **v29; // rsi
  _QWORD *j; // rbx
  _QWORD v32[14]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v33; // [rsp+108h] [rbp-10h]
  __int64 v34; // [rsp+110h] [rbp-8h]
  unsigned int v35; // [rsp+118h] [rbp+0h]
  __int64 v36; // [rsp+120h] [rbp+8h]
  unsigned int Token; // [rsp+128h] [rbp+10h]
  void *retaddr; // [rsp+160h] [rbp+48h]

  memset_0(v32, 0, 0x98uLL);
  APIThunkContextById = DifGetAPIThunkContextById(900);
  v22 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v23 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v23 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v23 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v32[0] = ReturnAddressForWrappers;
LABEL_7:
  v25 = 0;
  v36 = a1;
  v32[13] = a5;
  v32[12] = a6;
  v32[11] = a7;
  v32[10] = a8;
  v32[9] = a9;
  v32[8] = a10;
  v32[7] = a11;
  v32[6] = a12;
  v32[5] = a13;
  v32[4] = a14;
  v32[3] = a15;
  v32[2] = a16;
  v32[1] = a17;
  v35 = a2;
  v34 = a3;
  v33 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v22 + 4); i != v22 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v32, v21);
    }
    if ( v25 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Token = ZwCreateTokenEx(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
  if ( v22 )
  {
    if ( (v28 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v28 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v29 = (_QWORD **)(v22 + 3);
      for ( j = *v29; j != v29; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v32, v27);
      }
      if ( v28 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Token;
}
