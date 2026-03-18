/*
 * XREFs of ?CanUseWarpFastPath@CDrawListEntry@@IEBA_NPEAVCDrawingContext@@AEBVCMILMatrix@@W4Enum@BlendMode@@@Z @ 0x180012B60
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180013208 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CDrawListEntry::CanUseWarpFastPath(__int64 a1, __int64 a2)
{
  int v5; // eax
  _BYTE *v6; // rcx
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebp
  int v11; // esi
  __int64 i; // rbx
  __int64 v13; // rcx
  char v14; // r8
  unsigned __int32 v15; // xmm3_4
  char v16; // r8
  _BYTE v17[16]; // [rsp+28h] [rbp-30h] BYREF

  if ( (*(_DWORD *)(a1 + 64) & 0x400) == 0
    || !*(_QWORD *)(*(_QWORD *)(a2 + 32) + 568LL)
    || CCommonRegistryData::UseHWDrawListEntriesOnWARP )
  {
    return 0;
  }
  v5 = *(_DWORD *)(a2 + 288);
  if ( v5 )
    v6 = (_BYTE *)(*(_QWORD *)(a2 + 280) + 68LL * (unsigned int)(v5 - 1));
  else
    v6 = &CMILMatrix::Identity;
  v7 = v6[64];
  if ( v7 >> 6 != 1 )
  {
    if ( v7 >> 6 < 0 )
      goto LABEL_9;
    v14 = v6[65];
    if ( (char)(4 * v14) >> 6 == 1 )
      goto LABEL_25;
    v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    if ( (char)(4 * v14) >> 6 >= 0 )
    {
      v16 = v14 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v6 + 7) & v15) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)v6 + 3) & v15) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)v6 + 15) & v15))
                        - 1.0) & v15) >= 0.000081380211 )
      {
        v6[65] = v16 ^ 0x10;
LABEL_25:
        v6[64] = v7 & 0x3F | 0x40;
        goto LABEL_26;
      }
      v6[65] = v16 ^ 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 1) - 0.0) & v15) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 4) - 0.0) & v15) < 0.000081380211 )
    {
      v6[64] = v7 | 0xC0;
      goto LABEL_9;
    }
    goto LABEL_25;
  }
LABEL_26:
  if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)v6) )
    return 0;
LABEL_9:
  if ( *(_DWORD *)(a2 + 240) == 4
    || !*(_DWORD *)(a2 + 644) && *(_DWORD *)(a2 + 448)
    || *(_QWORD *)(a2 + 3296)
    || CDrawingContext::IsHDRTarget((CDrawingContext *)a2) )
  {
    return 0;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 24LL))(
         *(_QWORD *)(a2 + 24) + 8LL,
         v17);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(v8 + 8);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
  if ( v11 )
  {
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      if ( _bittest(&v11, i) )
      {
        v13 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, (unsigned int)i) + 8);
        if ( !v13
          || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, v10)
          || (unsigned __int8)*(_WORD *)(i + v9 + 2 * i + 64) == 2 )
        {
          return 0;
        }
      }
    }
    return 1;
  }
  return v10 != 1;
}
