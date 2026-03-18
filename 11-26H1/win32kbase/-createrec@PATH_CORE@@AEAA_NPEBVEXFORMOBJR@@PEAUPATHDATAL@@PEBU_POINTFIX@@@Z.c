/*
 * XREFs of ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x1400C2068
 * Callers:
 *     ?bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z @ 0x1400C0F40 (-bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z.c)
 *     ?bPolyLineTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1B80 (-bPolyLineTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1400C1C30 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x1400C1E68 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x1400452D0 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__vOffsetPoints_::_2_::_lambda_1___ @ 0x1400C246C (umptr_r__POINTL_--enumerate__POINTFIX__vOffsetPoints_--_2_--_lambda_1___.c)
 *     ?reinit@PATH_CORE@@QEAAXXZ @ 0x1401C38C8 (-reinit@PATH_CORE@@QEAAXXZ.c)
 */

bool __fastcall PATH_CORE::createrec(
        __int64 this,
        const struct EXFORMOBJR *a2,
        struct PATHDATAL *a3,
        const struct _POINTFIX *a4)
{
  struct PATHALLOC *v4; // rsi
  __int64 v5; // r10
  const struct EXFORMOBJR *v8; // r11
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  int v11; // r8d
  unsigned int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // r13
  int v15; // r8d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _DWORD *v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // rax
  bool result; // al
  __int64 v26; // rax

  v4 = *(struct PATHALLOC **)this;
  LODWORD(v5) = 0;
  v8 = a2;
  v9 = this;
  if ( *(_QWORD *)this )
  {
    v10 = *((_QWORD *)v4 + 1) + 24LL;
    this = (__int64)v4 + *((unsigned int *)v4 + 4);
    if ( this > v10 )
    {
      this -= v10;
      v5 = this >> 3;
    }
  }
  v11 = *((_DWORD *)a3 + 8);
  v12 = *(_DWORD *)(v9 + 48) & 1;
  if ( (v11 & 0x10) != 0 && (_DWORD)v5 )
  {
    this = ((unsigned int)v5 - v12) % 3;
    LODWORD(v5) = 3 * (((unsigned int)v5 - v12) / 3) + v12;
  }
  if ( (unsigned int)v5 < v12 + *((_DWORD *)a3 + 9) && (unsigned int)v5 < 8 )
  {
    v4 = newpathalloc(this);
    if ( !v4 )
    {
      EngSetLastError(8u);
LABEL_48:
      PATH_CORE::reinit((PATH_CORE *)v9);
      return 0;
    }
    v8 = a2;
    *(_QWORD *)v4 = *(_QWORD *)v9;
    *(_QWORD *)v9 = v4;
    v11 = *((_DWORD *)a3 + 8);
    LODWORD(v5) = (unsigned int)((_DWORD)v4 + *((_DWORD *)v4 + 4) - *((_DWORD *)v4 + 2) - 24) >> 3;
    if ( (v11 & 0x10) != 0 )
      LODWORD(v5) = v5 - (((unsigned int)((_DWORD)v4 + *((_DWORD *)v4 + 4) - *((_DWORD *)v4 + 2) - 24) >> 3) - v12) % 3;
  }
  v13 = *((_QWORD *)v4 + 1);
  v14 = v12 + *((_DWORD *)a3 + 9);
  if ( (unsigned int)v5 <= (unsigned int)v14 )
    v14 = (unsigned int)v5;
  v15 = v11 | 2;
  *(_DWORD *)(v13 + 16) = v15;
  *(_DWORD *)(v13 + 20) = v14;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(v9 + 16);
  if ( v12 )
  {
    v14 = (unsigned int)(v14 - 1);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v9 + 40);
    *(_DWORD *)(v13 + 16) = v15 | *(_DWORD *)(v9 + 48) & 5;
    *(_DWORD *)(v9 + 48) &= 0xFFFFFFFA;
  }
  else
  {
    v26 = *(_QWORD *)(v9 + 16);
    if ( v26 )
      *(_DWORD *)(v26 + 16) &= ~2u;
  }
  if ( a4 )
  {
    umptr_r__POINTL_::enumerate__POINTFIX__vOffsetPoints_::_2_::_lambda_1___(
      a3,
      v13 + 8 * (v12 + 3LL),
      (unsigned int)v14,
      *a4);
  }
  else if ( v8 )
  {
    EXFORMOBJR::bXformRound(v8, a3, v13 + 8 * (v12 + 3LL), (unsigned int)v14);
  }
  else
  {
    umptr_r<_POINTL>::read<_POINTFIX>((__int64)a3, (void *)(v13 + 8 * (v12 + 3LL)), (unsigned int)v14);
  }
  if ( *((_BYTE *)a3 + 25) || *((_BYTE *)a3 + 24) )
    goto LABEL_48;
  *((_DWORD *)a3 + 9) -= v14;
  v16 = *((_QWORD *)a3 + 2);
  if ( v16 > 0x7FFFFFFFFFFFFFFFLL || (v17 = v16 + v14, v16 + v14 > 0x7FFFFFFFFFFFFFFFLL) || v17 > *((_QWORD *)a3 + 1) )
    *((_BYTE *)a3 + 24) = 1;
  else
    *((_QWORD *)a3 + 2) = v17;
  *((_DWORD *)a3 + 8) &= 0xFFFFFFFA;
  v18 = (_DWORD *)(v13 + 24);
  if ( !*(_QWORD *)(v9 + 16) )
  {
    *(_DWORD *)(v9 + 24) = *v18;
    *(_DWORD *)(v9 + 32) = *v18;
    *(_DWORD *)(v9 + 28) = *(_DWORD *)(v13 + 28);
    *(_DWORD *)(v9 + 36) = *(_DWORD *)(v13 + 28);
  }
  if ( v12 + (_DWORD)v14 )
  {
    v19 = *(_DWORD *)(v9 + 36);
    v20 = *(_DWORD *)(v9 + 24);
    v21 = v12 + (unsigned int)v14;
    do
    {
      v22 = *v18;
      if ( v20 > *v18 )
      {
        *(_DWORD *)(v9 + 24) = v22;
        v20 = v22;
      }
      else if ( *(_DWORD *)(v9 + 32) < v22 )
      {
        *(_DWORD *)(v9 + 32) = v22;
      }
      v23 = v18[1];
      if ( v19 < v23 )
      {
        v19 = v18[1];
        *(_DWORD *)(v9 + 36) = v23;
      }
      else if ( *(_DWORD *)(v9 + 28) > v23 )
      {
        *(_DWORD *)(v9 + 28) = v23;
      }
      v18 += 2;
      --v21;
    }
    while ( v21 );
  }
  v24 = *(_QWORD **)(v9 + 16);
  if ( v24 )
    *v24 = v13;
  else
    *(_QWORD *)(v9 + 8) = v13;
  *(_QWORD *)(v9 + 16) = v13;
  result = 1;
  *((_QWORD *)v4 + 1) = v13 + 8 * (*(unsigned int *)(v13 + 20) + 3LL);
  return result;
}
