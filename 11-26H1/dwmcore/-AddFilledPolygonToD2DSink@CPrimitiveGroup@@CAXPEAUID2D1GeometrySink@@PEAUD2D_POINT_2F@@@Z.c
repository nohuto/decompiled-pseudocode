/*
 * XREFs of ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x18027D92C
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE51C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::AddFilledPolygonToD2DSink(struct ID2D1GeometrySink *a1, struct D2D_POINT_2F *a2)
{
  void (__fastcall *v4)(struct ID2D1GeometrySink *, _QWORD, _QWORD); // rax
  struct D2D_POINT_2F v5; // rdx

  v4 = *(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, _QWORD))(*(_QWORD *)a1 + 40LL);
  if ( (float)((float)(a2[2].y - a2[1].y) * (float)(a2[1].x - a2->x)) <= (float)((float)(a2[1].y - a2->y)
                                                                               * (float)(a2[2].x - a2[1].x)) )
  {
    v4(a1, *(_QWORD *)&a2[3], 0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[2]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[1]);
    v5 = *a2;
  }
  else
  {
    v4(a1, *a2, 0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[1]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[2]);
    v5 = a2[3];
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, struct D2D_POINT_2F))(*(_QWORD *)a1 + 80LL))(a1, v5);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1LL);
}
