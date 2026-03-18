/*
 * XREFs of HalpDmaInitMemory @ 0x140CB0980
 * Callers:
 *     HalpDmaInitDiscard @ 0x140CB0054 (HalpDmaInitDiscard.c)
 * Callees:
 *     HalpAllocPhysicalMemoryEx @ 0x140D08980 (HalpAllocPhysicalMemoryEx.c)
 */

__int64 __fastcall HalpDmaInitMemory(int a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  unsigned int v4; // r14d
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  HalpDmaAdapterListLock = 0LL;
  LOWORD(HalpNewAdapter.Header.Lock) = 1;
  qword_140FBD268 = (__int64)&HalpDmaAdapterList;
  HalpDmaAdapterList = (__int64)&HalpDmaAdapterList;
  HalpNewAdapter.Header.Size = 6;
  HalpNewAdapter.Header.SignalState = 1;
  HalpNewAdapter.Header.WaitListHead.Blink = &HalpNewAdapter.Header.WaitListHead;
  HalpNewAdapter.Header.WaitListHead.Flink = &HalpNewAdapter.Header.WaitListHead;
  v8 = 0x1000000LL;
  qword_140FBCE68 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v8, 16, 0x10000, 0LL);
  dword_140FBCE60 = qword_140FBCE68 != 0 ? 0x10000 : 0;
  qword_140FBD048 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v8, 16, 0x10000, 0LL);
  v2 = 32;
  dword_140FBD040 = qword_140FBD048 != 0 ? 0x10000 : 0;
  v3 = (unsigned __int64)HalpMaximumPhysicalMemoryAddress < 0x100000000LL ? 0x10000 : 196608;
  v4 = v3 >> 12;
  do
  {
    v8 = (1LL << v2) - 1;
    v5 = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v8, v4, 0x10000, 0LL);
    if ( v5 )
      break;
    ++v2;
  }
  while ( v2 <= 0x20 );
  qword_140FBCF48 = v5;
  dword_140FBCF40 = v5 != 0 ? v3 : 0;
  if ( v2 < 0x40 )
    qword_140FBCF10 = (1LL << v2) - 1;
  else
    qword_140FBCF10 = -1LL;
  v6 = 32;
  while ( 1 )
  {
    v8 = (1LL << v6) - 1;
    result = HalpAllocPhysicalMemoryEx(a1, (unsigned int)&v8, v4, 0x10000, 0LL);
    if ( result )
      break;
    if ( ++v6 > 0x20 )
    {
      v3 = 0;
      break;
    }
  }
  qword_140FBD128 = result;
  dword_140FBD120 = v3;
  if ( v6 < 0x40 )
  {
    result = (1LL << v6) - 1;
    qword_140FBD0F0 = result;
  }
  else
  {
    qword_140FBD0F0 = -1LL;
  }
  return result;
}
