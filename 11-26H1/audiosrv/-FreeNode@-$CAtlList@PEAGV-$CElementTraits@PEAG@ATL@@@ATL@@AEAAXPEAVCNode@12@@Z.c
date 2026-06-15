/*
 * XREFs of ?FreeNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800B000C
 * Callers:
 *     ?RemoveAll@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ @ 0x18007CFB8 (-RemoveAll@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ.c)
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800EFBD0 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ @ 0x18007CFB8 (-RemoveAll@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::FreeNode(__int64 a1, _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::RemoveAll(a1);
}
