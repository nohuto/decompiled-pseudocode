/*
 * XREFs of HsaUpdateInterruptDestination @ 0x1405AD514
 * Callers:
 *     HsaUpdateRemappingTableEntry @ 0x1404FD950 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall HsaUpdateInterruptDestination(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v2; // eax
  unsigned __int64 result; // rax

  switch ( *(_DWORD *)BugCheckParameter4 )
  {
    case 1:
      *(_QWORD *)(BugCheckParameter3 + 8) |= 0xFF00000000000000uLL;
      result = *(_QWORD *)BugCheckParameter3 & 0xFFFFFFFF000000BFuLL | 0xFFFFFF00;
      break;
    case 4:
      *(_BYTE *)(BugCheckParameter3 + 15) = *(_BYTE *)(BugCheckParameter4 + 11);
      result = ((unsigned __int64)*(unsigned int *)(BugCheckParameter4 + 8) << 8) ^ (*(_QWORD *)BugCheckParameter3 ^ ((unsigned __int64)*(unsigned int *)(BugCheckParameter4 + 8) << 8)) & 0xFFFFFFFF000000BFuLL;
      break;
    case 6:
      v2 = *(_DWORD *)(BugCheckParameter4 + 12) | (*(_DWORD *)(BugCheckParameter4 + 8) << 16);
      *(_BYTE *)(BugCheckParameter3 + 15) = HIBYTE(v2);
      result = ((unsigned __int64)v2 << 8) ^ (*(_QWORD *)BugCheckParameter3 ^ ((unsigned __int64)v2 << 8)) & 0xFFFFFFFF000000FFuLL | 0x40;
      break;
    default:
      KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, BugCheckParameter3, BugCheckParameter4);
  }
  *(_QWORD *)BugCheckParameter3 = result;
  return result;
}
