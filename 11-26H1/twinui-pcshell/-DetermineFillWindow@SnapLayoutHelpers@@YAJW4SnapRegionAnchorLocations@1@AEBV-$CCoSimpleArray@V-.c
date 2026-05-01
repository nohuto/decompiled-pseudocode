/*
 * XREFs of ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805AB428
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18016BE54 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetAnchorLocationsFromRegion@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W4SnapRegion@@@Z @ 0x1805AB96C (-GetAnchorLocationsFromRegion@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@W4SnapRegion@.c)
 *     ?GetBorderAnchors@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W421@@Z @ 0x1805ABA10 (-GetBorderAnchors@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@W421@@Z.c)
 *     ?HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z @ 0x1805AD2BC (-HasNonComplementaryEdge@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@1@0PEAW4Edge@1@@Z.c)
 *     ?IsBetterFillCandidate@SnapLayoutHelpers@@YA_NAEBUFillCandidate@1@0PEBW4FillRule@1@I@Z @ 0x1805AD350 (-IsBetterFillCandidate@SnapLayoutHelpers@@YA_NAEBUFillCandidate@1@0PEBW4FillRule@1@I@Z.c)
 *     ?WithRule@FillCandidate@SnapLayoutHelpers@@QEAA?AU12@W4FillRule@2@@Z @ 0x1805AD6FC (-WithRule@FillCandidate@SnapLayoutHelpers@@QEAA-AU12@W4FillRule@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SnapLayoutHelpers::DetermineFillWindow(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(_QWORD),
        unsigned __int8 (__fastcall *a4)(_QWORD, _QWORD, char *),
        __int64 a5,
        int a6,
        __int64 *a7)
{
  __int64 v9; // r12
  int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 *v13; // r15
  unsigned __int8 (__fastcall *v14)(_QWORD, _QWORD, char *); // rsi
  __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned int AnchorLocationsFromRegion; // r14d
  __int64 v18; // rdx
  SnapLayoutHelpers *v20; // rax
  const struct SnapLayoutHelpers::FillCandidate *v21; // r8
  const enum SnapLayoutHelpers::FillRule *v22; // r9
  char v23; // bl
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 *v28; // rsi
  unsigned int BorderAnchors; // eax
  __int64 v31; // r8
  int v32; // eax
  char v33; // r8
  int v34; // edx
  SnapLayoutHelpers *v35; // rax
  const struct SnapLayoutHelpers::FillCandidate *v36; // r8
  const enum SnapLayoutHelpers::FillRule *v37; // r9
  bool v38; // bl
  __int64 v39; // rdx
  __int64 v40; // rcx
  SnapLayoutHelpers *v41; // rax
  const struct SnapLayoutHelpers::FillCandidate *v42; // r8
  const enum SnapLayoutHelpers::FillRule *v43; // r9
  char v44; // bl
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // [rsp+20h] [rbp-71h] BYREF
  __int64 v48; // [rsp+28h] [rbp-69h]
  __int64 v49; // [rsp+30h] [rbp-61h] BYREF
  __int64 v50; // [rsp+38h] [rbp-59h] BYREF
  __int64 v51[2]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v52[16]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v53[2]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v54[16]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v55[2]; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v56[64]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v57; // [rsp+E8h] [rbp+57h] BYREF
  unsigned __int8 (__fastcall *v58)(_QWORD, _QWORD, char *); // [rsp+F8h] [rbp+67h]

  v58 = a4;
  v9 = a1;
  v10 = 0;
  a6 = 0;
  v50 = 0LL;
  v49 = 0LL;
  v11 = a7;
  v12 = *a7;
  *a7 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v11[1] = 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
  v47 = 0LL;
  v48 = 0LL;
  v13 = *(__int64 **)a2;
  a5 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v13 == (__int64 *)a5 )
    goto LABEL_50;
  v14 = v58;
  do
  {
    v15 = *v13;
    v57 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
    AnchorLocationsFromRegion = SnapLayoutHelpers::GetAnchorLocationsFromRegion(v16);
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      &v49,
      v15);
    v50 = 0LL;
    if ( (_DWORD)v9 == AnchorLocationsFromRegion )
    {
      if ( !(_DWORD)v9 || ((v9 - 1) & v9) != 0 )
      {
LABEL_13:
        if ( !v14((unsigned int)v9, AnchorLocationsFromRegion, (char *)&v50 + 4)
          || !a3(HIDWORD(v50))
          || (v20 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v49, v55, 3LL),
              v10 |= 4u,
              a6 = v10,
              v23 = 1,
              !SnapLayoutHelpers::IsBetterFillCandidate(
                 v20,
                 (const struct SnapLayoutHelpers::FillCandidate *)&v47,
                 v21,
                 v22,
                 v47)) )
        {
          v23 = 0;
        }
        if ( (v10 & 4) != 0 )
        {
          v10 &= ~4u;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v55);
        }
        if ( v23 )
        {
          v24 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v49, v56, 3LL);
          v25 = *v24;
          *v24 = 0LL;
          v26 = v47;
          v47 = v25;
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          v27 = (__int64 *)v56;
LABEL_23:
          v48 = v24[1];
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v27);
          goto LABEL_24;
        }
        goto LABEL_24;
      }
    }
    else
    {
      BorderAnchors = SnapLayoutHelpers::GetBorderAnchors(
                        AnchorLocationsFromRegion,
                        v18,
                        (unsigned int)v9 & AnchorLocationsFromRegion);
      v32 = SnapLayoutHelpers::GetBorderAnchors((unsigned int)v9, BorderAnchors, v31);
      if ( (v34 & v32) == 0 || (v33 & 0xA) != 0 && (v33 & 5) != 0 )
        goto LABEL_13;
    }
    v38 = 0;
    if ( v14((unsigned int)v9, AnchorLocationsFromRegion, (char *)&v50 + 4) )
    {
      if ( a3(HIDWORD(v50)) )
      {
        v35 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v49, v51, 1LL);
        v10 |= 1u;
        a6 = v10;
        if ( SnapLayoutHelpers::IsBetterFillCandidate(
               v35,
               (const struct SnapLayoutHelpers::FillCandidate *)&v47,
               v36,
               v37,
               v47) )
        {
          v38 = 1;
        }
      }
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v51);
    }
    if ( v38 )
    {
      v24 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v49, v52, 1LL);
      v39 = *v24;
      *v24 = 0LL;
      v40 = v47;
      v47 = v39;
      if ( v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      v27 = (__int64 *)v52;
      goto LABEL_23;
    }
    if ( !(unsigned __int8)SnapLayoutHelpers::HasNonComplementaryEdge(
                             (unsigned int)v9,
                             AnchorLocationsFromRegion,
                             (char *)&v50 + 4)
      || !a3(HIDWORD(v50))
      || (v41 = (SnapLayoutHelpers *)SnapLayoutHelpers::FillCandidate::WithRule(&v49, v53, 2LL),
          v10 |= 2u,
          a6 = v10,
          v44 = 1,
          !SnapLayoutHelpers::IsBetterFillCandidate(
             v41,
             (const struct SnapLayoutHelpers::FillCandidate *)&v47,
             v42,
             v43,
             v47)) )
    {
      v44 = 0;
    }
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v53);
    }
    if ( v44 )
    {
      v24 = (__int64 *)SnapLayoutHelpers::FillCandidate::WithRule(&v49, v54, 2LL);
      v45 = *v24;
      *v24 = 0LL;
      v46 = v47;
      v47 = v45;
      if ( v46 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      v27 = (__int64 *)v54;
      goto LABEL_23;
    }
LABEL_24:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v49);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
    ++v13;
  }
  while ( v13 != (__int64 *)a5 );
  v28 = a7;
  if ( v47 )
  {
    wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(a7, &v47);
    v28[1] = v48;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
    return 0LL;
  }
LABEL_50:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
  return 2147500037LL;
}
