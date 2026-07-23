/*
 * XREFs of RtlpDeleteFromMergedRange @ 0x140806600
 * Callers:
 *     RtlDeleteOwnersRanges @ 0x140B11B70 (RtlDeleteOwnersRanges.c)
 *     RtlDeleteRange @ 0x140B4C0E0 (RtlDeleteRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x1408064E0 (RtlpAddToMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x140AE2D28 (RtlpFreeRangeListEntry.c)
 *     RtlpAddRange @ 0x140B124BC (RtlpAddRange.c)
 */

__int64 __fastcall RtlpDeleteFromMergedRange(char *Entry, __int64 *a2)
{
  char *v2; // rax
  __int64 v4; // rdx
  int v5; // r14d
  char **v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rdx
  __int64 *v11; // rdi
  __int64 v12; // r8
  __int64 **v13; // rcx
  unsigned __int64 *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-8h]

  v2 = Entry + 40;
  v4 = *((_QWORD *)Entry + 5);
  v5 = 0;
  if ( *(char **)(v4 + 8) != Entry + 40 )
    goto LABEL_19;
  v7 = (char **)*((_QWORD *)Entry + 6);
  if ( *v7 != v2 )
    goto LABEL_19;
  *v7 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v7;
  v23 = &v22;
  v22 = &v22;
  v8 = (__int64 *)a2[2];
  v9 = *v8;
  v10 = v8 - 5;
  while ( 1 )
  {
    v11 = (__int64 *)(v9 - 40);
    if ( a2 == v10 + 3 )
    {
      if ( v22 != &v22 )
      {
        v20 = (_QWORD *)a2[6];
        v21 = a2[5];
        *v20 = v22;
        v22[1] = v20;
        *(_QWORD *)(v21 + 8) = v23;
        *v23 = v21;
        goto LABEL_18;
      }
      v18 = (__int64 *)a2[5];
      if ( (__int64 *)v18[1] == a2 + 5 )
      {
        v19 = (__int64 **)a2[6];
        if ( *v19 == a2 + 5 )
        {
          *v19 = v18;
          v18[1] = (__int64)v19;
LABEL_18:
          RtlpFreeRangeListEntry(Entry);
          RtlpFreeRangeListEntry(a2);
          return (unsigned int)v5;
        }
      }
LABEL_19:
      __fastfail(3u);
    }
    v12 = v10[5];
    if ( *(__int64 **)(v12 + 8) != v10 + 5 )
      goto LABEL_19;
    v13 = (__int64 **)v10[6];
    if ( *v13 != v10 + 5 )
      goto LABEL_19;
    *v13 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    *((_BYTE *)v10 + 33) &= ~2u;
    v5 = RtlpAddRange(&v22, v10, 1LL);
    if ( v5 < 0 )
      break;
    v10 = v11;
    v9 = v11[5];
  }
  v14 = v22 - 5;
  v15 = v22;
  while ( 1 )
  {
    v16 = *v15 - 40LL;
    if ( &v22 == v15 )
      break;
    RtlpAddToMergedRange((__int64)a2, v14, 1);
    v15 = (_QWORD *)(v16 + 40);
    v14 = (unsigned __int64 *)v16;
  }
  return RtlpAddToMergedRange((__int64)a2, (unsigned __int64 *)Entry, 1);
}
