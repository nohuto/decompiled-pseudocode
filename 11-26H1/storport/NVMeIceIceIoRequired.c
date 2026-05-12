/*
 * XREFs of NVMeIceIceIoRequired @ 0x140070D70
 * Callers:
 *     RaidNvmeIceIoComplete @ 0x14007A170 (RaidNvmeIceIoComplete.c)
 *     RaidNvmeIceIoStart @ 0x14007A278 (RaidNvmeIceIoStart.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeIceIceIoRequired(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int8 *v3; // r9
  char v4; // di
  unsigned int v5; // ebx
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // r11
  __int64 v9; // r8
  int v10; // ecx
  int v11; // ecx
  unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx

  v1 = *(_QWORD *)(a1 + 224);
  if ( !v1 || !*(_QWORD *)(v1 + 3608) )
    return 0;
  if ( *(_DWORD *)(a1 + 800) != -1 )
    return 1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 216) + 116LL) & 1) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 168);
  if ( *(_BYTE *)(v2 + 2) != 40 )
    return 0;
  v3 = 0LL;
  v4 = 0;
  if ( *(_DWORD *)(v2 + 20) )
    return 0;
  v5 = *(_DWORD *)(v2 + 56);
  v6 = 0LL;
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v2 + 4 * v6 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v8 = *(unsigned int *)(v2 + 16);
      if ( (unsigned int)v7 < (unsigned int)v8 )
        break;
    }
LABEL_22:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v5 )
      goto LABEL_26;
  }
  v9 = (unsigned int)v7;
  v10 = *(_DWORD *)(v7 + v2) - 64;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 && v9 + 40 <= v8 )
      {
        v12 = (unsigned __int8 *)(v9 + v2 + 32);
        if ( !*(_DWORD *)(v9 + v2 + 12) )
          v12 = v3;
        v3 = v12;
        goto LABEL_26;
      }
    }
    else if ( v9 + 56 <= v8 )
    {
      v4 = 1;
      if ( !*(_BYTE *)(v9 + v2 + 10) )
        goto LABEL_26;
      v3 = (unsigned __int8 *)(v9 + v2 + 24);
    }
    goto LABEL_21;
  }
  if ( v9 + 40 > v8 )
  {
LABEL_21:
    if ( v4 )
      goto LABEL_26;
    goto LABEL_22;
  }
  if ( *(_BYTE *)(v9 + v2 + 10) )
    v3 = (unsigned __int8 *)(v9 + v2 + 24);
LABEL_26:
  if ( v3 )
  {
    v13 = *v3;
    if ( (_BYTE)v13 == 8 )
      return 1;
    if ( (unsigned __int8)v13 <= 0x2Au )
    {
      v14 = 0x50000000400LL;
      if ( _bittest64(&v14, v13) )
        return 1;
    }
    LOBYTE(v13) = v13 + 120;
    if ( (unsigned __int8)v13 <= 0x22u )
    {
      v15 = 0x500000005LL;
      if ( _bittest64(&v15, v13) )
        return 1;
    }
  }
  return 0;
}
