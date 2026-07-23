/*
 * XREFs of MiTransferMemoryPagefileData @ 0x1404FC9E8
 * Callers:
 *     MiModwriterIssueWrite @ 0x140401A18 (MiModwriterIssueWrite.c)
 *     MiReadFromMemoryPagefile @ 0x1404FC998 (MiReadFromMemoryPagefile.c)
 *     MiZeroPageFile @ 0x1406EB650 (MiZeroPageFile.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCopyMemoryPagefileData @ 0x140711550 (MiCopyMemoryPagefileData.c)
 *     MiFindPageFileMemoryExtent @ 0x1407117E0 (MiFindPageFileMemoryExtent.c)
 */

__int64 __fastcall MiTransferMemoryPagefileData(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v8; // rsi
  __int64 result; // rax
  unsigned int v10; // ebp
  __int64 v11; // r15
  unsigned int v12; // edi
  __int64 PageFileMemoryExtent; // rax
  unsigned int v14; // ecx
  __int64 v15; // rbx

  v8 = 0LL;
  result = KeGetCurrentIrql();
  if ( (_BYTE)result == 2 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      result = (__int64)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
      v8 = result;
    }
  }
  v11 = a2 + 48;
  v12 = *(_DWORD *)(a2 + 40) >> 12;
  while ( v12 )
  {
    PageFileMemoryExtent = MiFindPageFileMemoryExtent(a1, a3, v10);
    v14 = v12;
    if ( *(_DWORD *)(PageFileMemoryExtent + 28) - a3 + 1 <= v12 )
      v14 = *(_DWORD *)(PageFileMemoryExtent + 28) - a3 + 1;
    v15 = v14;
    result = MiCopyMemoryPagefileData(
               v11,
               v8,
               *(_QWORD *)(PageFileMemoryExtent + 32) + a3 - *(_DWORD *)(PageFileMemoryExtent + 24),
               v14,
               a4);
    v12 -= v15;
    v11 += 8 * v15;
    a3 += v15;
    if ( v8 )
      v8 += v15 << 12;
  }
  return result;
}
