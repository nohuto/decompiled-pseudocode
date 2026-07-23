/*
 * XREFs of MxCreatePfnsForConsumedRegions @ 0x140CFC31C
 * Callers:
 *     MxCreatePfnsForPfns @ 0x140CFC488 (MxCreatePfnsForPfns.c)
 * Callees:
 *     MxCreatePfnsForDescriptor @ 0x140CFC444 (MxCreatePfnsForDescriptor.c)
 */

__int64 __fastcall MxCreatePfnsForConsumedRegions(_QWORD *a1, _DWORD *a2)
{
  int v2; // esi
  unsigned int v3; // edi
  __int128 *v4; // r15
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r12
  __int128 v11; // xmm1
  __int64 v12; // r9
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]

  v2 = *a2;
  v3 = 0;
  v4 = (__int128 *)a1[24];
  v6 = a1[17];
  v7 = 0LL;
  if ( *a2 )
  {
    v8 = (__int64 *)(a2 + 12);
    do
    {
      v9 = *(v8 - 1);
      if ( v7 + v6 == v9 )
      {
        v7 += *v8;
      }
      else
      {
        v10 = qword_14101FC20;
        v11 = v4[1];
        v16 = *v4;
        v17 = v11;
        v19 = v9 - (v7 + v6);
        v18 = v7 + v6;
        if ( !(unsigned int)MxCreatePfnsForDescriptor(&v16) )
          return 0LL;
        if ( v10 != qword_14101FC20 )
          return 1LL;
        v6 = *(v8 - 1);
        v7 = *v8;
      }
      v8 += 6;
      --v2;
    }
    while ( v2 );
  }
  v12 = a1[17];
  v13 = a1[18];
  if ( v7 + v6 == v13 + v12 )
    return 1LL;
  v14 = v4[1];
  v16 = *v4;
  v17 = v14;
  v19 = v12 + v13 - (v7 + v6);
  v18 = v7 + v6;
  LOBYTE(v3) = (unsigned int)MxCreatePfnsForDescriptor(&v16) != 0;
  return v3;
}
