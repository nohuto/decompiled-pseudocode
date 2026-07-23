/*
 * XREFs of EtwExitProcess @ 0x140A33B70
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     EtwpCovSampProcessCleanup @ 0x140A33ED0 (EtwpCovSampProcessCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwExitProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // rcx
  void *v5; // rbx

  v2 = *(_QWORD *)(a1 + 800);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 800) = 0LL;
    if ( *(_QWORD *)v2 )
      ObfDereferenceObject(*(PVOID *)v2);
    v4 = *(void **)(v2 + 8);
    if ( v4 )
      ObfDereferenceObject(v4);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  v5 = *(void **)(a1 + 1904);
  if ( v5 )
  {
    LOBYTE(a2) = 1;
    *(_QWORD *)(a1 + 1904) = 0LL;
    EtwpCovSampProcessCleanup(v5, a2);
    ExFreePoolWithTag(v5, 0x56777445u);
  }
}
