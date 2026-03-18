/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140CCFDD0
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 3LL;
  byte_140F0B1F4 = 100;
  byte_140F0B4BC = 100;
  result = &unk_140F0B4BF;
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
  word_140F0B1E9 = 0;
  word_140F0B4B1 = 0;
  dword_140F0B1F0 = 1;
  dword_140F0B4B8 = 1;
  dword_140F0B1EC = 1;
  dword_140F0B4B4 = 1;
  word_140F0B1E5 = 24902;
  word_140F0B4AD = 24902;
  byte_140F0B1E7 = 20;
  byte_140F0B4AF = 20;
  word_140F0B3A4 = 0;
  word_140F0B66C = 0;
  byte_140F0B3A6 = 0;
  byte_140F0B66E = 0;
  return result;
}
