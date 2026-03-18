/*
 * XREFs of NVMeSetHostBehaviorSupport @ 0x14002A6F4
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeSetHostBehaviorSupport(__int64 a1)
{
  __int64 result; // rax
  int i; // edx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  void *v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v6[0] = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = NVMeAllocateDmaBufferEx(a1, 1, 0, 0x200u, (__int64 *)&v7, v6);
    if ( v7 )
    {
      memset(v7, 0, 0x200uLL);
      *(_BYTE *)v7 = 0;
      *((_BYTE *)v7 + 1) = 1;
      *((_BYTE *)v7 + 2) = 0;
      LocalCommandReuse(a1, a1 + 1008);
      for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
        ++i;
      v4 = v6[0];
      *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
      v5 = *(_QWORD *)(a1 + 1104);
      *(_BYTE *)(v5 + 4096) = 9;
      *(_BYTE *)(v5 + 4136) = 22;
      *(_DWORD *)(v5 + 4100) = 0;
      *(_QWORD *)(v5 + 4120) = v4;
      *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeSetHostBehaviorSupportCompletion;
      ProcessCommand(a1, a1 + 1016);
      result = WaitForCommandComplete(a1, a1 + 1016, 1);
      if ( v7 )
        return NVMeFreeDmaBufferEx(a1, 1, 0, 512LL, (__int64 *)&v7, v4);
    }
  }
  return result;
}
