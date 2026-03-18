/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30
 * Callers:
 *     bPolyPolygon @ 0x1400C0DA0 (bPolyPolygon.c)
 *     EPATHOBJ_bPolyLineTo @ 0x1400C10A0 (EPATHOBJ_bPolyLineTo.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400C116C (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1400C18B0 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

char __fastcall EPATHOBJ::bPolyLineTo(__int64 a1, const struct EXFORMOBJR *a2, __int64 *a3, unsigned int a4)
{
  __int64 v4; // rsi
  const struct EXFORMOBJR *v6; // r10
  char v8; // bl
  bool v9; // al
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  int *v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // r9d
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-28h]
  unsigned __int64 v25; // [rsp+30h] [rbp-20h]
  __int16 v26; // [rsp+38h] [rbp-18h]
  int v27; // [rsp+40h] [rbp-10h]
  unsigned int v28; // [rsp+44h] [rbp-Ch]
  __int64 v29; // [rsp+90h] [rbp+40h]

  v4 = *(_QWORD *)(a1 + 8);
  v6 = a2;
  if ( v4 )
  {
    v8 = 1;
    v23 = *a3;
    v24 = a3[1];
    v25 = a3[2];
    v26 = *((_WORD *)a3 + 12);
    v27 = 0;
    v28 = a4;
    if ( !a4 )
      goto LABEL_7;
    if ( (*(_DWORD *)(v4 + 72) & 1) != 0 )
      goto LABEL_4;
    v11 = *(_QWORD *)(v4 + 40);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v4 + 24);
      v29 = v12;
      if ( v12 )
      {
        if ( (*(_DWORD *)(v11 + 16) & 0xFFFFFFFC) == 0 )
        {
          v13 = v12 + *(unsigned int *)(v12 + 16);
          v14 = v11 + 8 * (*(unsigned int *)(v11 + 20) + 3LL);
          if ( v13 > v14 )
          {
            v15 = (__int64)(v13 - v14) >> 3;
            if ( (unsigned int)v15 > a4 )
            {
              LODWORD(v15) = a4;
LABEL_17:
              if ( v6 )
                EXFORMOBJR::bXformRound(v6, &v23, v11 + 8 * (*(unsigned int *)(v11 + 20) + 3LL), (unsigned int)v15);
              else
                umptr_r<_POINTL>::read<_POINTFIX>(
                  (__int64)&v23,
                  (void *)(v11 + 8 * (*(unsigned int *)(v11 + 20) + 3LL)),
                  (unsigned int)v15);
              if ( !v26 )
              {
                v16 = (int *)(v11 + 8 * (*(unsigned int *)(v11 + 20) + 3LL));
                v17 = *(_DWORD *)(v4 + 60);
                v18 = (unsigned int)v15;
                v19 = *(_DWORD *)(v4 + 48);
                do
                {
                  v20 = *v16;
                  if ( v19 > *v16 )
                  {
                    *(_DWORD *)(v4 + 48) = v20;
                    v19 = v20;
                  }
                  else if ( *(_DWORD *)(v4 + 56) < v20 )
                  {
                    *(_DWORD *)(v4 + 56) = v20;
                  }
                  v21 = v16[1];
                  if ( v17 < v21 )
                  {
                    v17 = v16[1];
                    *(_DWORD *)(v4 + 60) = v21;
                  }
                  else if ( *(_DWORD *)(v4 + 52) > v21 )
                  {
                    *(_DWORD *)(v4 + 52) = v21;
                  }
                  v16 += 2;
                  --v18;
                }
                while ( v18 );
                *(_DWORD *)(v11 + 20) += v15;
                *(_QWORD *)(v29 + 8) = v11 + 8 * (*(unsigned int *)(v11 + 20) + 3LL);
                v28 -= v15;
                if ( v25 > 0x7FFFFFFFFFFFFFFFLL
                  || (v22 = v25 + (unsigned int)v15, v22 > 0x7FFFFFFFFFFFFFFFLL)
                  || v22 > v24 )
                {
                  LOBYTE(v26) = 1;
                }
                else
                {
                  v25 += (unsigned int)v15;
                }
              }
              v6 = a2;
              goto LABEL_34;
            }
            if ( (_DWORD)v15 )
              goto LABEL_17;
          }
        }
      }
    }
LABEL_34:
    if ( v26 )
      return 0;
LABEL_4:
    while ( v28 )
    {
      v9 = PATH_CORE::createrec((PATH_CORE *)(v4 + 24), v6, (struct PATHDATAL *)&v23, 0LL);
      v6 = a2;
      if ( !v9 )
        return 0;
    }
LABEL_7:
    *(_DWORD *)(a1 + 4) += a4;
    *(_DWORD *)a1 &= ~2u;
    return v8;
  }
  return 0;
}
