/*
 * XREFs of sub_1401130D0 @ 0x1401130D0
 * Callers:
 *     sub_1400FD098 @ 0x1400FD098 (sub_1400FD098.c)
 * Callees:
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     sub_1401128A8 @ 0x1401128A8 (sub_1401128A8.c)
 *     sub_140112A70 @ 0x140112A70 (sub_140112A70.c)
 *     sub_140112B64 @ 0x140112B64 (sub_140112B64.c)
 *     sub_140112BBC @ 0x140112BBC (sub_140112BBC.c)
 *     sub_140112C94 @ 0x140112C94 (sub_140112C94.c)
 *     sub_140112D50 @ 0x140112D50 (sub_140112D50.c)
 *     sub_140112E48 @ 0x140112E48 (sub_140112E48.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401130D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    v7 = *(void **)(a3 + 64);
    v8 = *(_DWORD *)(a3 + 60);
  }
  else
  {
    v7 = *(void **)(a3 + 24);
    v8 = *(_DWORD *)(a3 + 16);
  }
  LODWORD(v17) = v8;
  if ( !v7 || !v8 )
    goto LABEL_27;
  memset_0(v7, 0, v8);
  v9 = *(unsigned __int8 *)(a4 + 2);
  if ( (*(_BYTE *)(a4 + 1) & 1) != 0 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v10 = sub_140112E48(v9, a3, &v17, (__int64)v7);
      goto LABEL_22;
    }
    v12 = v9 - 128;
    if ( !v12 )
    {
      v10 = sub_140112C94(a1, a3, (unsigned int *)&v17, (__int64)v7);
      goto LABEL_22;
    }
    v13 = v12 - 3;
    if ( !v13 )
    {
      v10 = sub_140112BBC(a1, a3, (unsigned int *)&v17, (__int64)v7);
      goto LABEL_22;
    }
    v14 = v13 - 45;
    if ( !v14 )
    {
      v10 = sub_1401128A8(a1, a3, &v17, (__int64)v7);
      goto LABEL_22;
    }
    v15 = (unsigned int)(v14 - 1);
    if ( !(_DWORD)v15 )
    {
      v10 = sub_140112B64(v15, a3, &v17, (__int64)v7);
      goto LABEL_22;
    }
    if ( (_DWORD)v15 == 1 )
    {
      v10 = sub_140112A70(a1, a3, &v17, (__int64)v7);
      goto LABEL_22;
    }
LABEL_27:
    sub_140112680(a3, 6, 5, 36, 0);
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)v9 )
  {
    sub_140112680(a3, 6, 5, 36, 0);
    v11 = -1073741811;
    goto LABEL_23;
  }
  v10 = sub_140112D50(a1, a3, (int *)&v17, v7);
LABEL_22:
  v11 = v10;
LABEL_23:
  if ( !v11 )
  {
    if ( *(_BYTE *)(a3 + 2) == 40 )
      *(_DWORD *)(a3 + 60) = v17;
    else
      *(_DWORD *)(a3 + 16) = v17;
  }
  return v11;
}
