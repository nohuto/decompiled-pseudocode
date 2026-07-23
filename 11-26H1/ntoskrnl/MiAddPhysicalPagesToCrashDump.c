/*
 * XREFs of MiAddPhysicalPagesToCrashDump @ 0x1406FACC8
 * Callers:
 *     MmGetDumpRange @ 0x1406FB5A4 (MmGetDumpRange.c)
 * Callees:
 *     MiGetPagesRemainingInResidentPage @ 0x140708004 (MiGetPagesRemainingInResidentPage.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_DWORD *__fastcall MiAddPhysicalPagesToCrashDump(__int64 a1)
{
  _DWORD *result; // rax
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 PagesRemainingInResidentPage; // rbp
  char v8; // al
  int v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF

  result = MmPhysicalMemoryBlock;
  v2 = 0;
  if ( *(_DWORD *)MmPhysicalMemoryBlock )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = *(_QWORD *)&result[4 * v2 + 4];
      if ( *(_QWORD *)&result[4 * v2 + 6] )
        break;
LABEL_18:
      if ( ++v2 >= *result )
        return result;
    }
    while ( 1 )
    {
      v6 = 48 * v5 - 0x220000000000LL;
      PagesRemainingInResidentPage = 1LL;
      if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
        break;
      if ( (*(_DWORD *)(v6 + 32) & 0xC00000) == 0x400000 )
      {
        v8 = *(_BYTE *)(v6 + 34) & 7;
        if ( v8 == 6 )
        {
          if ( ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1
            || (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
            && (*(_BYTE *)(v6 + 34) & 7) == 6
            && (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
          {
            goto LABEL_17;
          }
        }
        else if ( (unsigned __int8)(v8 - 2) > 1u || (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
        {
          goto LABEL_17;
        }
LABEL_16:
        guard_dispatch_icall_no_overrides(a1, v5);
      }
LABEL_17:
      result = MmPhysicalMemoryBlock;
      v4 += PagesRemainingInResidentPage;
      v5 += PagesRemainingInResidentPage;
      if ( v4 >= *((_QWORD *)MmPhysicalMemoryBlock + 2 * v2 + 3) )
        goto LABEL_18;
    }
    v9 = 0;
    v10 = 0;
    PagesRemainingInResidentPage = MiGetPagesRemainingInResidentPage(v6, &v9, &v10);
    if ( v9 != 6 || v10 != 1 )
      goto LABEL_17;
    goto LABEL_16;
  }
  return result;
}
