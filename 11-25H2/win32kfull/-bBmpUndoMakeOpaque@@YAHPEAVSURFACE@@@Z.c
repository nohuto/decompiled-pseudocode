/*
 * XREFs of ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FD8CC
 * Callers:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14026D2C4 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FBC20 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140326F1C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bBmpUndoMakeOpaque(struct SURFACE *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SessionState; // rax
  unsigned int v5; // eax
  __int64 v6; // rax

  v3 = 0;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  if ( *((_WORD *)a1 + 50) == 3 && *((_QWORD *)a1 + 6) == *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 8LL) )
  {
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 276);
    v5 = *((_DWORD *)a1 + 28) & 0xFFFC7A10;
    *((_DWORD *)a1 + 138) = -1;
    *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 139) | v5;
    v6 = *((_QWORD *)a1 + 68);
    *((_QWORD *)a1 + 68) = 0LL;
    v3 = 1;
    *((_QWORD *)a1 + 6) = v6;
    *((_DWORD *)a1 + 139) = -1;
  }
  return v3;
}
