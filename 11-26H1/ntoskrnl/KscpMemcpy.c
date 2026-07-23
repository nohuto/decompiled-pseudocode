/*
 * XREFs of KscpMemcpy @ 0x140C64E80
 * Callers:
 *     KscpCopyFromUser @ 0x140C64BC0 (KscpCopyFromUser.c)
 *     KscpCopyFromUserSmap @ 0x140C64BE0 (KscpCopyFromUserSmap.c)
 *     KscpCopyToUser @ 0x140C64C20 (KscpCopyToUser.c)
 *     KscpCopyToUserSmap @ 0x140C64C40 (KscpCopyToUserSmap.c)
 *     KscpMemmoveUserToUser @ 0x140C64FA0 (KscpMemmoveUserToUser.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall KscpMemcpy(_OWORD *a1, char *a2, unsigned __int64 a3)
{
  _OWORD *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  signed __int64 v7; // rdx
  char v8; // r11
  signed __int64 v9; // rdx
  __int128 v10; // xmm0
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int128 v13; // xmm1
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  unsigned __int64 i; // r9
  unsigned __int64 v21; // r8

  result = a1;
  if ( a3 < 8 )
  {
    if ( a3 )
    {
      v7 = a2 - (char *)a1;
      do
      {
        v8 = *((_BYTE *)a1 + v7);
        a1 = (_OWORD *)((char *)a1 + 1);
        --a3;
        *((_BYTE *)a1 - 1) = v8;
      }
      while ( a3 );
    }
  }
  else if ( a3 > 0x10 )
  {
    if ( a3 > 0x20 )
    {
      v9 = a2 - (char *)a1;
      v10 = *(_OWORD *)((char *)a1 + v9);
      v11 = (unsigned __int64)(a1 + 1);
      if ( (v11 & 0xF) != 0 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
        v13 = *(_OWORD *)(v12 + v9);
        *result = v10;
        v10 = v13;
        v11 = v12 + 16;
      }
      v14 = (unsigned __int64)result + a3 - v11;
      v15 = v14 >> 6;
      if ( v14 >> 6 )
      {
        v14 &= 0x3Fu;
        do
        {
          v16 = *(_OWORD *)(v11 + v9);
          v17 = *(_OWORD *)(v11 + v9 + 16);
          v18 = *(_OWORD *)(v11 + v9 + 32);
          v19 = *(_OWORD *)(v11 + v9 + 48);
          *(_OWORD *)(v11 - 16) = v10;
          v11 += 64LL;
          --v15;
          *(_OWORD *)(v11 - 64) = v16;
          *(_OWORD *)(v11 - 48) = v17;
          *(_OWORD *)(v11 - 32) = v18;
          v10 = v19;
        }
        while ( v15 );
      }
      for ( i = v14 >> 4; i; --i )
      {
        *(_OWORD *)(v11 - 16) = v10;
        v10 = *(_OWORD *)(v11 + v9);
        v11 += 16LL;
      }
      v21 = v14 & 0xF;
      if ( v21 )
        *(_OWORD *)(v11 + v21 - 16) = *(_OWORD *)(v11 + v21 - 16 + v9);
      *(_OWORD *)(v11 - 16) = v10;
    }
    else
    {
      v6 = *(_OWORD *)&a2[a3 - 16];
      *a1 = *(_OWORD *)a2;
      *(_OWORD *)((char *)a1 + a3 - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)&a2[a3 - 8];
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + a3 - 8) = v5;
  }
  return result;
}
