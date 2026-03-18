/*
 * XREFs of ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801CE990
 * Callers:
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801E0474 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?ResolveResource@?$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x1801CEA98 (-ResolveResource@-$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ?ReportInertiaStartHelper@@YAH_KIMMAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DMATRIX@@@Z @ 0x1801CEB1C (-ReportInertiaStartHelper@@YAH_KIMMAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStart(__int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  signed int LastError; // eax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 1736);
  v4 = 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 224LL))(v3, *((_QWORD *)g_pComposition + 110));
  v6 = *(_QWORD *)(a1 + 120);
  v7 = 0LL;
  v13 = 0LL;
  if ( v6 )
  {
    v8 = CWeakReference<CVisual>::ResolveResource(v6, &v13);
    v7 = v13;
    if ( v8 >= 0 && !(unsigned int)ReportInertiaStartHelper(*(_DWORD *)(a1 + 1720), a2, v9, v10, v13 + 172, a1 + 296) )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
