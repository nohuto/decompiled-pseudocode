/*
 * XREFs of ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014EDFC
 * Callers:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180150F14 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18014BFDC (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x18014C070 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014EBD8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014ED30 (-GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801A1F30 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall DragNDropProcessor::GetDragSourceInputSite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6)
{
  unsigned int v7; // esi
  unsigned int v10; // eax
  __int64 v11; // r10
  __int64 v12; // rdx
  char v13; // r8
  __int64 *Attached; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  __int64 (__fastcall ***v17)(_QWORD); // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+30h] [rbp-99h] BYREF
  __int64 v22; // [rsp+38h] [rbp-91h] BYREF
  GUID Buf1; // [rsp+40h] [rbp-89h] BYREF
  bool v24[104]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-11h]

  v7 = a3;
  v10 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a2, a3);
  (*(void (__fastcall **)(__int64, bool *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, v24, v12, v10);
  InputETW::DragNDrop::GetDragSource((struct tagPOINT)a2, v7, v13, v24[0]);
  if ( v24[0] && a5 && a4 )
  {
    Buf1 = GUID_NULL;
    DragNDropProcessor::GetDragManagerInputSite(a1, &v22, a2, v7, a4, (unsigned __int8 *)v24);
    if ( v22 )
    {
      Attached = InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(v22, (__int64 *)&v21);
      Buf1 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*Attached + 8) + 80LL))(*Attached + 8);
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v21);
    }
    if ( memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) )
    {
      v15 = *(__int64 **)(v25 - 24);
      v16 = *(__int64 **)(v25 - 16);
      while ( v15 != v16 )
      {
        InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v15, (__int64 *)&v21);
        v17 = v21;
        if ( v21 )
        {
          v18 = (_QWORD *)v21[1][3](v21 + 1);
          v19 = *v18 - *(_QWORD *)&Buf1.Data1;
          if ( *v18 == *(_QWORD *)&Buf1.Data1 )
            v19 = v18[1] - *(_QWORD *)Buf1.Data4;
          if ( !v19 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v21);
            *a5 = v17;
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v15);
            *a6 = *v15;
            (*v17)[1](v17);
            break;
          }
        }
        if ( v17 )
        {
          v21 = 0LL;
          (*v17)[1](v17);
        }
        ++v15;
      }
    }
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  HitTestResult::~HitTestResult((HitTestResult *)v24);
}
