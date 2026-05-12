/*
 * XREFs of NvmeAdapterCoalescingCallback @ 0x1400D3820
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterSystemPowerHintsEnabled @ 0x1400E0C14 (NvmeAdapterSystemPowerHintsEnabled.c)
 */

__int64 __fastcall NvmeAdapterCoalescingCallback(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // r9
  __int64 v7; // rdx

  result = NvmeAdapterSystemPowerHintsEnabled(a3, a2, a3, a1);
  if ( (_BYTE)result )
  {
    if ( v5 == 1 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 160) + 176LL) |= 0x4000u;
      *(_QWORD *)(*(_QWORD *)(v4 + 160) + 352LL) = MEMORY[0xFFFFF78000000008];
      result = *(_QWORD *)(v4 + 160);
      ++*(_QWORD *)(*(_QWORD *)(result + 24) + 8LL);
    }
    else if ( v5 == 2 )
    {
      result = *(_QWORD *)(v4 + 160);
      *(_DWORD *)(result + 176) &= ~0x4000u;
      v6 = *(_QWORD *)(v4 + 160);
      v7 = *(_QWORD *)(v6 + 352);
      if ( v7 )
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 160) + 360LL) = (MEMORY[0xFFFFF78000000008] - v7) / 0x2710uLL
                                                   + *(_QWORD *)(v6 + 360);
        result = *(_QWORD *)(v4 + 160);
        *(_QWORD *)(result + 352) = 0LL;
      }
    }
  }
  return result;
}
