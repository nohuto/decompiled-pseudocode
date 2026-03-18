/*
 * XREFs of _lambda_940d064d943a20fd52938170853ed62c_::operator() @ 0x14042509C
 * Callers:
 *     _lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_ @ 0x1401DB504 (_lambda_940d064d943a20fd52938170853ed62c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall lambda_940d064d943a20fd52938170853ed62c_::operator()(__int64 a1, __int64 a2)
{
  int v3; // r8d
  struct _LUID *v4; // rdx
  struct ADAPTER_RENDER *v5; // r11
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, (struct DXGADAPTER *const)a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v7, (unsigned int)(v3 + 1)) >= 0
    && *(_QWORD *)(a2 + 3160)
    && !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v4, 0LL, 0LL) )
  {
    if ( *(_QWORD *)(a2 + 3168) )
      v5 = *(struct ADAPTER_RENDER **)(a2 + 3168);
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*(PERESOURCE ***)(a2 + 3160), v5);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  return 0LL;
}
