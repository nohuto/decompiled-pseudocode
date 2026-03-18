/*
 * XREFs of HmgSetLock @ 0x1400CA618
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgSetLock(__int64 a1)
{
  __int16 v1; // esi^2
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned int v5; // ebx

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 8) + 16LL))(*(_QWORD *)(v3 + 8), v2);
  v5 = v4;
  if ( v4 && *(_WORD *)(v4 + 12) == v1 )
    *(_WORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 8) + 96LL))(*(_QWORD *)(v3 + 8), v2) + 12) = 0;
  else
    return 0;
  return v5;
}
