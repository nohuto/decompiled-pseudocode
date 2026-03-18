/*
 * XREFs of NVMeGetCloudSSDErrorRecoveryLog @ 0x140025814
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetCloudSSDErrorRecoveryLog(__int64 a1, char a2)
{
  __int64 v2; // rsi
  void *v4; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rax
  void *v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 1104);
  v4 = *(void **)(a1 + 3936);
  v11 = 0LL;
  v10 = v4;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_QWORD *)(a1 + 3936) = 0LL;
    if ( v4 )
    {
      v7 = *(_QWORD *)(a1 + 3952);
      if ( !v7 )
        return result;
    }
    else
    {
      result = NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, (__int64 *)&v10, &v11);
      v4 = v10;
      if ( !v10 )
        return result;
      v7 = v11;
      *(_QWORD *)(a1 + 3952) = v11;
    }
    memset(v4, 0, 0x200uLL);
    LocalCommandReuse(a1, a1 + 1008);
    *(_BYTE *)(v2 + 4225) |= 3u;
    LOBYTE(v8) = -63;
    *(_WORD *)(v2 + 4212) = 0;
    BuildGetLogPageCommand(a1, v2, v8, 0x200u, v7, -1, 0LL, 0);
    *(_BYTE *)(v2 + 4225) |= 4u;
    v9 = (__int64)v10;
    *(_QWORD *)(v2 + 4168) = v7;
    *(_QWORD *)(v2 + 4160) = v9;
    *(_DWORD *)(v2 + 4208) = 512;
    *(_QWORD *)(v2 + 4192) = NVMeGetCloudSSDErrorRecoveryLogPageCompletion;
    ProcessCommand(a1, a1 + 1016);
    return WaitForCommandComplete(a1, a1 + 1016, a2);
  }
  return result;
}
