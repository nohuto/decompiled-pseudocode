/*
 * XREFs of ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801A3D9C
 * Callers:
 *     ?RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z @ 0x1801BC0C0 (-RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x1800156F0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??$As@UIUIAHitTestInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIAHitTestInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003F0FC (--$As@UIUIAHitTestInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005AD04 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x1801A3F04 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall DWMInputRouter::RequestUIAHitTest(
        DWMInputRouter *this,
        struct _GUID *__return_ptr retstr,
        unsigned int a3,
        unsigned int a4)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  struct _GUID v16; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17[9]; // [rsp+40h] [rbp-C0h] BYREF
  bool v18[104]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19; // [rsp+138h] [rbp+38h]

  *retstr = GUID_NULL;
  memset_0((char *)v17 + 12, 0, 0x7CuLL);
  *(_QWORD *)((char *)v17 + 4) = __PAIR64__(a4, a3);
  LODWORD(v17[0]) = 0;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    v18,
    v17,
    *((__int64 (__fastcall ****)(_QWORD, __int128 *))this + 23),
    (__int64)InputSiteManager,
    (__int64)InputSiteHierarchyManager);
  if ( v18[0] )
  {
    v10 = *(_QWORD *)(v19 - 24);
    v11 = *(_QWORD *)(v19 - 16);
    while ( v10 != v11 )
    {
      v12 = 0LL;
      *(_QWORD *)&v16.Data1 = 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)v10 + 488LL);
      v14 = *(_QWORD *)(*(_QWORD *)v10 + 496LL);
      if ( v13 != v14 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IUIAHitTestInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v13 + 8),
                      (__int64 *)&v16) >= 0 )
            break;
          v13 += 16LL;
        }
        while ( v13 != v14 );
        v12 = *(_QWORD *)&v16.Data1;
      }
      if ( v12 )
      {
        *retstr = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        break;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      v10 += 8LL;
    }
  }
  v16 = *retstr;
  InputETW::UIAHitTest::RequestUIAHitTest(a3, a4, v18[0], &v16);
  HitTestResult::~HitTestResult((HitTestResult *)v18);
  return retstr;
}
