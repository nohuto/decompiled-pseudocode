/*
 * XREFs of MiAllocateAweInfo @ 0x14087D964
 * Callers:
 *     MiCreateProcessDefaultAweInfo @ 0x14087EDDC (MiCreateProcessDefaultAweInfo.c)
 *     MiCreatePagingFileControlArea @ 0x140989124 (MiCreatePagingFileControlArea.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     ExInitializeAutoExpandPushLock @ 0x14046E140 (ExInitializeAutoExpandPushLock.c)
 *     MiWriteControlAreaFlags2 @ 0x1404AFA40 (MiWriteControlAreaFlags2.c)
 *     MiCreateAweInfoBitMap @ 0x14087EC68 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfo @ 0x14087F264 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiAllocateAweInfo(__int64 a1, int a2, char a3, __int64 *a4)
{
  char v6; // bp
  int AweInfoBitMap; // edi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rbx
  __int64 v11; // rax
  int v12; // eax

  *a4 = 0LL;
  v6 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741585;
  }
  else
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(72LL, 0x80uLL, 2000776525, CurrentProcessorColor | 0x80000000);
    if ( PoolMm )
    {
      if ( (a3 & 2) != 0 )
      {
        v11 = 512LL;
      }
      else if ( (a3 & 4) != 0 )
      {
        v11 = 0x40000LL;
      }
      else
      {
        v11 = (a3 & 1) != 0 ? 16LL : 1LL;
      }
      *(_QWORD *)(PoolMm + 16) = v11;
      if ( (a3 & 0x20) != 0 )
        *(_DWORD *)(PoolMm + 8) |= 4u;
      *(_QWORD *)PoolMm = 399680LL;
      if ( (v6 & 1) != 0 )
        *(_DWORD *)(PoolMm + 8) |= 1u;
      v12 = *(_DWORD *)(PoolMm + 8);
      if ( (v12 & 4) == 0 )
        *(_DWORD *)(PoolMm + 8) = v12 | 8;
      if ( (a3 & 0x10) != 0 )
        *(_DWORD *)(PoolMm + 52) = 0;
      else
        *(_DWORD *)(PoolMm + 52) = ((a3 & 8) != 0) + 1;
      *(_QWORD *)(PoolMm + 40) = a1;
      AweInfoBitMap = MiCreateAweInfoBitMap(PoolMm);
      if ( AweInfoBitMap < 0 )
      {
        MiDeleteAweInfo((PVOID)PoolMm);
      }
      else
      {
        ExInitializeAutoExpandPushLock((_QWORD *)(PoolMm + 64), 1);
        *(_DWORD *)(PoolMm + 8) |= 2u;
        if ( a1 )
        {
          *(_QWORD *)(a1 + 8) = PoolMm;
          MiWriteControlAreaFlags2(a1, 0x20000, 0x20000, 0);
        }
        *a4 = PoolMm;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)AweInfoBitMap;
}
