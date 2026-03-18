/*
 * XREFs of IopSymlinkProcessReparse @ 0x1409041CC
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x14048345C (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1404AF6B0 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x140904710 (IopSymlinkRememberJunction.c)
 *     IopFindMatchingComponentsLengthR @ 0x140905A30 (IopFindMatchingComponentsLengthR.c)
 */

int __fastcall IopSymlinkProcessReparse(PIRP Irp, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR Information; // rax
  struct _ECP_LIST *UserBuffer; // rcx
  __int64 MostRecentlyUsedName; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  Information = Irp->IoStatus.Information;
  if ( Information == 2684354563 || Information == 2684354572 || Information == 2684354585 )
  {
    if ( !a4 )
      LODWORD(Information) = IopGraftName(Irp);
  }
  else if ( Information > 2 )
  {
    UserBuffer = (struct _ECP_LIST *)Irp->UserBuffer;
    v11 = 0LL;
    LODWORD(Information) = IopSymlinkGetECP(UserBuffer, (PVOID *)&v11);
    if ( (Information & 0x80000000) != 0LL
      || (MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName(v11),
          MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(a2 + 88, MostRecentlyUsedName + 16),
          LODWORD(Information) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, Irp, v11),
          (Information & 0x80000000) != 0LL) )
    {
      Irp->IoStatus.Status = Information;
    }
  }
  return Information;
}
