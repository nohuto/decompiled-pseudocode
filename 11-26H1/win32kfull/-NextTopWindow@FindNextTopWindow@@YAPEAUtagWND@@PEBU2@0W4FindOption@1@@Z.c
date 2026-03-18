/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400483F8
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1401A365C (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1402D8748 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x140048624 (_anonymous_namespace_--NTW_GetNextTop.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     SkipWindowOnMonitor @ 0x1401A0B80 (SkipWindowOnMonitor.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x14021FE30 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x14023BDA4 (_anonymous_namespace_--GNT_NextTopScan.c)
 */

const struct tagWND *__fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  char v7; // si
  struct tagTHREADINFO *v8; // r13
  const struct tagWND *v9; // r14
  __int64 i; // rdi
  const struct tagWND *v11; // rbx
  const struct tagWND *v12; // rbp
  __int64 DesktopWindow; // rax
  __int64 v14; // rdx
  char *v15; // rdx
  const struct tagWND *v17; // rsi
  __int64 NextTop; // rax
  char v19[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+70h] [rbp+8h]
  __int64 TopScan; // [rsp+88h] [rbp+20h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
  v7 = 0;
  v21 = 0;
  v8 = PtiCurrent(v6);
  v9 = 0LL;
  TopScan = anonymous_namespace_::GNT_NextTopScan(v8, 0LL, 0LL);
  if ( a1 )
  {
    i = anonymous_namespace_::CheckTopLevelOnly(a1);
    v11 = (const struct tagWND *)i;
    if ( i )
    {
      a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
      goto LABEL_8;
    }
    if ( v19[0] )
      --*(_DWORD *)(v20 + 28);
    return 0LL;
  }
  for ( i = anonymous_namespace_::GNT_NextTopScan(v8, 0LL, 0LL); i; i = *(_QWORD *)(i + 112) )
  {
    if ( (*(_WORD *)(*(_QWORD *)(i + 40) + 42LL) & 0x2FFF) != 0x29D )
      break;
  }
  v11 = (const struct tagWND *)i;
  if ( !i )
  {
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
    return 0LL;
  }
  while ( 1 )
  {
    if ( v11 != (const struct tagWND *)a2 )
    {
      v15 = (char *)*((_QWORD *)v11 + 5);
      if ( (v15[31] & 0x18) == 0x10
        && ((unsigned __int8)~((unsigned __int8)v15[31] >> 5) & (unsigned __int8)~((unsigned __int8)v15[27] >> 3) & 1) != 0
        && ((a3 & 2) == 0 || v15[24] >= 0)
        && !IsWindowCloaked(v11)
        && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v11)) )
      {
        break;
      }
    }
LABEL_8:
    v12 = v11;
    if ( (a3 & 1) != 0 )
    {
      v17 = 0LL;
      do
      {
        NextTop = anonymous_namespace_::NTW_GetNextTop(v8, v17);
        if ( (const struct tagWND *)NextTop == v11 && v17 )
          break;
        v17 = (const struct tagWND *)NextTop;
      }
      while ( NextTop );
      v11 = v17;
      v7 = v21;
    }
    else
    {
      v11 = (const struct tagWND *)anonymous_namespace_::NTW_GetNextTop(v8, v11);
    }
    if ( v11 != (const struct tagWND *)i )
    {
      if ( v11 == (const struct tagWND *)TopScan )
      {
        if ( v7 )
          goto LABEL_23;
        v7 = 1;
        v21 = 1;
      }
      if ( v11 )
      {
        GetDesktopWindow(i);
        DesktopWindow = GetDesktopWindow(v11);
        if ( v14 == DesktopWindow && v12 != v11 )
          continue;
      }
    }
    goto LABEL_23;
  }
  v9 = v11;
LABEL_23:
  if ( v19[0] )
    --*(_DWORD *)(v20 + 28);
  return v9;
}
