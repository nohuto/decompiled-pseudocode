/*
 * XREFs of ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140242174
 * Callers:
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x140242080 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x140089BA0 (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 */

__int64 __fastcall ComputeSizeOutcome(__int64 a1, __int64 *a2, _DWORD *a3)
{
  int v4; // r8d
  __int64 v6; // rdx
  int v8; // ecx
  unsigned int v9; // esi
  char v10; // al
  __int64 v11; // r15
  char v12; // dl
  int v13; // r14d
  __int64 result; // rax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 200) >> 11;
  v6 = *(_QWORD *)(a1 + 260);
  v8 = *(_DWORD *)(a1 + 176);
  v9 = 0;
  v18 = 0;
  v19 = 0LL;
  v10 = HitTargetAndMonitorFromPoint(v8, v6, v4 & 7, &v19, &v18);
  v11 = v19;
  v12 = v10;
  v13 = v18;
  result = 1LL;
  *a3 = v18;
  *a2 = v11;
  if ( !v12 || v13 != 3 && v13 || (v15 = *(_DWORD *)(a1 + 176), v15 != 1) && v15 != 2 )
  {
    v16 = *(_DWORD *)(a1 + 248);
    if ( v12 )
    {
      if ( v16 == 4 )
        return 5LL;
      if ( v11 != *(_QWORD *)(a1 + 240) || v13 != v16 )
        return 3LL;
      if ( !IsArranged(*(const struct tagWND **)(a1 + 16)) && !*(_DWORD *)(a1 + 248) )
        return 5LL;
      v17 = *(_DWORD *)(a1 + 248);
      if ( v17 == 3 )
      {
        return 5LL;
      }
      else if ( v17 == 4 || v11 != *(_QWORD *)(a1 + 240) )
      {
        return 0LL;
      }
      else
      {
        if ( v13 == v17 )
          return 2;
        return v9;
      }
    }
    else if ( v16 != 4 )
    {
      return 4LL;
    }
  }
  return result;
}
