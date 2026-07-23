/*
 * XREFs of MiMakePerSessionProtoPte @ 0x1402ED790
 * Callers:
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkProtoPte @ 0x1402F0C18 (MiHandleForkProtoPte.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiMakePerSessionProtoPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int SessionId; // ebp
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 ProtoPteAddress; // rsi
  unsigned int *v12; // rdi
  __int64 v13; // rsi
  __int64 SharedProtos; // rax
  unsigned int *v15; // [rsp+20h] [rbp-18h] BYREF

  SessionId = PsGetSessionIdEx(a1);
  v8 = PsGetSessionIdEx(a2);
  if ( SessionId == v8 )
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v15 = *(unsigned int **)(a4 + 80);
  v9 = *(_QWORD *)v15;
  if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 8) == 0 )
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( (*(_DWORD *)(v9 + 56) & 0x20) == 0 )
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  ProtoPteAddress = MiGetProtoPteAddress(a4, (unsigned __int64)(a3 << 25 >> 16) >> 12, 8u, &v15);
  if ( !ProtoPteAddress )
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v12 = v15;
  if ( (v15[8] & 0x20000) == 0 )
    return *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v13 = (ProtoPteAddress - *(_QWORD *)(MiGetSharedProtos(v9, SessionId, v15) + 72)) >> 3;
  SharedProtos = MiGetSharedProtos(v9, v8, v12);
  return MiMakePrototypePteDirect(*(_QWORD *)(SharedProtos + 72) + 8 * v13);
}
