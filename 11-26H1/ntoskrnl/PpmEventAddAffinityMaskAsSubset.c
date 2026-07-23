/*
 * XREFs of PpmEventAddAffinityMaskAsSubset @ 0x1404185F0
 * Callers:
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140415324 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceHeteroResponse @ 0x140416490 (PpmEventTraceHeteroResponse.c)
 *     PpmEventParkNodeRecordedStats @ 0x140416D6C (PpmEventParkNodeRecordedStats.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x14041708C (PpmEventHgsActiveWorkloadClass.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x140417FAC (PpmEventHgsCoresUnparkedCount.c)
 *     PpmEventTraceSoftCoreParkingSelection @ 0x140418130 (PpmEventTraceSoftCoreParkingSelection.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140418C30 (PpmEventTraceCoreParkingSelection.c)
 *     PpmEventParkNodeRestriction @ 0x140419160 (PpmEventParkNodeRestriction.c)
 *     PpmEventParkNodeParkHintChanged @ 0x14050E938 (PpmEventParkNodeParkHintChanged.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x14052A27C (PpmEventParkNodeClassRecordedStats.c)
 *     PpmEventAffinityMask @ 0x140610F10 (PpmEventAffinityMask.c)
 *     PpmEventParkNodeCapChange @ 0x1406116D0 (PpmEventParkNodeCapChange.c)
 *     PpmEventParkNodePreference @ 0x1406118C0 (PpmEventParkNodePreference.c)
 *     PpmEventParkTopologyDetected @ 0x140611AF0 (PpmEventParkTopologyDetected.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x140611DFC (PpmEventTraceHeteroDistributeUtility.c)
 *     PpmEventTraceParkNodeRundown @ 0x140B4C568 (PpmEventTraceParkNodeRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEventAddAffinityMaskAsSubset(
        _WORD *a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int *a8)
{
  _WORD *v8; // rax
  __int64 v11; // rdi
  __int64 v12; // r10
  unsigned int i; // r9d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int16 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rax
  __int64 result; // rax
  unsigned __int16 *v37; // r9
  int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // rdi
  _WORD *v41; // rax

  v8 = a2;
  if ( a1 )
    v8 = a1;
  v11 = (unsigned int)*a7;
  LOWORD(v12) = 0;
  for ( i = 0; i < 0x20; i += 16 )
  {
    if ( (unsigned __int16)i < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)i + 4] )
    {
      v15 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v15) = i;
      *a7 = v15 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 1) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 1) + 4] )
    {
      v16 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v16) = i + 1;
      *a7 = v16 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 2) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 2) + 4] )
    {
      v17 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v17) = i + 2;
      *a7 = v17 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 3) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 3) + 4] )
    {
      v18 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v18) = i + 3;
      *a7 = v18 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 4) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 4) + 4] )
    {
      v19 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v19) = i + 4;
      *a7 = v19 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 5) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 5) + 4] )
    {
      v20 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v20) = i + 5;
      *a7 = v20 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 6) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 6) + 4] )
    {
      v21 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v21) = i + 6;
      *a7 = v21 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 7) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 7) + 4] )
    {
      v22 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v22) = i + 7;
      *a7 = v22 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 8) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 8) + 4] )
    {
      v23 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v23) = i + 8;
      *a7 = v23 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 9) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 9) + 4] )
    {
      v24 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v24) = i + 9;
      *a7 = v24 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 10) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 10) + 4] )
    {
      v25 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v25) = i + 10;
      *a7 = v25 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 11) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 11) + 4] )
    {
      v26 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v26) = i + 11;
      *a7 = v26 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 12) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 12) + 4] )
    {
      v27 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v27) = i + 12;
      *a7 = v27 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 13) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 13) + 4] )
    {
      v28 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v28) = i + 13;
      *a7 = v28 + 1;
      LOWORD(v12) = v12 + 1;
    }
    if ( (unsigned __int16)(i + 14) < *v8 && *(_QWORD *)&v8[4 * (unsigned __int16)(i + 14) + 4] )
    {
      v29 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v29) = i + 14;
      *a7 = v29 + 1;
      LOWORD(v12) = v12 + 1;
    }
    v30 = i + 15;
    if ( (unsigned __int16)(i + 15) < *v8 && *(_QWORD *)&v8[4 * v30 + 4] )
    {
      v31 = (unsigned int)*a7;
      *(_WORD *)(a4 + 2 * v31) = v30;
      *a7 = v31 + 1;
      LOWORD(v12) = v12 + 1;
    }
  }
  v32 = (unsigned int)*a6;
  *(_WORD *)(a3 + 2 * v32) = v12;
  v33 = a3 + 2 * v32;
  if ( !a1 )
  {
    v34 = *a8;
    v35 = 2LL * *a8;
    *(_QWORD *)(a5 + 8 * v35) = v33;
    *(_QWORD *)(a5 + 8 * v35 + 8) = 2LL;
    *a8 = v34 + 1;
  }
  result = (unsigned __int16)v12 + (unsigned int)v11;
  if ( (unsigned int)v11 < (unsigned int)result )
  {
    v37 = (unsigned __int16 *)(a4 + 2 * v11);
    v12 = (unsigned __int16)v12;
    do
    {
      v38 = *a8;
      v39 = 2LL * *a8;
      *(_QWORD *)(a5 + 8 * v39) = v37;
      *(_QWORD *)(a5 + 8 * v39 + 8) = 2LL;
      v40 = *v37;
      if ( (unsigned __int16)v40 >= *a2 )
        v41 = &PpmEventEmptyMask;
      else
        v41 = &a2[4 * v40 + 4];
      *(_QWORD *)(a5 + 16LL * (unsigned int)(v38 + 1)) = v41;
      ++v37;
      *(_QWORD *)(a5 + 16LL * (unsigned int)(v38 + 1) + 8) = 8LL;
      result = (unsigned int)(v38 + 2);
      *a8 = result;
      --v12;
    }
    while ( v12 );
  }
  ++*a6;
  return result;
}
