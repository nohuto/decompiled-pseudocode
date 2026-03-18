/*
 * XREFs of ?CreateSection@FileObj@Gre@@QEAA_NPEAT_LARGE_INTEGER@@_NPEAPEAX@Z @ 0x1401D1910
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Gre::FileObj::CreateSection(void **this, union _LARGE_INTEGER *a2, bool a3, void **a4)
{
  char v5; // bl
  void *v6; // rax
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  Gre::SectionObj::SectionObj((Gre::SectionObj *)&v8, *this, a2, a3, 0LL);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    v5 = 1;
    *a4 = v6;
  }
  Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v8);
  return v5;
}
