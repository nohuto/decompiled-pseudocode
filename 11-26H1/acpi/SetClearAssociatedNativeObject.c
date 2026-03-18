/*
 * XREFs of SetClearAssociatedNativeObject @ 0x14006D5EC
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x140052A74 (CreateNativeNameSpaceObject.c)
 * Callees:
 *     <none>
 */

void __fastcall SetClearAssociatedNativeObject(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int16 v5; // r8
  __int16 v6; // r9
  __int16 v7; // r8

  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = *(_WORD *)(a1 + 64);
  *(_QWORD *)(a1 + 136) = a2;
  v6 = v5 | 0x400;
  v7 = v5 & 0xFBFF;
  if ( !a2 )
    v6 = v7;
  *(_WORD *)(a1 + 64) = v6;
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
