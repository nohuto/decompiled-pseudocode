/*
 * XREFs of CmpUnblockHiveWrites @ 0x140ADEA78
 * Callers:
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF47D8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpGetNextHive @ 0x1408B30D0 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnblockHiveWrites(char *P, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  char *v6; // rbx
  volatile signed __int32 *NextHive; // rax
  int v8; // eax

  v5 = a2;
  v6 = P;
  if ( P )
  {
    HvUnlockHiveFlusherExclusive(P);
  }
  else
  {
    while ( 1 )
    {
      NextHive = CmpGetNextHive(P, a2, a3, a4);
      v6 = (char *)NextHive;
      if ( !v5 || (v8 = v5 & NextHive[1030], v6 == (char *)CmpMasterHive) || v8 == v5 )
      {
        HvUnlockHiveFlusherExclusive(v6);
        CmpDereferenceHive(v6);
      }
      if ( v6 == (char *)a3 )
        break;
      P = v6;
    }
  }
  CmpDereferenceHive(v6);
}
