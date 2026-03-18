/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18018B6E8
 * Callers:
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18018B248 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v7; // eax
  unsigned int v8; // ebx
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h] BYREF

  v4 = *a1;
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v4 + 24))(a1, 0LL, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 1074;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v15, 0LL);
    goto LABEL_5;
  }
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v16 + 40LL))(
         v16,
         &v17,
         a4,
         0LL,
         LODWORD(FLOAT_0_25),
         &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 1083;
    goto LABEL_9;
  }
  v9 = *(float *)&v17;
  v10 = *((float *)&v17 + 1);
  v11 = *((float *)&v17 + 2);
  v12 = *((float *)&v17 + 3);
  *(_DWORD *)a2 = v17;
  *(float *)(a2 + 4) = v10;
  *(float *)(a2 + 8) = v11;
  *(float *)(a2 + 12) = v12;
  if ( v11 < v9 || v12 < v10 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
LABEL_5:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v8;
}
