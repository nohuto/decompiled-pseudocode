/*
 * XREFs of ??$FindProperty@UPresentationSurfaceInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentationSurfaceInfo@@@Z @ 0x1400A4A28
 * Callers:
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400451FC (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<PresentationSurfaceInfo>(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ebx
  unsigned int i; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 12);
  *a2 = 0LL;
  for ( i = 0; i < v4; ++i )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 32LL * i;
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_d7734341_8032_4610_bc01_e5ef3d219339.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_d7734341_8032_4610_bc01_e5ef3d219339.Data4;
    if ( !v9 && *(_DWORD *)(v8 + v7 + 16) == 16 )
    {
      *a2 = v2;
      return;
    }
    v2 += *(unsigned int *)(v8 + v7 + 16);
  }
}
