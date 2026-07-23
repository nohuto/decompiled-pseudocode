/*
 * XREFs of SepGetTokenSessionMapEntry @ 0x1404B1940
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x14081CDAC (SepIsParentOfChildAppContainer.c)
 *     SepSetTokenLowboxNumber @ 0x140A3E100 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, __int64 *a3)
{
  __int64 **AffinityVersion; // rax
  __int64 **i; // rcx
  __int64 v8; // rcx
  __int64 Pool2; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8

  AffinityVersion = (__int64 **)SepRmCapTableLock.AffinityVersion;
  *a3 = 0LL;
  if ( AffinityVersion )
  {
LABEL_2:
    for ( i = (__int64 **)*AffinityVersion; i != AffinityVersion; i = (__int64 **)*i )
    {
      if ( *((_DWORD *)i + 4) == a1 )
      {
        v8 = (__int64)(i + 3);
LABEL_6:
        *a3 = v8;
        return 0LL;
      }
    }
    if ( !a2 )
      return 3221226021LL;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v11 = SepRmCapTableLock.AffinityVersion;
      v8 = Pool2 + 24;
      *(_BYTE *)(Pool2 + 56) = 0;
      *(_DWORD *)(Pool2 + 16) = a1;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *(_QWORD *)Pool2 = v12;
      *(_QWORD *)(Pool2 + 8) = v11;
      *(_QWORD *)(v12 + 8) = Pool2;
      *(_QWORD *)v11 = Pool2;
      goto LABEL_6;
    }
    return 3221225626LL;
  }
  if ( !a2 )
    return 3221226021LL;
  AffinityVersion = (__int64 **)ExAllocatePool2(0x100uLL);
  SepRmCapTableLock.AffinityVersion = (unsigned __int64)AffinityVersion;
  if ( AffinityVersion )
  {
    AffinityVersion[1] = (__int64 *)AffinityVersion;
    *AffinityVersion = (__int64 *)AffinityVersion;
    goto LABEL_2;
  }
  return 3221225626LL;
}
