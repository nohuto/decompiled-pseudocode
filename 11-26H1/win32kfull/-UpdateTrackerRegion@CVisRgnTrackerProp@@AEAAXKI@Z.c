/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x14004DB50
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x14004DA94 (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140038F00 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14004DFF4 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     DwmAsyncUpdateVisRgn @ 0x1401D23C0 (DwmAsyncUpdateVisRgn.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1401DA998 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     DwmAsyncUpdateLargeVisRgn @ 0x140255E54 (DwmAsyncUpdateLargeVisRgn.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  unsigned int v5; // ebx
  HRGN v7; // rbp
  HRGN v8; // r14
  HRGN EmptyRgn; // rax
  __int64 v10; // rdx
  HRGN v11; // rsi
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  __int64 *v14; // rax
  struct tagWND *v15; // r15
  bool VisRgn; // r12
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  int WindowRgn; // eax
  const struct tagWND *TopLevelWindow; // rax
  unsigned int RegionData; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void *v28; // rax
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 ProcessWin32Process; // rax
  void *v32; // rax
  unsigned int v33; // [rsp+30h] [rbp-288h]
  HRGN v34; // [rsp+38h] [rbp-280h]
  __int64 v35; // [rsp+40h] [rbp-278h]
  char v36[8]; // [rsp+50h] [rbp-268h] BYREF
  int v37; // [rsp+58h] [rbp-260h]
  __int128 v38; // [rsp+70h] [rbp-248h]

  v3 = a3;
  v4 = 0LL;
  v33 = a3;
  v5 = a2;
  v35 = (unsigned int)a3;
  v7 = 0LL;
  v8 = (HRGN)*((_QWORD *)this + (unsigned int)a3 + 6);
  v34 = v8;
  EmptyRgn = (HRGN)CreateEmptyRgn(this, a2, a3);
  v11 = EmptyRgn;
  if ( !EmptyRgn )
  {
    v12 = v3;
    goto LABEL_3;
  }
  v15 = (struct tagWND *)*((_QWORD *)this + 2);
  if ( v3 != 2 )
  {
    VisRgn = GetVisRgn(v15, v5, EmptyRgn);
    goto LABEL_19;
  }
  VisRgn = 0;
  if ( (unsigned int)IsTopLevelWindow(v15, v10) )
  {
    WindowRgn = GetWindowRgn(v15, v11, 0x20u);
    if ( !WindowRgn )
    {
      VisRgn = 0;
      GreDeleteObject(v11);
      v11 = 0LL;
      goto LABEL_19;
    }
  }
  else
  {
    v18 = 2 * (*(_BYTE *)(*((_QWORD *)v15 + 5) + 31LL) & 4 | 1);
    if ( PtiCurrent(v17) )
    {
      if ( *((_QWORD *)PtiCurrent(v19) + 61) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v20) + 61) + 8LL) + 64LL) & 1) != 0 )
        {
          v21 = *(_DWORD *)(*((_QWORD *)v15 + 5) + 288LL);
          if ( (v21 & 0xF) == 0 && (v21 & 0x40000000) != 0 )
            v18 |= 0x20u;
        }
      }
    }
    WindowRgn = GetWindowRgn(v15, v11, v18);
  }
  if ( WindowRgn == 1 )
  {
    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)v15);
    if ( TopLevelWindow )
    {
      if ( _GhostWindowFromHungWindow(TopLevelWindow) )
        VisRgn = 1;
    }
  }
LABEL_19:
  if ( !VisRgn )
  {
    if ( v8 )
    {
      v7 = v8;
      GreSetRegionOwner(v8, 2147483650LL);
    }
    if ( v11 )
    {
      if ( v7 && (unsigned int)GreEqualRgn(v11, v7) )
        goto LABEL_36;
    }
    else if ( !v7 )
    {
      v3 = v33;
      v12 = v35;
      goto LABEL_3;
    }
    memset_0(v36, 0, 0x220uLL);
    if ( !v11 )
      goto LABEL_31;
    RegionData = GreGetRegionData(v11, 0LL, 0LL);
    if ( RegionData <= 0x220 )
    {
      if ( RegionData )
      {
        if ( (unsigned int)GreGetRegionData(v11, RegionData, v36) )
        {
          if ( !v37 )
          {
            v38 = 0LL;
            v37 = 1;
          }
          goto LABEL_31;
        }
        goto LABEL_36;
      }
LABEL_31:
      v28 = (void *)ReferenceDwmApiPort();
      v3 = v33;
      DwmAsyncUpdateVisRgn(v28, v37);
LABEL_32:
      if ( v7 )
        GreDeleteObject(v7);
      v12 = v3;
      v7 = v11;
      *((_QWORD *)this + v3 + 6) = v11;
      goto LABEL_38;
    }
    v29 = CreateEmptyRgn(v26, v25, v27);
    if ( (unsigned int)GreCombineRgn(v29, v11, 0LL, 5LL) )
    {
      v30 = ReferenceDwmProcess();
      ProcessWin32Process = PsGetProcessWin32Process(v30);
      if ( ProcessWin32Process )
        ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      if ( (unsigned int)GreSetRegionOwner(v29, *(unsigned int *)(ProcessWin32Process + 56)) )
      {
        v32 = (void *)ReferenceDwmApiPort();
        v3 = v33;
        DwmAsyncUpdateLargeVisRgn(v32);
      }
      else
      {
        GreDeleteObject(v29);
        v3 = v33;
      }
      DereferenceDwmProcess(v30);
      goto LABEL_32;
    }
LABEL_36:
    GreDeleteObject(v11);
    goto LABEL_37;
  }
  if ( v11 )
    goto LABEL_36;
LABEL_37:
  v12 = v35;
  v3 = v33;
LABEL_38:
  if ( v7 )
    GreSetRegionOwner(v7, 2147483666LL);
  v8 = v34;
LABEL_3:
  v13 = (_QWORD *)*((_QWORD *)this + 2);
  v14 = (__int64 *)v13[13];
  if ( v14 )
    v4 = *v14;
  EtwTraceDwmVisRgnUpdate(*v13, v4, v3, v8 != *((HRGN *)this + v12 + 6));
}
