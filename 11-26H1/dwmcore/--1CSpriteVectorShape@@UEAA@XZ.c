/*
 * XREFs of ??1CSpriteVectorShape@@UEAA@XZ @ 0x1800ABF0C
 * Callers:
 *     ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x1800ABEC0 (--_GCSpriteVectorShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CSpriteVectorShape::~CSpriteVectorShape(CSpriteVectorShape *this)
{
  struct CResource *v1; // rdx
  __int64 v3; // rcx

  v1 = (struct CResource *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &CSpriteVectorShape::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 16));
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (*((_QWORD *)this + 23) - v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  CVectorShape::~CVectorShape(this);
}
