/*
 * XREFs of ?Reset@FileObj@Gre@@QEAAXPEAX@Z @ 0x1401C68C8
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CF7D0 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
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
