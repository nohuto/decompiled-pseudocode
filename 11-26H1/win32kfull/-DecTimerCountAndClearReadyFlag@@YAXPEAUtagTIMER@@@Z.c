/*
 * XREFs of ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x14009906C
 * Callers:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     DoTimer @ 0x1400983E4 (DoTimer.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DecTimerCountAndClearReadyFlag(struct tagTIMER *a1)
{
  char *v1; // rbx
  char **v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  char *v5; // rax

  *((_DWORD *)a1 + 12) &= ~1u;
  v1 = (char *)a1 + 56;
  v2 = (char **)((char *)a1 + 64);
  v3 = *((_QWORD *)a1 + 3);
  if ( *(char **)v1 == v1 || *v2 == v1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4559LL);
  v4 = *(_QWORD *)v1;
  if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v5 = *v2, *(char **)*v2 != v1) )
    __fastfail(3u);
  *(_QWORD *)v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *v2 = v1;
  *(_QWORD *)v1 = v1;
  if ( (*(_DWORD *)(v3 + 636))-- == 1 )
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v3 + 480) + 8LL), 0xFFFFFFEF);
}
