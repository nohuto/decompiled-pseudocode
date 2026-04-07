/*
 * XREFs of ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800739C4
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA?AVDirtyFlags@@XZ @ 0x18000A164 (--$ConvertDirtyEnumToFlag@$MW4DTCVIDirtyFlags@CDesktopThumbnailCVIVisual@@09$00@@YA-AVDirtyFlags.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??0CThumbnailTransition@@QEAA@XZ @ 0x1800C8FFC (--0CThumbnailTransition@@QEAA@XZ.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800C92B8 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800C93DC (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 *     ??2CThumbnailTransition@@SAPEAX_K@Z @ 0x1800C9500 (--2CThumbnailTransition@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CThumbnailVisual::_UpdateAnimatedProperties(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  int v3; // esi
  unsigned int started; // edi
  CThumbnailTransition *v6; // rcx
  int v7; // ebp
  int v8; // r14d
  CThumbnailTransition *v9; // rax
  CThumbnailTransition *v10; // rax
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r10d
  int v14; // r9d
  int v15; // eax
  float v16; // xmm0_4
  CThumbnailTransition *v17; // rcx
  CBaseObject *v18; // rcx
  CThumbnailTransition *v19; // rcx
  int *v20; // rax
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 44);
  v3 = a2 & 0x30000;
  started = -2147467259;
  if ( !v2 || !v3 )
  {
    v19 = (CThumbnailTransition *)*((_QWORD *)this + 51);
    if ( !v19 )
      return started;
    CThumbnailTransition::StopAnimation(v19);
    started = 0;
    goto LABEL_25;
  }
  v6 = (CThumbnailTransition *)*((_QWORD *)this + 51);
  v7 = *(_DWORD *)(v2 + 40);
  v8 = *(_DWORD *)(v2 + 44);
  if ( v6 )
  {
    *((_BYTE *)this + 417) = 1;
    CThumbnailTransition::StopAnimation(v6);
  }
  started = -2147024882;
  v9 = (CThumbnailTransition *)CThumbnailTransition::operator new((unsigned __int64)v6);
  if ( !v9 )
  {
    *((_QWORD *)this + 51) = 0LL;
    return started;
  }
  v10 = CThumbnailTransition::CThumbnailTransition(v9);
  *((_QWORD *)this + 51) = v10;
  if ( v10 )
  {
    SetRect(
      (LPRECT)this + 17,
      *((_DWORD *)this + 14),
      *((_DWORD *)this + 15),
      *((_DWORD *)this + 14) + *((_DWORD *)this + 16),
      *((_DWORD *)this + 15) + *((_DWORD *)this + 17));
    v12 = *((_QWORD *)this + 44);
    if ( (*(_BYTE *)(v12 + 36) & 1) != 0 )
    {
      v13 = 0;
      if ( *(_DWORD *)(v12 + 52) - *(_DWORD *)(v12 + 44) >= 0 )
        v13 = *(_DWORD *)(v12 + 52) - *(_DWORD *)(v12 + 44);
      v14 = 0;
      if ( *(_DWORD *)(v12 + 48) - *(_DWORD *)(v12 + 40) >= 0 )
        v14 = *(_DWORD *)(v12 + 48) - *(_DWORD *)(v12 + 40);
      SetRect((LPRECT)this + 18, v7, v8, v7 + v14, v8 + v13);
      v12 = *((_QWORD *)this + 44);
    }
    else
    {
      *((_OWORD *)this + 18) = *((_OWORD *)this + 17);
    }
    v15 = 4;
    if ( v3 != 0x20000 )
      v15 = 1;
    *((_DWORD *)this + 76) = v15;
    v16 = *((double *)this + 14);
    *((float *)this + 77) = v16;
    if ( (*(_BYTE *)(v12 + 36) & 4) != 0 )
      v16 = (double)*(unsigned __int8 *)(v12 + 72) / 255.0;
    *((float *)this + 78) = v16;
    v17 = (CThumbnailTransition *)*((_QWORD *)this + 51);
    *((_BYTE *)this + 418) = 0;
    started = CThumbnailTransition::StartAnimation(v17, this, v11);
    if ( (started & 0x80000000) != 0 )
    {
      v18 = (CBaseObject *)*((_QWORD *)this + 51);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *((_QWORD *)this + 51) = 0LL;
      }
      *((_BYTE *)this + 417) = 0;
      return started;
    }
LABEL_25:
    v20 = ___ConvertDirtyEnumToFlag__MW4DTCVIDirtyFlags_CDesktopThumbnailCVIVisual__09_00__YA_AVDirtyFlags__XZ(&v22);
    CThumbnailVisual::SetDirtyFlags(this, *v20);
  }
  return started;
}
