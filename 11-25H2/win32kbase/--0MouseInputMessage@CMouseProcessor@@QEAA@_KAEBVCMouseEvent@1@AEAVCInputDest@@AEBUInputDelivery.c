/*
 * XREFs of ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021F060
 * Callers:
 *     ??0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021EFB4 (--0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDelive.c)
 *     ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021FD80 (-CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AE.c)
 *     ?CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021FE40 (-CreateInputMessage@CWheelEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@A.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::MouseInputMessage::MouseInputMessage(
        CMouseProcessor::MouseInputMessage *this,
        __int64 a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  _OWORD *v8; // rax
  __int128 v9; // xmm0

  *((_QWORD *)this + 2) = a2;
  memset((char *)this + 24, 0, 0x70uLL);
  *((_BYTE *)this + 136) = 0;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a4;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a4 + 1);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a4 + 2);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a4 + 3);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a4 + 4);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a4 + 5);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a4 + 6);
  memset(a4, 0, 0x78uLL);
  *((_OWORD *)this + 9) = *(_OWORD *)a5;
  *((_QWORD *)this + 20) = *((_QWORD *)a5 + 2);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 4);
  v8 = (_OWORD *)*((_QWORD *)a3 + 1);
  *((_OWORD *)this + 11) = *v8;
  *((_OWORD *)this + 12) = v8[1];
  *((_OWORD *)this + 13) = v8[2];
  *((_OWORD *)this + 14) = v8[3];
  *((_OWORD *)this + 15) = v8[4];
  *((_OWORD *)this + 16) = v8[5];
  *((_OWORD *)this + 17) = v8[6];
  v9 = v8[7];
  v8 += 8;
  *((_OWORD *)this + 18) = v9;
  *((_OWORD *)this + 19) = *v8;
  *((_OWORD *)this + 20) = v8[1];
  *((_OWORD *)this + 21) = v8[2];
  *((_QWORD *)this + 44) = *((_QWORD *)v8 + 6);
  return this;
}
