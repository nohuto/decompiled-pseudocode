/*
 * XREFs of sub_1400554A4 @ 0x1400554A4
 * Callers:
 *     sub_1400401B0 @ 0x1400401B0 (sub_1400401B0.c)
 * Callees:
 *     sub_140039A30 @ 0x140039A30 (sub_140039A30.c)
 */

__int64 __fastcall sub_1400554A4(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // ebx
  HANDLE *v4; // rsi

  v1 = *(unsigned __int8 *)(a1 + 456);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 456) )
  {
    v4 = (HANDLE *)(a1 + 2080);
    do
    {
      if ( v2 >= 0xFF )
        break;
      ZwClose(*v4);
      ++v2;
      ++v4;
    }
    while ( v2 < v1 );
  }
  sub_140039A30(*(_DWORD *)(a1 + 56));
  return 0LL;
}
