/*
 * XREFs of ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B6610 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800CA860 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA?AVDirtyFlags@@XZ @ 0x180016010 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA-AVDirtyFl.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA?AVDirtyFlags@@XZ @ 0x180016468 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@01$00@@YA-AVDirtyFla.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA?AVDirtyFlags@@XZ @ 0x18001647C (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@02$00@@YA-AVDirtyFla.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800458AC (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateAlpha@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18006B1BC (-UpdateAlpha@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800BF8D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Validate(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  int v4; // edx
  int updated; // eax
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  _DWORD *v10; // rax
  int v11; // edx
  __int64 i; // rsi
  int v13; // eax
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__01_00__YA_AVDirtyFlags__XZ(&v15);
  if ( (v4 & *v3) != 0 )
  {
    if ( *((_QWORD *)this + 6) )
    {
      updated = CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x27Eu, 0LL);
        return v2;
      }
    }
    *((_DWORD *)this + 6) &= ~*___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__01_00__YA_AVDirtyFlags__XZ(&v15);
  }
  v6 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v15);
  if ( (v7 & *v6) != 0 )
  {
    v8 = CSecondaryWindowRepresentation::UpdateAlpha(this);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x286u, 0LL);
      return v2;
    }
    *((_DWORD *)this + 6) &= ~*___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(&v15);
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
  *((_DWORD *)this + 6) &= ~*___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__02_00__YA_AVDirtyFlags__XZ(&v15);
  v10 = ___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v15);
  if ( (v11 & *v10) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
    {
      v13 = CSecondaryWindowRepresentation::Validate(*(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 16) + 8 * i));
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x29Bu, 0LL);
        return v2;
      }
    }
    *((_DWORD *)this + 6) &= ~*___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(&v15);
  }
  return v2;
}
