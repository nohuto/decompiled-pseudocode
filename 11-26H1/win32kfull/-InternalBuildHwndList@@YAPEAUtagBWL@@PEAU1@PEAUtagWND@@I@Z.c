/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270
 * Callers:
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     xxxInternalDoSyncPaint @ 0x14004FFD0 (xxxInternalDoSyncPaint.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140050A90 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x14001122C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140051270 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 */

struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, char a3)
{
  struct tagWND *v4; // rbx
  struct tagBWL *v5; // rsi
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // edx
  struct tagWND *v13; // rdx
  __int64 v14; // rdx

  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return a1;
  v6 = a3 & 0x10;
  do
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( !v6 || (v12 = *(_DWORD *)(*((_QWORD *)v4 + 5) + 236LL), v12 == 1) || v12 == 2 || v12 == 16 )
    {
      if ( (a3 & 0x20) == 0
        || (v14 = *((_QWORD *)v4 + 5), (*(_BYTE *)(v14 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v14 + 20) & 0x40) != 0
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
            v5 = (struct tagBWL *)v11;
            *(_QWORD *)(v11 + 8) = v10 + v11;
            *(_QWORD *)(v11 + 16) = v10 + v11 + 64;
          }
        }
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v13 = (struct tagWND *)*((_QWORD *)v4 + 14);
      if ( v13 )
      {
        v5 = InternalBuildHwndList(v5, v13, 3u);
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
