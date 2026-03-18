/*
 * XREFs of ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FD860
 * Callers:
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1402FBC68 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1402FD954 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bBmpMakeOpaque(struct SURFACE *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)a1 + 50) )
  {
    *((_DWORD *)a1 + 138) = 0;
    *((_DWORD *)a1 + 139) = *((_DWORD *)a1 + 28);
    *((_QWORD *)a1 + 68) = *((_QWORD *)a1 + 6);
    *((_WORD *)a1 + 50) = 3;
    *((_QWORD *)a1 + 6) = *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 8LL);
    *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 28) & 0xFFFC5A10 | 0x385EF;
    return 1LL;
  }
  return result;
}
