/*
 * XREFs of ??1CSurfaceBrush@@MEAA@XZ @ 0x1802151D0
 * Callers:
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x1801AA840 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSurfaceBrush::~CSurfaceBrush(CSurfaceBrush *this)
{
  struct CResource *v1; // rdx

  v1 = (struct CResource *)*((_QWORD *)this + 23);
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  *((_QWORD *)this + 20) = &CSurfaceBrush::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::~CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>(this);
}
