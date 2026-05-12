/*
 * XREFs of sub_14005CFC0 @ 0x14005CFC0
 * Callers:
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 * Callees:
 *     sub_140131E30 @ 0x140131E30 (sub_140131E30.c)
 */

void __fastcall sub_14005CFC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char v5; // r15
  int v6; // esi
  unsigned int v7; // r11d
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rcx
  _BYTE *v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // ecx
  int v15; // ecx

  v2 = *(_QWORD *)(a1 + 6224);
  if ( !v2 || !a2 || (*(_DWORD *)(v2 + 12) & 1) == 0 || (*(_DWORD *)(v2 + 12) & 2) != 0 )
    return;
  v3 = *(_QWORD *)(a2 + 168);
  if ( *(_BYTE *)(v3 + 2) != 40 )
  {
    v7 = *(_DWORD *)(v3 + 16);
    v4 = (_BYTE *)(v3 + 72);
    v6 = *(unsigned __int8 *)(v3 + 2);
    goto LABEL_27;
  }
  v4 = 0LL;
  v5 = 0;
  v6 = *(_DWORD *)(v3 + 20);
  v7 = *(_DWORD *)(v3 + 60);
  if ( v6 )
    goto LABEL_27;
  v8 = *(_DWORD *)(v3 + 56);
  v9 = 0LL;
  if ( !v8 )
    goto LABEL_27;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v3 + 4 * v9 + 120);
    v11 = v4;
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = *(unsigned int *)(v3 + 16);
      if ( (unsigned int)v10 < (unsigned int)v12 )
        break;
    }
LABEL_22:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v8 )
      goto LABEL_27;
  }
  v13 = (unsigned int)v10;
  v14 = *(_DWORD *)(v10 + v3) - 64;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 && v13 + 40 <= v12 )
      {
        v4 = (_BYTE *)(v13 + v3 + 32);
        if ( !*(_DWORD *)(v13 + v3 + 12) )
          v4 = v11;
        goto LABEL_27;
      }
    }
    else if ( v13 + 56 <= v12 )
    {
      v5 = 1;
      if ( !*(_BYTE *)(v13 + v3 + 10) )
        goto LABEL_27;
      v4 = (_BYTE *)(v13 + v3 + 24);
    }
    goto LABEL_21;
  }
  if ( v13 + 40 > v12 )
  {
LABEL_21:
    if ( v5 )
      goto LABEL_27;
    goto LABEL_22;
  }
  if ( *(_BYTE *)(v13 + v3 + 10) )
    v4 = (_BYTE *)(v13 + v3 + 24);
LABEL_27:
  if ( v4 && !v6 && ((*v4 - 8) & 0x5D) == 0 )
  {
    if ( v7 )
      sub_140131E30(v2, v7);
  }
}
