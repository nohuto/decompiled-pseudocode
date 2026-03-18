/*
 * XREFs of ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1801459E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLinkedShader@@UEAA@XZ @ 0x180145A1C (--1CLinkedShader@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CLinkedShader *__fastcall CLinkedShader::`scalar deleting destructor'(CLinkedShader *this, char a2)
{
  CLinkedShader::~CLinkedShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
