/*
 * XREFs of ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18016DD20
 * Callers:
 *     ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800510B0 (-GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x18016DC30 (-AllowsOcclusion@CShape@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetOutline(CShape *this, struct ID2D1GeometrySink *a2)
{
  bool v4; // al
  __int64 v5; // r9
  __int64 (__fastcall *v6)(CShape *, _QWORD, __int128 *); // rax
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // eax
  __int64 (__fastcall *v12)(CShape *, __int128 *, _QWORD); // rax
  int v13; // eax
  __int64 v14; // rax
  void (__fastcall *v15)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD); // rax
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+4Ch] [rbp-24h]
  int v20; // [rsp+54h] [rbp-1Ch]
  int v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+5Ch] [rbp-14h]

  v4 = CShape::AllowsOcclusion(this);
  v5 = *(_QWORD *)this;
  if ( v4 )
  {
    v12 = *(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v5 + 48);
    v16 = 0LL;
    v13 = v12(this, &v16, 0LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x16Fu, 0LL);
    }
    else
    {
      v14 = *(_QWORD *)a2;
      v18 = DWORD2(v16);
      v15 = *(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v14 + 40);
      v19 = *(_QWORD *)((char *)&v16 + 4);
      v20 = HIDWORD(v16);
      v21 = v16;
      v22 = HIDWORD(v16);
      v17 = _mm_unpacklo_ps((__m128)(unsigned int)v16, (__m128)DWORD1(v16)).m128_u64[0];
      v15(a2, v17, 0LL);
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, int *, __int64))(*(_QWORD *)a2 + 48LL))(a2, &v18, 3LL);
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1LL);
    }
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(CShape *, _QWORD, __int128 *))(v5 + 24);
    *(_QWORD *)&v16 = 0LL;
    v7 = v6(this, 0LL, &v16);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x180u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct ID2D1GeometrySink *))(*(_QWORD *)v16 + 96LL))(
              v16,
              0LL,
              v8,
              a2);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x182u, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
        return v9;
      }
    }
    if ( (_QWORD)v16 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v9;
}
