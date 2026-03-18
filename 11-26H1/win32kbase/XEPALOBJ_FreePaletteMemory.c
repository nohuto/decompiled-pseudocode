/*
 * XREFs of XEPALOBJ_FreePaletteMemory @ 0x140043F50
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall XEPALOBJ_FreePaletteMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx
  void *v6; // rdi
  __int64 v7; // rsi

  v5 = *(char **)(*(_QWORD *)a1 + 128LL);
  if ( v5 )
    GreDeleteFastMutex(v5, a2, a3, a4);
  v6 = *(void **)a1;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5) + 88) + 4384LL) + 8LL);
  if ( v7 )
  {
    memset(v6, 0, 0x90uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v7 + 48), v6);
  }
  *(_QWORD *)a1 = 0LL;
}
