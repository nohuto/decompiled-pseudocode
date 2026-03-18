/*
 * XREFs of ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x1801CC5A0
 * Callers:
 *     ?Freeze@CVisualSurface@@AEAAJ_N@Z @ 0x180263440 (-Freeze@CVisualSurface@@AEAAJ_N@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180286BC8 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::RegisterRenderSnapshotToPerform(CComposition *this, struct CCachedVisualImage *a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // edi
  struct CCachedVisualImage *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 5904;
  v3 = 0;
  v4 = *((_QWORD *)this + 738);
  v5 = 0LL;
  v6 = *((unsigned int *)this + 1482);
  while ( (unsigned int)v5 < (unsigned int)v6 )
  {
    if ( a2 == *(struct CCachedVisualImage **)(v4 + 8 * v5) )
      return v3;
    v5 = (unsigned int)(v5 + 1);
  }
  v8 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
  {
    v10 = 0;
    if ( v8 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
      {
        v9 = 194;
        goto LABEL_5;
      }
    }
    else
    {
      *(_QWORD *)(v4 + 8 * v6) = a2;
      *((_DWORD *)v2 + 6) = v8;
    }
    return (unsigned int)v10;
  }
  v3 = -2147024362;
  v9 = 183;
  v10 = -2147024362;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v9, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x78Au, 0LL);
  return v3;
}
