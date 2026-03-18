/*
 * XREFs of ?RemoveChildPairing@DISPLAY_MUX_PAIRING@@AEAAXU_LUID@@PEAW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x14008EC28
 * Callers:
 *     DpiRemoveAdapter @ 0x1400859EC (DpiRemoveAdapter.c)
 *     ?RemoveChildPairingDueToRequirements@DISPLAY_MUX_MGR@@QEAAXU_LUID@@@Z @ 0x14008ECD8 (-RemoveChildPairingDueToRequirements@DISPLAY_MUX_MGR@@QEAAXU_LUID@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x14008BA7C (-DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x14008CDA8 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 */

void __fastcall DISPLAY_MUX_PAIRING::RemoveChildPairing(
        DISPLAY_MUX_PAIRING *this,
        struct _LUID a2,
        enum DISPLAY_MUX_PAIRING_DESTROYED_REASON *a3)
{
  unsigned int v3; // edx
  __int64 v4; // rcx
  int *v5; // r8
  void **v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  void *v10; // rcx
  LONG HighPart; // [rsp+3Ch] [rbp+14h]

  HighPart = a2.HighPart;
  if ( DISPLAY_MUX_PAIRING::IsOperational(this) )
  {
    v6 = (void **)(v4 + 16);
    v7 = *(_QWORD *)(v4 + 16);
    if ( v7 && *(_QWORD *)(v7 + 16) == __PAIR64__(HighPart, v3) && (v8 = 1, v4 != -16)
      || (v6 = (void **)(v4 + 24), (v9 = *(_QWORD *)(v4 + 24)) != 0)
      && *(_QWORD *)(v9 + 16) == __PAIR64__(HighPart, v3)
      && (v8 = 2, v4 != -24) )
    {
      if ( v5 )
        v8 = *v5;
      DISPLAY_MUX_PAIRING::DestroyActivePairing(v4, v8);
      v10 = *v6;
      *v6 = 0LL;
      if ( v10 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2272;
  }
}
