/*
 * XREFs of IvtUpdateScalableModePasidTablesForPasid @ 0x1405246E4
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404F9990 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140BF68FC (IvtSetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     IvtBuildScalableModePasidTableS2Entry @ 0x14050B4A0 (IvtBuildScalableModePasidTableS2Entry.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1405247C8 (IvtBuildScalableModePasidTableS1Entry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall IvtUpdateScalableModePasidTablesForPasid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int16 a5,
        __int64 a6,
        int a7,
        char a8)
{
  int v11; // r9d
  unsigned __int64 result; // rax
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15[8]; // [rsp+40h] [rbp-58h] BYREF

  memset_0(v15, 0, sizeof(v15));
  if ( a4 == 1 )
  {
    LOBYTE(v11) = a8;
    IvtBuildScalableModePasidTableS1Entry(a1, 1, 0, v11, v14, 0, a5, v15);
  }
  else
  {
    IvtBuildScalableModePasidTableS2Entry(a1, a4, a5, a6, v14, v15);
  }
  _RAX = *(void **)(a2 + 64);
  __asm { movdir64b rax, zmmword ptr [rsp+98h+var_58] }
  result = MmGetPhysicalAddress(_RAX).QuadPart & 0xFFFFFFFFFFFFF000uLL | 1;
  **(_QWORD **)(a2 + 56) = result;
  return result;
}
