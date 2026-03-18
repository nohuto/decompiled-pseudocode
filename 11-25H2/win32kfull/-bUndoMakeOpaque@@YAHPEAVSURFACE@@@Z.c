/*
 * XREFs of ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FFD20
 * Callers:
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14026D434 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FDDC0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140326F1C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bUndoMakeOpaque(struct SURFACE *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SessionState; // rax
  Gre::Base *v5; // rcx
  int v6; // ecx
  __int64 v7; // rax

  v3 = 0;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  if ( *((_WORD *)a1 + 50) == 3 && *((_QWORD *)a1 + 6) == *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 4728LL) )
  {
    Gre::Base::Globals(v5);
    v6 = *((_DWORD *)a1 + 139);
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 276);
    *((_DWORD *)a1 + 138) = -1;
    *((_DWORD *)a1 + 139) = -1;
    v7 = *((_QWORD *)a1 + 68);
    *((_QWORD *)a1 + 68) = 0LL;
    v3 = 1;
    *((_QWORD *)a1 + 6) = v7;
    *((_DWORD *)a1 + 28) = v6 & 0xFFDFFFFF;
  }
  return v3;
}
