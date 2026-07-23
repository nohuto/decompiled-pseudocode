/*
 * XREFs of MiDeleteFileExtents @ 0x140AC5218
 * Callers:
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 * Callees:
 *     MiDeleteFixupExtents @ 0x1406FE348 (MiDeleteFixupExtents.c)
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 */

void __fastcall MiDeleteFileExtents(__int64 a1)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // rcx

  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (*(_DWORD *)(a1 + 56) & 0x30000000) == 0x10000000 )
    {
      MiDeleteFixupExtents(a1);
    }
    else if ( (*(_DWORD *)(a1 + 56) & 0x30000000) == 0x20000000 )
    {
      v2 = *(_DWORD **)(v1 + 48);
      if ( v2 )
      {
        MiDeleteFileExtentList(v2);
        *(_QWORD *)(v1 + 48) = 0LL;
      }
    }
  }
}
