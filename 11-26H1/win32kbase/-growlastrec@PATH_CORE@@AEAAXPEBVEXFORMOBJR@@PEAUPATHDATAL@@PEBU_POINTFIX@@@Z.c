/*
 * XREFs of ?growlastrec@PATH_CORE@@AEAAXPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C193C
 * Callers:
 *     ?bPolyLineTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1B80 (-bPolyLineTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

void __fastcall PATH_CORE::growlastrec(
        PATH_CORE *this,
        const struct EXFORMOBJR *a2,
        struct PATHDATAL *a3,
        const struct _POINTFIX *a4)
{
  __int64 v4; // rbp
  __int64 v8; // r15
  int v9; // edx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rsi
  int *v14; // rcx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    v8 = *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
      v9 = *((_DWORD *)a3 + 8);
      if ( v9 == (*(_DWORD *)(v4 + 16) & 0xFFFFFFFC) )
      {
        v10 = v8 + *(unsigned int *)(v8 + 16);
        v11 = v4 + 24 + 8LL * *(unsigned int *)(v4 + 20);
        LODWORD(v12) = 0;
        if ( v10 > v11 )
          v12 = (__int64)(v10 - v11) >> 3;
        v13 = *((unsigned int *)a3 + 9);
        if ( (unsigned int)v12 <= (unsigned int)v13 )
          v13 = (unsigned int)v12;
        if ( (v9 & 0x10) != 0 )
          v13 = 3 * ((unsigned int)v13 / 3);
        if ( (_DWORD)v13 )
        {
          if ( a2 )
            EXFORMOBJR::bXformRound(a2, a3, v4 + 24 + 8LL * *(unsigned int *)(v4 + 20), (unsigned int)v13);
          else
            umptr_r<_POINTL>::read<_POINTFIX>(
              (__int64)a3,
              (void *)(v4 + 24 + 8LL * *(unsigned int *)(v4 + 20)),
              (unsigned int)v13);
          if ( !*((_BYTE *)a3 + 25) && !*((_BYTE *)a3 + 24) )
          {
            v14 = (int *)(v4 + 24 + 8LL * *(unsigned int *)(v4 + 20));
            v15 = *((_DWORD *)this + 9);
            v16 = (unsigned int)v13;
            v17 = *((_DWORD *)this + 6);
            do
            {
              v18 = *v14;
              if ( v17 > *v14 )
              {
                *((_DWORD *)this + 6) = v18;
                v17 = v18;
              }
              else if ( *((_DWORD *)this + 8) < v18 )
              {
                *((_DWORD *)this + 8) = v18;
              }
              v19 = v14[1];
              if ( v15 < v19 )
              {
                v15 = v14[1];
                *((_DWORD *)this + 9) = v19;
              }
              else if ( *((_DWORD *)this + 7) > v19 )
              {
                *((_DWORD *)this + 7) = v19;
              }
              v14 += 2;
              --v16;
            }
            while ( v16 );
            *(_DWORD *)(v4 + 20) += v13;
            *(_QWORD *)(v8 + 8) = v4 + 8LL * *(unsigned int *)(v4 + 20) + 24;
            *((_DWORD *)a3 + 9) -= v13;
            v20 = *((_QWORD *)a3 + 2);
            if ( v20 > 0x7FFFFFFFFFFFFFFFLL
              || (v21 = v20 + v13, v20 + v13 > 0x7FFFFFFFFFFFFFFFLL)
              || v21 > *((_QWORD *)a3 + 1) )
            {
              *((_BYTE *)a3 + 24) = 1;
            }
            else
            {
              *((_QWORD *)a3 + 2) = v21;
            }
          }
        }
      }
    }
  }
}
