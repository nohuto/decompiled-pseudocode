/*
 * XREFs of PnpStartDevice @ 0x14049B068
 * Callers:
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 * Callees:
 *     PnpSendIrp @ 0x14049B254 (PnpSendIrp.c)
 *     PoFxPrepareDevice @ 0x14049B394 (PoFxPrepareDevice.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PnpStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // r8d
  __int16 v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h]

  v4 = a2;
  v5 = a1;
  if ( a1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v6 = 0LL;
  LOBYTE(a2) = 1;
  PoFxPrepareDevice(v6, a2);
  *(_DWORD *)(v6 + 156) = 1;
  memset_0(&v9, 0, 0x48uLL);
  v10 = *(_QWORD *)(v6 + 416);
  v11 = *(_QWORD *)(v6 + 424);
  v9 = 27;
  return PnpSendIrp(v5, (unsigned int)&v9, v7, v4, a3);
}
