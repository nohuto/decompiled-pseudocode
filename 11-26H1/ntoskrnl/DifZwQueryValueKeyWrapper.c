/*
 * XREFs of DifZwQueryValueKeyWrapper @ 0x1404BA710
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwQueryValueKeyWrapper(
        void *a1,
        UNICODE_STRING *a2,
        KEY_VALUE_INFORMATION_CLASS a3,
        void *a4,
        ULONG Length,
        ULONG *ResultLength)
{
  __int64 APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  _QWORD *i; // rbx
  __int64 v16; // rdx
  BOOLEAN v17; // di
  _QWORD *j; // rbx
  _QWORD v20[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG v21; // [rsp+40h] [rbp-30h]
  void *v22; // [rsp+48h] [rbp-28h]
  KEY_VALUE_INFORMATION_CLASS v23; // [rsp+50h] [rbp-20h]
  UNICODE_STRING *v24; // [rsp+58h] [rbp-18h]
  void *v25; // [rsp+60h] [rbp-10h]
  unsigned int ValueKey; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v20, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(34LL);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *(_DWORD *)(APIThunkContextById + 12);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v20[0] = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v25 = a1;
  v21 = Length;
  v20[1] = ResultLength;
  v24 = a2;
  v23 = a3;
  v22 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = *(_QWORD **)(v11 + 32); i != (_QWORD *)(v11 + 32); i = (_QWORD *)*i )
    {
      if ( i != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(v20, v10);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  ValueKey = ZwQueryValueKey(a1, a2, a3, a4, Length, ResultLength);
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = *(_QWORD **)(v11 + 48); j != (_QWORD *)(v11 + 48); j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v20, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return ValueKey;
}
