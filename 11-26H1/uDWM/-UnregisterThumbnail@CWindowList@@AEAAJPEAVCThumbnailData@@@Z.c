/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180025680
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x180026B48 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z @ 0x180025A40 (-SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z.c)
 *     ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008B81C (-OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::UnregisterThumbnail(CWindowList *this, struct CThumbnailData *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  CContainerVisual *v6; // rcx
  struct CVisual *v7; // rdx
  struct CVisual *v8; // rdx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // r10
  __int64 i; // rcx
  CThumbnailVisual *v20; // rcx
  CBaseObject *v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  char *v28; // rsi
  struct CVisual *v29; // rdx
  int v30; // eax
  CBaseObject *v31; // rcx

  v2 = 0;
  v5 = 0;
  if ( *((_BYTE *)a2 + 34) )
  {
    v6 = (CContainerVisual *)*((_QWORD *)a2 + 13);
    if ( v6 )
    {
      v7 = (struct CVisual *)*((_QWORD *)a2 + 14);
      if ( v7 )
      {
        CContainerVisual::RemoveChild(v6, v7);
        v31 = (CBaseObject *)*((_QWORD *)a2 + 14);
        if ( v31 )
        {
          CBaseObject::Release(v31);
          *((_QWORD *)a2 + 14) = 0LL;
        }
      }
      v8 = (struct CVisual *)*((_QWORD *)a2 + 11);
      if ( v8 )
        CContainerVisual::RemoveChild(*((CContainerVisual **)a2 + 13), v8);
      v9 = (CBaseObject *)*((_QWORD *)a2 + 12);
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *((_QWORD *)a2 + 12) = 0LL;
      }
      v10 = (CBaseObject *)*((_QWORD *)a2 + 13);
      if ( v10 )
      {
        CBaseObject::Release(v10);
        *((_QWORD *)a2 + 13) = 0LL;
      }
    }
    v11 = (__int64 *)((char *)a2 + 16);
  }
  else
  {
    v11 = (__int64 *)((char *)a2 + 16);
    v27 = *((_QWORD *)a2 + 2);
    v28 = (char *)a2 + 16;
    if ( *(_QWORD *)(v27 + 440) )
    {
      v29 = (struct CVisual *)*((_QWORD *)a2 + 11);
      if ( v29 )
      {
        v30 = CTopLevelWindow::OnThumbnailRemoved(*(CTopLevelWindow **)(v27 + 440), v29);
        v5 = v30;
        v11 = (__int64 *)v28;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x1A86u, 0LL);
          return v5;
        }
      }
    }
  }
  v12 = *v11;
  v13 = 0LL;
  v14 = *(_DWORD *)(v12 + 560);
  v15 = *(_QWORD *)(v12 + 536);
  if ( v14 )
  {
    do
    {
      if ( a2 == *(struct CThumbnailData **)(v15 + 8 * v13) )
        break;
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < v14 );
  }
  if ( (unsigned int)v13 < v14 )
  {
    if ( (unsigned int)v13 < v14 - 1 )
    {
      do
      {
        v26 = (unsigned int)(v13 + 1);
        *(_QWORD *)(v15 + 8 * v13) = *(_QWORD *)(v15 + 8 * v26);
        v13 = v26;
      }
      while ( (unsigned int)v26 < *(_DWORD *)(v12 + 560) - 1 );
    }
    --*(_DWORD *)(v12 + 560);
  }
  v16 = *((_QWORD *)a2 + 3);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 592);
    v18 = *(_QWORD *)(v16 + 568);
    for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
    {
      if ( a2 == *(struct CThumbnailData **)(v18 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < v17 )
    {
      while ( (unsigned int)i < v17 - 1 )
      {
        *(_QWORD *)(v18 + 8 * i) = *(_QWORD *)(v18 + 8LL * (unsigned int)(i + 1));
        i = (unsigned int)(i + 1);
        v17 = *(_DWORD *)(v16 + 592);
      }
      *(_DWORD *)(v16 + 592) = v17 - 1;
    }
  }
  v20 = (CThumbnailVisual *)*((_QWORD *)a2 + 11);
  if ( v20 )
    CThumbnailVisual::SetThumbnailData(v20, 0LL);
  v21 = (CBaseObject *)*((_QWORD *)a2 + 11);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)a2 + 11) = 0LL;
  }
  (**(void (__fastcall ***)(struct CThumbnailData *, __int64, __int64, __int64))a2)(a2, 1LL, v16, v15);
  v22 = *((_DWORD *)this + 102);
  v23 = *((_QWORD *)this + 48);
  if ( v22 )
  {
    do
    {
      if ( a2 == *(struct CThumbnailData **)(v23 + 8LL * v2) )
        break;
      ++v2;
    }
    while ( v2 < v22 );
  }
  if ( v2 < v22 )
  {
    for ( ; v2 < v22 - 1; v22 = *((_DWORD *)this + 102) )
    {
      v24 = v2++;
      *(_QWORD *)(v23 + 8 * v24) = *(_QWORD *)(v23 + 8LL * v2);
    }
    *((_DWORD *)this + 102) = v22 - 1;
  }
  return v5;
}
