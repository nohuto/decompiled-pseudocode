/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140469304
 * Callers:
 *     MiGetPageFileSectionForReservation @ 0x1404D16B4 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x140469350 (MiDecrementModifiedWriteCount.c)
 */

void __fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  v3 = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0LL);
  if ( v3 )
    MiReleaseControlAreaWaiters(v3, v4, v5);
}
