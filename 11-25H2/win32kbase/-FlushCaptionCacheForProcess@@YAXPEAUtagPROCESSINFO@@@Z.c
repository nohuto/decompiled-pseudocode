/*
 * XREFs of ?FlushCaptionCacheForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14003AFA0
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140039BA4 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 */

void __fastcall FlushCaptionCacheForProcess(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rdi

  v3 = 5LL;
  v4 = W32GetUserSessionState(a1, a2) + 43160;
  v5 = (__int64 *)v4;
  do
  {
    if ( *(_QWORD *)v4 )
    {
      if ( *(struct tagPROCESSINFO **)(*(_QWORD *)v4 + 24LL) == a1 )
        HMAssignmentUnlock(v5);
    }
    v5 += 2;
    v4 += 16LL;
    --v3;
  }
  while ( v3 );
}
