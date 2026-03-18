/*
 * XREFs of MiCleanupPageTablePages @ 0x1402A55AC
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x140875970 (MmCreateShadowMapping.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x1402A5600 (MiFreeLargeZeroPages.c)
 *     MiReturnSystemCharges @ 0x1404B3278 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 96), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 112);
    if ( result != v3 )
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 96), v3 - result, v3 - result, *(unsigned int *)(a1 + 120));
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
