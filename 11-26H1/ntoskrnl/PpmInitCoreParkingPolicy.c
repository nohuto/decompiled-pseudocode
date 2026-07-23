/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140CD5F78
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 3LL;
  byte_140F0B5B4 = 100;
  byte_140F0B87C = 100;
  result = &unk_140F0B87F;
  do
  {
    *(result - 712) = 100;
    *result = 100;
    *(result - 734) = 0;
    *(result - 22) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140F0B5A9 = 0;
  word_140F0B871 = 0;
  dword_140F0B5B0 = 1;
  dword_140F0B878 = 1;
  dword_140F0B5AC = 1;
  dword_140F0B874 = 1;
  word_140F0B5A5 = 24902;
  word_140F0B86D = 24902;
  byte_140F0B5A7 = 20;
  byte_140F0B86F = 20;
  word_140F0B764 = 0;
  word_140F0BA2C = 0;
  byte_140F0B766 = 0;
  byte_140F0BA2E = 0;
  return result;
}
