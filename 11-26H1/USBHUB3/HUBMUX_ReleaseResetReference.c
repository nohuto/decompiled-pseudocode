/*
 * XREFs of HUBMUX_ReleaseResetReference @ 0x14001210C
 * Callers:
 *     HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled @ 0x140013330 (HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled.c)
 *     HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1400144D0 (HUBPSM30_ReleasingResetReferenceOnDeviceRemoval.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMUX_ReleaseResetReference(volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFEF);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2352), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return HUBSM_AddEvent(v1 + 1280, 2062);
  return result;
}
