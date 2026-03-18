/*
 * XREFs of CmShutdownSystem0 @ 0x1406E2248
 * Callers:
 *     CmShutdownSystem @ 0x140854284 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x140854C94 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  *(_DWORD *)&WheapPfaLock.ApcStateFill[40] = 0;
  BYTE4(WheapPfaLock.SwapListEntry.Next) = 1;
  return result;
}
