/*
 * XREFs of KiTpWriteMemory @ 0x1405FC774
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1405FC6F8 (KiTpWriteBreakpoint.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     KiTpWriteUmMemory @ 0x1405FC898 (KiTpWriteUmMemory.c)
 *     MmDbgCopyMemory @ 0x1406FEF24 (MmDbgCopyMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KdExitDebugger @ 0x140C12008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140C17858 (KdEnterDebugger.c)
 */

__int64 __fastcall KiTpWriteMemory(_KPROCESS *a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( a1 )
    KiStackAttachProcess(a1, 0, (__int64)v12);
  if ( a2 == 1 )
  {
    v8 = KiTpWriteUmMemory(a1, a3, a4);
  }
  else if ( (KiDynamicTraceEnabled & 4) != 0 )
  {
    v8 = MmDbgCopyMemory(a3, a4, 1, 1, 129);
    if ( v8 < 0 )
    {
      v9 = KdEnterDebugger(0LL, 0LL);
      v8 = MmDbgCopyMemory(a3, a4, 1, 1, 133);
      if ( v8 < 0 )
        v8 = MmDbgCopyMemory(a3, a4, 1, 1, 197);
      LOBYTE(v10) = v9;
      KdExitDebugger(v10);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( a1 )
    KiUnstackDetachProcess((__int64)v12, 0);
  return (unsigned int)v8;
}
