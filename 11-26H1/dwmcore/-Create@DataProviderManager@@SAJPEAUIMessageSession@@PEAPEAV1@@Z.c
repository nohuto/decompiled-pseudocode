/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1801CBDE8
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F7A0 (-InternalRelease@-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1801CBEB8 (-Initialize@DataProviderManager@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x18020F2BC (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  volatile signed __int32 *v5; // rax
  DataProviderManager *v6; // rbx
  int v8; // eax
  unsigned int v9; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v11; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (DataProviderManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = (volatile signed __int32 *)DataProviderManager::DataProviderManager(v4, a1);
  v11 = v5;
  v6 = (DataProviderManager *)v5;
  if ( v5 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 2));
    v8 = DataProviderManager::Initialize(v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x40,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<DataProviderManager>::InternalRelease(&v11);
      return v9;
    }
    else
    {
      *a2 = v6;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
