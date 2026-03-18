/*
 * XREFs of DifZwCreateTokenWrapper @ 0x1406A2BE0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwCreateToken @ 0x140724D90 (ZwCreateToken.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwCreateTokenWrapper(
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
        __int64 a13)
{
  __int128 *APIThunkContextById; // rax
  __int64 v17; // rdx
  __int128 *v18; // rsi
  int v19; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v21; // r14
  __int128 *i; // rbx
  __int64 v23; // rdx
  BOOLEAN v24; // di
  _QWORD **v25; // rsi
  _QWORD *j; // rbx
  _QWORD v28[10]; // [rsp+78h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp-29h]
  __int64 v30; // [rsp+D0h] [rbp-21h]
  unsigned int v31; // [rsp+D8h] [rbp-19h]
  __int64 v32; // [rsp+E0h] [rbp-11h]
  unsigned int Token; // [rsp+E8h] [rbp-9h]
  void *retaddr; // [rsp+120h] [rbp+2Fh]

  memset_0(v28, 0, 0x78uLL);
  APIThunkContextById = DifGetAPIThunkContextById(896);
  v18 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v28[0] = ReturnAddressForWrappers;
LABEL_7:
  v21 = 0;
  v32 = a1;
  v28[9] = a5;
  v28[8] = a6;
  v28[7] = a7;
  v28[6] = a8;
  v28[5] = a9;
  v28[4] = a10;
  v28[3] = a11;
  v28[2] = a12;
  v28[1] = a13;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v18 + 4); i != v18 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v28, v17);
    }
    if ( v21 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  Token = ZwCreateToken(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( v18 )
  {
    if ( (v24 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v24 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v25 = (_QWORD **)(v18 + 3);
      for ( j = *v25; j != v25; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v28, v23);
      }
      if ( v24 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return Token;
}
