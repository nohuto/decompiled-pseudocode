/*
 * XREFs of MiPerformFixups @ 0x14099FD30
 * Callers:
 *     MiRevertRelocations @ 0x14099F750 (MiRevertRelocations.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 *     MiRevertRelocatedImagePfn @ 0x1409A0624 (MiRevertRelocatedImagePfn.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiApplyStraddleFixups @ 0x140461280 (MiApplyStraddleFixups.c)
 *     MiIsRetpolineEnabled @ 0x1404793CC (MiIsRetpolineEnabled.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     MiApplyDynamicRelocationFixups @ 0x14047A8A8 (MiApplyDynamicRelocationFixups.c)
 *     MiApplyCompressedFixups @ 0x1409A0100 (MiApplyCompressedFixups.c)
 *     RtlApplyFunctionOverrideFixups @ 0x1409A02CC (RtlApplyFunctionOverrideFixups.c)
 *     MiApplyRawFixups @ 0x1409A087C (MiApplyRawFixups.c)
 */

__int64 __fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        __int64 *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  ULONG_PTR v6; // r10
  unsigned int v8; // edi
  __int64 v10; // r12
  __int64 result; // rax
  __int128 *v12; // rbp
  __int64 v13; // r8
  unsigned int v14; // r13d
  int v15; // ecx
  int v16; // r14d
  bool v17; // al
  unsigned __int64 v18; // rbx
  unsigned __int16 *v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // r8
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  _DWORD *v31; // rcx
  unsigned __int8 v32; // bp
  char v33; // al
  int v34; // r9d
  __int128 v35; // xmm2
  __int64 v36; // xmm1_8
  __int128 v37; // xmm0
  unsigned int v38; // ebp
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // [rsp+30h] [rbp-88h]
  __int64 v42; // [rsp+38h] [rbp-80h]
  __int128 *v43; // [rsp+40h] [rbp-78h]
  __int128 v44; // [rsp+48h] [rbp-70h] BYREF
  __int64 v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  __int128 v47; // [rsp+68h] [rbp-50h]
  __int64 v48; // [rsp+78h] [rbp-40h]
  unsigned __int16 *v49; // [rsp+C0h] [rbp+8h]
  bool v51; // [rsp+E8h] [rbp+30h]

  v6 = (ULONG_PTR)BugCheckParameter2;
  v8 = a3;
  v10 = *(_QWORD *)((BugCheckParameter2[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  result = a6;
  if ( (a6 & 1) != 0 && a3 < *(_DWORD *)(v10 + 56) )
  {
    v12 = *(__int128 **)(v10 + 88);
    v13 = *(_QWORD *)(v10 + 96);
    v14 = a6 & 0xFFFFFFFE;
    v43 = v12;
    v41 = v13;
    if ( a4 )
      v14 = a6;
    v42 = *BugCheckParameter2;
    v15 = v14 & 1;
    v16 = v8 << 12;
    while ( 1 )
    {
      v49 = 0LL;
      v17 = 0;
      v51 = 0;
      v18 = 0LL;
      v19 = 0LL;
      if ( v15 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)v10 + 8LL * v8);
        if ( v12 )
        {
          v19 = (unsigned __int16 *)*((_QWORD *)v12 + v8 + 8);
          v17 = 0;
          v49 = v19;
        }
        else
        {
          v17 = 0;
        }
      }
      if ( v13 )
      {
        v20 = *(unsigned int *)(v13 + 32);
        if ( v8 >= (unsigned int)v20 && (v21 = *(_DWORD *)(v13 + 36), v8 <= v21) )
        {
          v27 = *(_QWORD *)(v13 + 24);
          v28 = v21 - v20 + 1;
          v29 = v28;
          if ( !v27 && v28 || (v30 = v8 - (unsigned int)v20, v30 >= v29) )
          {
            gsl::details::terminate((gsl::details *)v29, v20);
            __debugbreak();
          }
          v22 = *(_QWORD *)(v27 + 8 * v30);
          v13 = v41;
        }
        else
        {
          v22 = 0LL;
        }
        v17 = v22 != 0;
        v51 = v17;
      }
      if ( v18 )
      {
        if ( v18 > 1 )
        {
          if ( *(_BYTE *)(v10 + 64) )
            MiApplyCompressedFixups(v6, BugCheckParameter3);
          else
            MiApplyRawFixups(v6);
        }
        if ( (v18 & 1) != 0 )
          MiApplyStraddleFixups(v10, (char *)BugCheckParameter3, v16, a4, a5, v14);
        v19 = v49;
LABEL_22:
        v23 = *(_QWORD *)(v42 + 32);
        if ( (v14 & 4) != 0 )
        {
          v26 = a5;
          if ( (v14 & 8) == 0 )
            v26 = a4;
          v24 = v23 + v26;
        }
        else
        {
          v24 = v23 + a4;
          if ( (v14 & 8) == 0 )
            v24 = *(_QWORD *)(v42 + 32);
        }
        if ( v19 )
        {
          v35 = v12[1];
          v36 = *((_QWORD *)v12 + 6);
          v44 = *v12;
          v37 = v12[2];
          v38 = v14;
          v39 = v35;
          v48 = v36;
          if ( a5 )
            v39 = 0LL;
          v46 = *((_QWORD *)&v35 + 1);
          v45 = v39;
          v47 = v37;
          if ( !MiIsRetpolineEnabled() && !v40 )
            v38 = v14 | 8;
          if ( (unsigned int)MiGetSystemRegionType(v24) != 11 )
            v38 |= 8u;
          MiApplyDynamicRelocationFixups(BugCheckParameter3, v16, (int)&v44, v49, v38);
        }
        if ( v51 )
        {
          v32 = 0;
          if ( MmIsUserAddress(v24) )
            goto LABEL_45;
          if ( (unsigned int)MiGetSystemRegionType(v24) == 11 )
          {
            v33 = 1;
          }
          else
          {
            v32 = 1;
LABEL_45:
            v33 = 0;
          }
          v34 = v32;
          if ( (v14 & 0xC) != 0 )
            v34 = 1;
          RtlApplyFunctionOverrideFixups(v41, v8, BugCheckParameter3, v34, v33);
        }
        v15 = v14 & 1;
        if ( (v14 & 1) != 0 )
        {
          v25 = *(_DWORD *)(v10 + 60);
          if ( (v25 & 0xFFFFF000) == v16 )
          {
            v31 = (_DWORD *)(BugCheckParameter3 + (v25 & 0xFFF));
            if ( _bittest16((const signed __int16 *)(v42 + 12), 0xFu) )
              *v31 += a4;
            else
              *(_QWORD *)v31 += a4;
          }
          v15 = v14 & 1;
        }
        result = 4096LL;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v13 = v41;
        v6 = (ULONG_PTR)BugCheckParameter2;
        ++v8;
        v12 = v43;
        v16 += 4096;
      }
      else
      {
        if ( v19 || v17 )
          goto LABEL_22;
        result = 4096LL;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v15 = v14 & 1;
        ++v8;
        v16 += 4096;
      }
    }
  }
  return result;
}
