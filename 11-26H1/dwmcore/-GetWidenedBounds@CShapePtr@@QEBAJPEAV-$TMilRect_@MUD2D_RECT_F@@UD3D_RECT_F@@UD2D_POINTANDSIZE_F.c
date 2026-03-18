/*
 * XREFs of ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005B218
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180182380 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B3C0 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapePtr::GetWidenedBounds(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  int v7; // ebx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, _QWORD, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+48h] [rbp-28h] BYREF

  v4 = *a1;
  v7 = -2003304309;
  if ( !*a1 )
    return (unsigned int)v7;
  v8 = *v4;
  v15 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v10 = v9(v4, 0LL, &v15);
  v7 = v10;
  if ( v10 < 0 )
  {
    v14 = 1074;
  }
  else
  {
    v16 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v15 + 40LL))(
            v15,
            &v16,
            a4,
            0LL,
            LODWORD(FLOAT_0_25),
            &v16);
    v7 = v10;
    if ( v10 >= 0 )
    {
      *(_OWORD *)a2 = v16;
      if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
      {
        if ( !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(v11) )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_QWORD *)a2 = 0LL;
        }
      }
      else
      {
        v7 = -2003304438;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304438, 0x441u, 0LL);
      }
      goto LABEL_7;
    }
    v14 = 1083;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v14, 0LL);
LABEL_7:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x147u, 0LL);
  return (unsigned int)v7;
}
