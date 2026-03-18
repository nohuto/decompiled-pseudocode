/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x14000DE30
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeControllerIdentifyWorkItem @ 0x14001D390 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetCommandEffectsLog(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  void **v6; // r14
  void *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 1560);
  v4 = *(_QWORD *)(a1 + 1104);
  v11 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) && (*(_BYTE *)(result + 261) & 2) != 0 )
  {
    v6 = (void **)(a1 + 3712);
    v7 = *(void **)(a1 + 3712);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 3944);
      if ( !v8 )
        return result;
    }
    else
    {
      result = NVMeAllocateDmaBufferEx(a1, 0, 1, 4096, (__int64)v6, (__int64)&v11);
      v7 = *v6;
      if ( !*v6 )
        return result;
      v8 = v11;
      *(_QWORD *)(a1 + 3944) = v11;
    }
    memset(v7, 0, 0x1000uLL);
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(v4 + 4225) |= 3u;
    *(_WORD *)(v4 + 4212) = 0;
    v9 = *(_QWORD *)(a1 + 1560);
    *(_BYTE *)(v4 + 4136) = 5;
    v10 = *(_DWORD *)(v4 + 4136) & 0xF3FF7FFF;
    *(_BYTE *)(v4 + 4096) = 2;
    *(_DWORD *)(v4 + 4100) = -1;
    *(_DWORD *)(v4 + 4136) = v10 | 0x3FF0000;
    if ( (v8 & 0xFFF) == 0 )
    {
      *(_QWORD *)(v4 + 4120) = v8;
      *(_QWORD *)(v4 + 4128) = 0LL;
    }
    *(_WORD *)(v4 + 4142) = 0;
    if ( (*(_BYTE *)(v9 + 261) & 4) != 0 )
    {
      *(_DWORD *)(v4 + 4138) = 1023;
      *(_QWORD *)(v4 + 4144) = 0LL;
    }
    *(_BYTE *)(v4 + 4225) |= 4u;
    *(_QWORD *)(v4 + 4160) = *v6;
    *(_QWORD *)(v4 + 4168) = v8;
    *(_DWORD *)(v4 + 4208) = 4096;
    ProcessCommand(a1, a1 + 1016);
    return WaitForCommandComplete(a1, a1 + 1016, a2);
  }
  return result;
}
