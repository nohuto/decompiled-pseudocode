/*
 * XREFs of RtlpInsertUCRBlock @ 0x180014E80
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180012A40 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x180014CA0 (RtlpCreateUCREntry.c)
 * Callees:
 *     RtlpFindUCREntry @ 0x180014740 (RtlpFindUCREntry.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpInsertUCRBlock(__int64 a1, __int64 **a2)
{
  unsigned __int64 v4; // rdx
  __int64 *UCREntry; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // r11
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  int v11; // r10d
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 ***v14; // rdx
  __int64 **v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 result; // rax
  __int64 **v19; // r8
  __int64 *v20; // rbx
  __int64 v21; // r9

  v4 = (unsigned __int64)a2[5];
  if ( v4 )
  {
    UCREntry = RtlpFindUCREntry(a1, v4);
    v6 = (__int64 *)UCREntry[1];
    if ( (__int64 *)*v6 == UCREntry )
    {
      *a2 = UCREntry;
      a2[1] = v6;
      *v6 = (__int64)a2;
      UCREntry[1] = (__int64)a2;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)UCREntry, 0, *v6, 0LL);
    }
    v7 = *(__int64 **)(a1 + 320);
    if ( v7 )
    {
      v8 = a2[5];
      v9 = (unsigned __int64)v8 >> 12;
      while ( 1 )
      {
        v10 = *((unsigned int *)v7 + 2);
        if ( v9 < v10 )
        {
          v11 = v10 - 1;
          goto LABEL_10;
        }
        if ( !*v7 )
          break;
        v7 = (__int64 *)*v7;
      }
      v11 = v10 - 1;
      LODWORD(v9) = v10 - 1;
LABEL_10:
      ++*((_DWORD *)v7 + 4);
      v12 = v9 - *((_DWORD *)v7 + 6);
      v13 = 2 * v12;
      if ( !*((_DWORD *)v7 + 3) )
        v13 = v12;
      v14 = (__int64 ***)(v7[6] + 8 * v13);
      v15 = *v14;
      if ( (_DWORD)v9 == v11 )
        ++*((_DWORD *)v7 + 5);
      if ( !v15 || (int)v8 - *((_DWORD *)v15 + 10) <= 0 )
      {
        *v14 = a2;
        if ( !v15 )
          *(_DWORD *)(v7[5] + 4 * ((unsigned __int64)v12 >> 5)) |= 1 << (v12 & 0x1F);
      }
    }
  }
  v16 = *((unsigned __int8 *)a2 - 2);
  if ( (_BYTE)v16 )
    v17 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - (v16 << 16) + 0x10000;
  else
    v17 = a1;
  result = *(_QWORD *)(v17 + 96);
  v19 = (__int64 **)(v17 + 96);
  v20 = (__int64 *)(a2 + 2);
  v21 = *(_QWORD *)(result + 8);
  if ( v21 != v17 + 96 )
    return RtlpLogHeapFailure(13, 0, (_DWORD)v19, v21, 0LL, 0LL);
  *v20 = result;
  v20[1] = (__int64)v19;
  *(_QWORD *)(result + 8) = v20;
  *v19 = v20;
  return result;
}
