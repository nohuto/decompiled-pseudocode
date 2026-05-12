/*
 * XREFs of sub_140027800 @ 0x140027800
 * Callers:
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140027800(__int64 a1)
{
  __int64 v1; // rax
  char *v2; // r8
  int v3; // r9d
  unsigned int v4; // ebp
  unsigned int v5; // edi
  unsigned int *v6; // r11
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  int v9; // esi
  __int64 v10; // rbx
  char v11; // al
  char v12; // al
  int v13; // esi

  if ( byte_1401688BC )
    return;
  v1 = *(_QWORD *)(a1 + 168);
  if ( !v1 )
    return;
  if ( *(_BYTE *)(v1 + 2) != 40 )
  {
    v3 = *(unsigned __int8 *)(v1 + 2);
    v2 = (char *)(v1 + 72);
    goto LABEL_12;
  }
  v2 = 0LL;
  v3 = *(_DWORD *)(v1 + 20);
  if ( v3 )
    goto LABEL_12;
  v4 = 0;
  v5 = *(_DWORD *)(v1 + 56);
  if ( !v5 )
    goto LABEL_12;
  v6 = (unsigned int *)(v1 + 120);
  while ( 1 )
  {
    v7 = *v6;
    if ( (unsigned int)v7 < 0x80 )
      goto LABEL_11;
    v8 = *(unsigned int *)(v1 + 16);
    if ( (unsigned int)v7 >= (unsigned int)v8 )
      goto LABEL_11;
    v9 = *(_DWORD *)(v7 + v1);
    v10 = v7 + v1;
    if ( v9 == 64 )
    {
      if ( (unsigned __int64)(unsigned int)v7 + 40 <= v8 )
      {
        if ( *(_BYTE *)(v10 + 10) )
          v2 = (char *)(v10 + 24);
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    v13 = v9 - 65;
    if ( !v13 )
      break;
    if ( v13 == 1 && (unsigned __int64)(unsigned int)v7 + 40 <= v8 )
    {
      if ( *(_DWORD *)(v10 + 12) )
        v2 = (char *)(v10 + 32);
      goto LABEL_12;
    }
LABEL_11:
    ++v4;
    ++v6;
    if ( v4 >= v5 )
      goto LABEL_12;
  }
  if ( (unsigned __int64)(unsigned int)v7 + 56 > v8 )
    goto LABEL_11;
  if ( *(_BYTE *)(v10 + 10) )
    v2 = (char *)(v10 + 24);
LABEL_12:
  if ( v2 )
  {
    if ( !v3 )
    {
      v11 = *v2;
      if ( *v2 == 42 || v11 == -118 || v11 == -86 )
      {
        v12 = v2[1];
        if ( (v12 & 8) != 0 )
          v2[1] = v12 & 0xF7;
      }
    }
  }
}
