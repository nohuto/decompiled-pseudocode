/*
 * XREFs of RaidQosSupportedCommand @ 0x140022B44
 * Callers:
 *     StorpTelemetryCollectPerfData @ 0x140021FA0 (StorpTelemetryCollectPerfData.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidQosSupportedCommand(__int64 a1)
{
  char v1; // al
  int v3; // ecx
  unsigned __int8 *v5; // r9
  char v6; // di
  unsigned int v7; // ebx
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // r11
  __int64 v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int8 *v17; // rcx

  v1 = *(_BYTE *)(a1 + 2);
  if ( v1 == 40 )
    v3 = *(_DWORD *)(a1 + 20);
  else
    v3 = *(unsigned __int8 *)(a1 + 2);
  if ( v3 )
    return 0;
  if ( v1 != 40 )
  {
    v5 = (unsigned __int8 *)(a1 + 72);
    goto LABEL_13;
  }
  v5 = 0LL;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 20) )
    goto LABEL_13;
  v7 = *(_DWORD *)(a1 + 56);
  v8 = 0LL;
  if ( !v7 )
    goto LABEL_13;
  while ( 1 )
  {
    v9 = *(unsigned int *)(a1 + 4 * v8 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v10 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v9 < (unsigned int)v10 )
        break;
    }
LABEL_20:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v7 )
      goto LABEL_13;
  }
  v11 = (unsigned int)v9;
  v12 = *(_DWORD *)(v9 + a1) - 64;
  if ( !v12 )
  {
    if ( v11 + 40 <= v10 )
    {
      if ( *(_BYTE *)(v11 + a1 + 10) )
        v5 = (unsigned __int8 *)(v11 + a1 + 24);
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v16 = v12 - 1;
  if ( !v16 )
  {
    if ( v11 + 56 <= v10 )
    {
      v6 = 1;
      if ( !*(_BYTE *)(v11 + a1 + 10) )
        goto LABEL_13;
      v5 = (unsigned __int8 *)(v11 + a1 + 24);
    }
    goto LABEL_12;
  }
  if ( v16 != 1 || v11 + 40 > v10 )
  {
LABEL_12:
    if ( v6 )
      goto LABEL_13;
    goto LABEL_20;
  }
  v17 = (unsigned __int8 *)(v11 + a1 + 32);
  if ( !*(_DWORD *)(v11 + a1 + 12) )
    v17 = v5;
  v5 = v17;
LABEL_13:
  if ( !v5 )
    return 0;
  v13 = *v5;
  if ( (_BYTE)v13 != 8 )
  {
    if ( (unsigned __int8)v13 > 0x2Au || (v14 = 0x50000000400LL, !_bittest64(&v14, v13)) )
    {
      if ( (unsigned __int8)(v13 + 120) > 0x22u || (v15 = 0x500000005LL, !_bittest64(&v15, (unsigned int)(v13 + 120))) )
      {
        if ( (_BYTE)v13 != 37 && (_BYTE)v13 != 0x9E && (_BYTE)v13 != 94 && (_BYTE)v13 != 95 )
          return 0;
      }
    }
  }
  return 1;
}
