/*
 * XREFs of PoCopyDeepIdleMask @ 0x1403EDFE0
 * Callers:
 *     PpmCheckContinueExecution @ 0x1402533F8 (PpmCheckContinueExecution.c)
 *     PpmIdleSelectStates @ 0x1403EA21C (PpmIdleSelectStates.c)
 *     KiForwardTick @ 0x1403ED6F0 (KiForwardTick.c)
 *     KiGetDeepIdleProcessors @ 0x1403EDF4C (KiGetDeepIdleProcessors.c)
 *     PpmPostProcessMediaBuffering @ 0x140946160 (PpmPostProcessMediaBuffering.c)
 *     RtlUpdateSwapReference @ 0x140ABFBBC (RtlUpdateSwapReference.c)
 * Callees:
 *     KeEnumerateNextNodeInSystem @ 0x1403EE250 (KeEnumerateNextNodeInSystem.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall PoCopyDeepIdleMask(unsigned __int16 *a1)
{
  __m128 v2; // xmm0
  unsigned __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+28h] [rbp-18h]
  unsigned __int64 v13; // [rsp+50h] [rbp+10h] BYREF

  memset_0(a1 + 4, 0, 8LL * *a1);
  v11 = 0LL;
  v13 = 0LL;
  *a1 = 1;
  v12 = 0LL;
  v2 = KeEnumerateNextNodeInSystem(&v11, &v13);
  v3 = v13;
  v4 = 0;
  HIDWORD(v12) = v2.m128_i32[3];
  *(_QWORD *)&v12 = v13;
  DWORD2(v12) = 0;
  while ( 1 )
  {
    v13 = 0LL;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = v4;
      if ( v4 < *(_DWORD *)(v3 + 48) )
        break;
      KeEnumerateNextNodeInSystem(&v11, &v13);
      if ( v7 < 0 )
      {
        v4 = DWORD2(v12);
        v3 = v12;
        goto LABEL_6;
      }
      v3 = v13;
      v4 = 0;
      v12 = v13;
    }
    v8 = *(_QWORD *)(v3 + 32);
    ++v4;
    DWORD2(v12) = v6 + 1;
    v5 = *(_QWORD *)(v8 + 8 * v6);
LABEL_6:
    if ( !v5 )
      break;
    v9 = *(_QWORD *)(v5 + 64);
    v10 = *(unsigned __int16 *)(v5 + 136);
    if ( *a1 > (unsigned __int16)v10 )
      goto LABEL_10;
    if ( a1[1] > (unsigned __int16)v10 )
    {
      *a1 = v10 + 1;
LABEL_10:
      *(_QWORD *)&a1[4 * v10 + 4] |= v9;
    }
  }
}
