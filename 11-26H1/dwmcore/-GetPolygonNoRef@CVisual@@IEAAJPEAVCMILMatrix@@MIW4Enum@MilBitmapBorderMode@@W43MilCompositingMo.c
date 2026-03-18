/*
 * XREFs of ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1800741A4
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180071C64 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UPoint@CPolygon@@$0A@@@QEAAJPEFBUPoint@CPolygon@@I@Z @ 0x1801A2758 (-AddMultipleAndSet@-$DynArray@UPoint@CPolygon@@$0A@@@QEAAJPEFBUPoint@CPolygon@@I@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x1801B7894 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetPolygonNoRef(
        __int64 a1,
        int a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9,
        char a10,
        _QWORD *a11)
{
  __int64 v11; // rdi
  int v12; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  int v21; // eax
  __int128 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  __int128 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+88h] [rbp-78h] BYREF
  __int128 v28; // [rsp+98h] [rbp-68h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-58h] BYREF
  int v30; // [rsp+B8h] [rbp-48h]
  _QWORD v31[2]; // [rsp+C0h] [rbp-40h] BYREF
  int v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D4h] [rbp-2Ch]
  _BYTE v34[80]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 0LL;
  v12 = 0;
  v26 = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && !a10 )
    goto LABEL_21;
  v30 = 1;
  v31[0] = v34;
  v31[1] = v34;
  v32 = 4;
  v33 = 4LL;
  v28 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a10 )
  {
    v28 = *(_OWORD *)(a1 + 172);
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 240LL))(a1, &v28);
    v12 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x15A8u, 0LL);
      goto LABEL_17;
    }
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 320LL))(a1, &v28, &v28);
  *(_QWORD *)&v22 = v28;
  *((_QWORD *)&v22 + 1) = 0x3F80000000000000LL;
  v29 = v22;
  v12 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v31, &v29);
  if ( v12 >= 0 )
  {
    *(_QWORD *)&v23 = __PAIR64__(DWORD1(v28), DWORD2(v28));
    *((_QWORD *)&v23 + 1) = 0x3F80000000000000LL;
    v29 = v23;
    v16 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v31, &v29);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x15B5u, 0LL);
    }
    else
    {
      *(_QWORD *)&v24 = *((_QWORD *)&v28 + 1);
      *((_QWORD *)&v24 + 1) = 0x3F80000000000000LL;
      v29 = v24;
      v17 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v31, &v29);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x15B7u, 0LL);
      }
      else
      {
        *(_QWORD *)&v25 = __PAIR64__(HIDWORD(v28), v28);
        *((_QWORD *)&v25 + 1) = 0x3F80000000000000LL;
        v29 = v25;
        v18 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v31, &v29);
        v12 = v18;
        if ( v18 >= 0 )
        {
          v12 = CPolygon::Create(
                  (unsigned int)v31,
                  a1,
                  *(_QWORD *)(a1 + 248),
                  a2,
                  LODWORD(a3),
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9,
                  (__int64)&si128,
                  (__int64)&v26);
          if ( v12 >= 0 )
          {
            DynArrayImpl<1>::~DynArrayImpl<1>(v31);
            v11 = v26;
LABEL_21:
            *a11 = v11;
            return (unsigned int)v12;
          }
          v11 = v26;
          v19 = 5576;
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x15B9u, 0LL);
      }
    }
LABEL_17:
    DynArrayImpl<1>::~DynArrayImpl<1>(v31);
    return (unsigned int)v12;
  }
  v19 = 5555;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v19, 0LL);
  DynArrayImpl<1>::~DynArrayImpl<1>(v31);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  return (unsigned int)v12;
}
