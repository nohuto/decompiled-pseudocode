/*
 * XREFs of MiDrainControlAreaWrites @ 0x140486A68
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x140480F20 (MiPrepareSegmentForDeletion.c)
 *     MiMarkControlAreaDeleted @ 0x140486A28 (MiMarkControlAreaDeleted.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, KIRQL a2)
{
  bool v2; // zf
  volatile LONG *v4; // rdi
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+2Ch] [rbp-24h]
  int v8; // [rsp+34h] [rbp-1Ch]
  __int16 v9; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+3Ah] [rbp-16h]
  char v11; // [rsp+3Bh] [rbp-15h]
  int v12; // [rsp+3Ch] [rbp-14h]
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF

  v2 = *(_DWORD *)(a1 + 76) == 0;
  v7 = 0LL;
  v8 = 0;
  v11 = 0;
  if ( !v2 )
  {
    v4 = (volatile LONG *)(a1 + 72);
    do
    {
      v6 = 8;
      v13[1] = v13;
      v13[0] = v13;
      v5 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = &v5;
      v9 = 263;
      v10 = 6;
      v12 = 0;
      if ( a2 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v4);
      else
        ExReleaseSpinLockExclusive(v4, a2);
      KeWaitForGate((__int64)&v9, 18LL);
      a2 = ExAcquireSpinLockExclusive(v4);
    }
    while ( *(_DWORD *)(a1 + 76) );
  }
}
