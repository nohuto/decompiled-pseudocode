/*
 * XREFs of ?bGrayRequestTheSame@@YAHAEAVXDCOBJ@@@Z @ 0x1400C3E0C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bGrayRequestTheSame(struct XDCOBJ *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  v3 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 1) == 0 && *(_DWORD *)(v3 + 32) != 1 )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 1760);
  if ( (*(_DWORD *)(v4 + 12) & 0x200004) == 0 )
    return 1LL;
  v5 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, v3, a3) + 96) + 20348LL);
  if ( (v6 & 2) != 0 )
  {
    v5 = 0x10000;
    if ( (v6 & 0x10) != 0 )
      v5 = 268500992;
  }
  v7 = *(_DWORD *)(v4 + 12);
  if ( (v7 & 4) == 0 )
    return ((v5 ^ v7) & 0x10000) == 0;
  return v5 == (v7 & 0x10010000);
}
