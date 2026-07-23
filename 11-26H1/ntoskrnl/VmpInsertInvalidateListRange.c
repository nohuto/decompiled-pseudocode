/*
 * XREFs of VmpInsertInvalidateListRange @ 0x140253938
 * Callers:
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140253DEC (VmpFlushTbVaRange.c)
 *     VmpInvalidateSlatBatched @ 0x1406C5010 (VmpInvalidateSlatBatched.c)
 * Callees:
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 *     VmpLogTbFlushSlatInvalidateInsert @ 0x1405323D0 (VmpLogTbFlushSlatInvalidateInsert.c)
 */

unsigned __int64 __fastcall VmpInsertInvalidateListRange(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v9; // edi
  __int64 *v10; // rdi
  unsigned int *v11; // rsi
  int v12; // eax
  unsigned int v13; // edx
  __int64 *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // r14
  unsigned int *v21; // r12
  __int64 v22; // rcx

  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && (*((_BYTE *)stru_140F06A28.InitialStack + 16) & 2) != 0 )
  {
    v18 = *((_QWORD *)stru_140F06A28.InitialStack + 3);
    v9 = a6;
    if ( (v18 & 2) == v18 )
      VmpLogTbFlushSlatInvalidateInsert(v18, a4, a3, a5, a6, *(_QWORD *)(a1 + 120));
  }
  else
  {
    v9 = a6;
  }
  if ( *((unsigned __int16 *)a2 + 3) != v9 && *((_QWORD *)a2 + 1) )
    VmpProcessInvalidateList(a1, a2);
  v10 = (__int64 *)(a2 + 2);
  v11 = a2 + 4;
  if ( (a2[1] & 2) != 0 )
  {
    v19 = *v10;
    if ( a3 == *v10 + (*(_QWORD *)v11 >> 12) )
    {
      result = v19 + a5;
      *v10 = v19 + a5;
      return result;
    }
    VmpProcessInvalidateList(a1, a2);
  }
  v12 = a2[1] & 1;
  if ( a5 <= 0xFFF )
  {
    if ( v12 && a3 == *v10 + (*(_QWORD *)v11 >> 12) )
    {
      v13 = *a2;
      v20 = a2 + 2;
      if ( *a2 == 512 )
        goto LABEL_34;
LABEL_11:
      *(_QWORD *)&a2[2 * v13 + 4] = (a3 << 12) | a2[2 * v13 + 4] & 0xFFF;
      v16 = *a2;
      result = a5 ^ (*(_QWORD *)&a2[2 * v16 + 4] ^ a5) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)&a2[2 * v16 + 4] = result;
      ++*a2;
      *v10 += a5;
      return result;
    }
    v13 = *a2;
    v14 = (__int64 *)(a2 + 2);
    if ( *a2 != 512 )
    {
      if ( a5 + *v10 < 0xFF )
      {
LABEL_9:
        v10 = v14;
        v15 = a2[1];
        if ( *v14 )
        {
          a2[1] = v15 & 0xFFFFFFFE;
        }
        else
        {
          a2[1] = v15 | 1;
          *((_WORD *)a2 + 3) = a6;
        }
        goto LABEL_11;
      }
      v14 = (__int64 *)(a2 + 2);
    }
    if ( *v10 )
    {
      VmpProcessInvalidateList(a1, a2);
      v13 = *a2;
    }
    goto LABEL_9;
  }
  v20 = a2 + 2;
  if ( !v12 )
  {
    v21 = a2 + 4;
LABEL_32:
    if ( *v10 )
    {
      VmpProcessInvalidateList(a1, a2);
      v11 = v21;
    }
    goto LABEL_34;
  }
  if ( a3 != *v10 + (*(_QWORD *)v11 >> 12) )
  {
    v21 = a2 + 4;
    v20 = a2 + 2;
    goto LABEL_32;
  }
LABEL_34:
  v22 = *v10;
  if ( !*v10 )
    *(_QWORD *)v11 = (a3 << 12) | *v11 & 0xFFF;
  *(_QWORD *)v11 &= 0xFFFFFFFFFFFFF000uLL;
  *v20 = v22 + a5;
  result = a6;
  *((_BYTE *)a2 + 4) = 0;
  a2[1] |= 3u;
  *((_WORD *)a2 + 3) = a6;
  *a2 = 1;
  return result;
}
