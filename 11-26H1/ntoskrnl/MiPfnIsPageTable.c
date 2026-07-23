/*
 * XREFs of MiPfnIsPageTable @ 0x1403A9540
 * Callers:
 *     MiValidWriteFaultProcess @ 0x1403A9440 (MiValidWriteFaultProcess.c)
 *     MiPfnIsActivePageTable @ 0x1403A9508 (MiPfnIsActivePageTable.c)
 *     MiDbgMarkPfnModified @ 0x1407031F0 (MiDbgMarkPfnModified.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnIsPageTable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x70000) == 0x60000 && *(__int64 *)(a1 + 40) >= 0 )
  {
    v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( v1 >= 0xFFFFF68000000000uLL && v1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v2 = (__int64)(v1 << 25) >> 16;
      if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL )
        return 1;
    }
  }
  return result;
}
