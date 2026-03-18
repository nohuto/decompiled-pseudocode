/*
 * XREFs of ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800360B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::EnumerateBrushes(
        CEmptyRegionDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  __int64 v4; // rax
  int (*v5)(const struct CDrawListBrush *, void *); // rbx
  void *v6; // r15
  __int64 v8; // rdi
  int v9; // r14d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __m128i v14; // xmm1
  unsigned int v15; // xmm0_4
  int v16; // eax
  unsigned int v17; // ebx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int128 v24; // [rsp+40h] [rbp-78h]
  _BYTE v25[8]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-60h]
  unsigned __int64 v27; // [rsp+60h] [rbp-58h]
  unsigned __int64 v28; // [rsp+68h] [rbp-50h]
  int v29; // [rsp+70h] [rbp-48h]
  int v30; // [rsp+74h] [rbp-44h]

  v4 = *((_QWORD *)this + 10);
  v5 = a3;
  v6 = a4;
  if ( v4 )
  {
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 3);
    FastRegion::CRegion::BeginIterator((int **)this + 11, (__int64)v25);
    LODWORD(v8) = v30;
    v9 = v29;
    v10 = v28;
    v11 = v27;
    while ( 1 )
    {
LABEL_3:
      if ( v11 >= v26 )
      {
        v6 = a4;
        goto LABEL_9;
      }
      v12 = v11 + 8;
      v13 = *((_QWORD *)this + 10);
      *((float *)&v24 + 1) = (float)*(int *)v11;
      v14 = _mm_cvtsi32_si128(*(_DWORD *)(v11 + 8));
      *(float *)&v24 = (float)*(int *)(v10 + 8LL * v9);
      *(float *)&v15 = (float)*(int *)(v10 + 8LL * v9 + 4);
      *(_BYTE *)(v13 + 52) = 1;
      *(_DWORD *)(v13 + 48) = 0;
      *((_QWORD *)&v24 + 1) = __PAIR64__(_mm_cvtepi32_ps(v14).m128_u32[0], v15);
      *(_OWORD *)(v13 + 32) = v24;
      v16 = ((__int64 (__fastcall *)(_QWORD, void *))v5)(*((_QWORD *)this + 10), a4);
      v17 = v16;
      if ( v16 < 0 )
        break;
      v5 = a3;
      if ( ++v9 >= (int)v8 )
      {
        while ( 1 )
        {
          v10 = v12 + *(int *)(v12 + 4);
          v18 = v12;
          v11 = v12;
          v8 = (*(int *)(v12 + 12) - (__int64)*(int *)(v12 + 4) + 8) >> 3;
          v12 += 8LL;
          if ( (_DWORD)v8 )
            break;
          if ( v18 >= v26 )
            goto LABEL_3;
        }
        v9 = 0;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x8Fu, 0LL);
  }
  else
  {
LABEL_9:
    v19 = *((_QWORD *)this + 9);
    *(_OWORD *)(v19 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 3);
    v20 = ((__int64 (__fastcall *)(_QWORD, void *))v5)(*((_QWORD *)this + 9), v6);
    v17 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x95u, 0LL);
  }
  return v17;
}
