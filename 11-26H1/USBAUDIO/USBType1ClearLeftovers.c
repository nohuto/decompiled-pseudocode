/*
 * XREFs of USBType1ClearLeftovers @ 0x140007B68
 * Callers:
 *     USBType1StateChangePin @ 0x1400049E0 (USBType1StateChangePin.c)
 *     USBType1HandleUrbError @ 0x14003F5D0 (USBType1HandleUrbError.c)
 * Callees:
 *     <none>
 */

LONG __fastcall USBType1ClearLeftovers(_QWORD *a1)
{
  __int64 v1; // r8
  LONG result; // eax

  v1 = a1[19];
  *(_DWORD *)(v1 + 128) = 0;
  if ( *(_DWORD *)(v1 + 140) )
  {
    a1[10] += *(unsigned int *)(*(_QWORD *)(v1 + 152) + 36LL);
    a1[11] += *(unsigned int *)(*(_QWORD *)(v1 + 152) + 36LL);
    *(_DWORD *)(v1 + 140) = 0;
    return KeReleaseSemaphore((PRKSEMAPHORE)(v1 + 168), 0, 1, 0);
  }
  return result;
}
