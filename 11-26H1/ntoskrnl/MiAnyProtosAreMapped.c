/*
 * XREFs of MiAnyProtosAreMapped @ 0x1404B66A0
 * Callers:
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 */

__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  _QWORD *v3; // rax
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 17;
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
      v8 = MiCheckProtoPtePageState(*(_QWORD *)a1, v5, 0LL, &v12);
      if ( v8 )
      {
        v10 = v6;
        if ( v6 > (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v10 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v5 < v10 )
        {
          if ( (*(_QWORD *)v5 & 1) != 0 )
          {
            v2 = 1;
            v5 = v6;
            break;
          }
          v5 += 8LL;
        }
        LOBYTE(v7) = v12;
        if ( v12 != 17 )
        {
          MiUnlockProtoPoolPage(v8, v7, v9);
          LOBYTE(v7) = 17;
          v12 = 17;
        }
      }
      else
      {
        LOBYTE(v7) = v12;
        v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v5 < v6 );
    if ( (_BYTE)v7 != 17 )
      MiUnlockProtoPoolPage(v8, v7, v9);
  }
  return v2;
}
