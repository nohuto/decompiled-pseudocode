/*
 * XREFs of MiWow64SetApiSetMap @ 0x140B27AF4
 * Callers:
 *     MmMapApiSetView @ 0x140863ED4 (MmMapApiSetView.c)
 * Callees:
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

void __fastcall MiWow64SetApiSetMap(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rcx
  __int16 v5; // ax

  v3 = *(__int64 **)(a1 + 784);
  if ( v3 )
  {
    v4 = *v3;
    if ( v4 )
    {
      v5 = *(_WORD *)(a1 + 1772);
      if ( v5 == 332 || v5 == 452 )
        RtlWriteULongToUser((_DWORD *)(v4 + 56), a2);
      else
        RtlWriteULong64ToUser((_QWORD *)(v4 + 104), a2);
    }
  }
}
