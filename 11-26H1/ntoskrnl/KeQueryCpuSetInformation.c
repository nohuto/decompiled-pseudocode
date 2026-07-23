/*
 * XREFs of KeQueryCpuSetInformation @ 0x140B6DAC4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x140440370 (RtlBeginReadTickLock.c)
 *     RtlTryEndReadTickLock @ 0x140444140 (RtlTryEndReadTickLock.c)
 *     KiGetCpuSetData @ 0x1404EB37C (KiGetCpuSetData.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 */

__int64 __fastcall KeQueryCpuSetInformation(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char PreviousMode; // r12
  _QWORD *v7; // rbx
  unsigned int v8; // ecx
  _DWORD *v9; // r8
  unsigned int v10; // edx
  unsigned int v12; // esi
  unsigned int v13; // r14d
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r8
  struct _LIST_ENTRY *CpuSetData; // r9
  __int16 v17; // r11
  int v18; // r8d
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rcx
  bool v22; // dl
  char v23; // cl
  char *v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-78h]
  __int64 TickLock; // [rsp+30h] [rbp-68h]
  _QWORD Src[12]; // [rsp+38h] [rbp-60h] BYREF

  memset(Src, 0, 32);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a4 )
  {
    v7 = (_QWORD *)(a4 + 1736);
    if ( (*(_DWORD *)(a4 + 1532) & 0x80u) != 0 )
      v7 = (_QWORD *)*v7;
  }
  else
  {
    v7 = 0LL;
  }
  do
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
    v25 = KiTotalCpuSetCount;
    v8 = 32 * KiTotalCpuSetCount;
    *v9 = 32 * KiTotalCpuSetCount;
    if ( v10 < v8 )
      return 3221225507LL;
    if ( PreviousMode )
      RtlSetUserMemory(a1, 0, v8);
    else
      RtlSetVolatileMemory(a1, 0, v8);
    v12 = 0;
    v13 = 0;
    v14 = KiGroupBlock[0];
    do
    {
      if ( v14 )
      {
        _BitScanForward64(&v15, v14);
        _bittestandreset64((__int64 *)&v14, (unsigned int)v15);
        CpuSetData = KiGetCpuSetData(v12, v15);
        *(_OWORD *)((char *)&Src[1] + 6) = 0LL;
        HIWORD(Src[3]) = v17;
        Src[0] = 32LL;
        LODWORD(Src[1]) = v18 | (v12 << 16) | 0x100;
        WORD2(Src[1]) = v12;
        *(_DWORD *)((char *)&Src[1] + 6) = *(_DWORD *)((char *)&CpuSetData->Flink + 1);
        BYTE2(Src[2]) = BYTE5(CpuSetData->Flink);
        BYTE4(Src[2]) = BYTE6(CpuSetData->Flink);
        v19 = 1LL << v18;
        v20 = v12;
        v21 = KiNonParkedCpuSets[v20] & v19;
        if ( !v21 )
          BYTE3(Src[2]) |= 1u;
        v22 = v21 == 0;
        v23 = v21 == 0;
        if ( (v19 & KiSystemAllowedCpuSets[2 * v12]) != 0 )
        {
          if ( !a4 || (*(_DWORD *)(a4 + 496) & 0x8000000) == 0 )
          {
LABEL_23:
            BYTE3(Src[2]) = v23;
            Src[3] = CpuSetData->Blink;
            v24 = &a1[32 * v13];
            if ( PreviousMode )
              RtlCopyToUser(v24, Src, 0x20uLL);
            else
              RtlCopyVolatileMemory(v24, Src, 0x20uLL);
            ++v13;
            continue;
          }
        }
        else if ( v7 && (v19 & v7[v20]) != 0 )
        {
          v23 = v22 | 4;
        }
        v23 |= 0xAu;
        goto LABEL_23;
      }
      if ( ++v12 >= (unsigned __int16)KiActiveGroups )
        break;
      v14 = KiGroupBlock[4 * v12];
    }
    while ( v13 < v25 );
  }
  while ( !RtlTryEndReadTickLock(&KiCpuSetSequence, TickLock) );
  return 0LL;
}
