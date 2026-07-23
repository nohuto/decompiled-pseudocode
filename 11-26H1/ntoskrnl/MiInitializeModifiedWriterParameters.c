/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x140D00840
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  char v1; // al

  v0 = dword_140FBF21C;
  if ( (unsigned int)dword_140FBF21C <= 0x40 )
  {
    if ( !dword_140FBF21C )
      v0 = 1;
  }
  else
  {
    v0 = 64;
  }
  dword_140FBF21C = v0 << 8;
  v1 = dword_140FBF210;
  if ( (dword_140FBF210 & 0xFFFFFFF8) != 0 )
  {
    v1 = 0;
    dword_140FBF210 = 0;
  }
  if ( (v1 & 4) != 0 )
  {
    dword_140E360CC = 16;
    dword_140E360D0 = 8;
  }
  else
  {
    dword_140E360CC = 4;
  }
  return 1LL;
}
