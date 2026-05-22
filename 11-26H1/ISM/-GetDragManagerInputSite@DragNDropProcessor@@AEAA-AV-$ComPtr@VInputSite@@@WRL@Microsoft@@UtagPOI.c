/*
 * XREFs of ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014EBD8
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD10 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014EDFC (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180150BFC (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180150F14 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18014BFDC (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18014DBD4 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014EB0C (-GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801A1F30 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall DragNDropProcessor::GetDragManagerInputSite(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned __int8 *a6)
{
  struct tagPOINT v7; // rbx
  bool *v9; // rdi
  unsigned __int8 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 *v16; // rdi
  __int64 *v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h]
  bool v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int128 v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  _BYTE v24[128]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = (struct tagPOINT)a3;
  v9 = (bool *)a6;
  v18 = a2;
  *a2 = 0LL;
  v19 = 1;
  v20[0] = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  LOBYTE(a3) = 0;
  if ( !a6 || (v10 = *a6) == 0 )
  {
    v11 = HitTestHelper::ConvertInputTypeToPointerType(a4, a2, a3);
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *, struct tagPOINT, _QWORD))(*(_QWORD *)v12 + 32LL))(
            v12,
            v24,
            v7,
            v11);
    HitTestResult::operator=((__int64)v20, v13);
    HitTestResult::~HitTestResult((HitTestResult *)v24);
    v9 = v20;
    LOBYTE(a3) = 1;
    v10 = v20[0];
  }
  InputETW::DragNDrop::GetDragManager(v7, a4, a3, v10);
  if ( *v9 )
  {
    v14 = *((_QWORD *)v9 + 13);
    v15 = *(__int64 **)(v14 - 24);
    v16 = *(__int64 **)(v14 - 16);
    while ( v15 != v16 )
    {
      InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v15, (__int64 *)&v18);
      if ( v18 && v18 == a5 )
      {
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(a2, v15);
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v18);
        break;
      }
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v18);
      ++v15;
    }
  }
  HitTestResult::~HitTestResult((HitTestResult *)v20);
  return a2;
}
