/*
 * XREFs of ApiSetEditionNonDwmTouchHitTest @ 0x140227A4C
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x140216B88 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     EditionNonDwmTouchHitTest @ 0x140248E98 (EditionNonDwmTouchHitTest.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionNonDwmTouchHitTest(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 (*v9)(void); // rax
  int v10; // eax
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _BYTE v19[112]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  v9 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 5648LL);
  if ( v9 )
    v10 = v9();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    v11 = (_OWORD *)EditionNonDwmTouchHitTest(v19, a2, a3, a4);
    v12 = v11[1];
    *a1 = *v11;
    v13 = v11[2];
    a1[1] = v12;
    v14 = v11[3];
    a1[2] = v13;
    v15 = v11[4];
    a1[3] = v14;
    v16 = v11[5];
    a1[4] = v15;
    v17 = v11[6];
    a1[5] = v16;
    a1[6] = v17;
  }
  return a1;
}
