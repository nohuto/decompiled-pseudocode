/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1403D6D60
 * Callers:
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x1403D6E5C (KyRaiseException.c)
 *     NtCreateThread @ 0x1407F57E0 (NtCreateThread.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSanitizeContextFlags(unsigned int *a1, char a2)
{
  unsigned int v2; // eax
  bool v4; // dl

  v2 = *a1;
  if ( (*a1 & 0x27FFFF80) != 0x10000
    && (v2 & 0x7FFFF20) != 0x100000
    && ((v2 & 0x200000) == 0 || (v2 & 0x7DFFFF0) != 0)
    && (v2 & 0x7FFFF00) != 0x400000 )
  {
    goto LABEL_14;
  }
  v4 = 0;
  if ( (v2 & 0x400020) != 0x400020 )
    v4 = (v2 & 0x10040) != 65600 && (v2 & 0x100040) != 1048640;
  if ( !v4 && !MEMORY[0xFFFFF780000003D8] || (v2 & 0x100080) == 0x100080 && !(_BYTE)KiKernelCetEnabled )
    return 3221225659LL;
  if ( (v2 & 0x100000) != 0 )
    return 0LL;
LABEL_14:
  if ( !a2 )
    return 3221225485LL;
  *a1 = v2 & 0xF800001F | 0x100000;
  return 0LL;
}
