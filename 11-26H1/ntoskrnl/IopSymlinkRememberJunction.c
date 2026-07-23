/*
 * XREFs of IopSymlinkRememberJunction @ 0x14093469C
 * Callers:
 *     IopSymlinkProcessReparse @ 0x14093415C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     IopSymlinkGetECP @ 0x14047CDCC (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1404A8D40 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopGetRelatedFileName @ 0x140797540 (IopGetRelatedFileName.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1409347A0 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkUpdateECP @ 0x1409347F8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140934998 (IopSymlinkFreeRelatedMountPointChain.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkRememberJunction(unsigned __int16 a1, __int64 a2, __int64 a3, const UNICODE_STRING *a4)
{
  int RelatedFileName; // esi
  unsigned __int16 *RelatedMountPoint; // rax
  __int64 v10; // r9
  _WORD *MostRecentlyUsedName; // rbx
  _WORD *v12; // r9
  __int16 v13; // dx
  __int64 Pool2; // rax
  __int64 v15; // rdi
  unsigned __int16 v16; // bx
  const void *v17; // rdx
  unsigned __int16 v19; // r8
  __int16 v20; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v21; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-10h] BYREF

  RelatedFileName = 0;
  RelatedMountPoint = (unsigned __int16 *)IopSymlinkGetRelatedMountPoint(a4, a1);
  MostRecentlyUsedName = RelatedMountPoint;
  if ( RelatedMountPoint )
  {
    *RelatedMountPoint = a1;
    IopSymlinkFreeRelatedMountPointChain(RelatedMountPoint);
  }
  else
  {
    MostRecentlyUsedName = (_WORD *)IopSymlinkGetMostRecentlyUsedName(v10);
    v21 = MostRecentlyUsedName;
    MostRecentlyUsedName[1] |= 1u;
    *MostRecentlyUsedName = v13;
    if ( v12 == MostRecentlyUsedName )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v19 = v12[8] + 2;
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.Buffer = 0LL;
        v20 = 0;
        RelatedFileName = IopGetRelatedFileName(a2, (__int64)&Destination, v19, &v20);
        if ( RelatedFileName >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          RelatedFileName = IopSymlinkUpdateECP((PIRP)a3, v20, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( RelatedFileName < 0 )
            return (unsigned int)RelatedFileName;
          IopSymlinkGetECP(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v21);
          MostRecentlyUsedName = v21;
        }
      }
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  *((_QWORD *)MostRecentlyUsedName + 1) = Pool2;
  v15 = Pool2;
  if ( Pool2 )
  {
    v16 = *(_WORD *)(a2 + 88);
    v17 = *(const void **)(a2 + 96);
    *(_QWORD *)Pool2 = 0LL;
    *(_WORD *)(Pool2 + 16) = 0;
    *(_WORD *)(Pool2 + 18) = v16;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    memmove((void *)(Pool2 + 32), v17, v16);
    *(_WORD *)(v15 + 16) += v16;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RelatedFileName;
}
