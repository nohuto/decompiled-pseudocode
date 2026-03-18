/*
 * XREFs of MiInitializeModifiedWriterParameters @ 0x140CFA4C0
 * Callers:
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeModifiedWriterParameters()
{
  int v0; // eax
  char v1; // al

  v0 = dword_140FBE21C;
  if ( (unsigned int)dword_140FBE21C <= 0x40 )
  {
    if ( !dword_140FBE21C )
      v0 = 1;
  }
  else
  {
    v0 = 64;
  }
  dword_140FBE21C = v0 << 8;
  v1 = dword_140FBE210;
  if ( (dword_140FBE210 & 0xFFFFFFF8) != 0 )
  {
    v1 = 0;
    dword_140FBE210 = 0;
  }
  if ( (v1 & 4) != 0 )
  {
    dword_140E35F4C = 16;
    dword_140E35F50 = 8;
  }
  else
  {
    dword_140E35F4C = 4;
  }
  return 1LL;
}
