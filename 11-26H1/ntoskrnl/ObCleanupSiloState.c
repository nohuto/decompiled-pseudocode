/*
 * XREFs of ObCleanupSiloState @ 0x1407C51CC
 * Callers:
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 *     PspDeleteExternalServerSiloState @ 0x1407F48B8 (PspDeleteExternalServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x1407F499C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 */

__int64 __fastcall ObCleanupSiloState(volatile __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = (__int64)a1;
  v2 = _InterlockedExchange64(a1, 0LL);
  if ( v2 )
    return ObDereferenceDeviceMap((PVOID)(v2 & 0xFFFFFFFFFFFFFFF0uLL));
  return result;
}
