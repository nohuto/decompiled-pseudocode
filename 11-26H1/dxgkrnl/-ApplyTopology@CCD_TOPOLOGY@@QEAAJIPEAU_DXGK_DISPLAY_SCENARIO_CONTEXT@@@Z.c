/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140365C4C
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401C2094 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkApplyPathsModality @ 0x140409D80 (DxgkApplyPathsModality.c)
 * Callees:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140268B94 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1402690D4 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140317748 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(
        CCD_TOPOLOGY *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int active; // ebx
  bool v7; // di
  unsigned __int16 v9; // cx
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rax
  __int16 v13; // cx
  __int64 v14; // r8
  __int16 v15; // ax
  unsigned int i; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int8 v19[16]; // [rsp+28h] [rbp-49h] BYREF
  int v20; // [rsp+38h] [rbp-39h] BYREF
  __int128 v21; // [rsp+40h] [rbp-31h]
  __int64 v22; // [rsp+50h] [rbp-21h]
  __int16 v23; // [rsp+58h] [rbp-19h]
  __int128 v24; // [rsp+60h] [rbp-11h]
  __int64 v25; // [rsp+70h] [rbp-1h]
  __int64 v26; // [rsp+78h] [rbp+7h]
  char v27; // [rsp+80h] [rbp+Fh]
  int v28; // [rsp+84h] [rbp+13h]
  int v29; // [rsp+88h] [rbp+17h]
  __int64 v30; // [rsp+8Ch] [rbp+1Bh]
  __int64 v31; // [rsp+98h] [rbp+27h]
  bool v32; // [rsp+F0h] [rbp+7Fh] BYREF

  active = DxgkAcquireSessionModeChangeLock(1);
  v7 = active >= 0;
  v32 = active >= 0;
  if ( active < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2818;
LABEL_5:
    if ( v7 )
      DxgkReleaseSessionModeChangeLock();
    return (unsigned int)active;
  }
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v23 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 1;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v31 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v20, 8LL);
  if ( (*((_DWORD *)this + 21) & 1) != 0 )
    goto LABEL_3;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)&v20, 1);
  if ( active < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2838;
    goto LABEL_4;
  }
  if ( active == 255 )
  {
LABEL_3:
    active = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
LABEL_4:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v20);
    goto LABEL_5;
  }
  if ( v26 )
    v9 = *(_WORD *)(v26 + 20);
  else
    v9 = 0;
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
    v11 = *(_WORD *)(v10 + 20);
  else
    v11 = 0;
  if ( v9 <= v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2863;
  }
  active = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)&v20, a2, a3);
  if ( active >= 0 )
  {
    v19[0] = 0;
    CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)&v20, v19);
    if ( !v19[0] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2880;
    }
    v12 = *((_QWORD *)this + 8);
    if ( v12 )
      v13 = *(_WORD *)(v12 + 20);
    else
      v13 = 0;
    v14 = v26;
    if ( v26 )
      v15 = *(_WORD *)(v26 + 20);
    else
      v15 = 0;
    if ( v13 != v15 )
    {
      WdLogSingleEntry0(1LL);
      v14 = v26;
      WdLogGlobalForLineNumber = 2881;
    }
    for ( i = 0;
          i < *(_DWORD *)(v14 + 40);
          *(_DWORD *)(v18 + *(_QWORD *)(v14 + 48) + 80) &= ~*(_DWORD *)(340 * v17 + *(_QWORD *)(v14 + 48) + 232) )
    {
      v17 = i++;
      v18 = 340 * v17;
      *(_DWORD *)(v18 + *(_QWORD *)(v14 + 48) + 84) &= ~*(_DWORD *)(340 * v17 + *(_QWORD *)(v14 + 48) + 232);
    }
    active = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)&v20);
    if ( active < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2902;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2868;
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v20);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v32);
  return (unsigned int)active;
}
