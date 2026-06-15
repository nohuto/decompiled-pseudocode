/*
 * XREFs of ?IsValidFloatWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800B4D98
 * Callers:
 *     ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800B5084 (-ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFloatWfx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r10d
  int nBlockAlign; // r8d
  DWORD v3; // r8d

  v1 = 0;
  if ( a1->nChannels && (a1->wBitsPerSample == 32 || a1->wBitsPerSample == 64) )
  {
    nBlockAlign = a1->nBlockAlign;
    if ( nBlockAlign == a1->nChannels * a1->wBitsPerSample / 8 )
    {
      v3 = a1->nSamplesPerSec * nBlockAlign;
      v1 = 1;
      if ( a1->nAvgBytesPerSec > v3 / 0x14 + v3 || a1->nAvgBytesPerSec < v3 - v3 / 0x14 )
        return 0;
    }
  }
  return v1;
}
