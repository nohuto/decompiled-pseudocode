/*
 * XREFs of ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18003750C
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180036F70 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800101D0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CLivePreview::_ClearAnimatedVisuals(CLivePreview *this)
{
  char *v1; // rbx
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rdi
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CTopLevelWindow *v7; // rcx

  v1 = (char *)this + 264;
  v2 = *((_DWORD *)this + 72) - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = 40LL * v2;
    do
    {
      v5 = *(CBaseObject **)(v4 + *(_QWORD *)v1 + 8);
      if ( v5 )
      {
        CBaseObject::Release(v5);
        *(_QWORD *)(v4 + *(_QWORD *)v1 + 8) = 0LL;
      }
      v6 = *(CBaseObject **)(v4 + *(_QWORD *)v1 + 16);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *(_QWORD *)(v4 + *(_QWORD *)v1 + 16) = 0LL;
      }
      v7 = *(CTopLevelWindow **)(*(_QWORD *)(v4 + *(_QWORD *)v1) + 440LL);
      if ( v7 )
        CTopLevelWindow::StopLivePreviewAnimation(v7);
      v4 -= 40LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v1, 0x28u);
}
