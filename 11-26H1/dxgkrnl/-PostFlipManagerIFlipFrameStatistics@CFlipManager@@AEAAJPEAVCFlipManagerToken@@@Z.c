/*
 * XREFs of ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140019E94
 * Callers:
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x140018DCC (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14001BA64 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14001BE5C (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::PostFlipManagerIFlipFrameStatistics(CFlipManager *this, struct CFlipManagerToken *a2)
{
  __int64 v2; // r9
  int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // r10
  int v8; // [rsp+20h] [rbp-49h] BYREF
  CFlipPropertySetBase *v9; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+40h] [rbp-29h]
  __int64 v12; // [rsp+44h] [rbp-25h]
  int v13; // [rsp+4Ch] [rbp-1Dh]
  __int64 v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-9h]
  GUID v17; // [rsp+70h] [rbp+7h] BYREF
  int v18; // [rsp+80h] [rbp+17h]
  int *v19; // [rsp+88h] [rbp+1Fh]
  GUID v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+37h]
  _QWORD *v22; // [rsp+A8h] [rbp+3Fh]

  v2 = *((_QWORD *)a2 + 10);
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 104);
  v6 = *(_QWORD *)(v5 + 40);
  if ( v6 )
  {
    v10[0] = *((_QWORD *)a2 + 12);
    v8 = 3;
    v12 = 0LL;
    v13 = 0;
    v10[1] = *(_QWORD *)(v5 + 24);
    v11 = *(_DWORD *)(v5 + 32);
    v14 = *(_QWORD *)(v2 + 96);
    v15 = v6;
    v16 = *(unsigned int *)(v5 + 48);
    v17 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
    v19 = &v8;
    v22 = v10;
    v18 = 4;
    v20 = GUID_d95b714e_88dd_40d3_8ac6_cc1f0f048571;
    v21 = 56;
    v9 = 0LL;
    v3 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(2LL, &v17, 0LL, &v9, 3);
    if ( v3 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, CFlipPropertySetBase *))(**((_QWORD **)this + 28) + 8LL))(
        *((_QWORD *)this + 28),
        v9);
      CFlipPropertySetBase::Release(v9);
    }
  }
  return (unsigned int)v3;
}
