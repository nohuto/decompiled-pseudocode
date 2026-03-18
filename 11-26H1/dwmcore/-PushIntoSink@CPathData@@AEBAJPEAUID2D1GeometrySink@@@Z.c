/*
 * XREFs of ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x18005008C
 * Callers:
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x180050390 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800505E0 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::PushIntoSink(CPathData *this, struct ID2D1GeometrySink *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  int v6; // eax
  __int64 v7; // rax
  void (__fastcall *v8)(struct ID2D1GeometrySink *, __int128 *); // rax
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  void (__fastcall *v14)(struct ID2D1GeometrySink *, __int128 *); // rax
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  BOOL v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+18h]

  v2 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = 0;
  while ( v2 != v4 )
  {
    v6 = *(unsigned __int8 *)(v2 + 1);
    if ( (v6 & 0x80u) != 0 )
    {
      v13 = *(unsigned __int8 *)(v2 + 1);
      LODWORD(v13) = v6 & 0xFFFFFF7F;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v13);
    }
    if ( *(_BYTE *)v2 )
    {
      switch ( *(_BYTE *)v2 )
      {
        case 1:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, bool))(*(_QWORD *)a2 + 64LL))(a2, *(_BYTE *)(v2 + 2) != 0);
          break;
        case 2:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, *(_QWORD *)(v2 + 8));
          break;
        case 3:
          v17 = *(_BYTE *)(v2 + 2) != 0;
          v18 = *(_BYTE *)(v2 + 3) != 0;
          v8 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 112LL);
LABEL_12:
          v15 = *(_OWORD *)(v2 + 8);
          v16 = *(_DWORD *)(v2 + 24);
          v8(a2, &v15);
          break;
        case 4:
          v14 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 96LL);
          v19 = *(_OWORD *)(v2 + 8);
          v14(a2, &v19);
          break;
        case 5:
          v7 = *(_QWORD *)a2;
          v17 = *(_DWORD *)(v2 + 28);
          v8 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v7 + 88);
          goto LABEL_12;
        default:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1CEu, 0LL);
          return v5;
      }
    }
    else
    {
      v11 = *(unsigned __int8 *)(v2 + 2);
      if ( (v11 & 0x80u) != 0 )
      {
        v12 = *(unsigned __int8 *)(v2 + 2);
        LODWORD(v12) = v11 & 0xFFFFFF7F;
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v12);
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, bool))(*(_QWORD *)a2 + 40LL))(
        a2,
        *(_QWORD *)(v2 + 8),
        *(_BYTE *)(v2 + 3) != 0);
    }
    switch ( *(_BYTE *)v2 )
    {
      case 0:
        goto LABEL_23;
      case 1:
        v9 = 8LL;
        break;
      case 2:
LABEL_23:
        v9 = 16LL;
        break;
      case 3:
        v9 = 28LL;
        break;
      case 4:
        v9 = 24LL;
        break;
      case 5:
        v9 = 32LL;
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
    v2 += v9;
  }
  return v5;
}
