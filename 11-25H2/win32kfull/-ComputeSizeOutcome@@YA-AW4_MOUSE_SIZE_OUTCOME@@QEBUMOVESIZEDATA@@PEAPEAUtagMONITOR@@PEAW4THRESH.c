/*
 * XREFs of ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1401F8074
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1401F7F88 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A732C (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 */

__int64 __fastcall ComputeSizeOutcome(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v4; // r8d
  __int64 v6; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  char v10; // al
  __int64 v11; // r14
  int v12; // ebx
  int v13; // ecx
  int v15; // eax
  int v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 200) >> 11;
  v6 = *(_QWORD *)(a1 + 260);
  v8 = *(unsigned int *)(a1 + 176);
  v9 = 0;
  v16 = 0;
  v17 = 0LL;
  v10 = HitTargetAndMonitorFromPoint(v8, v6, v4 & 7, &v17, &v16);
  v11 = v17;
  *a2 = v17;
  v12 = v16;
  *a3 = v16;
  if ( !v10 )
  {
    if ( *(_DWORD *)(a1 + 248) != 4 )
      return 4LL;
    return 1LL;
  }
  if ( (v12 == 3 || !v12) && (unsigned int)(*(_DWORD *)(a1 + 176) - 1) <= 1 )
    return 1LL;
  v13 = *(_DWORD *)(a1 + 248);
  if ( v13 == 4 )
    return 5LL;
  if ( v11 != *(_QWORD *)(a1 + 240) || v12 != v13 )
    return 3LL;
  if ( !IsArranged(*(const struct tagWND **)(a1 + 16)) && !*(_DWORD *)(a1 + 248) )
    return 5LL;
  v15 = *(_DWORD *)(a1 + 248);
  if ( v15 == 3 )
    return 5LL;
  if ( v15 == 4 || v11 != *(_QWORD *)(a1 + 240) )
    return 0LL;
  if ( v12 == v15 )
    return 2;
  return v9;
}
