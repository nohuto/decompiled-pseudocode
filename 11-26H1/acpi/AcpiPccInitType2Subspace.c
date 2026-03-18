/*
 * XREFs of AcpiPccInitType2Subspace @ 0x1400B3550
 * Callers:
 *     ACPIPccInitialize @ 0x1400B2344 (ACPIPccInitialize.c)
 * Callees:
 *     AcpiPccInitCommonFields @ 0x1400B2D94 (AcpiPccInitCommonFields.c)
 *     AcpiPccInitDoorbell @ 0x1400B2F58 (AcpiPccInitDoorbell.c)
 *     AcpiPccInitMapSharedMemoryRegion @ 0x1400B315C (AcpiPccInitMapSharedMemoryRegion.c)
 *     AcpiPccInitPlatformInterruptAck @ 0x1400B3214 (AcpiPccInitPlatformInterruptAck.c)
 */

char __fastcall AcpiPccInitType2Subspace(_DWORD *DeferredContext, __int64 a2, unsigned __int8 a3)
{
  int v3; // ebp
  char v6; // si
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]

  v3 = a3;
  v6 = 1;
  if ( a2 && DeferredContext && *(_BYTE *)a2 == 2 )
  {
    DeferredContext[2] = DeferredContext[2] & 0xFFFFFFE1 | 2;
    if ( *(_BYTE *)(a2 + 1) < 0x5Au )
    {
      DeferredContext[204] = 1;
      return v6;
    }
    *(_BYTE *)DeferredContext = *(_BYTE *)a2;
    DeferredContext[4] = 0;
    if ( (int)AcpiPccInitMapSharedMemoryRegion((__int64)DeferredContext, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 16)) >= 0 )
    {
      *((_QWORD *)DeferredContext + 5) = *((_QWORD *)DeferredContext + 7) + 8LL;
      DeferredContext[12] = DeferredContext[32] - 8;
      v7 = *(_DWORD *)(a2 + 32);
      v8 = *(_QWORD *)(a2 + 44);
      v9 = *(_QWORD *)(a2 + 36);
      v14 = *(_QWORD *)(a2 + 24);
      v15 = v7;
      if ( (int)AcpiPccInitDoorbell((char *)DeferredContext, (__int64)&v14, v9, v8, 0) >= 0 )
      {
        DeferredContext[2] ^= (DeferredContext[2] ^ v3) & 1;
        if ( (v3 & 1) == 0 )
          goto LABEL_13;
        DeferredContext[50] = *(_DWORD *)(a2 + 2);
        *((_BYTE *)DeferredContext + 132) = *(_BYTE *)(a2 + 6);
        DeferredContext[3] = 2;
        v10 = *(_DWORD *)(a2 + 70);
        v11 = *(_QWORD *)(a2 + 82);
        v12 = *(_QWORD *)(a2 + 74);
        v14 = *(_QWORD *)(a2 + 62);
        v15 = v10;
        if ( (int)AcpiPccInitPlatformInterruptAck((__int64)DeferredContext, (__int64)&v14, v12, v11) >= 0 )
          goto LABEL_13;
        if ( (unsigned __int8)RtlIsZeroMemory(a2 + 62, 12LL) && (DeferredContext[33] & 2) == 0 )
        {
          DeferredContext[2] &= ~1u;
          DeferredContext[3] = 0;
          DeferredContext[204] = 6;
LABEL_13:
          AcpiPccInitCommonFields(
            DeferredContext,
            *(_DWORD *)(a2 + 52),
            *(_DWORD *)(a2 + 56),
            *(unsigned __int16 *)(a2 + 60));
          DeferredContext[2] = DeferredContext[2] & 0xFFFFFFE1 | 4;
          return 0;
        }
      }
    }
  }
  return v6;
}
