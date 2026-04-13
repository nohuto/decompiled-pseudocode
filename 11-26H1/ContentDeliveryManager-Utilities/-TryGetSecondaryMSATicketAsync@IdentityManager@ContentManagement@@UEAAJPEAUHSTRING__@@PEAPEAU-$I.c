/*
 * XREFs of ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18003C590
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@Z @ 0x1800263DC (--$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_.c)
 *     ??0_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEAA@PEAVIdentityManager@ContentManagement@@AEBV?$MoveOnCopy@VHString@Wrappers@WRL@Microsoft@@@Internal@Windows@@@Z @ 0x18002813C (--0_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEAA@PEAVIdentityManager@ContentManagement@@AEBV-$.c)
 *     ??1_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEAA@XZ @ 0x1800292D4 (--1_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18003AE24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync(
        __int64 a1,
        HSTRING a2,
        __int64 *a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+24h] [rbp-3Ch]
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  char v15; // [rsp+38h] [rbp-28h]
  HSTRING v16[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  HSTRING v18; // [rsp+78h] [rbp+18h] BYREF

  v18 = a2;
  *a3 = 0LL;
  string = 0LL;
  v15 = 0;
  v5 = Microsoft::WRL::Wrappers::HString::Set(&string, &v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = _lambda_163dbea914ec29e3eb0ae38e4a9291a3_::_lambda_163dbea914ec29e3eb0ae38e4a9291a3_(
           (__int64)v16,
           a1 - 48,
           (__int64)&string);
    v12 = 3;
    v13 = 130LL;
    v6 = Windows::Internal::MakeAsyncOperation<Windows::Internal::CHSTRINGResult,HSTRING__ *,Windows::Internal::ComTaskPoolHandler,_lambda_163dbea914ec29e3eb0ae38e4a9291a3_>(
           (__int64)&v12,
           a3,
           v10,
           v9);
    _lambda_163dbea914ec29e3eb0ae38e4a9291a3_::~_lambda_163dbea914ec29e3eb0ae38e4a9291a3_(v16);
    if ( v6 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = (unsigned int)v6;
    v8 = 577LL;
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 482LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v7);
LABEL_7:
  WindowsDeleteString(string);
  return (unsigned int)v6;
}
