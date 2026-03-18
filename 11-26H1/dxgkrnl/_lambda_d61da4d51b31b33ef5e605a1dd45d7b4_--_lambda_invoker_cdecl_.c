/*
 * XREFs of _lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_ @ 0x14018E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1403D30FC (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 */

__int64 __fastcall lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_(
        struct _KTHREAD **this,
        unsigned int *a2)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 3, 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v5);
  a2[1] = OUTPUTDUPL_MGR::QueryActiveContextCount((OUTPUTDUPL_MGR *)this, *a2);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
  return 0LL;
}
