/*
 * XREFs of ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800B4E0C
 * Callers:
 *     ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800B5084 (-ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidPcmWfx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r10d
  unsigned int wBitsPerSample; // edx
  int nBlockAlign; // r8d
  DWORD v4; // r8d

  v1 = 0;
  if ( a1->nChannels )
  {
    wBitsPerSample = a1->wBitsPerSample;
    if ( wBitsPerSample == 8 || (((_WORD)wBitsPerSample - 16) & 0xFFE7) == 0 && wBitsPerSample != 40 )
    {
      nBlockAlign = a1->nBlockAlign;
      if ( nBlockAlign == a1->nChannels * (wBitsPerSample >> 3) )
      {
        v4 = a1->nSamplesPerSec * nBlockAlign;
        v1 = 1;
        if ( a1->nAvgBytesPerSec > v4 / 0x14 + v4 || a1->nAvgBytesPerSec < v4 - v4 / 0x14 )
          return 0;
      }
    }
  }
  return v1;
}
