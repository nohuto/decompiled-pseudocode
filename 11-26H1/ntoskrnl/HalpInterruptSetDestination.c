/*
 * XREFs of HalpInterruptSetDestination @ 0x140432F20
 * Callers:
 *     ExtEnvSetVpptTarget @ 0x1404358D0 (ExtEnvSetVpptTarget.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x14043306C (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpInterruptSetRemappedDestination @ 0x140434D0C (HalpInterruptSetRemappedDestination.c)
 *     HalpInterruptSetDestinationInternal @ 0x140435518 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetDestination(unsigned int *a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r9
  __int64 v5; // r8
  unsigned int v8; // edi
  int v10; // r8d
  unsigned int v11; // esi
  _DWORD *LinesForGsiRange; // rax
  int v13; // eax
  unsigned __int8 v14; // bl
  _DWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  unsigned int *v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+70h] [rbp+20h] BYREF
  int v19; // [rsp+74h] [rbp+24h]
  int v20; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v21; // [rsp+8Ch] [rbp+3Ch]

  v3 = a3;
  v5 = *a1;
  v15[1] = 0;
  if ( qword_140FBB408 && (_DWORD)v5 == 3 || !(_DWORD)v5 && qword_140FBB408 )
  {
    return (unsigned int)HalpInterruptSetRemappedDestinationHv(v3, a1, a2);
  }
  else
  {
    if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0
      || (unsigned int)HalpInterruptModel(a1, a2, v5, v3) != 1 && !v10 )
    {
      if ( v3 )
      {
        v11 = *v3;
        LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v11, v11 + 1);
        if ( LinesForGsiRange )
        {
          v20 = LinesForGsiRange[4];
          v13 = LinesForGsiRange[5] - LinesForGsiRange[7];
          v15[0] = 1;
          v16 = a2;
          v21 = v11 + v13;
          v18 = -1;
          v17 = a1 + 10;
          v19 = 1;
          v14 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
          v8 = HalpInterruptSetDestinationInternal(&v20, v15, &v18);
          HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v14);
          return v8;
        }
        HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 559);
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)HalpInterruptSetRemappedDestination(v3, a1, a2);
  }
}
