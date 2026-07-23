/*
 * XREFs of PopFxGetParentFxDevice @ 0x140607AC8
 * Callers:
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 */

__int64 __fastcall PopFxGetParentFxDevice(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // bp

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v2 = *(_QWORD *)(v1 + 80);
    v4 = v3;
    if ( v2 )
      PopFxReferenceDevice(*(_QWORD *)(v1 + 80), 6);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), v4);
  }
  return v2;
}
