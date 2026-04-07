/*
 * XREFs of ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x1800162D0
 * Callers:
 *     ?UpdateLayout@CBorderSprite@@UEAAJ_N@Z @ 0x18000BBB0 (-UpdateLayout@CBorderSprite@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180016040 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18006A610 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CImage@@UEAAJ_N@Z @ 0x18006A910 (-UpdateLayout@CImage@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CButtonGlyph@@UEAAJ_N@Z @ 0x18006ECD0 (-UpdateLayout@CButtonGlyph@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800163C0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180016430 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA?AVDirtyFlags@@XZ @ 0x180016454 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@00$00@@YA-AVDirtyFla.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVisual::UpdateLayout(CContainerVisual *this, bool a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbp
  char v10; // r14
  char v11; // si
  unsigned int v12; // edi
  unsigned int *v13; // rax
  __int64 v14; // r9
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-2Ch]
  char v17; // [rsp+40h] [rbp-28h]
  char v18; // [rsp+41h] [rbp-27h]
  char v19; // [rsp+80h] [rbp+18h] BYREF

  result = CVisual::UpdateLayout(this, a2);
  v6 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x26u, 0LL);
    return v6;
  }
  else if ( a2 )
  {
    VisualCollection::GetIterator((char *)this + 136, &v15, v5);
    v9 = v15;
    v10 = v18;
    v11 = v17;
    v12 = v16;
    while ( 1 )
    {
      if ( v11 )
      {
        if ( !v10 )
          ++v12;
      }
      else
      {
        v11 = 1;
        v12 = 0;
      }
      if ( v12 >= *(_DWORD *)(v9 + 32) || v10 )
        break;
      v13 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__00_00__YA_AVDirtyFlags__XZ(
                              &v19,
                              v7,
                              v8,
                              *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL * v12));
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, *v13);
    }
    return v6;
  }
  return result;
}
