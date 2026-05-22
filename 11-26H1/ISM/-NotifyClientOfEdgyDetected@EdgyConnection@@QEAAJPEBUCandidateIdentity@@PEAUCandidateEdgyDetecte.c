/*
 * XREFs of ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x1801AC8F4
 * Callers:
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1801B02C4 (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180159800 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EdgyConnection::NotifyClientOfEdgyDetected(
        EdgyConnection *this,
        const struct CandidateIdentity *a2,
        struct CandidateEdgyDetectedInfo *a3,
        const struct EdgyPointerInfo *a4,
        const struct EdgyPointerInfo *a5)
{
  bool v5; // zf
  const unsigned __int16 *v6; // r10
  unsigned __int64 *v9; // rsi
  __m128 v11; // xmm6
  __m128 v12; // xmm7
  __m128 v13; // xmm8
  __m128 v14; // xmm9
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+28h] [rbp-71h]
  __int64 v21; // [rsp+58h] [rbp-41h] BYREF
  int v22; // [rsp+60h] [rbp-39h]
  unsigned __int64 v23; // [rsp+64h] [rbp-35h]
  int v24; // [rsp+6Ch] [rbp-2Dh]
  __int64 v25; // [rsp+70h] [rbp-29h]
  unsigned __int64 v26; // [rsp+78h] [rbp-21h]
  unsigned __int64 v27; // [rsp+80h] [rbp-19h]
  int v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+8Ch] [rbp-Dh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+57h]
  struct D2D_VECTOR_2F v31; // [rsp+108h] [rbp+6Fh] BYREF

  v5 = *(_BYTE *)a3 == 0;
  v6 = (const unsigned __int16 *)a2;
  v11 = 0LL;
  v12 = 0LL;
  v9 = (unsigned __int64 *)((char *)a5 + 24);
  v13 = 0LL;
  v14 = 0LL;
  v11.m128_f32[0] = (float)*((int *)a4 + 3);
  v12.m128_f32[0] = (float)*((int *)a4 + 4);
  v13.m128_f32[0] = (float)*((int *)a5 + 3);
  v14.m128_f32[0] = (float)*((int *)a5 + 4);
  v31.x = v11.m128_f32[0];
  LODWORD(v31.y) = v12.m128_i32[0];
  *((float *)&a5 + 1) = v14.m128_f32[0];
  LODWORD(a5) = v13.m128_i32[0];
  if ( !v5 )
  {
    if ( *((_QWORD *)a2 + 3) > 7uLL )
      v6 = *(const unsigned __int16 **)a2;
    BamoEdgyControllerClientProxy::EdgyGestureDetected(
      (BamoEdgyControllerClientProxy *)(*((_QWORD *)a3 + 2) + 8LL),
      v6,
      *(_DWORD *)a4,
      &v31,
      *((_QWORD *)a4 + 3),
      (const struct D2D_VECTOR_2F *)&a5,
      *v9,
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 7));
  }
  if ( *((_BYTE *)a3 + 1) )
  {
    v15 = *((_QWORD *)this + 2);
    v16 = *((_QWORD *)this + 7);
    v21 = *((_QWORD *)a3 + 9);
    v22 = *(_DWORD *)a4;
    v24 = 0;
    v25 = *((_QWORD *)a4 + 3);
    v27 = *v9;
    v17 = *((_DWORD *)a3 + 12);
    v23 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
    v28 = v17;
    v29 = 0;
    v26 = _mm_unpacklo_ps(v13, v14).m128_u64[0];
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v15 + 184LL))(
            v15,
            v16,
            &v21,
            56LL);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1A4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v18,
        v20);
  }
  return 0LL;
}
