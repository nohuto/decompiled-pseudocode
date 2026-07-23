/*
 * XREFs of MiInitializeGetPageChannels @ 0x14042E490
 * Callers:
 *     MiGetHugeRange @ 0x1406F0520 (MiGetHugeRange.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeGetPageChannels(char *a1, __int64 a2, __int16 a3, __int16 a4)
{
  unsigned __int8 *v4; // r10
  bool v5; // cc
  char v6; // al
  char v7; // r8
  _BYTE *v8; // r9
  unsigned __int8 v9; // al
  char v10; // dl

  v4 = (unsigned __int8 *)(a1 + 3);
  if ( a2 )
  {
    v5 = *v4 <= 1u;
    a1[2] = 0;
    if ( !v5 )
    {
      a1[5] = (*(_BYTE *)(a2 + 14096) & 1) == 0;
      *(_WORD *)a1 = *(_WORD *)(a2 + 14145);
      if ( (a4 & 0x2000) != 0 )
      {
        v7 = a1[4];
        v8 = a1 + 4;
        v9 = 0;
        do
        {
          v10 = *a1;
          *a1 = v7;
          if ( v10 == *v8 )
            break;
          ++a1;
          ++v9;
          v7 = v10;
        }
        while ( v9 < *v4 );
      }
    }
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *((_WORD *)a1 + 2) = 0;
    v6 = byte_140E2D898;
    *v4 = byte_140E2D898;
    if ( (unsigned __int8)v6 <= 1u )
      *v4 = 1;
    a1[4] = HIBYTE(a3) & 1;
  }
}
