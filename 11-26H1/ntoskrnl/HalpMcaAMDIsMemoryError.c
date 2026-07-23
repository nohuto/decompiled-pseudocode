/*
 * XREFs of HalpMcaAMDIsMemoryError @ 0x140580C6C
 * Callers:
 *     HalpCreateMachineCheckErrorRecord @ 0x14044A750 (HalpCreateMachineCheckErrorRecord.c)
 *     HalpMceRecoveryRequired @ 0x14059132C (HalpMceRecoveryRequired.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpMcaAMDIsMemoryError(__int64 a1, __int16 a2)
{
  char v2; // r8
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = 0;
  if ( HalpMcaScalableRasSupported )
  {
    v3 = *(_QWORD *)(a1 + 72);
    v4 = WORD2(v3) & 0xFFF;
    v5 = HIWORD(v3);
    if ( v4 == 176 )
    {
      if ( (v5 & 0xFFFFFFFFFFFFFFEEuLL) == 0 && v5 != 17 )
        return 1;
    }
    else if ( v4 == 150 && v3 < 0x1000000000000LL )
    {
      return 1;
    }
  }
  else if ( *(_DWORD *)(a1 + 36) == 4 && (a2 & 0xE800) == 0x800 )
  {
    return (*(_DWORD *)(a1 + 40) & 0x170000) == 0;
  }
  return v2;
}
