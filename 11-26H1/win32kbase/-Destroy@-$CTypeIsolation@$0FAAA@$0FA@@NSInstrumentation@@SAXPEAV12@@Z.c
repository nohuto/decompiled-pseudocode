/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EBC98
 * Callers:
 *     ?Destroy@UserTypeIsolationAllocators@@QEAAXXZ @ 0x1401B3E38 (-Destroy@UserTypeIsolationAllocators@@QEAAXXZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SAXPEAPEAE@Z @ 0x1401B8654 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 *     ??$AllocateAllocator@UtagDDECONV@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB7F0 (--$AllocateAllocator@UtagDDECONV@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagHID_POINTER_DEVICE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB878 (--$AllocateAllocator@UtagHID_POINTER_DEVICE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagKBDFILE@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB900 (--$AllocateAllocator@UtagKBDFILE@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagSMWP@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB988 (--$AllocateAllocator@UtagSMWP@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagSVR_INSTANCE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EBA10 (--$AllocateAllocator@UtagSVR_INSTANCE_INFO@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ?Create@?$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EBBA8 (-Create@-$CTypeIsolation@$0FAAA@$0FA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EBC20 (-Create@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EE458 (-Create@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401EE4D0 (-Create@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF780 (-Destroy@-$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAA@XZ @ 0x1401EBB20 (--1-$CTypeIsolation@$0BAAA@$0EA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<20480,80>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<4096,64>::~CTypeIsolation<4096,64>((__int64)P);
  ExFreePoolWithTag(P, 0);
}
