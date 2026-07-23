/*
 * XREFs of AlpcpExposeWorkOnBehalfAttribute @ 0x1409BA23C
 * Callers:
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 */

void __fastcall AlpcpExposeWorkOnBehalfAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, char a5)
{
  __int64 v6; // r9
  __int64 *v7; // rbx

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) == 0 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    if ( (*(_DWORD *)(a1 + 416) & 6) == 2 && v6 && (*(_DWORD *)(v6 + 416) & 6) == 4 )
    {
      v7 = (__int64 *)(a2 + 168);
      if ( a5 )
        RtlWriteULong64ToUser(a3, *v7);
      else
        RtlCopyVolatileMemory(a3, (const void *)(a2 + 168), 8uLL);
      if ( *v7 )
        *a4 |= 0x2000000u;
    }
  }
}
