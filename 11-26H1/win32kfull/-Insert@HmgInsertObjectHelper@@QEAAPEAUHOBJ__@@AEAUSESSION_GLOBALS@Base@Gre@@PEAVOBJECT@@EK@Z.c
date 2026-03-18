/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z @ 0x1401E6998
 * Callers:
 *     EngCreateDriverObj @ 0x140318C60 (EngCreateDriverObj.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x140320D20 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     NtGdiCreateServerMetaFile @ 0x140325C10 (NtGdiCreateServerMetaFile.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct Gre::Base::SESSION_GLOBALS *a2,
        struct OBJECT *a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  struct HOBJ__ *result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 4) )
  {
    if ( (a5 & 1) != 0 )
      *((_BYTE *)this + 40) = 1;
    result = HmgInsertObjectInternal(a2, a3, a5 | 1, a4);
    if ( result )
      *((_QWORD *)this + 4) = a3;
  }
  return result;
}
