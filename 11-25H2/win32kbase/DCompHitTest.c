/*
 * XREFs of DCompHitTest @ 0x1400382D0
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C4988 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14019045C (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140038370 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

_OWORD *__fastcall DCompHitTest(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rdx
  bool v4; // zf
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  int *v11; // rcx
  _BYTE v13[80]; // [rsp+20h] [rbp-98h] BYREF
  int *v14; // [rsp+70h] [rbp-48h]
  int v15; // [rsp+7Ch] [rbp-3Ch]

  v2 = (_OWORD *)CSpatialProcessor::SpeedHitTest(v13);
  v4 = v15 == 0;
  v5 = v2[1];
  *a1 = *v2;
  v6 = v2[2];
  a1[1] = v5;
  v7 = v2[3];
  a1[2] = v6;
  v8 = v2[4];
  a1[3] = v7;
  v9 = v2[5];
  a1[4] = v8;
  v10 = v2[6];
  a1[5] = v9;
  a1[6] = v10;
  if ( !v4 )
  {
    v11 = v14;
    v14 = 0LL;
    if ( v11 )
      HMUnlockObject(v11, v3);
  }
  return a1;
}
