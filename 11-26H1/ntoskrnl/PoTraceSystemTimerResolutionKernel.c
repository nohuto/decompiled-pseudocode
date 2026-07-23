/*
 * XREFs of PoTraceSystemTimerResolutionKernel @ 0x14040D2D0
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 *     KiResetClockIntervalOneShot @ 0x14040D06C (KiResetClockIntervalOneShot.c)
 *     ExSetTimerResolution @ 0x14040D0D0 (ExSetTimerResolution.c)
 *     KiSetClockIntervalOneShot @ 0x14040D19C (KiSetClockIntervalOneShot.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 *     KiResetClockInterval @ 0x1405F0FDC (KiResetClockInterval.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int __fastcall PoTraceSystemTimerResolutionKernel(int a1, int a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 Keyword; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF

  v16 = a2;
  v15 = a1;
  v3 = &POP_ETW_EVENT_KERNEL_STRS;
  v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_KERNEL_STRS_INTERNAL;
  if ( !a3 )
    v4 = &POP_ETW_EVENT_KERNEL_STRS;
  if ( PopDiagHandleRegistered && PopDiagHandle )
  {
    v5 = *(_QWORD *)(PopDiagHandle + 32);
    Keyword = v4->Keyword;
    if ( *(_DWORD *)(v5 + 96) )
    {
      LODWORD(v3) = *(unsigned __int8 *)(v5 + 100);
      if ( v4->Level <= (unsigned __int8)v3 || !(_BYTE)v3 )
      {
        LODWORD(v3) = *(_DWORD *)(v5 + 104);
        if ( ((unsigned __int8)v3 & 0x40) != 0 && !Keyword )
          goto LABEL_15;
        if ( (Keyword & *(_QWORD *)(v5 + 112)) != 0 )
        {
          v7 = *(_QWORD *)(v5 + 120);
          LODWORD(v3) = Keyword & v7;
          if ( (Keyword & v7) == v7 )
            goto LABEL_15;
        }
      }
    }
    if ( *(_WORD *)(PopDiagHandle + 102) )
    {
      v9 = *(_QWORD *)(PopDiagHandle + 40);
      v10 = v4->Keyword;
      if ( *(_DWORD *)(v9 + 96) )
      {
        LODWORD(v3) = *(unsigned __int8 *)(v9 + 100);
        if ( v4->Level <= (unsigned __int8)v3 || !(_BYTE)v3 )
        {
          if ( (LODWORD(v3) = *(_DWORD *)(v9 + 104), ((unsigned __int8)v3 & 0x40) != 0) && !v10
            || (v10 & *(_QWORD *)(v9 + 112)) != 0
            && (v8 = *(_QWORD *)(v9 + 120), LODWORD(v3) = v10 & v8, (v10 & v8) == v8) )
          {
LABEL_15:
            *(_QWORD *)&UserData.Size = 4LL;
            v14 = 4LL;
            UserData.Ptr = (ULONGLONG)&v15;
            v13 = &v16;
            LODWORD(v3) = EtwWriteEx(PopDiagHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
          }
        }
      }
    }
  }
  return (int)v3;
}
