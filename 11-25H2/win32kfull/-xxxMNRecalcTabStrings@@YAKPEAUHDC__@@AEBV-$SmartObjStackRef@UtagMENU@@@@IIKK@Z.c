/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401920B4
 * Callers:
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x140042B54 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x1400C13EC (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     FindCharPosition @ 0x1401922F0 (FindCharPosition.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  int v7; // r15d
  unsigned int v8; // ebp
  __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // rbx
  struct tagMENU *v14; // rcx
  int v15; // ecx
  int v16; // r11d
  __int64 v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int CharPosition; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  int v30; // r10d
  struct tagTHREADINFO *v31; // rax
  int v32; // eax
  __m128i *v33; // rdx
  __int64 v34; // r8
  int v35; // ebx
  unsigned int v36; // [rsp+30h] [rbp-48h]
  struct tagSIZE v37[8]; // [rsp+38h] [rbp-40h] BYREF
  int v41; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v7 = a5;
  v8 = 0;
  v41 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = 0;
    v36 = a3;
    if ( !v11 )
      v11 = **(_QWORD **)a2;
    v13 = MNGetpItemFromIndex(v11, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v13 )
        {
LABEL_17:
          v6 = a3;
          goto LABEL_18;
        }
        v14 = *(struct tagMENU **)(a2 + 16);
        if ( !v14 )
          v14 = **(struct tagMENU ***)a2;
        v15 = MNIsOwnerDrawItem(v14, (struct tagITEM *)v13);
        v16 = 0;
        *(_DWORD *)(*(_QWORD *)v13 + 80LL) = v7;
        v17 = *(_QWORD *)(v13 + 24);
        if ( v17 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v13 + 48LL) )
            break;
        }
        if ( v15 )
          goto LABEL_11;
LABEL_12:
        v18 = v16 + v41;
        v19 = *(_QWORD *)(a2 + 16);
        if ( v16 + v41 <= (int)v8 )
          v18 = v8;
        v20 = ++v36;
        v8 = v18;
        if ( !v19 )
          v19 = **(_QWORD **)a2;
        v13 = MNGetpItemFromIndex(v19, v20);
        if ( v21 >= a4 )
          goto LABEL_17;
      }
      if ( !v15 )
      {
        v37[0] = 0LL;
        CharPosition = FindCharPosition(v17, 9LL);
        v29 = CharPosition;
        if ( CharPosition < v30 )
        {
          v31 = PtiCurrent(v28, v27);
          v32 = CALL_LPK(v31);
          v33 = (__m128i *)(v17 + 2 * (v29 + 1));
          v34 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v13 + 48LL) - v29 - 1);
          if ( v32 )
            xxxClientGetTextExtentPointW(a1, (PCWSTR)v33, v34, v37);
          else
            GreGetTextExtentW(a1, v33, v34, v37);
          v16 = *(_DWORD *)(GetDPIMetrics() + 8) + v37[0].cx;
        }
        v7 = a5;
        goto LABEL_12;
      }
LABEL_11:
      ++v12;
      goto LABEL_12;
    }
LABEL_18:
    if ( v12 != a4 - v6 )
    {
      v35 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
      v8 += v35 + *(_DWORD *)(GetDPIMetrics() + 8);
    }
    v22 = *(_QWORD *)(a2 + 16);
    if ( !v22 )
      v22 = **(_QWORD **)a2;
    while ( 1 )
    {
      v23 = MNGetpItemFromIndex(v22, v6);
      if ( v6 >= a4 || !v23 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v23 + 72LL) = v24;
      v22 = *(_QWORD *)(a2 + 16);
      if ( !v22 )
        v22 = **(_QWORD **)a2;
    }
  }
  return v8;
}
