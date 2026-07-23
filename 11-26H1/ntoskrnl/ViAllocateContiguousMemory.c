/*
 * XREFs of ViAllocateContiguousMemory @ 0x140C2BDB4
 * Callers:
 *     ViHookDmaAdapter @ 0x140C2D4FC (ViHookDmaAdapter.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR __fastcall ViAllocateContiguousMemory(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  ULONG_PTR result; // rax
  ULONG v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // [rsp+50h] [rbp+8h]

  v2 = 0xFFFF;
  if ( *(_BYTE *)(a1 + 235) )
  {
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 232) )
    {
      v8 = -1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 244) == 1 )
        v2 = 0xFFFFFF;
      v8 = v2;
    }
    v3 = v8;
  }
  *(_DWORD *)(a1 + 328) = 32;
  *(_QWORD *)(a1 + 336) = a1 + 320;
  RtlClearAllBits((PRTL_BITMAP)(a1 + 328));
  result = ExAllocatePool2(64LL, 0x100uLL, 0x566C6148u);
  *(_QWORD *)(a1 + 296) = result;
  if ( result )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(a1 + 296);
      *(_QWORD *)(v6 + v7) = MmAllocateContiguousNodeMemory(12288LL, 0, v3, 0, 4, 0x80000000);
      if ( *(_QWORD *)(v6 + *(_QWORD *)(a1 + 296)) )
      {
        result = 304LL;
      }
      else
      {
        RtlSetBits((PRTL_BITMAP)(a1 + 328), v5, 1u);
        result = 308LL;
      }
      _InterlockedIncrement((volatile signed __int32 *)(result + a1));
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < 0x20 );
  }
  return result;
}
