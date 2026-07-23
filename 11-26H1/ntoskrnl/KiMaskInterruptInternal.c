/*
 * XREFs of KiMaskInterruptInternal @ 0x1404308B0
 * Callers:
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 *     ?KiMaskInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405F3E70 (-KiMaskInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiMaskInterruptInternal(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v5; // rcx

  v2 = a2;
  v3 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2)];
  if ( !v3 )
    return 2147483685LL;
  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v3
       + 10) == KiChainedDispatch )
  {
    v5 = v3 + 2;
    while ( (v5[24] & 1) != 0 )
    {
      v5 = *(_DWORD **)v5;
      if ( v5 == v3 + 2 )
        return guard_dispatch_icall_no_overrides(v2, 0LL);
    }
  }
  else if ( (v3[26] & 1) != 0 )
  {
    return guard_dispatch_icall_no_overrides(v2, 0LL);
  }
  return 296LL;
}
