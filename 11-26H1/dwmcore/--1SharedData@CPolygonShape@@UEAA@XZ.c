/*
 * XREFs of ??1SharedData@CPolygonShape@@UEAA@XZ @ 0x18015156C
 * Callers:
 *     ??_GSharedData@CPolygonShape@@UEAAPEAXI@Z @ 0x180151530 (--_GSharedData@CPolygonShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPolygonShape::SharedData::~SharedData(CPolygonShape::SharedData *this)
{
  void *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 5) - (_QWORD)v2;
    v7 = v2;
    v4 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
    v6 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v4 = v6;
      v2 = v7;
    }
    operator delete(v2, v4);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
