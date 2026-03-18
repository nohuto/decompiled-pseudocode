/*
 * XREFs of XEPALOBJ_FreePaletteMemory @ 0x14001D130
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001EEB0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6A80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall XEPALOBJ_FreePaletteMemory(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)(*(_QWORD *)a1 + 128LL);
  if ( v2 )
    GreDeleteFastMutex(v2);
  v3 = *(void **)a1;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 4272LL) + 8LL);
  if ( v4 )
  {
    memset(v3, 0, 0x90uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v4 + 48), v3);
  }
  *(_QWORD *)a1 = 0LL;
}
