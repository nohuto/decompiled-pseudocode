/*
 * XREFs of LdrpGetImageSize @ 0x1404A4648
 * Callers:
 *     LdrpAccessResourceData @ 0x140A8E9F8 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x1404A4708 (LdrpKrnGetDataTableEntry.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 DataTableEntry; // rax
  __int16 v9; // cx

  v2 = 0;
  v4 = 0LL;
  v5 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1 & 0xFFFFFFFFFFFFFFFCuLL) == 0
    || *(_WORD *)v5 != 23117
    || (v6 = v5 + *(unsigned int *)(v5 + 60), v6 < v5)
    || v5 < 0x7FFFFFFF0000LL && (v6 + 264 > 0x7FFFFFFF0000LL || v6 + 264 <= v6)
    || *(_DWORD *)v6 != 17744
    || !v6 )
  {
LABEL_6:
    v2 = -1073741701;
    goto LABEL_7;
  }
  if ( (a1 & 1) == 0 )
  {
    v9 = *(_WORD *)(v6 + 24);
    if ( v9 == 267 || v9 == 523 )
    {
      v4 = *(unsigned int *)(v6 + 80);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  if ( DataTableEntry )
    v4 = *(unsigned int *)(DataTableEntry + 64);
LABEL_7:
  *a2 = v4;
  return v2;
}
