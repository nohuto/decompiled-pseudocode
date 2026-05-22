/*
 * XREFs of ?reset@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800C1678
 * Callers:
 *     ??$?4U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF13C (--$-4U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@$0A@@-$unique_ptr@VMPCSlateDeadzoneHelper@.c)
 *     ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C1530 (-Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801C19B0 (-Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C5250 (-Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VMPCSlateDeadzoneHelper@@@std@@QEBAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800BF92C (--R-$default_delete@VMPCSlateDeadzoneHelper@@@std@@QEBAXPEAVMPCSlateDeadzoneHelper@@@Z.c)
 */

void __fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::reset(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)*a1;
  *a1 = a2;
  if ( v2 )
    std::default_delete<MPCSlateDeadzoneHelper>::operator()((__int64)a1, v2);
}
