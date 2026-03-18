/*
 * XREFs of AcpiPccInitType34Subspace @ 0x1400B36F0
 * Callers:
 *     ACPIPccInitialize @ 0x1400B2344 (ACPIPccInitialize.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     AcpiPccInitCommonFields @ 0x1400B2D94 (AcpiPccInitCommonFields.c)
 *     AcpiPccInitDoorbell @ 0x1400B2F58 (AcpiPccInitDoorbell.c)
 *     AcpiPccInitMapRegister @ 0x1400B3060 (AcpiPccInitMapRegister.c)
 *     AcpiPccInitMapSharedMemoryRegion @ 0x1400B315C (AcpiPccInitMapSharedMemoryRegion.c)
 *     AcpiPccInitPlatformInterruptAck @ 0x1400B3214 (AcpiPccInitPlatformInterruptAck.c)
 */

char __fastcall AcpiPccInitType34Subspace(char *DeferredContext, char *a2, unsigned __int8 a3)
{
  int v3; // ebp
  char v6; // si
  char v7; // cl
  char v8; // zf
  __int64 v9; // xmm0_8
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+38h] [rbp-20h]
  PKDEFERRED_ROUTINE DeferredRoutine; // [rsp+68h] [rbp+10h] BYREF

  v3 = a3;
  DeferredRoutine = 0LL;
  v6 = 1;
  if ( a2 && DeferredContext && (*a2 == 3 || *a2 == 4) )
  {
    *((_DWORD *)DeferredContext + 2) = *((_DWORD *)DeferredContext + 2) & 0xFFFFFFE1 | 2;
    if ( (unsigned __int8)a2[1] >= 8u )
    {
      v7 = *a2;
      v8 = *a2 == 3;
      *DeferredContext = *a2;
      *((_DWORD *)DeferredContext + 4) = !v8 + 1;
      if ( v7 != 4 || a3 )
      {
        if ( (int)AcpiPccInitMapSharedMemoryRegion((__int64)DeferredContext, *((_QWORD *)a2 + 1), *((_DWORD *)a2 + 4)) >= 0 )
        {
          *((_QWORD *)DeferredContext + 5) = *((_QWORD *)DeferredContext + 7) + 16LL;
          v8 = *DeferredContext == 4;
          *((_DWORD *)DeferredContext + 12) = *((_DWORD *)DeferredContext + 32) - 16;
          v9 = *(_QWORD *)(a2 + 20);
          v10 = *((_QWORD *)a2 + 5);
          v11 = *((_QWORD *)a2 + 4);
          v17 = *((_DWORD *)a2 + 7);
          v16 = v9;
          if ( (int)AcpiPccInitDoorbell(DeferredContext, (__int64)&v16, v11, v10, v8) >= 0 )
          {
            *((_DWORD *)DeferredContext + 2) ^= (*((_DWORD *)DeferredContext + 2) ^ v3) & 1;
            if ( (v3 & 1) == 0 )
              goto LABEL_30;
            AcpiGetDriverProxyWrappedEndpoint(&DeferredRoutine, (__int64)AcpiPccPlatformInterruptServiceRoutineDpc);
            KeInitializeDpc((PRKDPC)(DeferredContext + 136), DeferredRoutine, 0LL);
            *((_DWORD *)DeferredContext + 50) = *(_DWORD *)(a2 + 2);
            DeferredContext[132] = a2[6];
            *((_DWORD *)DeferredContext + 3) = 2;
            v12 = *((_DWORD *)a2 + 17);
            v13 = *((_QWORD *)a2 + 10);
            v14 = *((_QWORD *)a2 + 9);
            v16 = *(_QWORD *)(a2 + 60);
            v17 = v12;
            if ( (int)AcpiPccInitPlatformInterruptAck((__int64)DeferredContext, (__int64)&v16, v14, v13) < 0 )
            {
              *((_DWORD *)DeferredContext + 204) = 6;
            }
            else
            {
LABEL_30:
              if ( !*(_QWORD *)(a2 + 108)
                || (unsigned __int8)RtlIsZeroMemory(a2 + 96, 12LL)
                || (*((_QWORD *)a2 + 16) & *((_QWORD *)a2 + 17)) != 0LL
                || (unsigned __int8)RtlIsZeroMemory(a2 + 116, 12LL)
                || (*((_QWORD *)DeferredContext + 33) = *((_QWORD *)a2 + 12),
                    *((_DWORD *)DeferredContext + 68) = *((_DWORD *)a2 + 26),
                    *((_QWORD *)DeferredContext + 35) = *(_QWORD *)(a2 + 108),
                    (int)AcpiPccInitMapRegister((__int64)(DeferredContext + 264), (_QWORD *)DeferredContext + 32) < 0)
                || (*((_QWORD *)DeferredContext + 37) = *(_QWORD *)(a2 + 116),
                    *((_DWORD *)DeferredContext + 76) = *((_DWORD *)a2 + 31),
                    *((_QWORD *)DeferredContext + 39) = *((_QWORD *)a2 + 16),
                    *((_QWORD *)DeferredContext + 40) = *((_QWORD *)a2 + 17),
                    (int)AcpiPccInitMapRegister((__int64)(DeferredContext + 296), (_QWORD *)DeferredContext + 36) < 0) )
              {
                *((_DWORD *)DeferredContext + 204) = 7;
              }
              else if ( (unsigned __int8)RtlIsZeroMemory(a2 + 144, 12LL)
                     || *(_QWORD *)(a2 + 156)
                     && (*((_QWORD *)DeferredContext + 42) = *((_QWORD *)a2 + 18),
                         *((_DWORD *)DeferredContext + 86) = *((_DWORD *)a2 + 38),
                         *((_QWORD *)DeferredContext + 44) = *(_QWORD *)(a2 + 156),
                         (int)AcpiPccInitMapRegister((__int64)(DeferredContext + 336), (_QWORD *)DeferredContext + 41) >= 0) )
              {
                AcpiPccInitCommonFields(
                  (unsigned int *)DeferredContext,
                  *((_DWORD *)a2 + 12),
                  *((_DWORD *)a2 + 13),
                  *((_DWORD *)a2 + 14));
                *((_DWORD *)DeferredContext + 2) = *((_DWORD *)DeferredContext + 2) & 0xFFFFFFE1 | 4;
                return 0;
              }
              else
              {
                *((_DWORD *)DeferredContext + 204) = 8;
              }
            }
          }
        }
      }
      else
      {
        *((_DWORD *)DeferredContext + 204) = 5;
      }
    }
    else
    {
      *((_DWORD *)DeferredContext + 204) = 1;
    }
  }
  return v6;
}
