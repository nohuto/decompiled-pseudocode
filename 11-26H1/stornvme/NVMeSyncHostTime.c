/*
 * XREFs of NVMeSyncHostTime @ 0x14002ADCC
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     SetPrpFromBuffer @ 0x14000FAB0 (SetPrpFromBuffer.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall NVMeSyncHostTime(__int64 a1, char a2)
{
  int v2; // eax
  unsigned int v5; // esi
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  int i; // edx
  void *v12; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 Src; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a1 + 4344);
  v14 = 0LL;
  v12 = 0LL;
  Src = 0LL;
  v5 = 0;
  v6 = (v2 & 4) != 0 ? 32 : 8;
  if ( a2 )
  {
    v7 = a1 + 1408;
    if ( *(_BYTE *)(a1 + 1408) )
    {
      v5 = -1056964596;
LABEL_22:
      *(_BYTE *)(a1 + 1408) = 0;
      return v5;
    }
    if ( !*(_QWORD *)(a1 + 1536) || !*(_QWORD *)(a1 + 1544) )
    {
      v5 = -1056964605;
      goto LABEL_22;
    }
    LocalCommandReuse(a1, a1 + 1408);
    *(_QWORD *)(*(_QWORD *)(v7 + 96) + 4200LL) = v7;
    v8 = *(_QWORD *)(a1 + 1544);
    v12 = (void *)(*(_QWORD *)(a1 + 1536) + 0x2000LL);
    v9 = v8 + 0x2000;
  }
  else
  {
    NVMeAllocateDmaBufferEx(a1, 1, 0, v6, (__int64 *)&v12, &Src);
    if ( !v12 )
      return (unsigned int)-1056964605;
    v7 = a1 + 1008;
    LocalCommandReuse(a1, a1 + 1008);
    v9 = Src;
  }
  StorPortQuerySystemTime(&v14);
  Src = (v14 / 0x2710 - 11644473600000LL) & 0xFFFFFFFFFFFFLL;
  memmove(v12, &Src, v6);
  if ( !(unsigned int)SetPrpFromBuffer(a1, *(_QWORD *)(v7 + 96), v9, v6) )
  {
    v5 = -1056964607;
    if ( a2 )
      goto LABEL_22;
    goto LABEL_18;
  }
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v7 + 96) + 4225LL) |= i )
    ++i;
  *(_BYTE *)(*(_QWORD *)(v7 + 96) + 4225LL) |= 4u;
  SrbAssignQueueId(a1, v7 + 8);
  *(_DWORD *)(*(_QWORD *)(v7 + 96) + 4100LL) = -1;
  *(_BYTE *)(*(_QWORD *)(v7 + 96) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(v7 + 96) + 4136LL) = 14;
  if ( a2 )
  {
    v5 = StorPortExtendedFunction(49LL, a1, 0LL, 0LL);
    if ( v5 )
      goto LABEL_22;
  }
  ProcessCommand(a1, v7 + 8);
  if ( !a2 )
  {
    WaitForCommandComplete(a1, v7 + 8, 1);
    v5 = *(_BYTE *)(v7 + 11) != 1 ? 0xC1000001 : 0;
LABEL_18:
    if ( v12 )
      NVMeFreeDmaBufferEx(a1, 1, 0, v6, (__int64 *)&v12, v9);
  }
  return v5;
}
