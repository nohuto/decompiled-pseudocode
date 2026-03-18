/*
 * XREFs of GreGetBounds @ 0x1400FCD60
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

__int64 __fastcall GreGetBounds(__int64 a1, __m128i *a2, char a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned int *v13; // rax
  __int64 v14; // rcx
  unsigned int *v15; // rdx
  int v16; // r8d
  __int64 v17; // rax
  __m128i v18; // xmm2
  int v19; // r10d
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rbx
  int v22; // r9d
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r11
  __int64 SessionState; // rax
  __int128 v26; // kr00_16
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // eax
  unsigned int v32; // eax
  __m128i v33; // [rsp+20h] [rbp-50h]
  unsigned int *v34; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+38h] [rbp-38h]
  __int64 v36; // [rsp+40h] [rbp-30h]
  __int64 v37; // [rsp+48h] [rbp-28h]
  __int128 v38; // [rsp+50h] [rbp-20h] BYREF
  __int128 v39; // [rsp+60h] [rbp-10h]

  v5 = a1;
  v36 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v38 = 0LL;
  v39 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7, v6);
  if ( CurrentThreadWin32Thread )
    v9 = *CurrentThreadWin32Thread;
  else
    v9 = 0LL;
  v10 = (v9 + 8) & -(__int64)(v9 != 0);
  *(_QWORD *)&v39 = &v34;
  *((_QWORD *)&v39 + 1) = UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic;
  if ( v10 )
  {
    v11 = *(_QWORD *)(((v9 + 8) & -(__int64)(v9 != 0)) + 0x58);
    if ( *(_QWORD *)(v11 + 8) != v10 + 88 )
      goto LABEL_5;
    *(_QWORD *)&v38 = *(_QWORD *)(v10 + 88);
    *((_QWORD *)&v38 + 1) = v10 + 88;
    *(_QWORD *)(v11 + 8) = &v38;
    *(_QWORD *)(v10 + 88) = &v38;
  }
  else
  {
    *((_QWORD *)&v38 + 1) = &v38;
    *(_QWORD *)&v38 = &v38;
  }
  v12 = 1;
  v13 = (unsigned int *)HmgShareLock(v36, v5, 1, 1);
  v34 = v13;
  v15 = v13;
  if ( !v13 )
    goto LABEL_16;
  if ( (a3 & 1) != 0 )
  {
    v14 = (a3 & 4) != 0 ? 64 : 32;
    v13[9] |= v14;
    v15 = v34;
  }
  else if ( (a3 & 2) != 0 )
  {
    v32 = v13[9];
    if ( (a3 & 4) != 0 )
    {
      v15[9] = v32 & 0xFFFFFFBF;
      v16 = a3 & 4;
      v15 = v34;
      goto LABEL_11;
    }
    v15[9] = v32 & 0xFFFFFFDF;
    v16 = a3 & 4;
    v15 = v34;
LABEL_31:
    v18 = *(__m128i *)(v15 + 266);
    v19 = v15[268];
    v20 = *((_QWORD *)v15 + 134);
    goto LABEL_13;
  }
  v16 = a3 & 4;
  if ( (a3 & 4) == 0 )
    goto LABEL_31;
LABEL_11:
  v17 = *((_QWORD *)v15 + 148);
  if ( !v17
    || (a3 & 3) != 0
    || (v19 = *(_DWORD *)(v17 + 60),
        v22 = _mm_cvtsi128_si32(*(__m128i *)(v17 + 52)),
        v33 = *(__m128i *)(v17 + 52),
        v22 == v19)
    || (v20 = *(_QWORD *)(v17 + 60),
        v21 = *(_QWORD *)(v17 + 52),
        v14 = HIDWORD(v33.m128i_i64[1]),
        v33.m128i_i32[1] == v33.m128i_i32[3]) )
  {
    v18 = *(__m128i *)(v15 + 270);
    v19 = v15[272];
    v20 = *((_QWORD *)v15 + 136);
LABEL_13:
    v21 = v18.m128i_i64[0];
    v22 = _mm_cvtsi128_si32(v18);
    v33 = v18;
  }
  if ( v22 == v19
    || (v23 = HIDWORD(v21), v24 = HIDWORD(v20), (_DWORD)v23 == (_DWORD)v24)
    || v22 >= v19
    || (int)v23 >= (int)v24 )
  {
LABEL_16:
    v12 = 0;
    goto LABEL_17;
  }
  if ( a2 )
  {
    v28 = v15[10] & 1LL;
    v29 = v15[2 * v28 + 254];
    v30 = v29 + v19;
    v33.m128i_i32[0] = v29 + v22;
    v31 = v15[2 * v28 + 255];
    v33.m128i_i32[1] += v31;
    v33.m128i_i32[3] += v31;
    v33.m128i_i32[2] = v30;
    *a2 = v33;
  }
  if ( v16 )
  {
    v15[270] = 0x7FFFFFFF;
    v34[271] = 0x7FFFFFFF;
    v14 = 0x80000000LL;
    v34[272] = 0x80000000;
    v34[273] = 0x80000000;
  }
  else
  {
    v15[266] = 0x7FFFFFFF;
    v34[267] = 0x7FFFFFFF;
    v14 = 0x80000000LL;
    v34[268] = 0x80000000;
    v34[269] = 0x80000000;
  }
  v15 = v34;
LABEL_17:
  if ( v15 )
  {
    SessionState = W32GetSessionState(v14);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v34);
    v34 = 0LL;
  }
  v26 = v38;
  if ( *(__int128 **)(v38 + 8) != &v38 || **((__int128 ***)&v38 + 1) != &v38 )
LABEL_5:
    __fastfail(3u);
  **((_QWORD **)&v38 + 1) = v38;
  *(_QWORD *)(v26 + 8) = *((_QWORD *)&v26 + 1);
  return v12;
}
