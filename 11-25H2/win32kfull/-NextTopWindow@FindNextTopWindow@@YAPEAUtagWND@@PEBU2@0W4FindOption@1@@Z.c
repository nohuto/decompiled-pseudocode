/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x140023AEC
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x140023EC0 (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1402BE6D8 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::NTW_GetPrevTop @ 0x140023CE4 (_anonymous_namespace_--NTW_GetPrevTop.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x140023D34 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SkipWindowOnMonitor @ 0x1401A7B50 (SkipWindowOnMonitor.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1402DCD6C (_anonymous_namespace_--GNT_NextTopScan.c)
 */

const struct tagWND *__fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  const struct tagWND *v6; // rbx
  char v7; // bp
  struct tagTHREADINFO *v8; // r15
  __int64 i; // rsi
  const struct tagWND *PrevTop; // rdi
  bool j; // zf
  __int64 DesktopWindow; // rax
  __int64 v13; // rdx
  char *v14; // rdx
  const struct tagWND *v15; // r14
  const struct tagWND *v16; // rbp
  const struct tagWND *v17; // rdx
  _BYTE v19[72]; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+70h] [rbp+8h]
  __int64 TopScan; // [rsp+88h] [rbp+20h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
  v6 = 0LL;
  v20 = 0;
  v7 = 0;
  v8 = PtiCurrent();
  TopScan = anonymous_namespace_::GNT_NextTopScan(v8, 0LL, 0LL);
  if ( a1 )
  {
    i = anonymous_namespace_::CheckTopLevelOnly(a1);
    PrevTop = (const struct tagWND *)i;
    if ( i )
    {
      a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
      goto LABEL_15;
    }
  }
  else
  {
    for ( i = anonymous_namespace_::GNT_NextTopScan(v8, 0LL, 0LL); i; i = *(_QWORD *)(i + 112) )
    {
      if ( (*(_WORD *)(*(_QWORD *)(i + 40) + 42LL) & 0x2FFF) != 0x29D )
        break;
    }
    PrevTop = (const struct tagWND *)i;
    for ( j = i == 0; !j; j = v15 == PrevTop )
    {
      if ( PrevTop != (const struct tagWND *)a2 )
      {
        v14 = (char *)*((_QWORD *)PrevTop + 5);
        if ( (v14[31] & 0x18) == 0x10
          && ((unsigned __int8)~((unsigned __int8)v14[31] >> 5) & (unsigned __int8)~((unsigned __int8)v14[27] >> 3) & 1) != 0
          && ((a3 & 2) == 0 || v14[24] >= 0)
          && !IsWindowCloaked(PrevTop)
          && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(PrevTop)) )
        {
          v6 = PrevTop;
          break;
        }
      }
LABEL_15:
      v15 = PrevTop;
      if ( (a3 & 1) != 0 )
      {
        PrevTop = (const struct tagWND *)anonymous_namespace_::NTW_GetPrevTop(v8, PrevTop);
      }
      else
      {
        v16 = PrevTop;
        v17 = 0LL;
        while ( 1 )
        {
          PrevTop = (const struct tagWND *)anonymous_namespace_::GNT_NextTopScan(v8, v17, v16);
          if ( PrevTop )
            break;
          v17 = v16;
          if ( !v16 )
          {
            PrevTop = (const struct tagWND *)anonymous_namespace_::GNT_NextTopScan(v8, 0LL, 0LL);
            break;
          }
          v16 = (const struct tagWND *)*((_QWORD *)v16 + 15);
        }
        v7 = v20;
      }
      if ( PrevTop == (const struct tagWND *)i )
        break;
      if ( PrevTop == (const struct tagWND *)TopScan )
      {
        if ( v7 )
          break;
        v7 = 1;
        v20 = 1;
      }
      if ( !PrevTop )
        break;
      GetDesktopWindow(i);
      DesktopWindow = GetDesktopWindow(PrevTop);
      if ( v13 != DesktopWindow )
        break;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
  return v6;
}
