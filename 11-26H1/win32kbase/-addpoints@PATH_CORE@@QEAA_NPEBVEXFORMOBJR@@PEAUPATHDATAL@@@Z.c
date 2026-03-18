/*
 * XREFs of ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x1400C1E68
 * Callers:
 *     ?bPolyBezierTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C18F0 (-bPolyBezierTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1AF0 (-bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068 (-createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

char __fastcall PATH_CORE::addpoints(PATH_CORE *this, const struct EXFORMOBJR *a2, struct PATHDATAL *a3)
{
  unsigned int v5; // ecx
  __int64 v8; // rbp
  __int64 v9; // r15
  int v10; // edx
  __int64 v11; // rdi
  unsigned __int64 v12; // r8
  void *v13; // r10
  int *v14; // rcx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx

  v5 = *((_DWORD *)a3 + 9);
  if ( !v5 )
    return 1;
  if ( (*((_DWORD *)this + 12) & 1) != 0 )
    goto LABEL_3;
  v8 = *((_QWORD *)this + 2);
  v9 = *(_QWORD *)this;
  if ( v8 )
  {
    if ( v9 )
    {
      v10 = *((_DWORD *)a3 + 8);
      if ( v10 == (*(_DWORD *)(v8 + 16) & 0xFFFFFFFC) )
      {
        v11 = 0LL;
        v12 = v9 + *(unsigned int *)(v9 + 16);
        v13 = (void *)(v8 + 24 + 8LL * *(unsigned int *)(v8 + 20));
        if ( v12 > (unsigned __int64)v13 )
        {
          v11 = (__int64)(v12 - (_QWORD)v13) >> 3;
          if ( (unsigned int)v11 > v5 )
            v11 = v5;
        }
        if ( (v10 & 0x10) != 0 )
          v11 = 3 * ((unsigned int)v11 / 3);
        if ( (_DWORD)v11 )
        {
          if ( a2 )
            EXFORMOBJR::bXformRound(a2, a3, v13, (unsigned int)v11);
          else
            umptr_r<_POINTL>::read<_POINTFIX>((__int64)a3, v13, (unsigned int)v11);
          if ( *((_BYTE *)a3 + 25) )
            return 0;
          if ( !*((_BYTE *)a3 + 24) )
          {
            v14 = (int *)(v8 + 24 + 8LL * *(unsigned int *)(v8 + 20));
            v15 = *((_DWORD *)this + 9);
            v16 = (unsigned int)v11;
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
            *(_DWORD *)(v8 + 20) += v11;
            *(_QWORD *)(v9 + 8) = v8 + 8LL * *(unsigned int *)(v8 + 20) + 24;
            *((_DWORD *)a3 + 9) -= v11;
            v20 = *((_QWORD *)a3 + 2);
            if ( v20 > 0x7FFFFFFFFFFFFFFFLL
              || (v21 = v20 + v11, v20 + v11 > 0x7FFFFFFFFFFFFFFFLL)
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
  if ( !*((_BYTE *)a3 + 25) && !*((_BYTE *)a3 + 24) )
  {
LABEL_3:
    while ( *((_DWORD *)a3 + 9) )
    {
      if ( !PATH_CORE::createrec(this, a2, a3, 0LL) )
        return 0;
    }
    return 1;
  }
  return 0;
}
