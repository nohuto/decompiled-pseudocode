/*
 * XREFs of HalSendNMI @ 0x140581470
 * Callers:
 *     HalpNmiReboot @ 0x140596590 (HalpNmiReboot.c)
 *     KiSendFreeze @ 0x1405F8AD8 (KiSendFreeze.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeAndGroupAffinityEx @ 0x140462640 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalSendNMI(__int64 a1)
{
  bool v2; // r12
  int v3; // r15d
  int v4; // r14d
  bool v5; // bl
  __int64 result; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // r14
  bool v11; // zf
  bool v12; // di
  bool v13; // di
  bool v14; // di
  _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+48h] [rbp-C0h]
  __int64 v18; // [rsp+58h] [rbp-B0h]
  __int64 v19; // [rsp+60h] [rbp-A8h]
  __int128 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int128 v22; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v24[33]; // [rsp+A0h] [rbp-68h] BYREF

  v16 = 0x2FFFFFFFFLL;
  v2 = HalpDisableInterrupts();
  v21 = 0LL;
  v3 = 0;
  ProcNumber[0] = 0;
  v22 = 0LL;
  v20 = 0LL;
  memset_0(v24, 0, 0x100uLL);
  v23 = 2097153LL;
  LODWORD(v18) = 0;
  v4 = 0;
  v17 = 0LL;
  memset_0(v24, 0, 0x100uLL);
  RtlAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)a1, (__int64)&v23);
  if ( HalpInterruptIpiPolicy == 3
    && (unsigned int)RtlCountSetBitsAffinityEx((unsigned __int16 *)&v23) > HalpInterruptIpiThreshold )
  {
    LODWORD(v17) = 1;
    ProcNumber[1] = *(_PROCESSOR_NUMBER *)(HalpInterruptIpiLines + 20);
    ProcNumber[0] = *(_PROCESSOR_NUMBER *)(HalpInterruptIpiLines + 16);
    v5 = HalpDisableInterrupts();
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), ProcNumber);
    v4 = result;
    if ( v5 )
      _enable();
    goto LABEL_35;
  }
  v7 = v16;
  if ( HalpInterruptClusterModeEnabled )
  {
    v8 = (_DWORD *)HalpInterruptClusterData;
    ProcNumber[0] = 0;
    while ( (unsigned __int64)v8 < HalpInterruptClusterDataEnd )
    {
      if ( (unsigned int)KeAndGroupAffinityEx((_WORD *)a1, (__int64)(v8 + 2), (char *)&v22) )
      {
        LODWORD(v17) = 6;
        DWORD2(v17) = *v8;
        if ( HalpInterruptIpiPolicy == 2 )
        {
          HIDWORD(v17) = -1;
        }
        else
        {
          v9 = v22;
          v10 = 0;
          v11 = (_QWORD)v22 == 0LL;
          ProcNumber[0].Group = WORD4(v22);
          HIDWORD(v17) = 0;
          while ( 1 )
          {
            ProcNumber[0].Number = v10;
            if ( v11 )
              break;
            if ( (v9 & 1) != 0 )
            {
              v3 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(ProcNumber) + 12);
              HIDWORD(v17) = v3;
            }
            ++v10;
            v9 >>= 1;
            v11 = v9 == 0;
          }
          v3 = 0;
        }
        v19 = v7;
        v16 = *(_QWORD *)(HalpInterruptIpiLines + 16);
        v12 = HalpDisableInterrupts();
        result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v16);
        v4 = result;
        if ( v12 )
          _enable();
        if ( (int)result < 0 )
          goto LABEL_36;
      }
      v8 += 6;
    }
    goto LABEL_30;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_30;
  *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 8);
  LODWORD(v17) = 5;
  DWORD2(v17) = 0;
  *(_QWORD *)&v20 = a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(ProcNumber, (unsigned __int16 **)&v20) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * *(_DWORD *)ProcNumber) == 5 )
      DWORD2(v17) |= *(_DWORD *)(HalpInterruptTargets + 24LL * *(_DWORD *)ProcNumber + 8);
  }
  if ( !DWORD2(v17) )
    goto LABEL_30;
  v19 = v7;
  v16 = *(_QWORD *)(HalpInterruptIpiLines + 16);
  v13 = HalpDisableInterrupts();
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v16);
  v4 = result;
  if ( v13 )
    _enable();
  if ( (int)result >= 0 )
  {
LABEL_30:
    *((_QWORD *)&v20 + 1) = v24[0];
    *(_QWORD *)&v20 = &v23;
    ProcNumber[0] = 0;
    LOWORD(v21) = 0;
    do
    {
      result = KeEnumerateNextProcessor(ProcNumber, (unsigned __int16 **)&v20);
      if ( (_DWORD)result )
        break;
      LODWORD(v17) = 4;
      v19 = v7;
      DWORD2(v17) = *(_DWORD *)(HalpInterruptTargets + 24LL * *(_DWORD *)ProcNumber + 8);
      v16 = *(_QWORD *)(HalpInterruptIpiLines + 16);
      v14 = HalpDisableInterrupts();
      result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v16);
      v4 = result;
      if ( v14 )
        _enable();
    }
    while ( (int)result >= 0 );
LABEL_35:
    if ( v4 >= 0 )
      goto LABEL_37;
  }
LABEL_36:
  HalpInterruptSendNmiFailed = 1;
LABEL_37:
  if ( v2 )
    _enable();
  return result;
}
