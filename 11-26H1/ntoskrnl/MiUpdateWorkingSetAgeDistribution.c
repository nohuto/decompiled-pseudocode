/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1402CCE50
 * Callers:
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiRemoveWsle @ 0x1403273B4 (MiRemoveWsle.c)
 * Callees:
 *     MiRebuildPageTableAges @ 0x14029D740 (MiRebuildPageTableAges.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402CE660 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402CE8C0 (MiRemoveActivePageTableLinks.c)
 */

__int64 __fastcall MiUpdateWorkingSetAgeDistribution(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        signed __int64 a4,
        char a5)
{
  __int64 v7; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  __int64 v16; // rbx
  __int64 v17; // rcx
  _KPROCESS *Process; // r10
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8

  v7 = a3;
  v9 = 0;
  v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v17 = *(_QWORD *)v10;
    if ( (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v20 = *(_QWORD *)(KernelWaitTime + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v20 & 0x20) != 0 )
            v17 = v11 | 0x20;
          v11 = v17 | 0x42;
          if ( (v20 & 0x42) == 0 )
            v11 = v17;
        }
      }
    }
  }
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v13 = (*(_QWORD *)v12 >> 49) & 0x3FFLL;
  v14 = (*(_QWORD *)v12 >> 59) & 7;
  if ( (a5 & 8) == 0 )
  {
    if ( (_BYTE)v7 != v14 )
    {
      if ( (unsigned __int8)v7 <= v14 )
        goto LABEL_8;
      v16 = *(_QWORD *)v12;
      if ( (*(_DWORD *)(v12 + 36) & 0x4000000) != 0 )
        MiRemoveActivePageTableLinks(a1, v12, 0LL);
      *(_QWORD *)v12 = v16 & 0xC001FFFFFFFFFFFFuLL | ((a4 & 0x3FF | ((unsigned __int64)(v7 & 7) << 10)) << 49);
      goto LABEL_7;
    }
    *(_QWORD *)v12 = ((unsigned __int64)(unsigned int)(v13 + a4) << 49) ^ (*(_QWORD *)v12 ^ ((unsigned __int64)(unsigned int)(v13 + a4) << 49)) & 0xF801FFFFFFFFFFFFuLL;
    if ( !(v13 + a4) )
    {
      MiRebuildPageTableAges(a1, a2, 0);
      v9 = 1;
      goto LABEL_8;
    }
    if ( (*(_DWORD *)(v12 + 36) & 0x4000000) == 0 )
    {
      *(_QWORD *)v12 = *(_QWORD *)v12 & 0xC001FFFFFFFFFFFFuLL | ((((_WORD)v13 + (_WORD)a4) & 0x3FF | ((unsigned __int64)(v7 & 7) << 10)) << 49);
LABEL_7:
      MiInsertActivePageTableLinksTail(a1, v12, (unsigned __int8)v7, 0LL);
    }
  }
LABEL_8:
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v7 + 56), a4);
  if ( (_BYTE)v7 == 7 && a4 > 0 )
  {
    v21 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
    if ( *(_QWORD *)(a1 + 112) >= *(_QWORD *)(v21 + 21216) )
      _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 21392), 5, 0);
  }
  return v9;
}
