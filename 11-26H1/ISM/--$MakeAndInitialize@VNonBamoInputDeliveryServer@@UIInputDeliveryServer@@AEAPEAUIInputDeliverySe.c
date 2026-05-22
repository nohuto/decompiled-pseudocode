/*
 * XREFs of ??$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@NonBamoInputDeliveryServer@@@Z @ 0x18007B86C
 * Callers:
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x18007B7C8 (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 * Callees:
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x1801610AC (--0NonBamoInputDeliveryServer@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum NonBamoInputDeliveryServer::TestMode &>(
        NonBamoInputDeliveryServer *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  NonBamoInputDeliveryServer *v7; // rax
  int v8; // ebx
  NonBamoInputDeliveryServer *v9; // rdi
  __int64 v10; // rax
  NonBamoInputDeliveryServer *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer = 0LL;
  v7 = (NonBamoInputDeliveryServer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v7;
  if ( v7 )
  {
    v9 = NonBamoInputDeliveryServer::NonBamoInputDeliveryServer(v7);
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(NonBamoInputDeliveryServer *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(
           v9,
           *a2,
           *a3,
           *a4);
    v10 = *(_QWORD *)v9;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(NonBamoInputDeliveryServer *, GUID *, struct IInputDeliveryServer **))v10)(
             v9,
             &GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba,
             &NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer);
      (*(void (__fastcall **)(NonBamoInputDeliveryServer *))(*(_QWORD *)v9 + 16LL))(v9);
      return (unsigned int)v8;
    }
    (*(void (__fastcall **)(NonBamoInputDeliveryServer *))(v10 + 16))(v9);
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v12);
  return (unsigned int)v8;
}
