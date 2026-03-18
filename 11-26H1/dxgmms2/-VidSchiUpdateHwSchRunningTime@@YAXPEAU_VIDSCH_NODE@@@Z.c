/*
 * XREFs of ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140008BB0
 * Callers:
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x140026E70 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1400276A8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74 (VidSchiProcessNativeFenceSignaledDpc.c)
 * Callees:
 *     ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140008F64 (-DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140008F80 (-KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140008F9C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiUpdateHwSchRunningTime(struct _VIDSCH_NODE *a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned int v5; // r13d
  unsigned __int64 v6; // rbx
  void *v7; // rdi
  struct _RTL_BALANCED_NODE **v8; // r15
  __int64 v9; // r14
  void *v10; // rsi
  int v11; // r10d
  struct _RTL_BALANCED_NODE *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  struct _RTL_BALANCED_NODE *v20; // rdi
  int v21; // eax
  struct _RTL_BALANCED_NODE *v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // r8
  struct _RTL_BALANCED_NODE *v25; // r11
  struct _RTL_BALANCED_NODE *v26; // r9
  __int64 v27; // rax
  struct _RTL_BALANCED_NODE *v28; // rcx
  unsigned int v29; // [rsp+70h] [rbp+8h]
  void *v30; // [rsp+78h] [rbp+10h]
  unsigned __int64 v31; // [rsp+80h] [rbp+18h]
  _LARGE_INTEGER PerformanceFrequency; // [rsp+88h] [rbp+20h] BYREF

  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    return;
  if ( !*((_QWORD *)a1 + 2052) )
    return;
  VidSchiCalibrateHwClock(a1);
  if ( !*((_QWORD *)a1 + 2058) )
    return;
  v2 = *((_DWORD *)a1 + 4106);
  v3 = **((_QWORD **)a1 + 2054);
  v4 = *((_QWORD *)a1 + 2056);
  v29 = v2;
  v31 = __PAIR64__(HIDWORD(v3), (unsigned int)v3 % v2);
  v5 = (unsigned int)v3 % v2;
  v6 = __PAIR64__(HIDWORD(v3), (unsigned int)v3 % v2);
  if ( v4 == __PAIR64__(HIDWORD(v3), (unsigned int)v3 % v2) )
    return;
  if ( HIDWORD(v4) > HIDWORD(v3) )
    goto LABEL_30;
  if ( HIDWORD(v4) == HIDWORD(v3) )
  {
    if ( (unsigned int)v4 > (unsigned int)v3 % v2 )
      goto LABEL_30;
  }
  else if ( HIDWORD(v4) + 1 != HIDWORD(v3) )
  {
    LODWORD(v4) = ((unsigned int)v4 + (v2 >> 1)) % v2;
  }
  v7 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  do
  {
    v9 = *((_QWORD *)a1 + 2054) + 32 * ((unsigned int)v4 + 1LL);
    if ( *(_DWORD *)(v9 + 8) )
      goto LABEL_28;
    v10 = *(void **)(v9 + 16);
    if ( v10 == v7 )
    {
      if ( v8 )
        goto LABEL_12;
      goto LABEL_28;
    }
    v20 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 219);
    while ( v20 )
    {
      v21 = DxgkrnlContextHandleCompareFunction(v10, v20);
      if ( v21 >= 0 )
      {
        if ( v21 <= 0 )
        {
          v8 = &v20[-7].Children[1];
          goto LABEL_34;
        }
        v20 = v20->Children[1];
      }
      else
      {
        v20 = v20->Children[0];
      }
    }
    v22 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 220);
    if ( !v22 )
      goto LABEL_27;
    while ( 1 )
    {
      v23 = KmdContextHandleCompareFunction(v10, v22);
      if ( v23 >= 0 )
        break;
      v22 = v22->Children[0];
LABEL_26:
      if ( !v22 )
        goto LABEL_27;
    }
    if ( v23 > 0 )
    {
      v22 = v22->Children[1];
      goto LABEL_26;
    }
    v8 = &v22[-8].Children[1];
LABEL_34:
    v30 = v10;
LABEL_12:
    v11 = *(_DWORD *)(v9 + 24);
    v12 = *(struct _RTL_BALANCED_NODE **)v9;
    if ( *((_DWORD *)v8 + 52) == 1 && v11 != 1 )
    {
      v13 = *((_QWORD *)a1 + 2059);
      v14 = *((_QWORD *)a1 + 2057);
      v15 = *((_QWORD *)a1 + 2060) - v13;
      if ( *((_QWORD *)a1 + 2060) != v13 )
      {
        v16 = (*((_QWORD *)a1 + 2058) - v14) * ((__int64)v8[27] - v13) / v15 + v14;
        v17 = is_mul_ok(v16, 0x989680uLL)
            ? v16 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart
            : 10000000 * (v16 / PerformanceFrequency.QuadPart)
            + 10000000 * (v16 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        v18 = ((__int64)v12 - v13) * (*((_QWORD *)a1 + 2058) - v14) / v15 + v14;
        v19 = is_mul_ok(v18, 0x989680uLL)
            ? v18 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart
            : 10000000 * (v18 / PerformanceFrequency.QuadPart)
            + 10000000 * (v18 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        if ( v19 > v17 )
        {
          v24 = v19 - v17;
          *((_QWORD *)a1 + 347) += v24;
          v25 = v8[2];
          v26 = v8[1][2].Children[0][1].Children[1]->Children[HIDWORD(v25[1].Children[0]->Left)];
          if ( v26 )
          {
            v27 = WORD2(v25->Left);
            v28 = v26->Children[1];
            if ( (unsigned int)v27 < LODWORD(v26[3].Right) )
              v28 = (struct _RTL_BALANCED_NODE *)((char *)v28 + 8 * v27);
            if ( v28->Children[0] )
              v28->Children[0]->Children[0] = (struct _RTL_BALANCED_NODE *)((char *)v28->Children[0]->Children[0] + v24);
          }
          v8[52] = (struct _RTL_BALANCED_NODE *)((char *)v8[52] + v24);
        }
      }
    }
    *((_DWORD *)v8 + 52) = v11;
    v8[27] = v12;
LABEL_27:
    v7 = v30;
LABEL_28:
    LODWORD(v4) = ((int)v4 + 1) % v29;
  }
  while ( (_DWORD)v4 != v5 );
  v6 = v31;
LABEL_30:
  *((_QWORD *)a1 + 2056) = v6;
}
