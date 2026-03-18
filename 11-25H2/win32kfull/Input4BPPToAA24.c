/*
 * XREFs of Input4BPPToAA24 @ 0x1401DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input4BPPToAA24(char *a1, _BYTE *a2)
{
  unsigned __int8 *v2; // r10
  unsigned int v4; // ebx
  _BYTE *v5; // r9
  __int64 v6; // r11
  char v8; // cl
  unsigned int j; // esi
  unsigned int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // cl
  int v15; // eax
  int v16; // eax
  __int64 v18; // rax
  unsigned int i; // edx
  unsigned int v20; // ecx
  __int64 v21; // rcx

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 12);
  v5 = a2;
  v6 = *((_QWORD *)a1 + 10);
  v8 = a1[1];
  if ( (*a1 & 4) != 0 )
  {
    if ( v8 )
    {
      --v4;
      v18 = *v2++ & 0xF;
      v5 = a2 + 1;
      *a2 = *(_BYTE *)(v6 + 4 * v18 + 3);
    }
    for ( i = v4 >> 1; i; --i )
    {
      v20 = *v2++;
      *v5 = *(_BYTE *)(v6 + 4 * ((unsigned __int64)v20 >> 4) + 3);
      v5[1] = *(_BYTE *)(v6 + 4LL * (v20 & 0xF) + 3);
      v5 += 2;
    }
    if ( (v4 & 1) != 0 )
      *v5 = *(_BYTE *)(v6 + 4 * ((unsigned __int64)*v2 >> 4) + 3);
  }
  else
  {
    if ( v8 )
    {
      --v4;
      v21 = *v2++ & 0xF;
      v5 = a2 + 3;
      *(_WORD *)a2 = *(_WORD *)(v6 + 4 * v21);
      a2[2] = *(_BYTE *)(v6 + 4 * v21 + 2);
    }
    for ( j = v4 >> 1; j; --j )
    {
      v10 = *v2++;
      v11 = v10;
      v12 = v10 & 0xF;
      v11 >>= 4;
      *(_WORD *)v5 = *(_WORD *)(v6 + 4 * v11);
      v5[2] = *(_BYTE *)(v6 + 4 * v11 + 2);
      *(_WORD *)(v5 + 3) = *(_WORD *)(v6 + 4 * v12);
      v5[5] = *(_BYTE *)(v6 + 4 * v12 + 2);
      v5 += 6;
    }
    if ( (v4 & 1) != 0 )
    {
      v13 = (unsigned __int64)*v2 >> 4;
      *(_WORD *)v5 = *(_WORD *)(v6 + 4 * v13);
      v5[2] = *(_BYTE *)(v6 + 4 * v13 + 2);
    }
  }
  v14 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v15 = *((_DWORD *)a1 + 13);
    if ( v15 && (v16 = v15 - 1, (*((_DWORD *)a1 + 13) = v16) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v14 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v14 & 0xFD;
    }
  }
  return a2;
}
