/*
 * XREFs of MiConvertHiberPhasePages @ 0x140C00AE4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MI_FLUSH_ENTIRE_TB @ 0x140250014 (MI_FLUSH_ENTIRE_TB.c)
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiConvertHiberPhasePages(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v4; // [rsp+29h] [rbp-BFh]
  char *AnyMultiplexedVm; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v6; // [rsp+48h] [rbp-A0h]
  __int64 v7; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v8)(); // [rsp+C8h] [rbp-20h]
  __int64 v9; // [rsp+D8h] [rbp-10h]

  memset_0(v3, 0, 0xC0uLL);
  v3[0] = 4481;
  v8 = MiConvertHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v4 = 17;
  v6 = 0xFFFF800000000000uLL;
  v7 = -1LL;
  v9 = a1;
  result = MiWalkPageTables((__int64)v3);
  if ( a1 )
    return MI_FLUSH_ENTIRE_TB(0LL, -1);
  return result;
}
