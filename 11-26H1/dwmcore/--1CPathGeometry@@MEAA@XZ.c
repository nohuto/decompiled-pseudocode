/*
 * XREFs of ??1CPathGeometry@@MEAA@XZ @ 0x1801B643C
 * Callers:
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x1801B63F0 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathGeometry::~CPathGeometry(CPathGeometry *this)
{
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)this + 17);
  CGeometry::~CGeometry((struct CResource **)this);
}
