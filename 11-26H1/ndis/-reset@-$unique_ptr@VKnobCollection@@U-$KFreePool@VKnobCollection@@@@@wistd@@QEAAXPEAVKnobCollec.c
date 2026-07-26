/*
 * XREFs of ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140078DC0
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x140093148 (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x14009316C (--1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x14009BDE8 (--1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x140165090 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(void **a1, void *a2)
{
  void (__fastcall ***v2)(void *, _QWORD); // rbx

  v2 = (void (__fastcall ***)(void *, _QWORD))*a1;
  *a1 = a2;
  if ( v2 )
  {
    (**v2)(v2, 0LL);
    ExFreePoolWithTag(v2, 0);
  }
}
