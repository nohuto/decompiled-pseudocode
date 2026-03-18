/*
 * XREFs of ?SetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@@Z @ 0x14025C030
 * Callers:
 *     NtUserSetImeInfoEx @ 0x1402BCC90 (NtUserSetImeInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetImeInfoEx(struct tagWINDOWSTATION *a1, struct tagIMEINFOEX *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm1

  if ( !a1 )
    return 0LL;
  v2 = (_QWORD *)*((_QWORD *)a1 + 5);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  while ( v3[5] != *(_QWORD *)a2 )
  {
    v3 = (_QWORD *)v3[2];
    if ( v3 == v2 )
      return 0LL;
  }
  v5 = v3[10];
  if ( !v5 )
    return 0LL;
  if ( !*(_DWORD *)(v5 + 76) )
  {
    v6 = 2LL;
    do
    {
      *(_OWORD *)v5 = *(_OWORD *)a2;
      *(_OWORD *)(v5 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v5 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v5 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v5 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v5 + 80) = *((_OWORD *)a2 + 5);
      *(_OWORD *)(v5 + 96) = *((_OWORD *)a2 + 6);
      v5 += 128LL;
      v7 = *((_OWORD *)a2 + 7);
      a2 = (struct tagIMEINFOEX *)((char *)a2 + 128);
      *(_OWORD *)(v5 - 16) = v7;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v5 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v5 + 48) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(v5 + 64) = *((_OWORD *)a2 + 4);
    *(_OWORD *)(v5 + 80) = *((_OWORD *)a2 + 5);
  }
  return 1LL;
}
