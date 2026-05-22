/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014F14C
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD10 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x180150A20 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180150F14 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180151390 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180014B50 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$As@UIDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800409F0 (--$As@UIDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     ??$As@UIManualDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005B838 (--$As@UIManualDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18014BFDC (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x18014C070 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDropTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x18014C104 (--$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18014DBD4 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014F080 (-HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801A1F30 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A4EEC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DragNDropProcessor::HitTest(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        unsigned __int8 *a6,
        struct tagPOINT *a7,
        __int64 *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        __int64 *a13,
        __int64 *a14)
{
  unsigned int v14; // r14d
  bool *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 *v24; // r14
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rax
  __int64 (__fastcall ***v38)(_QWORD); // rbx
  __int64 (__fastcall ***v39)(_QWORD); // r15
  __m128i v40; // xmm6
  __int64 (__fastcall ***v41)(_QWORD); // rbx
  __int64 (__fastcall ***v42)(_QWORD); // r15
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 (__fastcall ***v45)(_QWORD); // rbx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rbx
  __int64 *v49; // r14
  __int64 *v50; // r12
  _QWORD *v51; // r13
  __int64 *v52; // rbx
  _QWORD *v53; // r15
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  struct tagPOINT PositionRelativeToSite; // rax
  unsigned int ProcessId; // eax
  __int64 v60; // [rsp+38h] [rbp-D0h] BYREF
  GUID v61; // [rsp+40h] [rbp-C8h]
  __int64 *v62; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***Buf1)(_QWORD); // [rsp+58h] [rbp-B0h] BYREF
  GUID Buf1_8; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v65)(_QWORD); // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall ***v66)(_QWORD); // [rsp+78h] [rbp-90h] BYREF
  __int64 *v67; // [rsp+80h] [rbp-88h]
  struct tagPOINT *v68; // [rsp+88h] [rbp-80h]
  _QWORD *v69; // [rsp+90h] [rbp-78h]
  __int64 *v70; // [rsp+98h] [rbp-70h]
  _QWORD *v71; // [rsp+A0h] [rbp-68h]
  __int64 *v72; // [rsp+A8h] [rbp-60h]
  _QWORD *v73; // [rsp+B0h] [rbp-58h]
  _QWORD *v74; // [rsp+B8h] [rbp-50h]
  _QWORD *v75; // [rsp+C0h] [rbp-48h]
  bool v76[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-38h]
  __int128 v78; // [rsp+128h] [rbp+20h]
  __int64 v79; // [rsp+138h] [rbp+30h]
  _BYTE v80[128]; // [rsp+148h] [rbp+40h] BYREF

  v74 = a4;
  v14 = a3;
  v16 = (bool *)a6;
  v68 = a7;
  v67 = a8;
  v69 = a9;
  v73 = a10;
  v71 = a12;
  v62 = a13;
  v72 = a14;
  v17 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a1, a3);
  v19 = 0;
  v76[0] = 0;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v20 = 0;
  if ( !a6 || (v21 = *a6) == 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, _QWORD))(**(_QWORD **)(v18 + 24) + 32LL))(
            *(_QWORD *)(v18 + 24),
            v80,
            a2,
            v17);
    HitTestResult::operator=((__int64)v76, v22);
    HitTestResult::~HitTestResult((HitTestResult *)v80);
    v16 = v76;
    v20 = 1;
    v21 = v76[0];
  }
  InputETW::DragNDrop::HitTest(a2, v14, v20, v21);
  if ( *v16 )
  {
    v23 = *((_QWORD *)v16 + 13);
    if ( a11 && a12 )
    {
      Buf1_8 = GUID_NULL;
      v24 = *(__int64 **)(v23 - 24);
      v25 = *(__int64 **)(v23 - 16);
      v70 = v25;
      v61 = GUID_NULL;
      while ( v24 != v25 )
      {
        if ( !memcmp_0(&Buf1_8, &GUID_NULL, 0x10uLL) )
        {
          v26 = *v24;
          if ( a5 )
          {
            v27 = 0LL;
            v60 = 0LL;
            v28 = *(_QWORD *)(v26 + 488);
            v29 = *(_QWORD *)(v26 + 496);
            if ( v28 != v29 )
            {
              do
              {
                if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IManualDragAreaClientProxy>(
                            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v28 + 8),
                            &v60) >= 0 )
                  break;
                v28 += 16LL;
              }
              while ( v28 != v29 );
              v27 = v60;
            }
            if ( (-(__int64)(v27 != 0) & (v27 - 8)) != 0 )
            {
              if ( !v27 )
                v27 = 8LL;
              v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
              Buf1_8 = *(GUID *)v30;
              *(_QWORD *)v61.Data4 = *(_QWORD *)(v30 + 8);
              *(_QWORD *)&v61.Data1 = *(_QWORD *)&Buf1_8.Data1;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
          }
          else
          {
            v31 = 0LL;
            v60 = 0LL;
            v32 = *(_QWORD *)(v26 + 488);
            v33 = *(_QWORD *)(v26 + 496);
            if ( v32 != v33 )
            {
              do
              {
                if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IDragAreaClientProxy>(
                            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v32 + 8),
                            &v60) >= 0 )
                  break;
                v32 += 16LL;
              }
              while ( v32 != v33 );
              v31 = v60;
            }
            v34 = v31 - 8;
            v35 = -v31;
            v36 = (_QWORD *)(v34 & -(__int64)(v35 != 0));
            v75 = v36;
            if ( v36 )
              (*(void (__fastcall **)(__int64))*v36)(v34 & -(__int64)(v35 != 0));
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v60);
            if ( v36 )
            {
              v37 = (*(__int64 (__fastcall **)(_QWORD *))(v36[1] + 24LL))(v36 + 1);
              Buf1_8 = *(GUID *)v37;
              *(_QWORD *)v61.Data4 = *(_QWORD *)(v37 + 8);
              *(_QWORD *)&v61.Data1 = *(_QWORD *)&Buf1_8.Data1;
              (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
            }
          }
          if ( !memcmp_0(&Buf1_8, &GUID_NULL, 0x10uLL) && !a5 )
          {
            InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v24, (__int64 *)&v65);
            v38 = v65;
            if ( v65 )
            {
              v39 = v65 + 1;
              if ( !(unsigned int)v65[1][5](v65 + 1) || (unsigned int)(*v39)[5](v38 + 1) == 2 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v65);
                *a11 = v38;
                v40 = *(__m128i *)(*v39)[3](v38 + 1);
                Buf1_8 = (GUID)v40;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v24);
                *v62 = *v24;
                *(_QWORD *)v61.Data4 = _mm_srli_si128(v40, 8).m128i_u64[0];
                *(_QWORD *)&v61.Data1 = v40.m128i_i64[0];
              }
            }
            if ( v38 )
            {
              v65 = 0LL;
              (*v38)[1](v38);
            }
          }
        }
        if ( memcmp_0(&Buf1_8, &GUID_NULL, 0x10uLL) )
        {
          if ( *a11 )
            goto LABEL_49;
          InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v24, (__int64 *)&v66);
          v41 = v66;
          if ( v66 )
          {
            v42 = v66 + 1;
            if ( (unsigned int)v66[1][5](v66 + 1) == 1 || (unsigned int)(*v42)[5](v41 + 1) == 2 )
            {
              v43 = (_QWORD *)(*v42)[3](v41 + 1);
              v44 = *v43 - *(_QWORD *)&v61.Data1;
              if ( *v43 == *(_QWORD *)&v61.Data1 )
                v44 = v43[1] - *(_QWORD *)v61.Data4;
              if ( !v44 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v66);
                *a11 = v41;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v24);
                *v62 = *v24;
              }
            }
          }
          if ( v41 )
          {
            v66 = 0LL;
            (*v41)[1](v41);
          }
          if ( *a11 )
          {
LABEL_49:
            InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v24, (__int64 *)&Buf1);
            v45 = Buf1;
            if ( Buf1 )
            {
              v46 = (_QWORD *)Buf1[1][10](Buf1 + 1);
              v47 = *v46 - *(_QWORD *)&v61.Data1;
              if ( *v46 == *(_QWORD *)&v61.Data1 )
                v47 = v46[1] - *(_QWORD *)v61.Data4;
              if ( !v47 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&Buf1);
                *v71 = v45;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v24);
                *v72 = *v24;
                Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&Buf1);
                break;
              }
            }
            Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&Buf1);
          }
        }
        ++v24;
        v25 = v70;
      }
    }
    v48 = v73;
    if ( v73 )
      *v48 = (unsigned int)InputSiteManager::GetViewInstanceIdFromInputSiteList(v23 - 24);
    if ( v68 && v67 && v69 )
    {
      v49 = *(__int64 **)(v23 - 24);
      v50 = *(__int64 **)(v23 - 16);
      v51 = v74;
      while ( v49 != v50 )
      {
        InputSite::GetAttachedObject<IDropTargetClientProxy,BamoDropTargetClientProxy>(*v49, &v62);
        v52 = v62;
        if ( v62 )
        {
          v53 = v62 + 1;
          v54 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(v62[1] + 32))(v62 + 1);
          v55 = *v54 - *v51;
          if ( *v54 == *v51 )
            v55 = v54[1] - v51[1];
          if ( !v55 )
          {
            v56 = (*(__int64 (__fastcall **)(__int64 *))(*v53 + 24LL))(v52 + 1);
            *v67 = v56;
            PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite((struct InputSite *)*v49, a2);
            *v68 = PositionRelativeToSite;
            ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(v52[4] + 16));
            *v69 = ProcessId;
            (*(void (__fastcall **)(__int64 *))(*v52 + 8))(v52);
            break;
          }
        }
        if ( v52 )
        {
          v62 = 0LL;
          (*(void (__fastcall **)(__int64 *))(*v52 + 8))(v52);
        }
        ++v49;
      }
    }
  }
  else
  {
    v19 = -2147467259;
  }
  HitTestResult::~HitTestResult((HitTestResult *)v76);
  return v19;
}
