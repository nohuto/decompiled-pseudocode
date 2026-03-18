/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401C2EFC
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1400B9510 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1401C2B80 (NtGdiGetFontFileData.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14021AF00 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030EDE0 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x140328B60 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x140106E28 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT *a1, __int64 a2, struct PFF ***a3)
{
  int v4; // r15d
  __int64 v6; // rdi
  __int64 v7; // r12
  struct PFF *v9; // rcx
  struct PFF **v10; // rbp
  struct PFF *v11; // rax
  struct PFF *v12; // rbx
  struct PFF *v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v6 = BYTE3(a2);
  v7 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  if ( (unsigned int)v6 >= *((_DWORD *)a1 + 6) )
    return 0LL;
  do
  {
    v9 = (struct PFF *)*((_QWORD *)a1 + v6 + 5);
    v10 = (struct PFF **)((char *)a1 + 8 * v6 + 40);
    while ( 1 )
    {
      v11 = SkipInvalidPff(v9);
      v12 = v11;
      if ( !v11 || *((_DWORD *)v11 + 37) == v4 )
        break;
      v9 = (struct PFF *)*((_QWORD *)v11 + 1);
    }
    v6 = (unsigned int)(v6 + 256);
  }
  while ( (unsigned int)v6 < *((_DWORD *)a1 + 6) );
  if ( v11 )
  {
    if ( a1 != *(struct PFT **)(v7 + 20408) || (v13 = v11, PFFOBJ::pPvtDataMatch((PFFOBJ *)&v13)) )
    {
      if ( a3 )
        *a3 = v10;
    }
    else
    {
      return 0LL;
    }
  }
  return v12;
}
