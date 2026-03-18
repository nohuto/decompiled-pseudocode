/*
 * XREFs of ??0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderingEffect@@$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@V?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@@Z @ 0x180185630
 * Callers:
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18000FC50 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CReconstructableDrawListEntry::CReconstructableDrawListEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rcx
  int v11; // eax
  _OWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v16; // rsi
  int v17; // r10d
  _DWORD *v18; // rcx
  int v19; // xmm1_4
  int v20; // xmm0_4
  int v21; // xmm1_4
  int v22; // xmm0_4
  unsigned int i; // r8d
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  float *v26; // r9
  float v27; // xmm4_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm9_4
  float v31; // xmm8_4
  float v32; // xmm10_4
  float v33; // xmm11_4
  float v34; // xmm13_4
  float v35; // xmm15_4
  float v36; // xmm14_4
  float v37; // xmm12_4
  float v38; // xmm3_4
  float v39; // xmm0_4
  int v41; // [rsp+20h] [rbp-F8h]
  float v42; // [rsp+20h] [rbp-F8h]
  _DWORD v43[10]; // [rsp+28h] [rbp-F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  float v45; // [rsp+120h] [rbp+8h]
  float v46; // [rsp+128h] [rbp+10h]
  float v47; // [rsp+130h] [rbp+18h]
  float v48; // [rsp+138h] [rbp+20h]
  float v49; // [rsp+140h] [rbp+28h]

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CDrawListEntry::`vftable';
  v8 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 16) = v8;
  v9 = *(void (__fastcall ****)(_QWORD))a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a2;
  if ( v9 )
    (**v9)(v9);
  v10 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v11 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 64) = v11;
  v12 = *(_OWORD **)(a2 + 32);
  if ( v12 )
    *(_OWORD *)(a1 + 48) = *v12;
  v13 = *(_QWORD **)(a2 + 40);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 68) = *v13;
    *(_DWORD *)(a1 + 64) = v11 | 0x100;
  }
  *(_QWORD *)a1 = &CReconstructableDrawListEntry::`vftable';
  *(_QWORD *)(a1 + 80) = a3;
  if ( a3 && _InterlockedAdd((volatile signed __int32 *)(a3 + 8), 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v41);
  v14 = *(_QWORD *)(a1 + 24);
  v16 = *a5;
  *(_QWORD *)(a1 + 88) = *a5;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 104);
  *(_BYTE *)(a1 + 100) = *(_BYTE *)(a2 + 109);
  *(_BYTE *)(a1 + 101) = *(_BYTE *)(a2 + 110);
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
  if ( v17 )
  {
    v18 = *(_DWORD **)(a2 + 80);
    if ( v18 )
    {
      v19 = v18[1];
      v43[0] = *v18;
      v20 = v18[3];
      v43[1] = v19;
      v43[3] = v18[2];
      v21 = v18[4];
      v43[4] = v20;
      v22 = v18[5];
      v43[6] = v21;
      v43[7] = v22;
      v43[2] = 0;
      v43[5] = 0;
      v43[8] = 1065353216;
    }
    for ( i = 0; i < v16; ++i )
    {
      if ( _bittest(&v17, i) )
      {
        if ( i >= v16 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v24 = a5[1];
        v25 = 56LL * i;
        v26 = (float *)((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL));
        if ( v26 )
        {
          v27 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 4);
          v28 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 8);
          v29 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 0x10);
          v30 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 0x14);
          v31 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 0xC);
          v32 = *(float *)(v25 + v24);
          v33 = *(float *)(v25 + v24 + 12);
          v34 = *(float *)(v25 + v24 + 24);
          v35 = *(float *)(v25 + v24 + 4);
          v36 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 0x18);
          v37 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 0x1C);
          v49 = *(float *)(v25 + v24 + 28);
          v47 = *(float *)(v25 + v24 + 32);
          v46 = *(float *)(v25 + v24 + 8);
          v45 = *(float *)(v25 + v24 + 20);
          v42 = *(float *)(((unsigned __int64)v43 & -(__int64)(*(_QWORD *)(a2 + 80) != 0LL)) + 0x20);
          v48 = *(float *)(v25 + v24 + 16);
          v38 = (float)(v48 * v27) + (float)(v35 * *v26);
          v39 = v46 * *v26;
          *(float *)(v25 + a1 + 104) = (float)((float)(v33 * v27) + (float)(v32 * *v26)) + (float)(v34 * v28);
          *(float *)(a1 + v25 + 108) = v38 + (float)(v49 * v28);
          *(float *)(a1 + v25 + 112) = (float)((float)(v45 * v27) + v39) + (float)(v47 * v28);
          *(float *)(a1 + v25 + 116) = (float)((float)(v33 * v29) + (float)(v32 * v31)) + (float)(v34 * v30);
          *(float *)(a1 + v25 + 120) = (float)((float)(v48 * v29) + (float)(v35 * v31)) + (float)(v49 * v30);
          *(float *)(a1 + v25 + 124) = (float)((float)(v45 * v29) + (float)(v46 * v31)) + (float)(v47 * v30);
          *(float *)(a1 + v25 + 128) = (float)((float)(v33 * v37) + (float)(v32 * v36)) + (float)(v34 * v42);
          *(float *)(a1 + v25 + 132) = (float)((float)(v48 * v37) + (float)(v35 * v36)) + (float)(v49 * v42);
          *(float *)(a1 + v25 + 136) = (float)((float)(v45 * v37) + (float)(v46 * v36)) + (float)(v47 * v42);
          v16 = *a5;
        }
        else
        {
          *(_OWORD *)(v25 + a1 + 104) = *(_OWORD *)(v25 + v24);
          *(_OWORD *)(v25 + a1 + 120) = *(_OWORD *)(v25 + v24 + 16);
          *(_DWORD *)(v25 + a1 + 136) = *(_DWORD *)(v25 + v24 + 32);
        }
        *(_BYTE *)(a1 + v25 + 156) = *(_BYTE *)(v25 + v24 + 52);
        if ( *(_BYTE *)(v25 + v24 + 52) )
          *(_OWORD *)(a1 + v25 + 140) = *(_OWORD *)(v25 + v24 + 36);
      }
    }
  }
  return a1;
}
