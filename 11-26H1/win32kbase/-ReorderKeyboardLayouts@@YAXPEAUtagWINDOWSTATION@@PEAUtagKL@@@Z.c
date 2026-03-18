/*
 * XREFs of ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1402199E0
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x140086FD0 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x14011B534 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x14011C484 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall ReorderKeyboardLayouts(struct tagWINDOWSTATION *a1, struct tagKL *a2, int a3)
{
  struct tagKL *KbdLayoutListHead; // rax

  if ( !a1 || (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    KbdLayoutListHead = GetKbdLayoutListHead(a1, (int)a2, a3);
    if ( KbdLayoutListHead )
    {
      if ( a2 != KbdLayoutListHead )
      {
        *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL) = *((_QWORD *)a2 + 2);
        *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = *((_QWORD *)a2 + 3);
        *((_QWORD *)a2 + 2) = KbdLayoutListHead;
        *((_QWORD *)a2 + 3) = *((_QWORD *)KbdLayoutListHead + 3);
        *(_QWORD *)(*((_QWORD *)KbdLayoutListHead + 3) + 16LL) = a2;
        *((_QWORD *)KbdLayoutListHead + 3) = a2;
        LockKbdLayoutListHead(a1, a2, (int)KbdLayoutListHead);
      }
    }
  }
}
