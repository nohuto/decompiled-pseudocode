/*
 * XREFs of ?Reset@FileObj@Gre@@QEAAXPEAX@Z @ 0x1401D26F8
 * Callers:
 *     ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305AB4 (-bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140305F10 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::FileObj::Reset(void **this, void *a2)
{
  void *v4; // rcx

  v4 = *this;
  if ( v4 )
    ZwClose(v4);
  *this = a2;
}
