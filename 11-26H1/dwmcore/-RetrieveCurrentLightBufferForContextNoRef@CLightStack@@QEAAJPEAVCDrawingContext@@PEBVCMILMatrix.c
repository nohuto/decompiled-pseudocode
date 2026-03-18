/*
 * XREFs of ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18007B830
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x18007B1C0 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1800AD3DC (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180148AB0 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1801A27F4 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x1801AD9AC (-AddMultipleAndSet@-$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z.c)
 *     ?ReplaceWith@?$DynArray@PEAVCLight@@$0A@@@QEAAJPEAV1@@Z @ 0x18021882C (-ReplaceWith@-$DynArray@PEAVCLight@@$0A@@@QEAAJPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::RetrieveCurrentLightBufferForContextNoRef(
        CLightStack *this,
        struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CHwLightCollectionBuffer **a4)
{
  unsigned int v9; // r8d
  const void **v10; // r13
  __int64 v11; // r12
  unsigned int v12; // r15d
  int v13; // r15d
  int v14; // eax
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // r10
  char v19; // r11
  __int64 i; // r9
  __int64 v21; // rdx
  unsigned int j; // ecx
  int v23; // r15d
  unsigned int v24; // eax
  bool v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  struct CVisual *CurrentVisual; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  void *Buf2[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+64h] [rbp-9Ch]
  _BYTE v32[32]; // [rsp+70h] [rbp-90h] BYREF
  struct LightInfo *v33[2]; // [rsp+90h] [rbp-70h] BYREF
  int v34; // [rsp+A0h] [rbp-60h]
  unsigned int v35[2]; // [rsp+A4h] [rbp-5Ch]
  _BYTE v36[720]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v37[168]; // [rsp+380h] [rbp+280h] BYREF
  int v38; // [rsp+428h] [rbp+328h]
  int v39; // [rsp+46Ch] [rbp+36Ch]

  *a4 = 0LL;
  if ( *((_DWORD *)this + 57) || !*((_DWORD *)this + 8) )
    return 0LL;
  Buf2[0] = v32;
  Buf2[1] = v32;
  v12 = 0;
  v28 = *((_QWORD *)a2 + 993);
  v30 = 3;
  v31 = 3LL;
  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  v17 = 0;
  v25 = 1;
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 8);
    if ( v17 >= v9 )
      break;
    v18 = *((_QWORD *)this + 1);
    v19 = 1;
    if ( *(_DWORD *)(v18 + 16LL * v17 + 8) != 1 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v21 = *((_QWORD *)this + 1);
        if ( (unsigned int)i >= v12 )
          break;
        if ( *((_QWORD *)Buf2[0] + i) == *(_QWORD *)(v18 + 16LL * v17) )
        {
          v19 = 0;
          break;
        }
      }
      for ( j = v17 + 1; j < v9; ++j )
      {
        v21 = *((_QWORD *)this + 1);
        if ( *(_DWORD *)(v18 + 16LL * j + 8) == 1 && *(_QWORD *)(v18 + 16LL * v17) == *(_QWORD *)(v18 + 16LL * j) )
          goto LABEL_27;
      }
      if ( v19 )
      {
        v26 = *(_QWORD *)(v21 + 16LL * v17);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 264LL))(v26)
          || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, struct CVisual *))(*(_QWORD *)v26 + 256LL))(
                v26,
                v28,
                CurrentVisual) )
        {
          v25 = 0;
        }
        else
        {
          v12 = HIDWORD(v31) + 1;
          if ( (unsigned int)(HIDWORD(v31) + 1) < HIDWORD(v31) )
          {
            v23 = -2147024362;
            v24 = 183;
            goto LABEL_52;
          }
          if ( v12 <= (unsigned int)v31 )
          {
            *((_QWORD *)Buf2[0] + HIDWORD(v31)) = v26;
            HIDWORD(v31) = v12;
            goto LABEL_27;
          }
          v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)Buf2, 8, 1, &v26);
          if ( v23 < 0 )
          {
            v24 = 194;
LABEL_52:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v24, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x11Au, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x8Bu, 0LL);
            DynArrayImpl<1>::~DynArrayImpl<1>(Buf2);
            return (unsigned int)v23;
          }
        }
        v12 = HIDWORD(v31);
      }
    }
LABEL_27:
    ++v17;
  }
  if ( v12 )
    v25 = 1;
  if ( (unsigned __int8)CMILMatrix::operator!=((char *)this + 160, a3)
    || (v10 = (const void **)((char *)this + 104), *((_DWORD *)this + 32) != v12)
    || memcmp_0(*v10, Buf2[0], 8LL * v12) )
  {
    ReleaseInterface<CPolygon>(this);
    v12 = HIDWORD(v31);
    v10 = (const void **)((char *)this + 104);
  }
  v11 = 0LL;
  if ( *(_QWORD *)this )
  {
LABEL_11:
    *a4 = *(struct CHwLightCollectionBuffer **)this;
  }
  else
  {
    v34 = 3;
    v33[0] = (struct LightInfo *)v36;
    v33[1] = (struct LightInfo *)v36;
    *(_QWORD *)v35 = 3LL;
    while ( (unsigned int)v11 < v12 )
    {
      v38 = 0;
      v39 = 0;
      v13 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct CMILMatrix *, _BYTE *))(**((_QWORD **)Buf2[0] + v11) + 216LL))(
              *((_QWORD *)Buf2[0] + v11),
              a2,
              a3,
              v37);
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA0u, 0LL);
LABEL_26:
        DynArrayImpl<1>::~DynArrayImpl<1>(v33);
        DynArrayImpl<1>::~DynArrayImpl<1>(Buf2);
        return (unsigned int)v13;
      }
      v13 = DynArray<LightInfo,0>::AddMultipleAndSet(v33, v37);
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA2u, 0LL);
        goto LABEL_26;
      }
      v12 = HIDWORD(v31);
      v11 = (unsigned int)(v11 + 1);
    }
    v14 = CHwLightCollectionBuffer::Create(v33[0], v35[1], v25, (struct CHwLightCollectionBuffer **)this);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xAAu, 0LL);
      DynArrayImpl<1>::~DynArrayImpl<1>(v33);
      DynArrayImpl<1>::~DynArrayImpl<1>(Buf2);
      return v15;
    }
    *((_OWORD *)this + 10) = *(_OWORD *)a3;
    *((_OWORD *)this + 11) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 12) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 13) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 56) = *((_DWORD *)a3 + 16);
    v16 = DynArray<CLight *,0>::ReplaceWith(v10, Buf2);
    LODWORD(v11) = v16;
    if ( v16 >= 0 )
    {
      DynArrayImpl<1>::~DynArrayImpl<1>(v33);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xADu, 0LL);
    DynArrayImpl<1>::~DynArrayImpl<1>(v33);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(Buf2);
  return (unsigned int)v11;
}
