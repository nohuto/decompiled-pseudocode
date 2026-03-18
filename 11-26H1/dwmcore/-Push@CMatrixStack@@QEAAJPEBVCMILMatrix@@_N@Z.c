/*
 * XREFs of ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800D4BB0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D2B38 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800D436C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18007ECC0 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CMatrixStack::Push(CMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  unsigned int v20; // r15d
  HANDLE ProcessHeap; // rax
  void *v22; // rax
  void *v23; // rdi
  void *v24; // r15
  HANDLE v25; // rax
  int v26; // eax
  unsigned int v27; // edi
  __m128 v28[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v29; // [rsp+70h] [rbp-78h]
  _OWORD v30[4]; // [rsp+80h] [rbp-68h] BYREF
  int v31; // [rsp+C0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = *((unsigned int *)this + 2);
  if ( !(_DWORD)v3 || !a3 )
  {
    v6 = *((unsigned int *)this + 3);
    if ( (_DWORD)v3 != (_DWORD)v6 )
    {
LABEL_4:
      v7 = *(_QWORD *)this + 68LL * *((unsigned int *)this + 2);
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v7 + 48) = *((_OWORD *)a2 + 3);
      *(_DWORD *)(v7 + 64) = *((_DWORD *)a2 + 16);
      ++*((_DWORD *)this + 2);
      v8 = *((_DWORD *)this + 5);
      if ( v8 <= *((_DWORD *)this + 2) )
        v8 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 5) = v8;
      return 0LL;
    }
    if ( (unsigned __int64)(2 * v6) <= 0xFFFFFFFF )
    {
      v19 = 8;
      if ( (unsigned int)(2 * v6) > 8 )
        v19 = 2 * v6;
      v20 = 68 * v3;
      if ( (unsigned __int64)(68 * v3) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v19 <= 0x44 )
        {
          v18 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v22 = HeapAlloc(ProcessHeap, 0, 68LL * v19);
          v23 = v22;
          if ( v22 )
          {
            memcpy_0(v22, *(const void **)this, v20);
            v24 = *(void **)this;
            if ( *(_QWORD *)this )
            {
              v25 = GetProcessHeap();
              HeapFree(v25, 0, v24);
            }
            *(_QWORD *)this = v23;
            *((_DWORD *)this + 3) = v19;
            goto LABEL_4;
          }
          v18 = -2147024882;
        }
        v17 = 104LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v18);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v18);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x36u, 0LL);
        return v18;
      }
      v17 = 101LL;
    }
    else
    {
      v17 = 98LL;
    }
    v18 = -2147024362;
    goto LABEL_14;
  }
  v29 = 0;
  v31 = 0;
  v10 = (unsigned int)(v3 - 1);
  v11 = *(_QWORD *)this;
  v28[0] = *(__m128 *)(68 * v10 + *(_QWORD *)this);
  v28[1] = *(__m128 *)(68 * v10 + v11 + 16);
  v28[2] = *(__m128 *)(68 * v10 + v11 + 32);
  v28[3] = *(__m128 *)(68 * v10 + v11 + 48);
  v29 = *(_DWORD *)(68 * v10 + v11 + 64);
  CMILMatrix::Multiply(a2, v28, (struct CMILMatrix *)v30);
  if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3)
    && (v26 = CWatermarkStack<CMILMatrix,8,2,8>::Grow((__int64)this, v12, v13, v14, (const void **)this),
        v27 = v26,
        v26 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v26);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x45u, 0LL);
    return v27;
  }
  else
  {
    v15 = *(_QWORD *)this + 68LL * *((unsigned int *)this + 2);
    *(_OWORD *)v15 = v30[0];
    *(_OWORD *)(v15 + 16) = v30[1];
    *(_OWORD *)(v15 + 32) = v30[2];
    *(_OWORD *)(v15 + 48) = v30[3];
    *(_DWORD *)(v15 + 64) = v31;
    ++*((_DWORD *)this + 2);
    v16 = *((_DWORD *)this + 5);
    if ( v16 <= *((_DWORD *)this + 2) )
      v16 = *((_DWORD *)this + 2);
    result = 0LL;
    *((_DWORD *)this + 5) = v16;
  }
  return result;
}
