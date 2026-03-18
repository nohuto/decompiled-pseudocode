/*
 * XREFs of AcpiCleanupObjDataArguments @ 0x140065D98
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x14004D0D0 (AcpiNativeMethodEvalRequestHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004D1AC (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiCleanupObjDataArguments @ 0x140065D98 (AcpiCleanupObjDataArguments.c)
 * Callees:
 *     AcpiCleanupObjDataArguments @ 0x140065D98 (AcpiCleanupObjDataArguments.c)
 */

void __fastcall AcpiCleanupObjDataArguments(__int64 a1, unsigned int a2)
{
  void **v2; // rbx
  __int64 v3; // rsi
  unsigned int *v4; // rdi
  __int64 v5; // rdx
  void *v6; // rcx

  if ( a1 && a2 )
  {
    v2 = (void **)(a1 + 32);
    v3 = a2;
    while ( *((_WORD *)v2 - 15) == 2 || *((_WORD *)v2 - 15) == 3 )
    {
      v6 = *v2;
      if ( *v2 )
        goto LABEL_12;
LABEL_13:
      v2 += 5;
      if ( !--v3 )
        return;
    }
    if ( *((_WORD *)v2 - 15) != 4 )
      goto LABEL_13;
    v4 = (unsigned int *)*v2;
    if ( !*v2 )
      goto LABEL_13;
    v5 = *v4;
    if ( (_DWORD)v5 )
      AcpiCleanupObjDataArguments(v4 + 2, v5);
    v6 = v4;
LABEL_12:
    ExFreePoolWithTag(v6, 0x4E706341u);
    *v2 = 0LL;
    goto LABEL_13;
  }
}
