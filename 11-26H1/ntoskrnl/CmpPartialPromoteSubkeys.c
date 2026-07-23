/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x140866AEC
 * Callers:
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140866CE8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     CmpStartKcbStack @ 0x140943BD0 (CmpStartKcbStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140943FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackInitialize @ 0x140944064 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackCleanup @ 0x1409441A0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKcbStack @ 0x140944530 (CmpCleanupKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140946E1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140947320 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409DF780 (CmpFindKcbInHashEntryByName.c)
 *     CmpHashCompressedComponent @ 0x140A4C950 (CmpHashCompressedComponent.c)
 *     CmpPopulateKcbStack @ 0x140A4E010 (CmpPopulateKcbStack.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140B42454 (CmpFindKcbInHashEntryByCompressedName.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int64 KcbAtLayerHeight; // rdi
  __int64 v3; // rdx
  int started; // ebx
  unsigned __int16 v5; // r9
  __int64 v6; // r10
  __int64 i; // rdx
  __int64 EntryAtLayerHeight; // rax
  __int64 v9; // rax
  bool v10; // zf
  int v11; // r14d
  unsigned int v12; // ebx
  int v13; // eax
  __int64 KcbInHashEntryByName; // rax
  int v15; // eax
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[344]; // [rsp+68h] [rbp-98h] BYREF

  memset_0(v20, 0, 0x160uLL);
  v18 = 0LL;
  CmpKeyEnumStackInitialize(v20);
  memset(v19, 0, sizeof(v19));
  WORD1(v19[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  started = CmpStartKcbStack(v19, v3);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack(v20, a1, 0LL, 0LL);
    if ( started >= 0 )
    {
      while ( 1 )
      {
        started = CmpKeyEnumStackAdvance(v20);
        if ( started < 0 )
          break;
        v5 = *(_WORD *)(KcbAtLayerHeight + 66);
        v6 = 0LL;
        for ( i = v5; (i & 0x8000u) == 0LL; LOWORD(i) = i - 1 )
        {
          EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v21, i);
          if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
          {
            v6 = EntryAtLayerHeight;
            break;
          }
        }
        if ( (_WORD)i != v5 )
        {
          v9 = *(_QWORD *)(v6 + 16);
          v10 = (*(_BYTE *)(v9 + 2) & 0x20) == 0;
          v11 = v9 + 76;
          v12 = *(unsigned __int16 *)(v9 + 72);
          *((_QWORD *)&v18 + 1) = v9 + 76;
          LOWORD(v18) = v12;
          WORD1(v18) = v12;
          if ( v10 )
          {
            v15 = CmpHashUnicodeComponent(&v18);
            KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     (unsigned int)(v15 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16)),
                                     KcbAtLayerHeight,
                                     &v18);
          }
          else
          {
            v13 = CmpHashCompressedComponent(v9 + 76, v12);
            KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     v13 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                     KcbAtLayerHeight,
                                     v11,
                                     v12);
          }
          if ( KcbInHashEntryByName )
          {
            CmpPopulateKcbStack(v19, KcbInHashEntryByName);
            v16 = CmpPromoteSingleKeyFromKcbStacks(a1, v19, 0LL);
          }
          else
          {
            v16 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, v21, 0LL);
          }
          started = v16;
          if ( v16 < 0 )
            goto LABEL_20;
          CmpKeyEnumStackNotifyPromotion(v20);
        }
      }
      if ( started == -2147483622 )
        started = 0;
    }
  }
LABEL_20:
  CmpCleanupKcbStack(v19);
  CmpKeyEnumStackCleanup(v20);
  return (unsigned int)started;
}
