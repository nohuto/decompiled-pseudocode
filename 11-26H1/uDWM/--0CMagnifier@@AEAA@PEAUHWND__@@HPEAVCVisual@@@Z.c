/*
 * XREFs of ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800B9D58
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800B9ECC (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CMagnifier *__fastcall CMagnifier::CMagnifier(CMagnifier *this, HWND a2, __int64 a3, struct CVisual *a4)
{
  CBaseObject *v4; // r9
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // rdx

  CBaseObject::CBaseObject(this);
  *(_OWORD *)(v5 + 60) = xmmword_1800F6880;
  *(_QWORD *)v5 = &CMagnifier::`vftable';
  *(_BYTE *)(v5 + 56) = v6 != 0;
  *(_QWORD *)(v5 + 48) = v7;
  *(_DWORD *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 16) = v4;
  *(_OWORD *)(v5 + 76) = xmmword_1800F6890;
  *(_OWORD *)(v5 + 92) = xmmword_1800F68A0;
  *(_OWORD *)(v5 + 108) = xmmword_1800F68B0;
  *(_OWORD *)(v5 + 124) = xmmword_1800F68C0;
  *(_OWORD *)(v5 + 140) = xmmword_1800F68D0;
  *(_DWORD *)(v5 + 156) = 1065353216;
  if ( v4 )
    CBaseObject::AddRef(v4);
  return (CMagnifier *)v5;
}
