/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAV12@@0@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV20@1@Z@Z @ 0x1803E1780
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1802C0960 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 * Callees:
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00P6A_NAEAV10@1@Z@Z @ 0x1803E1540 (--$_Guess_median_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV.c)
 */

_QWORD *__fastcall std::_Partition_by_median_guess_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int8 (__fastcall *a4)(_QWORD *, _QWORD *))
{
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *v10; // rsi
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *result; // rax

  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  std::_Guess_median_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
    a2,
    (__int64)v6,
    (__int64)(a3 - 2));
  v8 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    do
    {
      v9 = v6 - 2;
      if ( a4(v6 - 2, v6) )
        break;
      if ( a4(v6, v6 - 2) )
        break;
      v6 -= 2;
    }
    while ( a2 < (unsigned __int64)v9 );
  }
  while ( v8 < a3 && !a4(v8, v6) && !a4(v6, v8) )
    v8 += 2;
  v10 = v8;
  v11 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 < a3 )
      {
        if ( a4(v6, v10) )
          goto LABEL_35;
        if ( !a4(v10, v6) )
        {
          if ( v8 != v10 )
          {
            v12 = *v8;
            *v8 = *v10;
            *v10 = v12;
            v13 = v8[1];
            v8[1] = v10[1];
            v10[1] = v13;
          }
          v8 += 2;
          goto LABEL_35;
        }
      }
      v14 = v11 == (_QWORD *)a2;
      if ( (unsigned __int64)v11 > a2 )
      {
        v15 = v11 - 2;
        do
        {
          if ( !a4(v15, v6) )
          {
            if ( a4(v6, v15) )
              break;
            v6 -= 2;
            if ( v6 != v15 )
            {
              v16 = *v6;
              *v6 = *v15;
              *v15 = v16;
              v17 = v6[1];
              v6[1] = v15[1];
              v15[1] = v17;
            }
          }
          v11 -= 2;
          v15 -= 2;
        }
        while ( a2 < (unsigned __int64)v11 );
        v14 = v11 == (_QWORD *)a2;
      }
      if ( v14 )
        break;
      v11 -= 2;
      if ( v10 != a3 )
      {
        v27 = *v10;
        *v10 = *v11;
        *v11 = v27;
        v28 = v10[1];
        v10[1] = v11[1];
        v11[1] = v28;
        goto LABEL_35;
      }
      v6 -= 2;
      v22 = v6 + 1;
      if ( v11 != v6 )
      {
        v23 = *v11;
        *v11 = *v6;
        *v6 = v23;
        v24 = v11[1];
        v11[1] = *v22;
        *v22 = v24;
      }
      v25 = *v6;
      v8 -= 2;
      *v6 = *v8;
      *v8 = v25;
      v26 = *v22;
      *v22 = v8[1];
      v8[1] = v26;
    }
    if ( v10 == a3 )
      break;
    if ( v8 != v10 )
    {
      v18 = *v6;
      *v6 = *v8;
      *v8 = v18;
      v19 = v6[1];
      v6[1] = v8[1];
      v8[1] = v19;
    }
    v20 = *v6;
    v8 += 2;
    *v6 = *v10;
    *v10 = v20;
    v21 = v6[1];
    v6[1] = v10[1];
    v6 += 2;
    v10[1] = v21;
LABEL_35:
    v10 += 2;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
