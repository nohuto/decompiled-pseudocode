/*
 * XREFs of CmpBlockHiveWrites @ 0x1408B83AC
 * Callers:
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF6E78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpGetNextHive @ 0x1408B9680 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(void *a1, int a2, _QWORD *a3)
{
  void *i; // rcx
  __int64 NextHive; // rax
  void *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = (void *)NextHive;
    if ( !NextHive )
      break;
    if ( a1 == (void *)NextHive || !a1 )
    {
      if ( !a2 || (a2 & *(_DWORD *)(NextHive + 4120)) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive(NextHive);
        if ( a3 )
          *a3 = v8;
        HvLockHiveFlusherExclusive(v8);
      }
      if ( a1 == v8 )
      {
        CmpDereferenceHive(v8);
        return 0LL;
      }
    }
  }
  return a1 != 0LL ? 0xC0000034 : 0;
}
