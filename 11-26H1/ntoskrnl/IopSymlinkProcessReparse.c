/*
 * XREFs of IopSymlinkProcessReparse @ 0x14093415C
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x14047CDCC (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1404A8D40 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 *     IopSymlinkRememberJunction @ 0x14093469C (IopSymlinkRememberJunction.c)
 *     IopFindMatchingComponentsLengthR @ 0x1409359C0 (IopFindMatchingComponentsLengthR.c)
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
