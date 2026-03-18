/*
 * XREFs of ?Destroy@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140159EAC
 * Callers:
 *     ?Create@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015A710 (-Create@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14015B65C (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14016845C (-Create@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x140186E14 (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@UserTypeIsolationAllocators@@QEAAXXZ @ 0x1401B3E38 (-Destroy@UserTypeIsolationAllocators@@QEAAXXZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SAXPEAPEAE@Z @ 0x1401B8654 (-Destroy@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401C18B4 (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??$AllocateAllocator@UtagCURSOR@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EB768 (--$AllocateAllocator@UtagCURSOR@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ??$AllocateAllocator@UtagWND@@@UserTypeIsolationAllocators@@QEAA_NXZ @ 0x1401EBA98 (--$AllocateAllocator@UtagWND@@@UserTypeIsolationAllocators@@QEAA_NXZ.c)
 *     ?Deserialize@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeserializer@2@@Z @ 0x1401EEEA4 (-Deserialize@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@AEAVDeseria.c)
 *     ?Destroy@?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF730 (-Destroy@-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x140159F04 (--1-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<81920,160>::Destroy(PVOID P)
{
  NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>();
  ExFreePoolWithTag(P, 0);
}
