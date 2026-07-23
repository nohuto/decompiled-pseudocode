/*
 * XREFs of CmpUnblockHiveWrites @ 0x140ADBC68
 * Callers:
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF6E78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpGetNextHive @ 0x1408B9680 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnblockHiveWrites(struct _KTHREAD **P, int a2, char *a3)
{
  char *v5; // rbx
  volatile signed __int32 *NextHive; // rax
  int v7; // eax

  v5 = (char *)P;
  if ( P )
  {
    HvUnlockHiveFlusherExclusive(P);
  }
  else
  {
    while ( 1 )
    {
      NextHive = CmpGetNextHive(P);
      v5 = (char *)NextHive;
      if ( !a2 || (v7 = a2 & NextHive[1030], v5 == (char *)CmpMasterHive) || v7 == a2 )
      {
        HvUnlockHiveFlusherExclusive(v5);
        CmpDereferenceHive(v5);
      }
      if ( v5 == a3 )
        break;
      P = (struct _KTHREAD **)v5;
    }
  }
  CmpDereferenceHive(v5);
}
