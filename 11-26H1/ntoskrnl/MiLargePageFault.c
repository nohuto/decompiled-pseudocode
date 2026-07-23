/*
 * XREFs of MiLargePageFault @ 0x1403A95C0
 * Callers:
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiNoFaultFound @ 0x1403A85F8 (MiNoFaultFound.c)
 *     MiCanGrantExecute @ 0x1404CCA70 (MiCanGrantExecute.c)
 *     MiCheckSystemNxFault @ 0x1404E4804 (MiCheckSystemNxFault.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 *     MiGetVirtualFaultPageInfo @ 0x140528228 (MiGetVirtualFaultPageInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiLargePageFault(unsigned __int64 *a1, unsigned __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rcx
  __int64 PteShadow; // rbx
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  _BYTE *v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 *VirtualFaultPageInfo; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 i; // rcx
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _BYTE v19[208]; // [rsp+30h] [rbp-108h] BYREF

  memset_0(v19, 0, 0xC8uLL);
  v4 = 1;
  v5 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = (__int64)(v5 << 25) >> 16;
    ++v4;
  }
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  v7 = a1[2];
  if ( (v7 & 1) != 0 && *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (*((_DWORD *)a1 + 20) & 0x80u) == 0 )
  {
    if ( (a1[1] & 2) != 0 )
    {
      if ( (PteShadow & 0x800) == 0 )
        return 3221225477LL;
      if ( MiNoFaultFound((__int64)a1, (volatile signed __int64 *)a2, *a1, v7, 0, PteShadow) )
      {
        MiInitializeTbFlushList(
          (__int64)v19,
          (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
          20,
          0,
          128);
        MiInsertLargeTbFlushEntry((__int64)v19, v4, a2);
        MiFlushTbList((__int64)v19);
      }
    }
    if ( (a1[1] & 0x10) == 0 )
    {
LABEL_12:
      v8 = a1[2];
      if ( (v8 & 1) != 0 )
      {
        v9 = (_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v9 == 5 && (int)MiValidVirtualizationFault(a1, v9, a2) >= 0 )
        {
          v10 = *a1;
          VirtualFaultPageInfo = (unsigned __int64 *)MiGetVirtualFaultPageInfo(v9, v10, 0LL);
          v12 = ((unsigned __int64)PteShadow >> 12) & 0xFFFFFFFFFFLL;
          v13 = v10 >> 12;
          for ( i = 1LL; v4; --v4 )
          {
            v16 = v13;
            v13 >>= 9;
            v17 = i * (v16 & 0x1FF);
            i <<= 9;
            v12 += v17;
          }
          *VirtualFaultPageInfo = v12 ^ (*VirtualFaultPageInfo ^ v12) & 0xFFF0000000000000uLL;
        }
      }
      return 0LL;
    }
    if ( PteShadow >= 0 )
    {
      if ( (a1[10] & 0x100) == 0 )
        MiCheckSystemNxFault(a1, PteShadow, 7LL);
      goto LABEL_12;
    }
    if ( (unsigned int)MiCanGrantExecute(KeGetCurrentThread()->ApcState.Process, *a1) )
    {
      v18 = ((unsigned __int64)PteShadow >> 12) & 0xFFFFFFFFFFLL;
      if ( v18 <= qword_140E2D920 && ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        PteShadow &= ~0x8000000000000000uLL;
        if ( (MiFlags & 0x400) != 0 || (MiFlags & 0x800) != 0 )
          PteShadow |= 0x20uLL;
        MiWriteValidPteNewProtection((__int64 *)a2, PteShadow);
        if ( (MiFlags & 0x400) == 0 && (MiFlags & 0x800) == 0 )
          MiFlushSingleTbEntry(*a1, 0LL);
        goto LABEL_12;
      }
    }
  }
  return 3221225477LL;
}
