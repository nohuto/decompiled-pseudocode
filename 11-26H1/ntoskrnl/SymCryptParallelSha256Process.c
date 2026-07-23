/*
 * XREFs of SymCryptParallelSha256Process @ 0x140557ED0
 * Callers:
 *     KeComputeParallelSha256 @ 0x1405E70C0 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404C3508 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptSaveXmm @ 0x1404C3520 (SymCryptSaveXmm.c)
 *     SymCryptRestoreXmm @ 0x1404CF078 (SymCryptRestoreXmm.c)
 *     SymCryptParallelHashProcess @ 0x14055ABC4 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14055AE88 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptRestoreYmm @ 0x1405E7F1C (SymCryptRestoreYmm.c)
 *     SymCryptSaveYmm @ 0x1405E7F34 (SymCryptSaveYmm.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  _BYTE v12[64]; // [rsp+40h] [rbp-78h] BYREF

  memset_0(v12, 0, sizeof(v12));
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0
    || (unsigned int)SymCryptSaveYmm(v12) )
  {
    if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 2) != 0
      || (unsigned int)SymCryptSaveXmm() )
    {
      return (unsigned int)SymCryptParallelHashProcess_serial(
                             (unsigned int)&SymCryptParallelSha256Algorithm_default,
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6);
    }
    else
    {
      v10 = SymCryptParallelHashProcess(
              (unsigned int)&SymCryptParallelSha256Algorithm_default,
              a1,
              a2,
              a3,
              a4,
              a5,
              a6,
              4);
      SymCryptRestoreXmm();
    }
  }
  else
  {
    v10 = SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 8);
    SymCryptRestoreYmm(v12);
  }
  return v10;
}
