/*
 * XREFs of ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x18006B5A8
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18006B4E0 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::CFullScreenMagnifier(
        CFullScreenMagnifier *this,
        struct CVisual *a2)
{
  CBaseObject *v2; // rdx
  __int64 v3; // r8

  CBaseObject::CBaseObject(this);
  *(_OWORD *)(v3 + 52) = xmmword_1800F6880;
  *(_QWORD *)v3 = &CFullScreenMagnifier::`vftable';
  *(_QWORD *)(v3 + 24) = 0x3FF0000000000000LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_DWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 16) = v2;
  *(_OWORD *)(v3 + 152) = xmmword_1800F6880;
  *(_OWORD *)(v3 + 68) = xmmword_1800F6890;
  *(_OWORD *)(v3 + 168) = xmmword_1800F6890;
  *(_OWORD *)(v3 + 84) = xmmword_1800F68A0;
  *(_OWORD *)(v3 + 184) = xmmword_1800F68A0;
  *(_OWORD *)(v3 + 100) = xmmword_1800F68B0;
  *(_OWORD *)(v3 + 200) = xmmword_1800F68B0;
  *(_OWORD *)(v3 + 116) = xmmword_1800F68C0;
  *(_OWORD *)(v3 + 216) = xmmword_1800F68C0;
  *(_OWORD *)(v3 + 132) = xmmword_1800F68D0;
  *(_DWORD *)(v3 + 148) = 1065353216;
  *(_OWORD *)(v3 + 232) = xmmword_1800F68D0;
  *(_DWORD *)(v3 + 248) = 1065353216;
  if ( v2 )
    CBaseObject::AddRef(v2);
  return (CFullScreenMagnifier *)v3;
}
