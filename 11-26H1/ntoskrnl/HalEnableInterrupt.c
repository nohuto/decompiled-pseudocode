/*
 * XREFs of HalEnableInterrupt @ 0x140432390
 * Callers:
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpEnableSecondaryInterrupt @ 0x140B62114 (HalpEnableSecondaryInterrupt.c)
 */

__int64 __fastcall HalEnableInterrupt(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned int v5; // ebx
  _DWORD *LinesForGsiRange; // rax
  unsigned __int8 v7; // al
  __int64 v8; // r8
  unsigned __int8 v9; // bl
  _DWORD v10[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+84h] [rbp+24h]
  int v15; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+8Ch] [rbp+2Ch]

  v1 = 0;
  v10[1] = 0;
  if ( *(_DWORD *)a1 != 1 )
  {
    HalpInterruptLastProblem = 19;
    HalpInterruptLastProblemLine = 204;
LABEL_6:
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblemStatus = 0;
    return (unsigned int)-1073741811;
  }
  v10[0] = 1;
  v11 = a1 + 32;
  v12 = a1 + 48;
  v3 = *(_DWORD *)(a1 + 8);
  v13 = -1;
  v14 = 1;
  if ( !v3 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
    if ( LinesForGsiRange )
    {
      v15 = LinesForGsiRange[4];
      v16 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
      v7 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
      LOBYTE(v8) = *(_BYTE *)(a1 + 16);
      v9 = v7;
      v1 = HalpInterruptSetLineState(
             &v15,
             *(unsigned int *)(a1 + 12),
             v8,
             *(unsigned int *)(a1 + 24),
             *(_DWORD *)(a1 + 20),
             v10,
             &v13);
      HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v9);
      return v1;
    }
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(0LL, v5) )
      return (unsigned int)HalpEnableSecondaryInterrupt(a1);
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemLine = 272;
    goto LABEL_6;
  }
  if ( v3 != 3 )
  {
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 313);
    return (unsigned int)-1073741811;
  }
  return v1;
}
