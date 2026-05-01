/*
 * XREFs of ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x1800888E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x1800889D8 (-_EnsureCapacity@-$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180088A9C (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 */

__int64 __fastcall AppSizeConstraintsCache::SetSizeConstraintsForDpi(
        AppSizeConstraintsCache *this,
        int a2,
        __m128i *a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __m128i v9; // xmm6
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  _BYTE v14[20]; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v3 = (_QWORD *)((char *)this + 16);
  v4 = 0LL;
  v7 = 0LL;
  v8 = v3[1];
  while ( v4 < v8 )
  {
    if ( a2 == *(_DWORD *)(v7 + *v3) )
    {
      *(__m128i *)(*v3 + 20 * v4 + 4) = *a3;
LABEL_7:
      ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
        &v16,
        a3,
        &a3->m128i_u64[1]);
      return 0LL;
    }
    ++v4;
    v7 += 20LL;
  }
  v9 = *a3;
  *(_DWORD *)v14 = a2;
  *(__m128i *)&v14[4] = *a3;
  if ( v8 != v3[3]
    || (v10 = CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
                v3,
                v8 + 1,
                v7),
        v11 = v10,
        v10 >= 0) )
  {
    ++v3[1];
    v12 = *v3 + 4 * (5LL * v3[1] - 5);
    if ( v12 )
    {
      *(_OWORD *)v12 = *(_OWORD *)v14;
      *(_DWORD *)(v12 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
    }
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
