/*
 * XREFs of ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180077060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x1800758D4 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::AppManager::StartProductInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        unsigned __int8 a5,
        HSTRING a6,
        HSTRING a7)
{
  HSTRING *v11; // r9
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  HSTRING string; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  WindowsDeleteString(0LL);
  string = 0LL;
  v12 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v11);
  v15 = v12;
  if ( v12 >= 0 )
  {
    LOBYTE(v14) = a5;
    LOBYTE(v13) = a4;
    v15 = (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, __int64, __int64, HSTRING, _QWORD, _QWORD, HSTRING))(*(_QWORD *)this + 112LL))(
            this,
            string,
            v13,
            v14,
            a6,
            0LL,
            0LL,
            a7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v12);
  }
  WindowsDeleteString(string);
  return v15;
}
