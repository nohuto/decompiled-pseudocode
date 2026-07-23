/*
 * XREFs of HvTruncateCurrentLogFileIfRequired @ 0x140AA8950
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140AA8A4C (HvpLogTypeToLogArrayIndex.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140AA8CA4 (HvGetEffectiveLogSizeCapForHive.c)
 */

void __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r11
  unsigned __int64 v6; // rdi
  __int64 v7; // r11
  unsigned __int64 v8; // r8

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 )
  {
    v3 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v3 )
    {
      if ( *(_QWORD *)(a1 + 8 * v3 + 1544) )
      {
        v4 = HvpLogTypeToLogArrayIndex((unsigned int)v3, a2, a3);
        v6 = *(_QWORD *)(v5 + 8LL * v4 + 1816);
        if ( v6 > (unsigned int)HvGetEffectiveLogSizeCapForHive(v5) )
        {
          v8 = *(unsigned int *)(v7 + 180);
          if ( v6 > v8 )
            CmpDoFileSetSizeEx(v7, (unsigned int)v3, v8, 0);
        }
      }
    }
  }
}
