/*
 * XREFs of InitializeSidebandContext @ 0x14000BA0C
 * Callers:
 *     DeviceCreate @ 0x1400088F0 (DeviceCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeSidebandContext(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 232) = a1 + 224;
  *(_QWORD *)(a1 + 224) = a1 + 224;
  KeInitializeMutex((PRKMUTEX)(a1 + 40), 0);
  KeInitializeEvent((PRKEVENT)(a1 + 96), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 120), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 248), NotificationEvent, 0);
  *(_QWORD *)(a1 + 280) = 0LL;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 8), 0x31627845u, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 240));
  result = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  return result;
}
