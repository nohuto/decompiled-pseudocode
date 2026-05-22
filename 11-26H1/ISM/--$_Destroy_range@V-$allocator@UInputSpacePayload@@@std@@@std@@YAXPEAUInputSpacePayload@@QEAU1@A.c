/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x180196180
 * Callers:
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801968E4 (--$_Uninitialized_move@PEAUInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@YAPEA.c)
 *     ??$_Visit@V_lambda_932298db0fc7a8424d9a6eaff3f3fd49_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@UHeatTouchpadClickForceSensitivityContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_932298db0fc7a8424d9a6eaff3f3fd49_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@UHeatTouchpadClickForceSensitivityContextMessage@@@1@@Z @ 0x18019696C (--$_Visit@V_lambda_932298db0fc7a8424d9a6eaff3f3fd49_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 *     ??1?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x18019721C (--1-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x180197550 (--1_Reallocation_guard@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQEAUInputSpacePayload@@_K1@Z @ 0x180198308 (-_Change_array@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<InputSpacePayload>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 4;
    do
    {
      v4 = (void *)*(v3 - 2);
      if ( v4 )
      {
        std::_Deallocate<16>(v4, (struct std::nothrow_t *)(8 * ((__int64)(*v3 - (_QWORD)v4) >> 3)));
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v3 += 5;
      result = v3 - 4;
    }
    while ( v3 - 4 != a2 );
  }
  return result;
}
