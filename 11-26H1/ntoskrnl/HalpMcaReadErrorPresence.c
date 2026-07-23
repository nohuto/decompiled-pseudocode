/*
 * XREFs of HalpMcaReadErrorPresence @ 0x14044B924
 * Callers:
 *     HalpCmcPollProcessor @ 0x14044B678 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14057D890 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140BEFCC8 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMcaReadErrorPresence(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v4 = a2;
  v5 = -1073741275;
  if ( !HalpMcaNumberOfBanks )
  {
    a1 = 377LL;
    v12 = __readmsr(0x179u);
    a2 = (unsigned __int64)HIDWORD(v12) << 32;
    HalpMcaNumberOfBanks = v12;
  }
  v6 = 0;
  v7 = (unsigned __int8)HalpMcaNumberOfBanks;
  v8 = 1025;
  v9 = -1073733631;
  while ( v6 < v7 )
  {
    if ( (unsigned __int8)HalpGetCpuVendor(a1, a2, a3, a4) != 1 || (v11 = v9, !HalpMcaScalableRasSupported) )
      v11 = v8;
    if ( guard_dispatch_icall_no_overrides(v4, v11) < 0 )
      return 0;
    ++v6;
    v9 += 16;
    v8 += 4;
  }
  return v5;
}
