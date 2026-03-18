/*
 * XREFs of NVMeSetPowerState @ 0x140008720
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMePowerSetPerfState @ 0x140018F58 (NVMePowerSetPerfState.c)
 * Callees:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1400088C0 (WaitForCommandCompleteWithCustomTimeout.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8

  v3 = a2;
  v4 = 1000000;
  if ( *(_BYTE *)(a1 + 1008) )
    *(_DWORD *)(a1 + 4064) |= 0x20000u;
  *(_BYTE *)(a1 + 1019) = 0;
  memset(*(void **)(a1 + 1104), 0, 0x1088uLL);
  v5 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
  *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(a1 + 1008) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v6 = *(_QWORD *)(a1 + 1104);
  v7 = *(_DWORD *)(v6 + 4140);
  *(_BYTE *)(v6 + 4096) = 9;
  *(_BYTE *)(v6 + 4136) = 2;
  *(_DWORD *)(v6 + 4140) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)v3) & 0x1F;
  ProcessCommand(a1, a1 + 1016);
  v8 = *(unsigned __int8 *)(a1 + 1604);
  v9 = *(_QWORD *)(a1 + 1560);
  if ( (unsigned __int8)v8 > 0x1Fu )
  {
    v10 = 0LL;
  }
  else if ( (unsigned __int8)v8 > *(_BYTE *)(v9 + 263) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = v9 + 32 * (v8 + 64);
  }
  v11 = *(_QWORD *)(a1 + 1560);
  if ( (unsigned __int8)v3 <= 0x1Fu && (unsigned __int8)v3 <= *(_BYTE *)(v9 + 263) )
    v5 = v9 + 32 * (v3 + 64);
  if ( v10 && v5 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v10 + 8) + *(_DWORD *)(v5 + 4));
    if ( (unsigned int)v11 > 0xF4240 )
      v11 = 1000000LL;
    v4 = v11;
  }
  LOBYTE(v11) = 1;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 1016, v11, v4);
}
