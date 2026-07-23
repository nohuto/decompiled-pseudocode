/*
 * XREFs of WdtpArmTimer @ 0x1403B3C4C
 * Callers:
 *     WdtpTimerCallback @ 0x14071E910 (WdtpTimerCallback.c)
 *     PnpWatchdogTimerStart @ 0x140A19CDC (PnpWatchdogTimerStart.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403B4498 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall WdtpArmTimer(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rdi
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 120) = MEMORY[0xFFFFF78000000008];
  v3 = -10000LL * a2;
  *(_DWORD *)(a1 + 128) = a2;
  if ( v3 > 0 && (*(_BYTE *)(v2 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = -10000LL * a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  ExpCheckForFreedEnhancedTimer(v2);
  return KeSetTimer2(v2, v3, 0LL, 0LL);
}
