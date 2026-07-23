/*
 * XREFs of RtlApplyIndirectRelocationToImage @ 0x140725454
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140504A94 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlpConstructIndirectRelocationFixup @ 0x14046C6C0 (RtlpConstructIndirectRelocationFixup.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x14047F314 (RtlpApplyGenericRetpolineFixup.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall RtlApplyIndirectRelocationToImage(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        __int16 *a6)
{
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-40h]
  __int16 v12; // [rsp+3Ch] [rbp-3Ch]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v8 = a5 + (*a6 & 0xFFF);
  RtlpConstructIndirectRelocationFixup(v8, a3, a4, a6, 1, (__int64)&v10);
  return RtlpApplyGenericRetpolineFixup(a1, a2, (unsigned __int16 *)&v10, v8);
}
