/*
 * XREFs of RaspLoadCompositeGlyphData @ 0x14071E19C
 * Callers:
 *     RaspLoadGlyphData @ 0x14071E3A0 (RaspLoadGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x140356A58 (FioFwReadUshortAtOffset.c)
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     RaspGetCompositeGlyphList @ 0x14071D7F4 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14071DCE4 (RaspInitializeCompositeGlyphData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RaspLoadCompositeGlyphData(__int64 a1, int a2, _WORD *a3, __int64 *a4, __int64 *a5)
{
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // r14
  unsigned int v12; // ebx
  __int64 result; // rax
  int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18[2]; // [rsp+50h] [rbp-31h] BYREF
  __int16 v19; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned __int16 v20[2]; // [rsp+58h] [rbp-29h] BYREF
  int v21; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h] BYREF
  __int128 v23; // [rsp+68h] [rbp-19h] BYREF
  __int64 v24; // [rsp+78h] [rbp-9h] BYREF
  __int16 v25; // [rsp+80h] [rbp-1h] BYREF

  v24 = 0LL;
  v25 = 0;
  v21 = 0;
  v18[0] = 0;
  v19 = 0;
  v20[0] = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v9 = *(_DWORD *)(a1 + 60);
  if ( !v9 )
    return 3221225473LL;
  v10 = v9 + a2;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  FioFwReadUshortAtOffset(v11, (unsigned int)(v9 + a2), &v24);
  FioFwReadUshortAtOffset(v11, v10 + 2, (_WORD *)&v24 + 1);
  v10 += 4;
  FioFwReadUshortAtOffset(v11, v10, (_WORD *)&v24 + 2);
  FioFwReadUshortAtOffset(v11, v10 + 2, (_WORD *)&v24 + 3);
  v12 = v10 + 4;
  FioFwReadUshortAtOffset(v11, v12, &v25);
  if ( (v24 & 0x8000u) == 0LL )
    return 3221225485LL;
  result = RaspGetCompositeGlyphList(a1, a2, v20, &v19, v18, &v21, &v23, a5);
  if ( (int)result >= 0 )
  {
    v14 = RaspInitializeCompositeGlyphData(
            v11,
            (__int64 *)&v23,
            (__int64)&v24,
            v20[0],
            v19,
            v18[0],
            v12 + v21 + 2,
            a3,
            &v22,
            a5);
    if ( v14 >= 0 )
    {
      v17 = v22;
    }
    else
    {
      while ( 1 )
      {
        v15 = v23;
        if ( (__int128 *)v23 == &v23 )
          break;
        if ( *(__int128 **)(v23 + 8) != &v23 || (v16 = *(_QWORD *)v23, *(_QWORD *)(*(_QWORD *)v23 + 8LL) != (_QWORD)v23) )
          __fastfail(3u);
        *(_QWORD *)&v23 = *(_QWORD *)v23;
        *(_QWORD *)(v16 + 8) = &v23;
        RaspFreeMemory(*(_QWORD *)(v15 + 16), a5);
        RaspFreeMemory(v15, a5);
      }
      v17 = v22;
      if ( v22 )
      {
        RaspFreeMemory(v22, a5);
        v17 = 0LL;
      }
    }
    *a4 = v17;
    return (unsigned int)v14;
  }
  return result;
}
