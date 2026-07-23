/*
 * XREFs of PpmParkDetectComplexAndModulePresence @ 0x140612628
 * Callers:
 *     PpmParkInitParkNode @ 0x140612C58 (PpmParkInitParkNode.c)
 * Callees:
 *     PpmEventParkTopologyDetected @ 0x140611AF0 (PpmEventParkTopologyDetected.c)
 *     PpmParkAggregateTopologyMasks @ 0x140612394 (PpmParkAggregateTopologyMasks.c)
 *     PpmParkDetectTopologyLevelInfo @ 0x14061280C (PpmParkDetectTopologyLevelInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall PpmParkDetectComplexAndModulePresence(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // esi
  __int64 v9; // r10
  __int64 v10; // r11
  unsigned int v11; // esi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+30h] BYREF
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  v15 = 0;
  Pool2 = a2;
  v17 = 0LL;
  v16 = 0;
  v14 = 0LL;
  if ( !a2 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      PpmParkDetectTopologyLevelInfo(a1, 5LL, &v15, &v17);
      v4 = v17;
      v5 = v15;
      *(_QWORD *)(Pool2 + 8) = v17;
      *(_DWORD *)Pool2 = v5;
      PpmParkAggregateTopologyMasks(v4, v5, (struct _KAFFINITY_EX *)(Pool2 + 16), (struct _KAFFINITY_EX *)(Pool2 + 280));
      PpmParkDetectTopologyLevelInfo(a1, 2LL, &v16, &v14);
      v6 = v14;
      v7 = v16;
      *(_QWORD *)(Pool2 + 552) = v14;
      *(_DWORD *)(Pool2 + 544) = v7;
      PpmParkAggregateTopologyMasks(
        v6,
        v7,
        (struct _KAFFINITY_EX *)(Pool2 + 560),
        (struct _KAFFINITY_EX *)(Pool2 + 824));
      if ( *(_QWORD *)(Pool2 + 8) && *(_DWORD *)Pool2 )
      {
        v8 = 0;
        do
        {
          v9 = *(_QWORD *)(Pool2 + 8);
          v10 = 808LL * v8;
          PpmEventParkTopologyDetected(
            *(unsigned __int16 *)(a1 + 4),
            5,
            *(_DWORD *)(v10 + v9 + 4),
            *(_DWORD *)(v10 + v9 + 276),
            *(_DWORD *)(v10 + v9 + 272),
            (_WORD *)(v10 + v9 + 8),
            (_WORD *)(v10 + v9 + 280),
            (_WORD *)(v10 + v9 + 544),
            0);
          ++v8;
        }
        while ( v8 < *(_DWORD *)Pool2 );
      }
      if ( *(_QWORD *)(Pool2 + 552) && *(_DWORD *)(Pool2 + 544) )
      {
        v11 = 0;
        do
        {
          v12 = *(_QWORD *)(Pool2 + 552);
          v13 = 808LL * v11;
          PpmEventParkTopologyDetected(
            *(unsigned __int16 *)(a1 + 4),
            2,
            *(_DWORD *)(v13 + v12 + 4),
            *(_DWORD *)(v13 + v12 + 276),
            *(_DWORD *)(v13 + v12 + 272),
            (_WORD *)(v13 + v12 + 8),
            (_WORD *)(v13 + v12 + 280),
            (_WORD *)(v13 + v12 + 544),
            0);
          ++v11;
        }
        while ( v11 < *(_DWORD *)(Pool2 + 544) );
      }
    }
  }
  *(_QWORD *)(a1 + 1248) = Pool2;
}
