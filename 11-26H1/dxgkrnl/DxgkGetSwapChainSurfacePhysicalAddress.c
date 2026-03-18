/*
 * XREFs of DxgkGetSwapChainSurfacePhysicalAddress @ 0x140208FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x140206580 (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14030112C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x140301718 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1403018A0 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403BDA5C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetSwapChainSurfacePhysicalAddress(char *Src)
{
  NTSTATUS v2; // eax
  int ClientSurfacePhysicalAddress; // ebx
  struct DXGSWAPCHAIN *v4; // rsi
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-B0h] BYREF
  PVOID v8; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v9[128]; // [rsp+50h] [rbp-98h] BYREF

  *(_OWORD *)Handle = 0LL;
  RtlCopyFromUser(Handle, Src, 0x10uLL);
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  ClientSurfacePhysicalAddress = v2;
  v8 = Object;
  if ( v2 >= 0 )
  {
    v4 = *(struct DXGSWAPCHAIN **)Object;
    Object = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v9, v4, 0, 1);
    ClientSurfacePhysicalAddress = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                                     (DXGSWAPCHAINLOCKWITHDEVICE *)v9,
                                     (struct DXGDEVICE **)&Object,
                                     1,
                                     0);
    if ( ClientSurfacePhysicalAddress >= 0 )
    {
      ClientSurfacePhysicalAddress = DXGSWAPCHAIN::GetClientSurfacePhysicalAddress(
                                       v4,
                                       (union _LARGE_INTEGER *)&Handle[1]);
      if ( ClientSurfacePhysicalAddress < 0 )
      {
        Object = 0LL;
        Handle[1] = 0LL;
      }
      RtlCopyToUser(Src + 8, &Handle[1], 8uLL);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1561;
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v9);
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle[0], v2);
    WdLogGlobalForLineNumber = 1549;
  }
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v8);
  return (unsigned int)ClientSurfacePhysicalAddress;
}
