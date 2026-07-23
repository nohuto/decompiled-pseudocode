/*
 * XREFs of MiEliminateZeroPages @ 0x14099AF5C
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiGetPdeAddress @ 0x140442F90 (MiGetPdeAddress.c)
 *     MiIsCacheLineNonZero @ 0x140479558 (MiIsCacheLineNonZero.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  _QWORD *v4; // rbp
  unsigned __int64 v6; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  char *v11; // rbx
  unsigned __int64 v12; // r12
  void *v13; // rcx
  __int64 PdeAddress; // rbx
  __int64 v15; // r8
  __int64 v16; // [rsp+70h] [rbp+0h] BYREF

  v4 = (_QWORD *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = a2;
  v4[5] = a1;
  v4[2] = a2;
  memset_0((void *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 128), 0, 0xC8uLL);
  memset_0((void *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  MiInitializeTbFlushList(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 128, a1, 20, 10, 1);
  v9 = a3 >> 12;
  v10 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  while ( 1 )
  {
    *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9;
    if ( !v9 )
      break;
    v11 = (char *)v6;
    *v4 = v6;
    v12 = v6 + 4096;
    *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v6 + 4096;
    do
    {
      v13 = v4 + 8;
      if ( a4 )
        RtlCopyFromUser(v13, v11, 0x40uLL);
      else
        RtlCopyVolatileMemory(v13, v11, 0x40uLL);
      if ( MiIsCacheLineNonZero((__int64)(v4 + 8)) )
        break;
      v11 += 64;
      *v4 = v11;
    }
    while ( (unsigned __int64)v11 < v12 );
    if ( v11 == (char *)(v6 + 4096) )
    {
      PdeAddress = MiGetPdeAddress(v6);
      if ( v10 != PdeAddress )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) )
          MiConvertAndFlushWsleVas(a1, (__int64)(v4 + 16), v15);
        v10 = PdeAddress;
        *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)(v4 + 16), v6, 1LL, 0);
      if ( *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) == *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                             + 0x8C) )
        MiConvertAndFlushWsleVas(a1, (__int64)(v4 + 16), v8);
    }
    v6 += 4096LL;
    *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v12;
    --v9;
  }
  if ( *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) )
    MiConvertAndFlushWsleVas(a1, (__int64)(v4 + 16), v8);
}
