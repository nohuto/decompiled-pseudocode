/*
 * XREFs of PopPluginRequestDeviceIdleConstraints @ 0x1404DB680
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 * Callees:
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x14060B6B4 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginRequestDeviceIdleConstraints(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  char v4; // bl
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v12 = 0;
  if ( v3 == qword_140E676E8 )
  {
    if ( v3 )
    {
      v8 = *(_QWORD *)(a1 + 72);
      v10[1] = a2;
      v10[0] = v8;
      v11 = a3;
      v4 = guard_dispatch_icall_no_overrides(26LL, v10);
      if ( v4 )
        PopDiagTraceFxDeviceIdleConstraints(a1, a2, a3);
    }
  }
  return v4;
}
