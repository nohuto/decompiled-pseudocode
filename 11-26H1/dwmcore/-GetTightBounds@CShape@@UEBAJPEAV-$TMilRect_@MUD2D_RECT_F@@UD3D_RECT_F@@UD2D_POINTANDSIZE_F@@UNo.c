/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800645B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetTightBounds(__int64 a1, __int64 a2, CMILMatrix *a3)
{
  __int64 v4; // r10
  __int128 *v5; // rsi
  _DWORD *v6; // r9
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  unsigned int v15; // xmm1_4
  unsigned int v16; // xmm0_4
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF
  __int128 v19; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-30h]

  v17 = 0LL;
  v20 = 0LL;
  v4 = a1;
  v5 = 0LL;
  v19 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  if ( CMILMatrix::Is2DAffineOrNaN(a3, a2) )
  {
    v5 = &v19;
    v15 = v6[1];
    LODWORD(v19) = *v6;
    *(_QWORD *)((char *)&v19 + 4) = __PAIR64__(v6[4], v15);
    v16 = v6[12];
    HIDWORD(v19) = v6[5];
    v20 = __PAIR64__(v6[13], v16);
LABEL_2:
    v6 = 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, v6, &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x407u, 0LL);
  }
  else
  {
    v18 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v17 + 32LL))(v17, v5, &v18);
    v10 = *(float *)&v18;
    v8 = v9;
    v11 = *((float *)&v18 + 1);
    v12 = *((float *)&v18 + 2);
    v13 = *((float *)&v18 + 3);
    *(_DWORD *)a2 = v18;
    *(float *)(a2 + 4) = v11;
    *(float *)(a2 + 8) = v12;
    *(float *)(a2 + 12) = v13;
    if ( v12 < v10 || v13 < v11 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  if ( v8 == -2003238895 )
    v8 = -2003304438;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v8;
}
