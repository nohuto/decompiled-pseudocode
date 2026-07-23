/*
 * XREFs of KseDsCallbackHookIrpPowerFunction @ 0x1406010F0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDevicePowerIrp @ 0x14060185C (KsepDsEventDevicePowerIrp.c)
 *     KsepDsEventSystemPowerIrp @ 0x1406020D4 (KsepDsEventSystemPowerIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpPowerFunction(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  int v4; // ebx
  int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r15d

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  LOBYTE(v4) = 0;
  v7 = *(unsigned __int8 *)(v2 + 1);
  if ( v7 == 3 || v7 == 2 )
  {
    v3 = *(_DWORD *)(v2 + 16);
    v4 = *(_DWORD *)(v2 + 24);
    if ( v3 == 1 )
      guard_dispatch_icall_no_overrides(a1, a2);
  }
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
  v8 = guard_dispatch_icall_no_overrides(a1, a2);
  v9 = v8;
  if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        KsepDsEventDevicePowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v7, 1, v4, v8);
    }
    else
    {
      KsepDsEventSystemPowerIrp(*(_QWORD *)(a1 + 8), a1, a2, v7, 0, v4, v8);
    }
  }
  return v9;
}
