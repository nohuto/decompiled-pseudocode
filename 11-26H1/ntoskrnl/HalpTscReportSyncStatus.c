/*
 * XREFs of HalpTscReportSyncStatus @ 0x1407844C0
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void HalpTscReportSyncStatus()
{
  unsigned int MaximumRegisteredProcessorCount; // eax
  unsigned int v1; // r8d
  unsigned int *v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v5; // r8d
  char v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  ULONG_PTR v8; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-9h] BYREF
  char *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  ULONG_PTR *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  if ( HalpTscWaves )
  {
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v1 = 0;
    if ( MaximumRegisteredProcessorCount )
    {
      v2 = (unsigned int *)HalpTscWaves;
      v3 = MaximumRegisteredProcessorCount;
      do
      {
        v4 = *v2++;
        if ( v4 <= v1 )
          v4 = v1;
        v1 = v4;
        --v3;
      }
      while ( v3 );
    }
    if ( (unsigned int)dword_140E024C8 > 5 && tlgKeywordOn((__int64)&dword_140E024C8, 0x400000000000LL) )
    {
      v6 = HalpTscAdjustAvailable;
      v7 = v5;
      v10 = &v6;
      v8 = HalpTscMaximumComputedSpread;
      v12 = &v8;
      v14 = &v7;
      v11 = 1LL;
      v13 = 8LL;
      v15 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E024C8, (unsigned __int8 *)byte_140044D5D, 0LL, 0LL, 5u, &v9);
    }
  }
}
