/*
 * XREFs of ?PushTransformForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCMILMatrix@@_N@Z @ 0x18013FF80
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Grow@?$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18007EE50 (-Grow@-$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushTransformForNode(
        const void **this,
        const struct CVisual *a2,
        const struct CMILMatrix *a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  _DWORD *v17; // rcx
  __int64 v18; // r8
  char v19; // r15
  __int64 v20; // rdx
  unsigned int v21; // r12d
  __int64 result; // rax
  void *v23; // r14
  unsigned int v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // r12d
  char v27; // r15
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // esi
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  unsigned int v37; // r15d
  HANDLE ProcessHeap; // rax
  void *v39; // rax
  const void *v40; // rbx
  unsigned int v41; // r12d
  unsigned int v42; // r15d
  unsigned int v43; // r15d
  unsigned int v44; // r12d
  void *v45; // rax
  const void *v46; // r13
  void *v47; // rax
  const void *v48; // r13
  int v49; // eax
  __int32 v50; // xmm2_4
  HANDLE v51; // rax
  __int128 v52; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *((unsigned int *)this + 67);
  v6 = *((unsigned int *)this + 66);
  *(_QWORD *)&v52 = 5LL;
  *((_QWORD *)&v52 + 1) = a2;
  if ( (_DWORD)v6 != (_DWORD)v4 )
  {
    v9 = 64LL;
    goto LABEL_3;
  }
  if ( (unsigned __int64)(2 * v4) > 0xFFFFFFFF )
  {
    v20 = 98LL;
LABEL_15:
    v21 = -2147024362;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v21);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v21);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xCF7u, 0LL);
    return v21;
  }
  v9 = 64LL;
  v41 = 64;
  if ( (unsigned int)(2 * v4) > 0x40 )
    v41 = 2 * v4;
  v42 = 16 * v6;
  if ( (unsigned __int64)(16 * v6) > 0xFFFFFFFF )
  {
    v20 = 101LL;
    goto LABEL_15;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v41 <= 0x10 )
  {
    v21 = -2147024809;
    goto LABEL_67;
  }
  v47 = MIDL_user_allocate(16LL * v41);
  v48 = v47;
  if ( !v47 )
  {
    v21 = -2147024882;
LABEL_67:
    v20 = 104LL;
    goto LABEL_16;
  }
  memcpy_0(v47, this[32], v42);
  operator delete((void *)this[32]);
  this[32] = v48;
  *((_DWORD *)this + 67) = v41;
LABEL_3:
  *((_OWORD *)this[32] + (unsigned int)(*((_DWORD *)this + 66))++) = v52;
  v10 = *((_DWORD *)this + 69);
  if ( v10 <= *((_DWORD *)this + 66) )
    v10 = *((_DWORD *)this + 66);
  *((_DWORD *)this + 69) = v10;
  v11 = *((unsigned int *)this + 72);
  v12 = *((unsigned int *)this + 73);
  if ( (_DWORD)v11 != (_DWORD)v12 )
  {
LABEL_6:
    v13 = (char *)this[35];
    v14 = 68LL * *((unsigned int *)this + 72);
    *(_OWORD *)&v13[v14] = *(_OWORD *)a3;
    *(_OWORD *)&v13[v14 + 16] = *((_OWORD *)a3 + 1);
    *(_OWORD *)&v13[v14 + 32] = *((_OWORD *)a3 + 2);
    *(_OWORD *)&v13[v14 + 48] = *((_OWORD *)a3 + 3);
    *(_DWORD *)&v13[v14 + 64] = *((_DWORD *)a3 + 16);
    v15 = ++*((_DWORD *)this + 72);
    v16 = *((_DWORD *)this + 75);
    if ( v16 <= v15 )
      v16 = *((_DWORD *)this + 72);
    *((_DWORD *)this + 75) = v16;
    if ( v15 )
      v17 = (char *)this[35] + 68 * v15 - 68;
    else
      v17 = &CMILMatrix::Identity;
    v18 = *((unsigned __int8 *)v17 + 65);
    if ( (v18 & 0x20) != 0 || 4 * (v18 & 0xF0) == 0 )
    {
      if ( (v18 & 0x20) != 0 )
      {
        v19 = 1;
        goto LABEL_31;
      }
      COERCE_FLOAT(v50 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(v17[7] & v50) * 61440.0)
                                        + (float)(COERCE_FLOAT(v17[3] & v50) * 61440.0))
                                + COERCE_FLOAT(v17[15] & v50))
                        - 1.0) & v50) < 0.000081380211 )
      {
        v19 = 1;
        LOBYTE(v14) = -16;
      }
      else
      {
        v19 = 0;
        LOBYTE(v14) = 16;
      }
      *((_BYTE *)v17 + 65) = v14 ^ (v18 ^ v14) & 0xCF;
      if ( v19 )
      {
LABEL_31:
        v27 = v19 ^ 1;
        if ( *((_DWORD *)this + 78) == *((_DWORD *)this + 79) )
        {
          v49 = CWatermarkStack<bool,64,2,10>::Grow((__int64)(this + 38), v14, v18, a4, this + 38);
          v26 = v49;
          if ( v49 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x83,
              (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
              (const char *)(unsigned int)v49);
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0xD00u, 0LL);
LABEL_41:
            v35 = *((_DWORD *)this + 72);
            if ( v35 )
              *((_DWORD *)this + 72) = v35 - 1;
            goto LABEL_43;
          }
        }
        *((_BYTE *)this[38] + (unsigned int)(*((_DWORD *)this + 78))++) = v27;
        v28 = *((_DWORD *)this + 81);
        if ( v28 <= *((_DWORD *)this + 78) )
          v28 = *((_DWORD *)this + 78);
        *((_DWORD *)this + 81) = v28;
        if ( a2 )
        {
          v29 = *((_DWORD *)this + 85);
          v30 = *((unsigned int *)this + 84);
          v31 = *((_DWORD *)this + 72);
          if ( (_DWORD)v30 == v29 )
          {
            v32 = 2LL * v29;
            if ( v32 > 0xFFFFFFFF )
            {
              v33 = 98LL;
LABEL_38:
              v26 = -2147024362;
              goto LABEL_39;
            }
            if ( (unsigned int)v32 > 0x40 )
              v9 = (unsigned int)v32;
            v37 = 4 * v30;
            if ( (unsigned __int64)(4 * v30) > 0xFFFFFFFF )
            {
              v33 = 101LL;
              goto LABEL_38;
            }
            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 <= 4 )
            {
              v26 = -2147024809;
              goto LABEL_52;
            }
            ProcessHeap = GetProcessHeap();
            v39 = HeapAlloc(ProcessHeap, 0, 4 * v9);
            v40 = v39;
            if ( !v39 )
            {
              v26 = -2147024882;
LABEL_52:
              v33 = 104LL;
LABEL_39:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v33,
                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                (const char *)v26);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x83,
                (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                (const char *)v26);
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0xD06u, 0LL);
              v34 = *((_DWORD *)this + 78);
              if ( v34 )
                *((_DWORD *)this + 78) = v34 - 1;
              goto LABEL_41;
            }
            memcpy_0(v39, this[41], v37);
            v23 = (void *)this[41];
            if ( v23 )
            {
              v51 = GetProcessHeap();
              HeapFree(v51, 0, v23);
            }
            this[41] = v40;
            *((_DWORD *)this + 85) = v9;
          }
          *((_DWORD *)this[41] + *((unsigned int *)this + 84)) = v31;
          v24 = *((_DWORD *)this + 87);
          if ( v24 <= ++*((_DWORD *)this + 84) )
            v24 = *((_DWORD *)this + 84);
          *((_DWORD *)this + 87) = v24;
        }
        return 0LL;
      }
    }
    v19 = 0;
    goto LABEL_31;
  }
  if ( (unsigned __int64)(2 * v12) > 0xFFFFFFFF )
  {
    v25 = 98LL;
LABEL_27:
    v26 = -2147024362;
    goto LABEL_28;
  }
  v43 = 8;
  if ( (unsigned int)(2 * v12) > 8 )
    v43 = 2 * v12;
  v44 = 68 * v11;
  if ( (unsigned __int64)(68 * v11) > 0xFFFFFFFF )
  {
    v25 = 101LL;
    goto LABEL_27;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v43 <= 0x44 )
  {
    v26 = -2147024809;
  }
  else
  {
    v45 = MIDL_user_allocate(68LL * v43);
    v46 = v45;
    if ( v45 )
    {
      memcpy_0(v45, this[35], v44);
      operator delete((void *)this[35]);
      this[35] = v46;
      *((_DWORD *)this + 73) = v43;
      goto LABEL_6;
    }
    v26 = -2147024882;
  }
  v25 = 104LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v26);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)v26);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x36u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0xCFCu, 0LL);
LABEL_43:
  v36 = *((_DWORD *)this + 66);
  result = v26;
  if ( v36 )
    *((_DWORD *)this + 66) = v36 - 1;
  return result;
}
