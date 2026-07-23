/*
 * XREFs of EtwpEnableStackCaching @ 0x140AC00AC
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x140AB1F2C (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpFreeStackCache @ 0x140AC020C (EtwpFreeStackCache.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpEnableStackCaching(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // esi
  unsigned int v8; // r15d
  __int64 Pool2; // rax
  _SLIST_HEADER *v10; // r14
  unsigned __int64 *p_Region; // rax
  __int64 v12; // rdx
  _SLIST_HEADER *v13; // rcx
  unsigned int v14; // ebp
  unsigned int v15; // esi
  __int64 v16; // rax
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0;
  if ( *(_QWORD *)(a1 + 1056) )
  {
    return (unsigned int)-1073741053;
  }
  else
  {
    v7 = 3145728;
    v8 = 256;
    if ( a2 >= 0x300000 )
      v7 = a2;
    if ( v7 > 0x3200000 )
      v7 = 52428800;
    if ( a3 >= 0x100 )
      v8 = a3;
    if ( v8 > 0x1000 )
      v8 = 4096;
    Pool2 = ExAllocatePool2(0x40uLL);
    v10 = (_SLIST_HEADER *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 8) = v8;
      *(_QWORD *)Pool2 = a1;
      InitializeSListHead((PSLIST_HEADER)(Pool2 + 16));
      p_Region = &v10[2].Region;
      v12 = v8;
      v13 = v10 + 2;
      do
      {
        p_Region[1] = 0LL;
        *p_Region = (unsigned __int64)v13;
        *(p_Region - 1) = (unsigned __int64)v13;
        p_Region += 3;
        v13 = (_SLIST_HEADER *)((char *)v13 + 24);
        --v12;
      }
      while ( v12 );
      v14 = 0;
      v15 = v7 / 0x128;
      while ( v14 < v15 )
      {
        v16 = ExAllocatePool2(0x40uLL);
        if ( !v16 )
        {
          EtwpFreeStackCache(v10);
          return (unsigned int)-1073741801;
        }
        *(_DWORD *)(v16 + 24) = 0;
        RtlpInterlockedPushEntrySList(v10 + 1, (PSLIST_ENTRY)v16);
        ++v14;
      }
      *(_QWORD *)(a1 + 1056) = v10;
      _InterlockedOr(v18, 0);
      _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x1000000u);
      if ( a4 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 820), 1u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v4;
}
