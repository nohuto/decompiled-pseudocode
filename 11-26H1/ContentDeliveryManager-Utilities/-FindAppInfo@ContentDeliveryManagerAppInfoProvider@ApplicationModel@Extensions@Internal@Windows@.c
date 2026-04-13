/*
 * XREFs of ?FindAppInfo@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@25@@Z @ 0x1800AAB00
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppInfo@25@AEAPEAUHSTRING__@@PEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@$$QEAPEAU345@@Z @ 0x1800AA6C8 (--$MakeAndInitialize@VContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::FindAppInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider *this,
        HSTRING a2,
        struct Windows::ApplicationModel::IAppInfo **a3)
{
  const WCHAR *StringRawBuffer; // rax
  int v6; // ebx
  int v7; // eax
  struct Windows::ApplicationModel::IAppInfo *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  void *v11; // rdx
  __int64 v12; // rdx
  struct Windows::ApplicationModel::IAppInfo *v14; // [rsp+30h] [rbp-40h] BYREF
  struct Windows::ApplicationModel::IAppInfo *v15; // [rsp+38h] [rbp-38h] BYREF
  struct Windows::ApplicationModel::IAppInfo *v16; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a3 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy!App", -1, 1) == 2 )
  {
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Extensions.ApplicationModel.UniversalAppInfoProvider",
      0x46u,
      0x45u);
    v16 = 0LL;
    v14 = 0LL;
    v6 = RoActivateInstance(v18, &v14);
    if ( v6 >= 0 )
    {
      v7 = memcmp_0(&GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL);
      v8 = v14;
      if ( !v7 )
      {
        v16 = v14;
LABEL_7:
        v9 = *(_QWORD *)v8;
        v15 = 0LL;
        v10 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *, HSTRING, struct Windows::ApplicationModel::IAppInfo **))(v9 + 48))(
                v8,
                a2,
                &v15);
        v6 = v10;
        if ( v10 >= 0 )
        {
          v14 = v15;
          v10 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo,Windows::ApplicationModel::IAppInfo,HSTRING__ * &,Windows::ApplicationModel::IAppInfo *>(
                  a3,
                  v11,
                  &v14);
          v6 = v10;
          if ( v10 >= 0 )
          {
            wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v15);
            wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v16);
            return 0LL;
          }
          v12 = 31LL;
        }
        else
        {
          v12 = 29LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfoprovider.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v15);
        goto LABEL_14;
      }
      v6 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::IAppInfo *, GUID *, struct Windows::ApplicationModel::IAppInfo **))v14)(
             v14,
             &GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67,
             &v16);
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v6 >= 0 )
      {
        v8 = v16;
        goto LABEL_7;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfoprovider.cpp",
      (const char *)(unsigned int)v6);
LABEL_14:
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v16);
    return (unsigned int)v6;
  }
  return 2147943568LL;
}
