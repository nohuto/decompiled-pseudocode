/*
 * XREFs of EtwpGetPsmKeyExtendedHeaderItem @ 0x140B52BC8
 * Callers:
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpQueryPsmKey @ 0x14082E574 (EtwpQueryPsmKey.c)
 */

void *__fastcall EtwpGetPsmKeyExtendedHeaderItem(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  size_t v5; // rdi
  _KPROCESS *Process; // r15
  __int64 v7; // r14
  ULONG_PTR v8; // rbp
  char v9; // bl
  int v10; // eax
  size_t v12; // [rsp+50h] [rbp+8h] BYREF

  LOWORD(v5) = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 8LL;
  v8 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u, a3, a4);
  v9 = SeSecurityAttributePresent(v8, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent(v8, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v9 )
  {
    v12 = 466LL;
    v10 = EtwpQueryPsmKey(v8, (wchar_t *)(a1 + 8), &v12);
    v5 = v12;
    if ( v10 < 0 )
      v5 = 0LL;
    v7 = v5 + 8;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].ActiveProcessors, v8, 0x746C6644u);
  *(_DWORD *)(a1 + 2) = 9;
  *(_WORD *)(a1 + 6) = v5;
  *(_WORD *)a1 = (v7 + 7) & 0xFFF8;
  return memset_0((void *)(v7 + a1), 0, (((_DWORD)v7 + 7) & 0xFFFFFFF8) - v7);
}
