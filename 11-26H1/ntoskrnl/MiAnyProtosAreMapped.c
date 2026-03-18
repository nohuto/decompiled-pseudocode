/*
 * XREFs of MiAnyProtosAreMapped @ 0x1404BCEC0
 * Callers:
 *     MiTrimSection @ 0x1404651E0 (MiTrimSection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 */

__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  _QWORD *v3; // rax
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // dl
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 17;
  v3 = a2;
  if ( a1 != a2[3] )
    v3 = (_QWORD *)a1;
  v5 = v3[1];
  if ( a1 == a2[4] )
    v6 = a2[2] + 8LL;
  else
    v6 = *(_QWORD *)(a1 + 8) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 52));
  if ( v5 < v6 )
  {
    do
    {
      v7 = MiCheckProtoPtePageState(*(_QWORD *)a1, v5, 0, &v11);
      if ( v7 )
      {
        v8 = v6;
        if ( v6 > (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v8 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v5 < v8 )
        {
          if ( (*(_QWORD *)v5 & 1) != 0 )
          {
            v2 = 1;
            v5 = v6;
            break;
          }
          v5 += 8LL;
        }
        v9 = v11;
        if ( v11 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v11);
          v9 = 17;
          v11 = 17;
        }
      }
      else
      {
        v9 = v11;
        v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v5 < v6 );
    if ( v9 != 17 )
      MiUnlockProtoPoolPage(v7, v9);
  }
  return v2;
}
