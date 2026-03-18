/*
 * XREFs of ?Update@CCachedTexture@@IEAAJXZ @ 0x1802B1FF4
 * Callers:
 *     ?GetUpdatedDeviceTexture@CCachedTexture@@IEAAJPEAPEAVIDeviceTexture@@@Z @ 0x1802B1B70 (-GetUpdatedDeviceTexture@CCachedTexture@@IEAAJPEAPEAVIDeviceTexture@@@Z.c)
 *     ?UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ @ 0x1802B21B0 (-UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x180105534 (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?IncrementAndSignalCrossAdapterFence@CD3DDevice@@QEAAJXZ @ 0x1802995AC (-IncrementAndSignalCrossAdapterFence@CD3DDevice@@QEAAJXZ.c)
 *     ?WaitForCrossAdapterFence@CD3DDevice@@QEAAJXZ @ 0x1802997A0 (-WaitForCrossAdapterFence@CD3DDevice@@QEAAJXZ.c)
 *     ?TrackInvalidRegions@CCachedTexture@@IEBA_NXZ @ 0x1802B1FC4 (-TrackInvalidRegions@CCachedTexture@@IEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedTexture::Update(CCachedTexture *this)
{
  __int64 v2; // rcx
  int **v3; // rsi
  CD3DDevice *v4; // rax
  CD3DDevice *v5; // r14
  int v6; // eax
  unsigned int v7; // edi
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // edx
  FastRegion::Internal::CRgnData *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // [rsp+50h] [rbp-9h] BYREF
  int v21; // [rsp+54h] [rbp-5h]
  int v22; // [rsp+58h] [rbp-1h]
  int v23; // [rsp+5Ch] [rbp+3h]
  _BYTE v24[8]; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp+Fh]
  int *v26; // [rsp+70h] [rbp+17h]
  __int64 v27; // [rsp+78h] [rbp+1Fh]
  int v28; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v30; // [rsp+C8h] [rbp+6Fh] BYREF
  int v31; // [rsp+D0h] [rbp+77h] BYREF

  if ( !CCachedTexture::TrackInvalidRegions(this) )
    return 0LL;
  v3 = (int **)(v2 + 40);
  if ( !**(_DWORD **)(v2 + 40) )
    return 0LL;
  v4 = (CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 128) + 40LL))(*(_QWORD *)(v2 + 128));
  v5 = v4;
  if ( *((_QWORD *)this + 15) )
  {
    v6 = CD3DDevice::WaitForCrossAdapterFence(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  v9 = *((_BYTE *)this + 160) == 0;
  v31 = 0;
  v10 = v9 ? *((_QWORD *)this + 16) : *((_QWORD *)this + 17);
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 120LL))(v10, &v31);
  v9 = *((_BYTE *)this + 160) == 0;
  v12 = v11;
  v30 = 0;
  v13 = v9 ? *((_QWORD *)this + 17) : *((_QWORD *)this + 16);
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 120LL))(v13, &v30);
  FastRegion::CRegion::BeginIterator(v3, (__int64)v24);
  while ( (unsigned __int64)v26 < v25 )
  {
    v15 = 2 * v28;
    v21 = *v26;
    v16 = *(_DWORD *)(v27 + 4 * v15);
    v22 = *(_DWORD *)(v27 + 4 * v15 + 4);
    v23 = v26[2];
    v20 = v16;
    CD3DDevice::CopySubresourceRegion((__int64)v5, v12, v31, (int *)&v20, v14, v30, v16, v21, 0);
    FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v24);
  }
  **v3 = 0;
  if ( *((_QWORD *)this + 15) )
    return 0LL;
  v18 = CD3DDevice::IncrementAndSignalCrossAdapterFence(v5);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
