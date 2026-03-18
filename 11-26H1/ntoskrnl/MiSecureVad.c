/*
 * XREFs of MiSecureVad @ 0x140B4F310
 * Callers:
 *     MmSecureVirtualMemoryEx @ 0x140777750 (MmSecureVirtualMemoryEx.c)
 *     MiReserveUserMemoryFinishVad @ 0x14095C5E0 (MiReserveUserMemoryFinishVad.c)
 *     MiHandleInsertedDataVad @ 0x1409C5754 (MiHandleInsertedDataVad.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiComparePteProtections @ 0x1403069EC (MiComparePteProtections.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiSecureVad(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, char a5, __int64 *a6)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rax

  if ( !a3 )
    return 3221225485LL;
  v9 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (a2 + a3 - 1) | 0xFFF;
  v11 = 1;
  if ( (a4 & 1) != 0 )
    goto LABEL_7;
  v12 = (a2 + a3 - 1) | 0xFFF;
  v13 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 != 2 )
    v11 = 4;
  result = MiComparePteProtections(a1, v13, v12, v11, 0);
  if ( (int)result >= 0 )
  {
LABEL_7:
    v14 = MiAddSecureEntry(a1, v9, v10, a4, a5);
    *a6 = v14;
    return v14 == 0 ? 0xC000009A : 0;
  }
  return result;
}
