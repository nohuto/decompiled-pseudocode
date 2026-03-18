/*
 * XREFs of SymCryptSha256AppendBlocks @ 0x1405535A0
 * Callers:
 *     SymCryptSha256Append @ 0x1405534C0 (SymCryptSha256Append.c)
 *     SymCryptSha256Result @ 0x140554D70 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x14055597C (SymCryptParallelSha256AppendBytes_serial.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404C9AE8 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptRestoreXmm @ 0x1404D58B4 (SymCryptRestoreXmm.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x14055366C (SymCryptSha256AppendBlocks_shani.c)
 *     SymCryptSha256AppendBlocks_ul1 @ 0x140553A30 (SymCryptSha256AppendBlocks_ul1.c)
 *     SymCryptSha256AppendBlocks_xmm_ssse3_asm @ 0x140556490 (SymCryptSha256AppendBlocks_xmm_ssse3_asm.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall SymCryptSha256AppendBlocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v8[64]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v8, 0, sizeof(v8));
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x42) == 0
    && !(unsigned int)SymCryptCpuFeaturesNeverPresent() )
  {
    SymCryptSha256AppendBlocks_shani(a1, a2, a3, a4);
LABEL_7:
    SymCryptRestoreXmm();
    return;
  }
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x82) == 0
    && !(unsigned int)SymCryptCpuFeaturesNeverPresent() )
  {
    SymCryptSha256AppendBlocks_xmm_ssse3_asm(a1, a2, a3, a4);
    goto LABEL_7;
  }
  SymCryptSha256AppendBlocks_ul1(a1, a2, a3, a4);
}
