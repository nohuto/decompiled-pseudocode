/*
 * XREFs of ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z @ 0x1801E3C80
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180151FC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18018BF10 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetSurfaces(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES *a3,
        _DWORD *a4)
{
  CResourceTable *v6; // r9
  unsigned int v8; // ebx
  __int64 i; // rsi
  struct CResource *ResourceWithoutType; // rcx
  int v11; // eax
  int v12; // ecx
  __int64 j; // rsi
  __int64 v14; // r15
  struct CResource *v15; // rax
  __int64 v16; // r8
  int v17; // r13d
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-58h]
  _DWORD v25[18]; // [rsp+30h] [rbp-48h] BYREF
  int v26; // [rsp+80h] [rbp+8h]
  int v28; // [rsp+90h] [rbp+18h]
  unsigned int v30; // [rsp+A0h] [rbp+28h]

  v6 = a2;
  if ( *((unsigned int *)a3 + 2) <= (unsigned __int64)((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 5) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, a4[6 * i + 1]);
      if ( a4[6 * i] >= *((_DWORD *)this + 34) )
        goto LABEL_15;
      if ( ResourceWithoutType )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
                ResourceWithoutType,
                31LL) )
          goto LABEL_15;
        v6 = a2;
      }
      v11 = a4[6 * i + 2];
      if ( v11 >= 0 )
      {
        v12 = a4[6 * i + 3];
        if ( v12 >= 0 && a4[6 * i + 4] >= v11 && a4[6 * i + 5] >= v12 )
          continue;
      }
LABEL_15:
      v24 = 219;
      goto LABEL_3;
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a3 + 2); v6 = a2 )
    {
      v14 = 0LL;
      v15 = CResourceTable::GetResourceWithoutType(v6, a4[6 * j + 1]);
      v17 = a4[2 * v16 + 2];
      v18 = (unsigned int)a4[2 * v16];
      v30 = a4[2 * v16 + 3];
      v25[1] = v30;
      v26 = a4[2 * v16 + 4];
      v25[2] = v26;
      v28 = a4[2 * v16 + 5];
      v25[3] = v28;
      v25[0] = v17;
      if ( v15 )
      {
        v19 = *((_QWORD *)this + 12);
        v20 = 32LL * (unsigned int)v18;
        v14 = (__int64)v15;
        if ( *(struct CResource **)(v20 + v19) != v15
          || !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                (unsigned int *)(v20 + v19 + 8),
                v25) )
        {
          *(_BYTE *)(v20 + v19 + 24) = 1;
          *((_BYTE *)this + 160) = 1;
        }
      }
      v21 = 32 * v18;
      wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(
        (__int64 *)(32 * v18 + *((_QWORD *)this + 12)),
        v14);
      v22 = *((_QWORD *)this + 12);
      j = (unsigned int)(j + 1);
      *(_DWORD *)(v21 + v22 + 8) = v17;
      *(_DWORD *)(v21 + v22 + 12) = v30;
      *(_DWORD *)(v21 + v22 + 16) = v26;
      *(_DWORD *)(v21 + v22 + 20) = v28;
    }
    return 0;
  }
  else
  {
    v24 = 191;
LABEL_3:
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v24, 0LL);
  }
  return v8;
}
