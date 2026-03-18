/*
 * XREFs of ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FFCA8
 * Callers:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1401502F4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FDE08 (--1REDIROPEN@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMakeOpaque(struct SURFACE *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rax

  result = 0LL;
  if ( !*((_WORD *)a1 + 50) )
  {
    Gre::Base::Globals(a1);
    *((_DWORD *)a1 + 138) = *((unsigned __int16 *)a1 + 50);
    *((_DWORD *)a1 + 139) = *((_DWORD *)a1 + 28);
    *((_QWORD *)a1 + 68) = *((_QWORD *)a1 + 6);
    *((_WORD *)a1 + 50) = 3;
    v5 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3) + 96) + 4728LL);
    *((_DWORD *)a1 + 28) |= 0x23A5EFu;
    *((_QWORD *)a1 + 6) = v5;
    return 1LL;
  }
  return result;
}
