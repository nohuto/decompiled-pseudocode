/*
 * XREFs of PpmEventHgsNormalizedTable @ 0x1404FC674
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PpmEventHgsNormalizedTable()
{
  _BYTE *Pool2; // rbx
  ULONG v1; // r9d
  ULONG v2; // eax
  __int64 v3; // rdi
  unsigned int v4; // ecx
  unsigned int v5; // r11d
  char *v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // al
  unsigned int v11; // [rsp+40h] [rbp-19h] BYREF
  ULONG MaximumProcessorCount; // [rsp+44h] [rbp-15h] BYREF
  int v13; // [rsp+48h] [rbp-11h] BYREF
  int v14; // [rsp+4Ch] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  ULONG *p_MaximumProcessorCount; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+68h] [rbp+Fh]
  unsigned int *v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  int *v20; // [rsp+80h] [rbp+27h]
  __int64 v21; // [rsp+88h] [rbp+2Fh]
  _BYTE *v22; // [rsp+90h] [rbp+37h]
  int v23; // [rsp+98h] [rbp+3Fh]
  int v24; // [rsp+9Ch] [rbp+43h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v11 = *(_DWORD *)(PpmHeteroCapability + 4);
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_ORDER_VALUE_TABLE_RUNDOWN) )
    {
      v13 = MaximumProcessorCount * v11;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        UserData.Ptr = (ULONGLONG)&v14;
        v1 = 0;
        v14 = (unsigned __int8)PpmHeteroHgsThreadEnabled;
        p_MaximumProcessorCount = &MaximumProcessorCount;
        v18 = &v11;
        v20 = &v13;
        v2 = MaximumProcessorCount;
        *(_QWORD *)&UserData.Size = 4LL;
        v17 = 4LL;
        v19 = 4LL;
        v21 = 4LL;
        if ( MaximumProcessorCount )
        {
          v3 = PpmHeteroCapability;
          v4 = v11;
          do
          {
            v5 = 0;
            v6 = (char *)(*(_QWORD *)(v3 + 16) + v1);
            if ( v4 )
            {
              do
              {
                v7 = v5 + v1 * v4;
                v8 = PpmHeteroCapability;
                v9 = 11 * v7;
                Pool2[v9 + 9] = *(_BYTE *)(PpmHeteroCapability + 4 * v7 + 49);
                Pool2[v9 + 10] = *(_BYTE *)(v8 + 4 * v7 + 48);
                v10 = *v6;
                *(_DWORD *)&Pool2[v9 + 4] = v5++;
                Pool2[v9 + 8] = v10;
                *(_DWORD *)&Pool2[v9] = v1;
                v4 = v11;
              }
              while ( v5 < v11 );
              v2 = MaximumProcessorCount;
            }
            ++v1;
          }
          while ( v1 < v2 );
        }
        v22 = Pool2;
        v24 = 0;
        v23 = 11 * v13;
        EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_ORDER_VALUE_TABLE_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
