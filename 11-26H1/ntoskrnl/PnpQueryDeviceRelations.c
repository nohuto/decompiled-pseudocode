/*
 * XREFs of PnpQueryDeviceRelations @ 0x1409B023C
 * Callers:
 *     PipEnumerateDevice @ 0x1409AFFD8 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryDeviceRelations @ 0x140ACBF40 (PiQueryDeviceRelations.c)
 *     PiQueryPowerRelations @ 0x140B37868 (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x14049B254 (PnpSendIrp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  __int16 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]

  memset_0(&v10, 0, 0x48uLL);
  v10 = 1819;
  v11 = a2;
  return PnpSendIrp(a1, (__int64)&v10, v8, a3, a4);
}
