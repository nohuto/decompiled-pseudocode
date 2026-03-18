/*
 * XREFs of ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180071C64
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x180071FB8 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x180071FE8 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18007202C (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x180073608 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMode@@W43MilBitmapInterpolationMode@@_N44PEAPEAVCPolygon@@@Z @ 0x1800741A4 (-GetPolygonNoRef@CVisual@@IEAAJPEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W43MilCompositingMo.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800744EC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180075BC8 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        char a3)
{
  unsigned int v6; // edi
  int v7; // eax
  _DWORD *v8; // rsi
  __m128 *v9; // rax
  int v10; // eax
  const struct CMILMatrix *v11; // rcx
  __int64 v12; // rdx
  bool IsFacingUser; // r15
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  __int128 v19; // xmm1
  int v20; // ecx
  __int128 v21; // xmm0
  char *v22; // rax
  char v23; // si
  int *v24; // rcx
  int v25; // eax
  int v26; // edi
  int v27; // eax
  __int64 v28; // r9
  unsigned int *v29; // r9
  __int64 v30; // r8
  int v31; // r10d
  int v32; // r11d
  int PolygonNoRef; // eax
  struct CPolygon *v34; // r14
  unsigned __int64 v35; // rcx
  struct CPolygon *v36; // rsi
  int v38; // eax
  CBspNode *v39; // rax
  unsigned int v40; // [rsp+20h] [rbp-A9h]
  __m128 v41[4]; // [rsp+60h] [rbp-69h] BYREF
  __int32 v42; // [rsp+A0h] [rbp-29h]
  _OWORD v43[4]; // [rsp+B0h] [rbp-19h] BYREF
  int v44; // [rsp+F0h] [rbp+27h]
  struct CPolygon *v45; // [rsp+138h] [rbp+6Fh] BYREF

  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 264LL))(a2) && !a3 )
    return v6;
  v7 = *((_DWORD *)this + 14);
  v8 = &CMILMatrix::Identity;
  if ( v7 )
    v9 = (__m128 *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v7 - 1));
  else
    v9 = (__m128 *)&CMILMatrix::Identity;
  v41[0] = *v9;
  v41[1] = v9[1];
  v41[2] = v9[2];
  v41[3] = v9[3];
  v42 = v9[4].m128_i32[0];
  v10 = *((_DWORD *)this + 20);
  if ( v10 )
    v11 = (const struct CMILMatrix *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v10 - 1));
  else
    v11 = (const struct CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Multiply(v11, v41, (struct CMILMatrix *)v41);
  IsFacingUser = CMILMatrix::IsFacingUser((CMILMatrix *)v41);
  v14 = 0LL;
  v15 = *((_DWORD *)this + 26);
  if ( v15 )
    v14 = (_DWORD *)(*((_QWORD *)this + 12) + 4LL * (unsigned int)(v15 - 1));
  v16 = 1LL;
  if ( !IsFacingUser )
  {
    if ( *v14 == 1 && !a3 )
      return v6;
    if ( *v14 )
      LOBYTE(v16) = 0;
  }
  v17 = *((_DWORD *)this + 20);
  if ( v17 )
    v8 = (_DWORD *)(*((_QWORD *)this + 9) + 68LL * (unsigned int)(v17 - 1));
  v18 = v8[16];
  v19 = *((_OWORD *)v8 + 1);
  v20 = *((_DWORD *)this + 56);
  v43[0] = *(_OWORD *)v8;
  v21 = *((_OWORD *)v8 + 2);
  v44 = v18;
  v22 = 0LL;
  v43[1] = v19;
  v43[2] = v21;
  v45 = 0LL;
  v43[3] = *((_OWORD *)v8 + 3);
  if ( v20 )
    v22 = (char *)(*((_QWORD *)this + 27) + (unsigned int)(v20 - 1));
  v23 = *v22;
  v24 = 0LL;
  v25 = *((_DWORD *)this + 32);
  if ( v25 )
    v24 = (int *)(*((_QWORD *)this + 15) + 4LL * (unsigned int)(v25 - 1));
  v26 = *v24;
  v27 = *((_DWORD *)this + 62);
  v28 = 0LL;
  if ( v27 )
    v28 = *((_QWORD *)this + 30) + 4LL * (unsigned int)(v27 - 1);
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 192, v12, v16, v28);
  PolygonNoRef = CVisual::GetPolygonNoRef(a2, v43, v30, *v29, v31, v32, v26, (_BYTE)v30, v23, a3, &v45);
  v34 = v45;
  v6 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v40 = 444;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PolygonNoRef, v40, 0LL);
    goto LABEL_21;
  }
  v36 = *(struct CPolygon **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
  if ( !v36 )
  {
    v38 = *((_DWORD *)this + 2);
    if ( v38 )
      *((_DWORD *)this + 2) = v38 - 1;
    v39 = (CBspNode *)CBspNode::operator new(v35);
    if ( !v39 || (v45 = CBspNode::CBspNode(v39, IsFacingUser), (v36 = v45) == 0LL) )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1C7u, 0LL);
      goto LABEL_21;
    }
    PolygonNoRef = CWatermarkStack<CBspNode *,64,2,10>::Push((_DWORD)this);
    v6 = PolygonNoRef;
    if ( PolygonNoRef < 0 )
    {
      v40 = 457;
      goto LABEL_31;
    }
  }
  PolygonNoRef = CBspNode::PushPolygon(v36, v34, IsFacingUser);
  v6 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    v40 = 460;
    goto LABEL_31;
  }
LABEL_21:
  if ( v34 )
    (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v34 + 8LL))(v34);
  if ( (v6 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11Eu, 0LL);
  return v6;
}
