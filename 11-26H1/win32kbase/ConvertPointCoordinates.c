/*
 * XREFs of ConvertPointCoordinates @ 0x140196130
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x14008BFEC (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x14009BAE8 (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1401B0814 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x14020D8E4 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     SynthesizeMitTouchInput @ 0x140220114 (SynthesizeMitTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, _DWORD *a2, int *a3, _QWORD *a4)
{
  __int64 v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+10h] [rbp+8h]

  v5 = *a3;
  v6 = ((int)a1 - *a2) * (__int64)(a3[2] - (int)v5);
  v7 = a2[2] - *a2;
  v8 = 2 * v6;
  if ( v6 <= 0 )
    v9 = v8 - v7;
  else
    v9 = v7 + v8;
  v10 = v5 + v9 / (2 * v7);
  if ( v10 < (__int64)0xFFFFFFFF80000000uLL || v10 > 0x7FFFFFFF )
    return 0LL;
  v11 = a2[1];
  v12 = a3[1];
  LODWORD(v19) = v10;
  v13 = (a3[3] - (int)v12) * (__int64)(HIDWORD(a1) - v11);
  v14 = a2[3] - v11;
  v15 = 2 * v13;
  if ( v13 <= 0 )
    v16 = v15 - v14;
  else
    v16 = v14 + v15;
  v17 = v12 + v16 / (2 * v14);
  if ( v17 < (__int64)0xFFFFFFFF80000000uLL || (HIDWORD(v19) = v17, v17 > 0x7FFFFFFF) )
    HIDWORD(v19) = -1;
  *a4 = v19;
  return 1LL;
}
