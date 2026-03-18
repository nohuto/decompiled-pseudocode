/*
 * XREFs of ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800262E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020674 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x180026858 (-clear_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@det.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessRemoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_REMOVECHILD *a3)
{
  unsigned int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // ebx
  unsigned __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  int *v15; // rsi
  unsigned __int64 v16; // r14
  __int64 **i; // rbx
  CVisual *v18; // rcx
  CVisual **v19; // rax

  v3 = *((_DWORD *)a3 + 2);
  if ( v3
    && v3 < *((_DWORD *)a2 + 7)
    && (v5 = *((_DWORD *)a2 + 6) * v3, v6 = *((_QWORD *)a2 + 5), v7 = (unsigned int)v5, *(_DWORD *)(v5 + v6))
    && (v14 = *(_QWORD *)(v5 + v6 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, 156LL)
    && (v15 = *(int **)(v7 + v6 + 8)) != 0LL )
  {
    v16 = detail::pointer_buffer_impl<CVisual *,0>::last((__int64 *)this + 10);
    for ( i = (__int64 **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 10);
          i != (__int64 **)v16 && *i != (__int64 *)v15;
          ++i )
    {
      ;
    }
    if ( i != (__int64 **)detail::pointer_buffer_impl<CVisual *,0>::last((__int64 *)this + 10) )
    {
      v10 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 10);
      detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::clear_region(
        (char *)this + 80,
        (__int64)((__int64)i - v10) >> 3,
        1LL);
      detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 10);
      if ( (*((_BYTE *)v15 + 102) & 0x20) != 0 )
      {
        CVisual::DirtyForInvisibleChild(this, (struct CVisual *)v15);
        v11 = v15[64] + 1;
        if ( *((char *)v15 + 102) >= 0 )
          v11 = v15[64];
        v12 = v15[65] + 1;
        if ( (*((_BYTE *)v15 + 103) & 2) == 0 )
          v12 = v15[65];
        if ( v11 || v12 )
        {
          v18 = this;
          do
          {
            *((_DWORD *)this + 64) -= v11;
            *((_DWORD *)this + 65) -= v12;
            if ( (*((_BYTE *)this + 102) & 0x20) == 0 )
              break;
            this = (CVisual *)*((_QWORD *)this + 11);
            if ( v18 )
            {
              v19 = (CVisual **)*((_QWORD *)v18 + 11);
              v18 = (CVisual *)v19;
              if ( v19 )
                v18 = v19[11];
            }
          }
          while ( this != v18 );
        }
      }
      v13 = *(_QWORD *)v15;
      *((_QWORD *)v15 + 11) = 0LL;
      (*(void (__fastcall **)(int *))(v13 + 16))(v15);
    }
    return 0;
  }
  else
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xB27u, 0LL);
  }
  return v8;
}
