/*
 * XREFs of ApiSetEditionPostInputMessage @ 0x1400CE394
 * Callers:
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CE498 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     EditionPostInputMessage @ 0x14006DB88 (EditionPostInputMessage.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 *a10,
        __int64 a11)
{
  unsigned int v15; // ebx
  int (*v16)(void); // rax
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  v15 = 0;
  v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4400LL);
  if ( v16 && v16() >= 0 )
  {
    v18 = 0LL;
    if ( a10 )
      v18 = *a10;
    return (unsigned int)EditionPostInputMessage(
                           a1,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           (unsigned __int64)&v18 & -(__int64)(a10 != 0LL),
                           a11);
  }
  return v15;
}
