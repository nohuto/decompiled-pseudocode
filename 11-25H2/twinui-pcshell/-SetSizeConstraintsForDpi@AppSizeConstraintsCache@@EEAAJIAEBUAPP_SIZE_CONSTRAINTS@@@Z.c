/*
 * XREFs of ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x18008D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardCompareHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@V?$CSimpleArrayStandardMergeHelper@USIZE_CONSTRAINTS_CACHE_ENTRY@@@@@@QEAAJ_K0@Z @ 0x18008D5B0 (-_EnsureCapacity@-$CTSimpleArray@USIZE_CONSTRAINTS_CACHE_ENTRY@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x18008DD08 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
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
  int v10; // edi
  __int64 v11; // r8
  _BYTE v13[20]; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  v3 = (_QWORD *)((char *)this + 16);
  v4 = 0LL;
  v7 = 0LL;
  v8 = v3[1];
  while ( v4 < v8 )
  {
    if ( a2 == *(_DWORD *)(v7 + *v3) )
    {
      *(__m128i *)(*v3 + 20 * v4 + 4) = *a3;
      goto LABEL_9;
    }
    ++v4;
    v7 += 20LL;
  }
  v9 = *a3;
  v10 = 0;
  *(_DWORD *)v13 = a2;
  *(__m128i *)&v13[4] = *a3;
  if ( v8 != v3[3]
    || (v10 = CTSimpleArray<SIZE_CONSTRAINTS_CACHE_ENTRY,4294967294,CTPolicyCoTaskMem<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardCompareHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>,CSimpleArrayStandardMergeHelper<SIZE_CONSTRAINTS_CACHE_ENTRY>>::_EnsureCapacity(
                v3,
                v8 + 1,
                v7),
        v10 >= 0) )
  {
    ++v3[1];
    v11 = *v3 + 4 * (5LL * v3[1] - 5);
    if ( !v11 )
      goto LABEL_9;
    *(_OWORD *)v11 = *(_OWORD *)v13;
    *(_DWORD *)(v11 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
LABEL_9:
  ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet<unsigned int &,Geometry::CSize const &,Geometry::CSize const &>(
    &v15,
    a3,
    &a3->m128i_u64[1]);
  return 0LL;
}
