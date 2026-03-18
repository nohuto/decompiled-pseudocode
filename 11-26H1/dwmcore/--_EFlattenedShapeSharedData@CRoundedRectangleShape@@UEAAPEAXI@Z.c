/*
 * XREFs of ??_EFlattenedShapeSharedData@CRoundedRectangleShape@@UEAAPEAXI@Z @ 0x180151150
 * Callers:
 *     <none>
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRoundedRectangleShape::FlattenedShapeSharedData *__fastcall CRoundedRectangleShape::FlattenedShapeSharedData::`vector deleting destructor'(
        CRoundedRectangleShape::FlattenedShapeSharedData *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 12) - (_QWORD)v4;
    v10 = v4;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    v9 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v10, &v9);
      v6 = v9;
      v4 = v10;
    }
    operator delete(v4, v6);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
