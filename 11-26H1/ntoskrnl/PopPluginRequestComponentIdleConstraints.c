/*
 * XREFs of PopPluginRequestComponentIdleConstraints @ 0x14052ED84
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 * Callees:
 *     PopDiagTraceFxComponentIdleConstraints @ 0x14060B4E0 (PopDiagTraceFxComponentIdleConstraints.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginRequestComponentIdleConstraints(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  char v5; // bl
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+2Ch] [rbp-1Ch]
  __int64 v15; // [rsp+30h] [rbp-18h]
  unsigned int v16; // [rsp+38h] [rbp-10h]
  int v17; // [rsp+3Ch] [rbp-Ch]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v14 = 0;
  v17 = 0;
  if ( v4 == qword_140E676E8 )
  {
    if ( v4 )
    {
      v10 = *(_QWORD *)(a1 + 72);
      v13 = a2;
      v12 = v10;
      v15 = a3;
      v16 = a4;
      v5 = guard_dispatch_icall_no_overrides(27LL, &v12);
      if ( v5 )
        PopDiagTraceFxComponentIdleConstraints(a1, a2, a3, a4);
    }
  }
  return v5;
}
