/*
 * XREFs of sub_1400886B0 @ 0x1400886B0
 * Callers:
 *     sub_14008ED30 @ 0x14008ED30 (sub_14008ED30.c)
 *     sub_14008EEFC @ 0x14008EEFC (sub_14008EEFC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400886B0(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // r11
  unsigned int v5; // edx
  _BYTE *v6; // rax
  int v7; // ecx

  v4 = *(_QWORD *)(a1 + 184);
  v5 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( v4 )
  {
    do
    {
      v6 = (_BYTE *)(v4 + v5);
      if ( !*v6 )
        break;
      v7 = (unsigned __int8)v6[1];
      if ( *v6 == 3 )
      {
        *a4 = v7;
        *a3 = v6 + 4;
        return;
      }
      v5 += v7 + 4;
    }
    while ( v5 < 0x1000 );
  }
}
