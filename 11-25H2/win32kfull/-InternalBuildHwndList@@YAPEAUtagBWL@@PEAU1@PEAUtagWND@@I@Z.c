/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140036370
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1400356D0 (xxxInternalDoSyncPaint.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140035D3C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140036370 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140036370 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, char a3)
{
  struct tagWND *v4; // rbx
  struct tagBWL *v5; // rdi
  int v6; // r14d
  __int64 v7; // rbp
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // edx
  struct tagWND *v14; // rdx
  __int64 v15; // rdx

  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return a1;
  v6 = a3 & 0x10;
  do
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( !v6 || (v13 = *(_DWORD *)(*((_QWORD *)v4 + 5) + 236LL), (unsigned int)(v13 - 1) <= 1) || v13 == 16 )
    {
      if ( (a3 & 0x20) == 0
        || (v15 = *((_QWORD *)v4 + 5), (*(_BYTE *)(v15 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v15 + 20) & 0x40) != 0
        || !ShellWindowManagement::WindowSubjectToBehavior((__int64)v4, 0x20u, 0, 1) )
      {
        if ( !v7 || v7 == *((_QWORD *)v4 + 2) )
        {
          **((_QWORD **)v5 + 1) = *(_QWORD *)v4;
          v9 = *((_QWORD *)v5 + 1) + 8LL;
          *((_QWORD *)v5 + 1) = v9;
          if ( v9 == *((_QWORD *)v5 + 2) )
          {
            v10 = v9 - (_QWORD)v5;
            v11 = UserReAllocPool(v5, (unsigned int)v10 + 8LL, (unsigned int)v10 + 72LL, 1819767637LL);
            if ( !v11 )
              return v5;
            v12 = v11 + v10;
            v5 = (struct tagBWL *)v11;
            *(_QWORD *)(v11 + 8) = v12;
            *(_QWORD *)(v11 + 16) = v12 + 64;
          }
        }
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v14 = (struct tagWND *)*((_QWORD *)v4 + 14);
      if ( v14 )
      {
        v5 = InternalBuildHwndList(v5, v14, 3u);
        if ( *((_QWORD *)v5 + 1) >= *((_QWORD *)v5 + 2) )
          break;
      }
    }
    if ( (a3 & 2) == 0 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  while ( v4 );
  return v5;
}
