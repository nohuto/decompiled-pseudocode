/*
 * XREFs of NVMeGetSupportedLogPagesLog @ 0x1400060D0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeControllerIdentifyWorkItem @ 0x14001D390 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetSupportedLogPagesLog(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  void **v6; // r14
  void *v7; // rcx
  __int64 v8; // rbx
  int v9; // r8d
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 1560);
  v4 = *(_QWORD *)(a1 + 1104);
  v10 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) && (*(_BYTE *)(result + 261) & 0x20) != 0 )
  {
    v6 = (void **)(a1 + 4240);
    v7 = *(void **)(a1 + 4240);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 4248);
      if ( !v8 )
        return result;
    }
    else
    {
      result = NVMeAllocateDmaBufferEx(a1, 0, 1, 1024, (__int64)v6, (__int64)&v10);
      v7 = *v6;
      if ( !*v6 )
        return result;
      v8 = v10;
      *(_QWORD *)(a1 + 4248) = v10;
    }
    memset(v7, 0, 0x400uLL);
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(v4 + 4225) |= 3u;
    *(_WORD *)(v4 + 4212) = 0;
    BuildGetLogPageCommand(a1, v4, 0, 1024, v8, -1, 0LL, 0);
    *(_BYTE *)(v4 + 4225) |= 4u;
    *(_QWORD *)(v4 + 4160) = *v6;
    *(_QWORD *)(v4 + 4168) = v8;
    *(_DWORD *)(v4 + 4208) = 1024;
    ProcessCommand(a1, a1 + 1016);
    result = WaitForCommandComplete(a1, a1 + 1016, a2);
    if ( *(_BYTE *)(a1 + 1019) != 1 )
    {
      LOBYTE(v9) = 1;
      result = NVMeFreeDmaBufferEx(a1, 0, v9, 1024, (__int64)v6, *(_QWORD *)(a1 + 4248));
      *v6 = 0LL;
      *(_QWORD *)(a1 + 4248) = 0LL;
    }
  }
  return result;
}
