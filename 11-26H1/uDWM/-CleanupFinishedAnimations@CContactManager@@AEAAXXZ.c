/*
 * XREFs of ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18005FED4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800130EC (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x18003D848 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ @ 0x1800600C0 (-IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800600F0 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180060188 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?IsOKToCleanup@CFlickVisual@@UEAA_NXZ @ 0x1800A8CF0 (-IsOKToCleanup@CFlickVisual@@UEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800CD330 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CContactManager::CleanupFinishedAnimations(CContactManager *this)
{
  int v2; // edi
  _QWORD *v3; // r14
  __int64 v4; // rsi
  unsigned __int64 *v5; // rbp
  CContactManager *v6; // rcx
  CBaseObject *v7; // rcx
  signed int v8; // edi
  int v9; // edi
  unsigned __int64 *v10; // rdi
  _QWORD *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rcx
  CContactManager *v14; // rcx
  CBaseObject *v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rsi
  unsigned __int64 *v18; // rbp
  CContactManager *v19; // rcx
  CBaseObject *v20; // rcx
  CContactManager *v21; // rcx
  CBaseObject *v22; // rcx

  v2 = *((_DWORD *)this + 36) - 1;
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)((char *)this + 120);
    v4 = 24LL * v2;
    while ( 1 )
    {
      v5 = *(unsigned __int64 **)(v4 + *v3 + 16);
      if ( !v5 )
        goto LABEL_7;
      if ( CContactStationaryVisual::IsOKToCleanup(*(CContactStationaryVisual **)(v4 + *v3 + 16)) )
        break;
LABEL_8:
      v4 -= 24LL;
      if ( --v2 < 0 )
        goto LABEL_9;
    }
    CContactManager::RemoveFromTouchNode(v6, v5[27], (struct CVisual *)v5);
    v7 = *(CBaseObject **)(v4 + *v3 + 16);
    if ( v7 )
      CBaseObject::Release(v7);
LABEL_7:
    DynArray<CStationaryAnimation,0>::RemoveAt(v3, (unsigned int)v2);
    goto LABEL_8;
  }
LABEL_9:
  v8 = *((_DWORD *)this + 44) - 1;
  if ( v8 >= 0 )
  {
    v11 = (_QWORD *)((char *)this + 152);
    v12 = 8LL * v8;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + *v11);
      if ( !v13 )
        goto LABEL_18;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 192LL))(v13) )
        break;
LABEL_19:
      v12 -= 8LL;
      if ( --v8 < 0 )
        goto LABEL_10;
    }
    CContactManager::RemoveFromTouchNode(
      v14,
      *(_QWORD *)(*(_QWORD *)(v12 + *v11) + 216LL),
      *(struct CVisual **)(v12 + *v11));
    v15 = *(CBaseObject **)(v12 + *v11);
    if ( v15 )
      CBaseObject::Release(v15);
LABEL_18:
    DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)this + 19, v8);
    goto LABEL_19;
  }
LABEL_10:
  v9 = *((_DWORD *)this + 76) - 1;
  if ( v9 >= 0 )
  {
    v16 = (_QWORD *)((char *)this + 280);
    v17 = 16LL * v9;
    while ( 1 )
    {
      v18 = *(unsigned __int64 **)(*v16 + v17 + 8);
      if ( !v18 )
        goto LABEL_26;
      if ( CTouchPressHoldVisual::IsOKToCleanup(*(CTouchPressHoldVisual **)(*v16 + v17 + 8)) )
        break;
LABEL_27:
      v17 -= 16LL;
      if ( --v9 < 0 )
        goto LABEL_11;
    }
    CContactManager::RemoveFromTouchNode(v19, v18[27], (struct CVisual *)v18);
    v20 = *(CBaseObject **)(*v16 + v17 + 8);
    if ( v20 )
      CBaseObject::Release(v20);
LABEL_26:
    DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v9);
    goto LABEL_27;
  }
LABEL_11:
  v10 = (unsigned __int64 *)*((_QWORD *)this + 39);
  if ( v10 && CFlickVisual::IsOKToCleanup(*((CFlickVisual **)this + 39)) )
  {
    CContactManager::RemoveFromTouchNode(v21, v10[27], (struct CVisual *)v10);
    v22 = (CBaseObject *)*((_QWORD *)this + 39);
    if ( v22 )
    {
      CBaseObject::Release(v22);
      *((_QWORD *)this + 39) = 0LL;
    }
  }
}
