/*
 * XREFs of ??$_Med3_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00P6A_NAEAV10@1@Z@Z @ 0x1803E16B4
 * Callers:
 *     ??$_Guess_median_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00P6A_NAEAV10@1@Z@Z @ 0x1803E1540 (--$_Guess_median_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v5 = a2 + 1;
  v6 = a1 + 1;
  if ( a4(a2, a1) )
  {
    v10 = *a2;
    *a2 = *a1;
    *a1 = v10;
    v11 = *v5;
    *v5 = *v6;
    *v6 = v11;
  }
  result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    v13 = *a3;
    *a3 = *a2;
    *a2 = v13;
    v14 = a3[1];
    a3[1] = *v5;
    *v5 = v14;
    result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a2, a1);
    if ( (_BYTE)result )
    {
      v15 = *a2;
      *a2 = *a1;
      *a1 = v15;
      result = *v6;
      v16 = *v5;
      *v5 = *v6;
      *v6 = v16;
    }
  }
  return result;
}
