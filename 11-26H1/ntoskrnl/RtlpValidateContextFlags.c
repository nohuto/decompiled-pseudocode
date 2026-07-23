/*
 * XREFs of RtlpValidateContextFlags @ 0x1403D9B20
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     RtlpWriteExtendedContext @ 0x1409E9164 (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140A8925C (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v3; // r11d
  unsigned int v4; // r9d
  bool v5; // cl

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && ((a1 & 0x200000) == 0 || (a1 & 0x7DFFFF0) != 0)
    && (a1 & 0x7FFFF00) != 0x400000 )
  {
    return (unsigned int)-1073741811;
  }
  v3 = 1;
  v4 = 0;
  v5 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v5 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( !v5 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return (unsigned int)-1073741637;
    v3 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      return (unsigned int)-1073741637;
    v3 |= 4u;
  }
  if ( a2 )
    *a2 = v3;
  return v4;
}
