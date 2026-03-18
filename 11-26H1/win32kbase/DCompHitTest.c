/*
 * XREFs of DCompHitTest @ 0x140070590
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x140216B88 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 */

_OWORD *__fastcall DCompHitTest(_OWORD *a1)
{
  _OWORD *v2; // rax
  bool v3; // zf
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rcx
  _BYTE v12[80]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+7Ch] [rbp-2Ch]

  v2 = (_OWORD *)CSpatialProcessor::SpeedHitTest(v12);
  v3 = v14 == 0;
  v4 = v2[1];
  *a1 = *v2;
  v5 = v2[2];
  a1[1] = v4;
  v6 = v2[3];
  a1[2] = v5;
  v7 = v2[4];
  a1[3] = v6;
  v8 = v2[5];
  a1[4] = v7;
  v9 = v2[6];
  a1[5] = v8;
  a1[6] = v9;
  if ( !v3 )
  {
    v10 = v13;
    v13 = 0LL;
    if ( v10 )
      HMUnlockObject(v10);
  }
  return a1;
}
