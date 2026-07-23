/*
 * XREFs of KiSelectBhbFlushSequence @ 0x1405F5AD4
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405F4E30 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSelectBhbFlushSequence(_BYTE *a1)
{
  unsigned int v3; // r9d
  char v13; // cl
  char v14; // cl
  char result; // al
  char v16; // cl

  _RAX = 0LL;
  v3 = 0;
  __asm { cpuid }
  if ( (unsigned int)_RAX >= 0x1A )
  {
    _RAX = 26LL;
    __asm { cpuid }
    v3 = BYTE3(_RAX);
  }
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    goto LABEL_15;
  if ( v3 == 32 )
    return 1;
  if ( (KiSpeculationFeatures & 0x20000) != 0 )
    goto LABEL_15;
  if ( a1[64] != 6 )
    return 1;
  v13 = a1[67];
  if ( v13 == -105 )
  {
    v14 = a1[66];
    if ( v14 != 2 && v14 != 5 )
      return 1;
  }
  else
  {
    if ( v13 != -102 )
      return 1;
    v16 = a1[66];
    if ( v16 != 3 && v16 != 4 )
      return 1;
  }
LABEL_15:
  result = 2;
  if ( KiTsxSupported )
    return 3;
  return result;
}
