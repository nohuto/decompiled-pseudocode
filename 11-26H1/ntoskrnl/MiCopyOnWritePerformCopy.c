/*
 * XREFs of MiCopyOnWritePerformCopy @ 0x14036CFE8
 * Callers:
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 * Callees:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 */

__int64 __fastcall MiCopyOnWritePerformCopy(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 256;
  if ( (*(_DWORD *)(a1 + 116) & 2) == 0 )
  {
    v4 = 264;
    goto LABEL_3;
  }
  if ( (MiFlags & 0xA0000) != 0x20000 )
  {
LABEL_3:
    if ( v3 >= 0xFFFF800000000000uLL )
      goto LABEL_6;
    goto LABEL_4;
  }
  if ( v3 < 0xFFFF800000000000uLL )
  {
LABEL_4:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 368LL) & 1) != 0 )
      v4 |= 0x10u;
    goto LABEL_6;
  }
  v4 = 272;
  if ( (*(_DWORD *)(a1 + 124) & 2) != 0 )
    v4 = 304;
LABEL_6:
  MiCopyPage(a2, *(_QWORD *)(a1 + 32), v4);
  return v4;
}
