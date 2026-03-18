/*
 * XREFs of ?GrepGetCsrssW32PID@@YAKXZ @ 0x1401F3460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GrepGetCsrssW32PID(__int64 a1)
{
  __int64 UserGdiSessionState; // rax

  UserGdiSessionState = W32GetUserGdiSessionState(a1);
  return (unsigned __int64)PsGetProcessId(*(PEPROCESS *)(UserGdiSessionState + 40)) & 0xFFFFFFFC;
}
