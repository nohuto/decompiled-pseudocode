/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18005FC4C
 * Callers:
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180074020 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?ValidateReportData@HidLampMultiUpdateReportParser@@AEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x1800600C8 (-ValidateReportData@HidLampMultiUpdateReportParser@@AEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x180060120 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        const struct LampMultiUpdateDeviceReport *a2,
        int *a3,
        _DWORD *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rbx
  __int64 v13; // rax
  unsigned __int8 v14; // r8
  __int64 v15; // rdx
  unsigned __int8 *v16; // rcx
  int inserted; // eax
  unsigned int v18; // edi
  int v19; // edi
  __int64 v20; // r11
  const struct std::nothrow_t *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // r10
  __int64 v25; // r9
  unsigned __int8 *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int8 v29; // r10
  __int64 v30; // r8
  unsigned __int8 *v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r8
  unsigned __int8 v34; // r10
  __int64 v35; // r8
  unsigned __int8 *v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r8
  unsigned __int8 v39; // r10
  __int64 v40; // r8
  unsigned __int8 *v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  unsigned __int8 v44; // r10
  __int64 v45; // r8
  unsigned __int8 *v46; // rcx
  void *v47; // rcx
  unsigned __int8 *v48; // rax
  __int64 v50; // rdx
  const struct std::nothrow_t *v51; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // r9
  const struct std::nothrow_t *v54; // rdx
  int v55[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = HidLampMultiUpdateReportParser::ValidateReportData((HidLampMultiUpdateReportParser *)a1, a2);
  v10 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)(unsigned int)v8,
      v55[0]);
    return v10;
  }
  v11 = (unsigned __int8 *)operator new[](*(unsigned int *)(v9 + 20), (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v55 = v11;
  v12 = v11;
  if ( !v11 )
  {
    v18 = -2147024882;
    v52 = 120LL;
LABEL_57:
    v53 = v18;
    goto LABEL_58;
  }
  memset_0(v11, 0, *(unsigned int *)(a1 + 20));
  *v12 = *(_BYTE *)(a1 + 16);
  v13 = *(int *)a2;
  if ( v13 < *(_QWORD *)(a1 + 48) || v13 > *(_QWORD *)(a1 + 56) )
  {
    v52 = 127LL;
LABEL_56:
    v18 = -2147024809;
    goto LABEL_57;
  }
  if ( *(_DWORD *)(a1 + 72) < *(_DWORD *)(a1 + 20) )
  {
    v14 = 1;
    v15 = (unsigned __int64)*(unsigned int *)a2 << *(_DWORD *)(a1 + 68);
    v16 = &v12[*(unsigned int *)(a1 + 80) + 1];
    *v16 = v15;
    if ( *(_DWORD *)(a1 + 64) > 1u )
    {
      do
      {
        ++v16;
        v15 >>= 8;
        ++v14;
        *v16 |= v15;
      }
      while ( (unsigned int)v14 < *(_DWORD *)(a1 + 64) );
    }
  }
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 96),
               *((_DWORD *)a2 + 1),
               *(unsigned int *)(a1 + 20),
               v12);
  v18 = inserted;
  if ( inserted < 0 )
  {
    v53 = (unsigned int)inserted;
    v52 = 128LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v52,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
      (const char *)v53,
      v55[0]);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v55, v54);
    return v18;
  }
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  while ( v19 < *(_DWORD *)a2 )
  {
    v22 = *(_QWORD *)(a1 + 168);
    v23 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 4 * v20);
    if ( (int)v23 < *(_QWORD *)((char *)v21 + v22 + 24) || (int)v23 > *(_QWORD *)((char *)v21 + v22 + 32) )
    {
      v50 = 132LL;
      goto LABEL_54;
    }
    if ( *(_DWORD *)((char *)v21 + v22 + 48) < *(_DWORD *)(a1 + 20) )
    {
      v24 = 1;
      v25 = v23 << *(_DWORD *)((char *)v21 + v22 + 44);
      v26 = &v12[*(unsigned int *)((char *)v21 + v22 + 56) + 1];
      *v26 = v25;
      if ( *(_DWORD *)((char *)v21 + v22 + 40) > 1u )
      {
        do
        {
          ++v26;
          v25 >>= 8;
          ++v24;
          *v26 |= v25;
        }
        while ( (unsigned int)v24 < *(_DWORD *)((char *)v21 + v22 + 40) );
      }
    }
    if ( *(_BYTE *)(a1 + 324) )
    {
      v27 = *(_QWORD *)(a1 + 200);
      v28 = *(unsigned __int8 *)(*((_QWORD *)a2 + 2) + v20);
      if ( v28 < *(_QWORD *)((char *)v21 + v27 + 24) || v28 > *(_QWORD *)((char *)v21 + v27 + 32) )
      {
        v50 = 136LL;
LABEL_54:
        v18 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v50,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportparser.cpp",
          (const char *)0x80070057LL,
          v55[0]);
        operator delete(v12, v51);
        return v18;
      }
      if ( *(_DWORD *)((char *)v21 + v27 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v29 = 1;
        v30 = v28 << *(_DWORD *)((char *)v21 + v27 + 44);
        v31 = &v12[*(unsigned int *)((char *)v21 + v27 + 56) + 1];
        *v31 = v30;
        if ( *(_DWORD *)((char *)v21 + v27 + 40) > 1u )
        {
          do
          {
            ++v31;
            v30 >>= 8;
            ++v29;
            *v31 |= v30;
          }
          while ( (unsigned int)v29 < *(_DWORD *)((char *)v21 + v27 + 40) );
        }
      }
    }
    if ( *(_BYTE *)(a1 + 325) )
    {
      v32 = *(_QWORD *)(a1 + 232);
      v33 = *(unsigned __int8 *)(*((_QWORD *)a2 + 3) + v20);
      if ( v33 < *(_QWORD *)((char *)v21 + v32 + 24) || v33 > *(_QWORD *)((char *)v21 + v32 + 32) )
      {
        v52 = 141LL;
        goto LABEL_56;
      }
      if ( *(_DWORD *)((char *)v21 + v32 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v34 = 1;
        v35 = v33 << *(_DWORD *)((char *)v21 + v32 + 44);
        v36 = &v12[*(unsigned int *)((char *)v21 + v32 + 56) + 1];
        *v36 = v35;
        if ( *(_DWORD *)((char *)v21 + v32 + 40) > 1u )
        {
          do
          {
            ++v36;
            v35 >>= 8;
            ++v34;
            *v36 |= v35;
          }
          while ( (unsigned int)v34 < *(_DWORD *)((char *)v21 + v32 + 40) );
        }
      }
    }
    if ( *(_BYTE *)(a1 + 326) )
    {
      v37 = *(_QWORD *)(a1 + 264);
      v38 = *(unsigned __int8 *)(*((_QWORD *)a2 + 4) + v20);
      if ( v38 < *(_QWORD *)((char *)v21 + v37 + 24) || v38 > *(_QWORD *)((char *)v21 + v37 + 32) )
      {
        v52 = 146LL;
        goto LABEL_56;
      }
      if ( *(_DWORD *)((char *)v21 + v37 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v39 = 1;
        v40 = v38 << *(_DWORD *)((char *)v21 + v37 + 44);
        v41 = &v12[*(unsigned int *)((char *)v21 + v37 + 56) + 1];
        *v41 = v40;
        if ( *(_DWORD *)((char *)v21 + v37 + 40) > 1u )
        {
          do
          {
            ++v41;
            v40 >>= 8;
            ++v39;
            *v41 |= v40;
          }
          while ( (unsigned int)v39 < *(_DWORD *)((char *)v21 + v37 + 40) );
        }
      }
    }
    if ( *(_BYTE *)(a1 + 327) )
    {
      v42 = *(_QWORD *)(a1 + 296);
      v43 = *(unsigned __int8 *)(*((_QWORD *)a2 + 5) + v20);
      if ( v43 < *(_QWORD *)((char *)v21 + v42 + 24) || v43 > *(_QWORD *)((char *)v21 + v42 + 32) )
      {
        v52 = 151LL;
        goto LABEL_56;
      }
      if ( *(_DWORD *)((char *)v21 + v42 + 48) < *(_DWORD *)(a1 + 20) )
      {
        v44 = 1;
        v45 = v43 << *(_DWORD *)((char *)v21 + v42 + 44);
        v46 = &v12[*(unsigned int *)((char *)v21 + v42 + 56) + 1];
        *v46 = v45;
        if ( *(_DWORD *)((char *)v21 + v42 + 40) > 1u )
        {
          do
          {
            ++v46;
            v45 >>= 8;
            ++v44;
            *v46 |= v45;
          }
          while ( (unsigned int)v44 < *(_DWORD *)((char *)v21 + v42 + 40) );
        }
      }
    }
    ++v19;
    ++v20;
    v21 = (const struct std::nothrow_t *)((char *)v21 + 72);
  }
  if ( a3 != v55 )
  {
    v47 = *(void **)a3;
    v48 = v12;
    v12 = 0LL;
    *(_QWORD *)a3 = v48;
    if ( v47 )
      operator delete(v47, v21);
  }
  *a4 = *(_DWORD *)(a1 + 20);
  if ( v12 )
    operator delete(v12, v21);
  return 0LL;
}
