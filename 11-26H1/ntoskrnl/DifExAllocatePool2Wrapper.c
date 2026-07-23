/*
 * XREFs of DifExAllocatePool2Wrapper @ 0x1404BAD20
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifExAllocatePool2Wrapper(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 APIThunkContextById; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // si
  _QWORD *i; // rbx
  __int64 v18; // rdx
  BOOLEAN v19; // di
  _QWORD *j; // rbx
  _QWORD v22[2]; // [rsp+58h] [rbp-41h] BYREF
  int v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  __int64 v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  unsigned int v29; // [rsp+90h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+37h]

  memset_0(v22, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(418LL);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_14;
  v14 = *(_DWORD *)(APIThunkContextById + 12);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_5;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v22[0] = ReturnAddressForWrappers;
LABEL_5:
  v16 = 0;
  v29 = a1;
  v25 = a5;
  v24 = a6;
  v23 = a7;
  v22[1] = a8;
  v28 = a2;
  v27 = a3;
  v26 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = *(_QWORD **)(v13 + 32); i != (_QWORD *)(v13 + 32); i = (_QWORD *)*i )
    {
      if ( i != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(v22, v12);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_14:
  v30 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v13 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = *(_QWORD **)(v13 + 48); j != (_QWORD *)(v13 + 48); j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v22, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v30;
}
