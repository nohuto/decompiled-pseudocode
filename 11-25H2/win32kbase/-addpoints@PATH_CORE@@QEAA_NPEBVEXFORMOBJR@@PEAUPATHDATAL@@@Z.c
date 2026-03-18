/*
 * XREFs of ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x14009A0C4
 * Callers:
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400994C4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140099EA4 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bPolyBezierTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x140099F20 (-bPolyBezierTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x140099F70 (-bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bPolyLineTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x14009A000 (-bPolyLineTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x14009A050 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x140099DDC (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14009A2B8 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14009A520 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

char __fastcall PATH_CORE::addpoints(PATH_CORE *this, const struct EXFORMOBJR *a2, struct PATHDATAL *a3)
{
  unsigned int v5; // r8d
  __int64 v7; // rbp
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  int *v13; // rcx
  int v14; // edx
  __int64 v15; // r8
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx

  v5 = *((_DWORD *)a3 + 9);
  if ( v5 )
  {
    if ( (*((_DWORD *)this + 12) & 1) != 0 )
      goto LABEL_31;
    v7 = *((_QWORD *)this + 2);
    v8 = *(_QWORD *)this;
    if ( v7 )
    {
      if ( v8 )
      {
        v9 = *((_DWORD *)a3 + 8);
        if ( v9 == (*(_DWORD *)(v7 + 16) & 0xFFFFFFFC) )
        {
          v10 = 0LL;
          v11 = v8 + *(unsigned int *)(v8 + 16);
          v12 = v7 + 8LL * *(unsigned int *)(v7 + 20) + 24;
          if ( v11 > v12 )
          {
            v10 = (__int64)(v11 - v12) >> 3;
            if ( (unsigned int)v10 > v5 )
              v10 = v5;
          }
          if ( (v9 & 0x10) != 0 )
            v10 = 3 * ((unsigned int)v10 / 3);
          if ( (_DWORD)v10 )
          {
            if ( a2 )
              EXFORMOBJR::bXformRound(a2, a3, v7 + 8LL * *(unsigned int *)(v7 + 20) + 24, (unsigned int)v10);
            else
              umptr_r<_POINTL>::read<_POINTFIX>(
                (__int64)a3,
                (void *)(v7 + 8LL * *(unsigned int *)(v7 + 20) + 24),
                (unsigned int)v10);
            if ( *((_BYTE *)a3 + 25) )
              return 0;
            if ( !*((_BYTE *)a3 + 24) )
            {
              v13 = (int *)(v7 + 24 + 8LL * *(unsigned int *)(v7 + 20));
              v14 = *((_DWORD *)this + 9);
              v15 = (unsigned int)v10;
              do
              {
                v16 = *v13;
                if ( *((_DWORD *)this + 6) > *v13 )
                {
                  *((_DWORD *)this + 6) = v16;
                }
                else if ( *((_DWORD *)this + 8) < v16 )
                {
                  *((_DWORD *)this + 8) = v16;
                }
                v17 = v13[1];
                if ( v14 < v17 )
                {
                  v14 = v13[1];
                  *((_DWORD *)this + 9) = v17;
                }
                else if ( *((_DWORD *)this + 7) > v17 )
                {
                  *((_DWORD *)this + 7) = v17;
                }
                v13 += 2;
                --v15;
              }
              while ( v15 );
              *(_DWORD *)(v7 + 20) += v10;
              *(_QWORD *)(v8 + 8) = v7 + 8LL * *(unsigned int *)(v7 + 20) + 24;
              *((_DWORD *)a3 + 9) -= v10;
              v18 = *((_QWORD *)a3 + 2);
              if ( v18 > 0x7FFFFFFFFFFFFFFFLL
                || (v19 = v10 + v18, v10 + v18 > 0x7FFFFFFFFFFFFFFFLL)
                || v19 > *((_QWORD *)a3 + 1) )
              {
                *((_BYTE *)a3 + 24) = 1;
              }
              else
              {
                *((_QWORD *)a3 + 2) = v19;
              }
            }
          }
        }
      }
    }
    if ( !*((_BYTE *)a3 + 25) && !*((_BYTE *)a3 + 24) )
    {
LABEL_31:
      while ( *((_DWORD *)a3 + 9) )
      {
        if ( !PATH_CORE::createrec(this, a2, a3, 0LL) )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
