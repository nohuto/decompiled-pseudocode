/*
 * XREFs of MiGetPageFileSectionForReservation @ 0x1404D16B4
 * Callers:
 *     MiReservePageFileSpace @ 0x1403670E8 (MiReservePageFileSpace.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiReleasePageFileSectionInfo @ 0x140469304 (MiReleasePageFileSectionInfo.c)
 *     MiReferencePfBackedSection @ 0x1404D1764 (MiReferencePfBackedSection.c)
 */

__int64 __fastcall MiGetPageFileSectionForReservation(ULONG_PTR BugCheckParameter4, __int64 a2, int a3)
{
  __int64 v6; // rax
  ULONG_PTR v8; // r8
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 v11; // rax

  v6 = MiReferencePfBackedSection(BugCheckParameter4);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)a2 = *(_QWORD *)v6;
  *(_QWORD *)(a2 + 16) = BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL;
  v8 = (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  *(_QWORD *)(a2 + 24) = v8;
  v9 = *(_QWORD *)(v6 + 8);
  if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) < v9 )
    *(_QWORD *)(a2 + 16) = v9;
  v10 = v9 + 8LL * (unsigned int)(*(_DWORD *)(v6 + 44) - 1);
  if ( v8 > v10 )
    *(_QWORD *)(a2 + 24) = v10;
  if ( a3 )
  {
    v11 = MiLockProtoPoolPage(BugCheckParameter4, (_BYTE *)(a2 + 32));
    *(_QWORD *)(a2 + 8) = v11;
    if ( !v11 )
    {
      MiReleasePageFileSectionInfo(a2);
      return 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return 1LL;
}
