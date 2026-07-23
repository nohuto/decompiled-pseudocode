/*
 * XREFs of RtlApplyImportRelocationToImage @ 0x1407253B4
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140504A94 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x14072558C (RtlUpdateImportRelocationsInImage.c)
 * Callees:
 *     RtlpConstructImportRelocationFixup @ 0x14047AB94 (RtlpConstructImportRelocationFixup.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x14047F314 (RtlpApplyGenericRetpolineFixup.c)
 */

char __fastcall RtlApplyImportRelocationToImage(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        int a7,
        char a8)
{
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]
  __int16 v14; // [rsp+4Ch] [rbp-Ch]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v10 = a5 + (*a6 & 0xFFF);
  RtlpConstructImportRelocationFixup(v10, a3, a4, a6, 1, a8, (__int64)&v12);
  return RtlpApplyGenericRetpolineFixup(a1, a2, (unsigned __int16 *)&v12, v10);
}
