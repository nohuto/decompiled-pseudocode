/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x1404628D4
 * Callers:
 *     MiGetPageFileSectionForReservation @ 0x1404CB260 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 */

void __fastcall MiReleasePageFileSectionInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    MiUnlockProtoPoolPage(v4, a2, a3);
  }
  v5 = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0LL);
  if ( v5 )
    MiReleaseControlAreaWaiters(v5, v6, v7);
}
