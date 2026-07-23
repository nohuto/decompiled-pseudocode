/*
 * XREFs of sscanf @ 0x18012C5B0
 * Callers:
 *     <none>
 * Callees:
 *     GetTInputFnL @ 0x18012C598 (GetTInputFnL.c)
 *     vscan_fn @ 0x18012C5F8 (vscan_fn.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  __int64 (__fastcall *TInputFnL)(FILE *); // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  TInputFnL = GetTInputFnL();
  return vscan_fn(TInputFnL, v3, v4, 0LL, v5);
}
