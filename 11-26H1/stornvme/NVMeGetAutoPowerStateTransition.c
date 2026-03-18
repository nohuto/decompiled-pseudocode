/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x140025668
 * Callers:
 *     NVMePowerInitialize @ 0x1400188C4 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  void *v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    result = NVMeAllocateDmaBufferEx(a1, 0, 1, 0x100u, (__int64 *)&v5, &v6);
    if ( v5 )
    {
      memset(v5, 0, 0x100uLL);
      v3 = v6;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = v5;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = v3;
      *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 256;
      v4 = *(_QWORD *)(a1 + 1104);
      *(_BYTE *)(v4 + 4096) = 10;
      *(_BYTE *)(v4 + 4136) = 12;
      *(_QWORD *)(v4 + 4120) = v3;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeGetAutoPowerStateTransitionCompletion;
      ProcessCommand(a1, a1 + 1016);
      WaitForCommandComplete(a1, a1 + 1016, 1);
      return NVMeFreeDmaBufferEx(a1, 0, 1, 256LL, (__int64 *)&v5, v3);
    }
  }
  return result;
}
