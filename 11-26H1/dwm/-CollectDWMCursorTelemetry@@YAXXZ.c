/*
 * XREFs of ?CollectDWMCursorTelemetry@@YAXXZ @ 0x14000CDD4
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003804 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x140004460 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140004C64 (--_U@YAPEAX_K@Z.c)
 */

void __noreturn CollectDWMCursorTelemetry(void)
{
  void *v0; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v0 = operator new[](0x2000E8uLL);
  v1 = 0;
  NtUserGetDwmCursorShape(4294967294LL, v0, 2097384LL, &v1);
  MilFailFastForHR(0x8007057A, 0LL);
  JUMPOUT(0x14000CE15LL);
}
