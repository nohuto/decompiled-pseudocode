/*
 * XREFs of CmpDoReconcileNextHive @ 0x140AA8A70
 * Callers:
 *     <none>
 * Callees:
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x140AA8BCC (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140AA8CA4 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140AA8F30 (CmpFlushUnsupportedOperationTelemetry.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 *v4; // r15
  unsigned __int8 *NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned int EffectiveLogSizeCapForHive; // eax

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140E02224;
  v4 = a2;
  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    NextActiveHive = CmpGetNextActiveHive(0LL);
    if ( NextActiveHive )
    {
      do
      {
        v8 = -1LL;
        v9 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
        {
          EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(NextActiveHive);
          if ( (int)CmpFlushHive(
                      (ULONG_PTR)NextActiveHive,
                      *((_DWORD *)NextActiveHive + 45) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
          {
            *a1 = 1;
            v8 = v9 + 10000000LL * (unsigned int)dword_140E0222C;
          }
        }
        else if ( *((_DWORD *)NextActiveHive + 32) )
        {
          if ( (*((_DWORD *)NextActiveHive + 40) & 0x8001) == 0 )
          {
            v2 = 1;
            v10 = *((_QWORD *)NextActiveHive + 519) + 10000000LL * (unsigned int)dword_140E02220;
            if ( v9 < v10 )
              v8 = v10 - v9;
          }
        }
        if ( v8 >= v3 )
          v8 = v3;
        v3 = v8;
        NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
      }
      while ( NextActiveHive );
      v4 = a2;
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *v4 = v3;
  }
  return v2;
}
