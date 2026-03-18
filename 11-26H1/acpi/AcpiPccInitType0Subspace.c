/*
 * XREFs of AcpiPccInitType0Subspace @ 0x1400B32C0
 * Callers:
 *     ACPIPccInitialize @ 0x1400B2344 (ACPIPccInitialize.c)
 * Callees:
 *     AcpiPccInitCommonFields @ 0x1400B2D94 (AcpiPccInitCommonFields.c)
 *     AcpiPccInitDoorbell @ 0x1400B2F58 (AcpiPccInitDoorbell.c)
 *     AcpiPccInitMapSharedMemoryRegion @ 0x1400B315C (AcpiPccInitMapSharedMemoryRegion.c)
 */

char __fastcall AcpiPccInitType0Subspace(_DWORD *DeferredContext, __int64 a2, unsigned __int8 a3)
{
  int v3; // ebp
  char v6; // si
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v3 = a3;
  v6 = 1;
  if ( a2 && DeferredContext && !*(_BYTE *)a2 )
  {
    DeferredContext[2] = DeferredContext[2] & 0xFFFFFFE1 | 2;
    if ( *(_BYTE *)(a2 + 1) >= 0x3Eu )
    {
      *(_BYTE *)DeferredContext = *(_BYTE *)a2;
      DeferredContext[4] = 0;
      if ( (int)AcpiPccInitMapSharedMemoryRegion((__int64)DeferredContext, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 16)) >= 0 )
      {
        *((_QWORD *)DeferredContext + 8) = *((_QWORD *)DeferredContext + 7) + 4LL;
        *((_QWORD *)DeferredContext + 9) = *((_QWORD *)DeferredContext + 7) + 6LL;
        *((_QWORD *)DeferredContext + 5) = *((_QWORD *)DeferredContext + 7) + 8LL;
        DeferredContext[12] = DeferredContext[32] - 8;
        v7 = *(_DWORD *)(a2 + 32);
        v8 = *(_QWORD *)(a2 + 44);
        v9 = *(_QWORD *)(a2 + 36);
        v11 = *(_QWORD *)(a2 + 24);
        v12 = v7;
        if ( (int)AcpiPccInitDoorbell((char *)DeferredContext, (__int64)&v11, v9, v8, 0) >= 0 )
        {
          DeferredContext[2] ^= (DeferredContext[2] ^ v3) & 1;
          if ( (_BYTE)v3 )
            DeferredContext[3] = 1;
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
    else
    {
      DeferredContext[204] = 1;
    }
  }
  return v6;
}
