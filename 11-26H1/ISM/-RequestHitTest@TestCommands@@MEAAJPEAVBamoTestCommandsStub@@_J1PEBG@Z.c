/*
 * XREFs of ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1801A6DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18001075C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$As@UISystemInputRouterHitTest@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E1934 (--$As@UISystemInputRouterHitTest@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1801A68F8 (--$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA-AV-$vector@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TestCommands::RequestHitTest(
        TestCommands *this,
        struct BamoTestCommandsStub *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  int v7; // eax
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 *v10; // rdi
  __int64 *v11; // rsi
  int v13; // [rsp+20h] [rbp-B1h]
  __int64 v14[2]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-89h]
  __int64 v17; // [rsp+50h] [rbp-81h]
  _BYTE v18[104]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v14[0] = 0LL;
  v7 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<ISystemInputRouterHitTest>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7,
         v14);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\testcommands.cpp",
      (const char *)(unsigned int)v7,
      v13);
  v14[1] = __PAIR64__(a4, a3);
  (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int64))(*(_QWORD *)v14[0] + 24LL))(
    v14[0],
    v18,
    __PAIR64__(a4, a3));
  if ( v18[0] )
  {
    v8 = *(__int64 **)(v19 - 24);
    v9 = *(__int64 **)(v19 - 16);
    while ( v8 != v9 )
    {
      InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(*v8, (__int64)&v15);
      v10 = v15;
      v11 = v16;
      if ( v15 != v16 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)*v10 + 24LL))(
            *v10,
            a3,
            a4,
            a5);
          ++v10;
        }
        while ( v10 != v11 );
        v11 = v16;
        v10 = v15;
      }
      if ( v10 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v10, v11);
        std::_Deallocate<16>(v15, (struct std::nothrow_t *)((v17 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      ++v8;
    }
  }
  HitTestResult::~HitTestResult((HitTestResult *)v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14);
  return 0LL;
}
