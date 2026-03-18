/*
 * XREFs of ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14001B988
 * Callers:
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x140018B90 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400220B4 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14001BA64 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::PostFlipManagerPresentStatusStatistics(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // edi
  CFlipPropertySetBase *v7; // [rsp+20h] [rbp-39h] BYREF
  int v8; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+40h] [rbp-19h]
  int v11; // [rsp+44h] [rbp-15h]
  GUID v12; // [rsp+50h] [rbp-9h] BYREF
  int v13; // [rsp+60h] [rbp+7h]
  int *v14; // [rsp+68h] [rbp+Fh]
  GUID v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+27h]
  _QWORD *v17; // [rsp+88h] [rbp+2Fh]

  v9[0] = a3;
  v14 = &v8;
  v12 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  v9[1] = a2;
  v10 = a4;
  v8 = 1;
  v11 = 0;
  v13 = 4;
  v15 = GUID_f62b137d_7b81_414b_b835_ad0cd16dee32;
  v16 = 24;
  v17 = v9;
  v7 = 0LL;
  v5 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(2LL, &v12, 0LL, &v7);
  if ( v5 >= 0 )
    (*(void (__fastcall **)(_QWORD, CFlipPropertySetBase *))(**(_QWORD **)(a1 + 224) + 8LL))(*(_QWORD *)(a1 + 224), v7);
  if ( v7 )
    CFlipPropertySetBase::Release(v7);
  return (unsigned int)v5;
}
