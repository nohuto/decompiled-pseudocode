/*
 * XREFs of ??_ECLightMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14023BA50
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CLightMarshaler@DirectComposition@@UEAA@XZ @ 0x14023B66C (--1CLightMarshaler@DirectComposition@@UEAA@XZ.c)
 */

char **__fastcall DirectComposition::CLightMarshaler::`vector deleting destructor'(
        char **Buffer,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = a2;
  DirectComposition::CLightMarshaler::~CLightMarshaler(Buffer, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v6, v7, v8);
  return Buffer;
}
