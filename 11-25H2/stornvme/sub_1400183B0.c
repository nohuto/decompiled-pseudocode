/*
 * XREFs of sub_1400183B0 @ 0x1400183B0
 * Callers:
 *     sub_140006260 @ 0x140006260 (sub_140006260.c)
 * Callees:
 *     sub_14000C070 @ 0x14000C070 (sub_14000C070.c)
 */

__int64 __fastcall sub_1400183B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned int v7; // ecx
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_QWORD *)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    v5 = 16LL;
  }
  if ( *(_DWORD *)(v4 + 8) != 3 )
    goto LABEL_8;
  v6 = *(unsigned int *)(a2 + v5);
  if ( (unsigned int)v6 < 0x54 )
  {
    if ( (unsigned int)v6 < 0x14 )
    {
LABEL_8:
      *(_BYTE *)(a2 + 3) = 6;
LABEL_9:
      v7 = -1056964602;
LABEL_10:
      *(_BYTE *)(a2 + 3) = 1;
      return v7;
    }
LABEL_7:
    *(_DWORD *)(v4 + 16) = 3;
    goto LABEL_8;
  }
  if ( *(_DWORD *)v4 != 1 )
    goto LABEL_7;
  if ( *(_DWORD *)(v4 + 4) != 84 )
    goto LABEL_7;
  v9 = *(unsigned int *)(v4 + 24);
  if ( (_DWORD)v9 != 64 )
    goto LABEL_7;
  v10 = *(unsigned int *)(v4 + 28);
  if ( (_DWORD)v10 )
  {
    v11 = *(unsigned int *)(v4 + 44);
    if ( v11 < v9 + 80 )
      goto LABEL_18;
    if ( (v11 & 7) != 0 )
      goto LABEL_18;
    v12 = v6;
    if ( v6 < v11 + v10 )
      goto LABEL_18;
  }
  else
  {
    v12 = v6;
  }
  v13 = *(unsigned int *)(v4 + 32);
  if ( (_DWORD)v13 )
  {
    v14 = *(unsigned int *)(v4 + 48);
    if ( v14 < 0x90 || (v14 & 7) != 0 || v12 < v14 + v13 )
      goto LABEL_18;
  }
  v15 = *(unsigned int *)(v4 + 36);
  if ( (_DWORD)v15 )
  {
    v16 = *(unsigned int *)(v4 + 52);
    if ( v16 < 0x90 || (v16 & 7) != 0 || v12 < v16 + v15 )
      goto LABEL_18;
  }
  if ( (_DWORD)v13 && (_DWORD)v10 && *(unsigned int *)(v4 + 48) < v10 + (unsigned __int64)*(unsigned int *)(v4 + 44) )
    goto LABEL_18;
  if ( (_DWORD)v15 )
  {
    v17 = *(unsigned int *)(v4 + 28);
    if ( (_DWORD)v17 )
    {
      if ( *(unsigned int *)(v4 + 52) < v17 + (unsigned __int64)*(unsigned int *)(v4 + 44) )
        goto LABEL_18;
    }
    if ( (_DWORD)v13 && *(unsigned int *)(v4 + 52) < v13 + (unsigned __int64)*(unsigned int *)(v4 + 48) )
      goto LABEL_18;
  }
  if ( (unsigned int)(*(_DWORD *)(v4 + 56) - 1) > 1 )
    goto LABEL_18;
  if ( (unsigned __int8)*(_DWORD *)(v4 + 80) == 20
    && (*(_DWORD *)(a1 + 56) & 0x200000) == 0
    && !sub_14000C070(a1, 5, 0LL)
    && (*(_BYTE *)(v4 + 120) & 0xF) != 0xF )
  {
    *(_DWORD *)(v4 + 16) = 8;
    v7 = -1056964595;
    *(_BYTE *)(a2 + 3) = 39;
    goto LABEL_10;
  }
  v18 = *(_DWORD *)(v4 + 80) & 3;
  if ( !v18 )
  {
    if ( !*(_DWORD *)(v4 + 32) )
      goto LABEL_44;
    goto LABEL_18;
  }
  if ( v18 == 1 )
  {
    if ( *(_DWORD *)(v4 + 32) )
    {
LABEL_44:
      if ( *(_DWORD *)(v4 + 36) )
      {
        *(_DWORD *)(v4 + 16) = 3;
        *(_BYTE *)(a2 + 3) = 6;
        goto LABEL_9;
      }
      goto LABEL_52;
    }
LABEL_18:
    *(_DWORD *)(v4 + 16) = 3;
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_9;
  }
  if ( v18 == 2 && (*(_DWORD *)(v4 + 32) || !*(_DWORD *)(v4 + 36)) )
    goto LABEL_18;
LABEL_52:
  if ( *(_DWORD *)(v4 + 56) == 2 && !_bittest64((const signed __int64 *)(a1 + 192), 0x25u) )
    goto LABEL_18;
  return 0LL;
}
