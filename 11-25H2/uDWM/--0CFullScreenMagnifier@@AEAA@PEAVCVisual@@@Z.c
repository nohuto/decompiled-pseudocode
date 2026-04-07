/*
 * XREFs of ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x1800883B4
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800882F8 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::CFullScreenMagnifier(
        CFullScreenMagnifier *this,
        struct CVisual *a2)
{
  CMILRefCountBase *v2; // rdx
  __int64 v3; // r8

  CBaseObject::CBaseObject(this);
  *(_OWORD *)(v3 + 52) = xmmword_1800FB920;
  *(_QWORD *)v3 = &CFullScreenMagnifier::`vftable';
  *(_QWORD *)(v3 + 24) = 0x3FF0000000000000LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 16) = v2;
  *(_OWORD *)(v3 + 152) = xmmword_1800FB920;
  *(_OWORD *)(v3 + 68) = xmmword_1800FB930;
  *(_OWORD *)(v3 + 168) = xmmword_1800FB930;
  *(_OWORD *)(v3 + 84) = xmmword_1800FB940;
  *(_OWORD *)(v3 + 184) = xmmword_1800FB940;
  *(_OWORD *)(v3 + 100) = xmmword_1800FB950;
  *(_OWORD *)(v3 + 200) = xmmword_1800FB950;
  *(_OWORD *)(v3 + 116) = xmmword_1800FB960;
  *(_OWORD *)(v3 + 216) = xmmword_1800FB960;
  *(_OWORD *)(v3 + 132) = xmmword_1800FB970;
  *(_DWORD *)(v3 + 148) = 1065353216;
  *(_OWORD *)(v3 + 232) = xmmword_1800FB970;
  *(_DWORD *)(v3 + 248) = 1065353216;
  if ( v2 )
    CMILRefCountBase::AddRef(v2);
  return (CFullScreenMagnifier *)v3;
}
