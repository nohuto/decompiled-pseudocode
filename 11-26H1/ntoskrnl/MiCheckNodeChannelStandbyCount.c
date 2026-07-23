/*
 * XREFs of MiCheckNodeChannelStandbyCount @ 0x1404D1090
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckNodeChannelStandbyCount(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r11
  char v4; // r9
  unsigned __int8 v5; // dl
  unsigned int v6; // r10d
  unsigned int i; // r8d

  v3 = *(_QWORD *)(a1 + 16) + 56320LL * a2;
  if ( (*(_DWORD *)(v3 + 14096) & 1) != 0 )
    v4 = a3 + 1;
  else
    v4 = byte_140E2D898;
  v5 = (*(_DWORD *)(v3 + 14096) & 1) != 0 ? a3 : 0;
  v6 = 0;
  while ( v5 != v4 )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_QWORD *)(88 * (i + 8LL * v5) + v3 + 4176) )
        goto LABEL_5;
    }
    ++v5;
  }
LABEL_5:
  LOBYTE(v6) = v5 != (unsigned __int8)v4;
  return v6;
}
