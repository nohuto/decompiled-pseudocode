/*
 * XREFs of PopThermalZoneDpc @ 0x140607D20
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 *     _local_unwind @ 0x140536000 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1405531C8 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine3 @ 0x140732930 (KiCustomAccessRoutine3.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

BOOLEAN __fastcall PopThermalZoneDpc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[92]; // [rsp+0h] [rbp-218h] BYREF
  _BYTE v10[52]; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+1A4h] [rbp-74h]
  __int64 v12; // [rsp+1C4h] [rbp-54h]
  _DWORD *v13; // [rsp+1F0h] [rbp-28h]

  v13 = v9;
  memset_0(v10, 0, 0x5CuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v9[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v12 = a3;
    *(_QWORD *)&v10[28] = __ROL8__(a2, a3);
    v11 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine3(a2);
  }
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
