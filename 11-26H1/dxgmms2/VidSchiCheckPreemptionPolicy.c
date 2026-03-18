/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x140024ED0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1400202A8 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v6; // ebp
  __int64 v7; // r14
  unsigned int MostSignificantBit; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // r8d
  unsigned __int64 v18; // rcx
  bool v19; // cc
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-28h]
  char v23; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 192);
  *a2 = -1LL;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  if ( (v3 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1576) + 1584) )
    {
      v6 = 15;
      goto LABEL_4;
    }
    v6 = -18;
  }
  if ( !*(_DWORD *)(v2 + 3020) )
  {
    v6 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v7 + 2824) & 1) == 0 )
  {
    v6 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 796));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 3024)) != 1 )
  {
    v6 = 13;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v7 + 1044) )
    v6 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v2 + 1892));
  v10 = *(unsigned int *)(a1 + 412);
  if ( MostSignificantBit <= (unsigned int)v10 )
  {
    if ( MostSignificantBit != (_DWORD)v10 )
    {
      if ( *(_BYTE *)(v2 + 2144) && gulPriorityToYieldPriorityBand[v10] != 3 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
        v6 = 11;
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 796));
        goto LABEL_4;
      }
      goto LABEL_26;
    }
    v11 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1576) + 1584);
    if ( v11 && *(_QWORD *)(*(_QWORD *)(v11 + 104) + 48LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 48LL) )
    {
      v14 = *(_DWORD *)(v11 + 416);
      if ( *(_DWORD *)(a1 + 416) > v14 )
      {
        v6 = -17;
        goto LABEL_4;
      }
      if ( *(_DWORD *)(a1 + 416) < v14 )
        goto LABEL_16;
    }
    v12 = *(_QWORD *)(v2 + 24);
    v23 = 0;
    v21 = 0LL;
    v20 = v2;
    v22 = 0LL;
    DpSynchronizeExecution(
      *(_QWORD *)(v12 + 32),
      VidSchiUpdateNodeRunningTimeAtISR,
      &v20,
      *(unsigned int *)(v12 + 40),
      &v23);
    v13 = v21;
    if ( v23 )
      goto LABEL_22;
    if ( !v21 )
    {
      v6 = 2;
      goto LABEL_17;
    }
    v16 = v22;
    v17 = *(_DWORD *)(v21 + 492);
    v18 = DWORD1(v22);
    v19 = v17 <= SDWORD1(v22);
    if ( v17 == DWORD1(v22) )
      goto LABEL_39;
  }
  else
  {
    if ( !*(_BYTE *)(v2 + 2144) )
    {
LABEL_16:
      v6 = 10;
LABEL_17:
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 796));
      goto LABEL_4;
    }
    v15 = *(_QWORD *)(v2 + 24);
    v23 = 0;
    v21 = 0LL;
    v20 = v2;
    v22 = 0LL;
    DpSynchronizeExecution(
      *(_QWORD *)(v15 + 32),
      VidSchiUpdateNodeRunningTimeAtISR,
      &v20,
      *(unsigned int *)(v15 + 40),
      &v23);
    v13 = v21;
    if ( v23 )
    {
LABEL_22:
      v6 = 11;
      *a2 = *(_QWORD *)(v21 + 488);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 796));
      goto LABEL_4;
    }
    if ( !v21 )
    {
      v6 = 2;
      goto LABEL_17;
    }
    v16 = v22;
    v17 = *(_DWORD *)(v21 + 492);
    v18 = DWORD1(v22);
    v19 = v17 <= SDWORD1(v22);
    if ( v17 == DWORD1(v22) )
    {
LABEL_39:
      if ( *(_DWORD *)(v13 + 488) > (unsigned int)v16 )
      {
LABEL_42:
        v6 = 12;
        *a2 = *(_QWORD *)(v13 + 488) - v16;
        goto LABEL_17;
      }
      v19 = v17 <= (int)v18;
    }
  }
  if ( !v19 )
    goto LABEL_42;
LABEL_26:
  if ( !v6 )
    v6 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1LL, v7, v2, 0LL, a1, 0LL, 0LL, v6);
  WdLogSingleEntry5(4LL, v2, *(_QWORD *)(v2 + 96), *(_QWORD *)(v2 + 152), a1, v6);
  WdLogGlobalForLineNumber = 6492;
  return v6 < 0 || v6 == 1;
}
