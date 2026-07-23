/*
 * XREFs of KiSetForegroundBoost @ 0x14052461C
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KiInitializeForegroundBoostThread @ 0x140202D64 (KiInitializeForegroundBoostThread.c)
 *     KiSetDisableBoostThread @ 0x14049D8D0 (KiSetDisableBoostThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiSetForegroundBoost(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx
  char v5; // r8
  int v6; // ecx

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 8) == 0 )
  {
    *(_WORD *)(a1 + 518) = *(_WORD *)(a1 + 518) & 0xFFF0 | PsPrioritySeparation & 0xF;
    result = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline();
    if ( (_DWORD)result )
    {
      result = (unsigned int)*(char *)(a1 + 870);
      if ( *(_BYTE *)(a1 + 870) )
      {
        v3 = *(char *)(a1 + 563);
        v4 = *(_WORD *)(a1 + 518) & 0xF;
        v5 = v4 + v3;
        if ( v4 + v3 >= 16 )
          v5 = 15;
        v6 = v3 + result + v4;
        if ( v6 >= 16 )
          LOBYTE(v6) = 15;
        *(_BYTE *)(a1 + 870) = v6 - v5;
      }
    }
  }
  return result;
}
