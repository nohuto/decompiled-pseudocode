/*
 * XREFs of ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002563C
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800251B0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapePtr::FillContainsPoint(__int64 **this, const struct D2D_POINT_2F *a2, bool *a3)
{
  __int64 *v3; // rdi
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  BOOL v10; // eax
  float y; // xmm1_4
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  BOOL v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF

  v3 = *this;
  v6 = -2003304309;
  if ( !*this )
    return (unsigned int)v6;
  v7 = *v3;
  v17 = 0;
  LODWORD(v18) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int128 *))(v7 + 64))(v3, &v18) && (_DWORD)v18 == 1 )
  {
    v8 = *v3;
    v18 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD))(v8 + 48))(v3, &v18, 0LL);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x77u, 0LL);
    }
    else
    {
      v10 = 0;
      if ( a2->x >= *(float *)&v18 && *((float *)&v18 + 2) > a2->x )
      {
        y = a2->y;
        if ( y >= *((float *)&v18 + 1) )
          v10 = *((float *)&v18 + 3) > y;
      }
      v17 = v10;
    }
    goto LABEL_10;
  }
  v13 = *v3;
  *(_QWORD *)&v18 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v13 + 24))(v3, 0LL, &v18);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7Eu, 0LL);
LABEL_15:
    v16 = v18;
    if ( (_QWORD)v18 )
    {
      *(_QWORD *)&v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    goto LABEL_10;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v18 + 56LL))(
          v18,
          _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
          0LL);
  v6 = v15;
  if ( v15 >= 0 )
    goto LABEL_15;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x80u, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
LABEL_10:
  *a3 = v17;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x172u, 0LL);
  return (unsigned int)v6;
}
