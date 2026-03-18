/*
 * XREFs of ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305AB4
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305DF8 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     ??0FileObj@Gre@@QEAA@PEBG_N@Z @ 0x1401B1EDC (--0FileObj@Gre@@QEAA@PEBG_N@Z.c)
 *     ?Reset@FileObj@Gre@@QEAAXPEAX@Z @ 0x1401D26F8 (-Reset@FileObj@Gre@@QEAAXPEAX@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 */

__int64 __fastcall bCreateSection(const unsigned __int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v7; // ebx
  void *v9; // rcx
  void *v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  Gre::FileObj::FileObj(v11, a1, a3 != 0);
  v9 = v11[0];
  v11[0] = 0LL;
  if ( v9 && (unsigned int)bCreateSectionFromHandle(v9, a1, a2, a3, a4) )
  {
    if ( *(_BYTE *)(a2 + 45) )
    {
      ZwClose(*(HANDLE *)(a2 + 48));
      *(_QWORD *)(a2 + 48) = 0LL;
    }
    v7 = 1;
  }
  Gre::FileObj::Reset(v11, 0LL);
  return v7;
}
