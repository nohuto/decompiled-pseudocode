/*
 * XREFs of ?Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ @ 0x180138148
 * Callers:
 *     ?CreateVirtualTouchpadControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180118F14 (-CreateVirtualTouchpadControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBa.c)
 * Callees:
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x1800445D8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4VInputConfigContextProvider@@@?$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputConfigContextProvider@@@Z @ 0x18009604C (--$-4VInputConfigContextProvider@@@-$ComPtr@UISystemContextProvider@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::Initialize(VirtualTouchpadControllerProxy *this)
{
  __int64 *v2; // rbx
  struct InputConfigContextProvider *Instance; // rax
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 408);
  Instance = InputConfigContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<ISystemContextProvider>::operator=<InputConfigContextProvider>(v2, (__int64)Instance);
  if ( !*v2 )
  {
    v4 = -2147418113;
    v5 = 42LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrolle"
           "r\\server\\virtualtouchpadcontrollerproxy.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         ((unsigned __int64)this + 136) & -(__int64)(this != 0LL));
  if ( v4 < 0 )
  {
    v5 = 43LL;
    goto LABEL_3;
  }
  return 0LL;
}
