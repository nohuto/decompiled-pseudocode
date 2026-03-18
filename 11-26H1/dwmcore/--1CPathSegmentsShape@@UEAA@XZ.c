/*
 * XREFs of ??1CPathSegmentsShape@@UEAA@XZ @ 0x18004FF50
 * Callers:
 *     ??_ECPathSegmentsShape@@UEAAPEAXI@Z @ 0x18004FD40 (--_ECPathSegmentsShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathSegmentsShape::~CPathSegmentsShape(CPathSegmentsShape *this)
{
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((char *)this + 16);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((char *)this + 8);
}
