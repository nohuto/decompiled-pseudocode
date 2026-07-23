/*
 * XREFs of PopPepDeviceDState @ 0x1403BD1C4
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404D4680 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 * Callees:
 *     PopPepUpdateIdleStateRefCount @ 0x1403BBF88 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403BCFD8 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     PopPlNotifyDeviceDState @ 0x1403BD6EC (PopPlNotifyDeviceDState.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x1403BD938 (PopFxUpdateDeviceAccountingEnhanced.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140608654 (PopFxUpdateComponentPerfStateNominalChange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepDeviceDState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  int v6; // ebx
  char v7; // r12
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // r13d
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // r13d
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int i; // ebx
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  int v23; // [rsp+38h] [rbp-40h]
  char v24; // [rsp+3Ch] [rbp-3Ch]
  __int16 v25; // [rsp+3Dh] [rbp-3Bh]
  char v26; // [rsp+3Fh] [rbp-39h]
  int v27; // [rsp+80h] [rbp+8h]
  int v28; // [rsp+90h] [rbp+18h]
  int v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  v4 = a2;
  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        LOBYTE(a3) = 1;
        result = PopPepUpdateConstraints(a1, 4LL, a3);
      }
    }
  }
  else
  {
    if ( a2 > 1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
      PopPepUpdateConstraints(a1, 4LL, 0LL);
      result = (unsigned int)(v6 - 1);
      if ( (unsigned int)result <= 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
    }
    v10 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v10 != (_DWORD)v4 )
    {
      LOBYTE(a4) = 0;
      result = PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v10, (unsigned int)v4, a4);
    }
  }
  if ( !*(_BYTE *)(a1 + 124) && !*(_BYTE *)(a1 + 188) )
  {
    if ( !v7 )
      return result;
    goto LABEL_27;
  }
  v11 = 0;
  if ( (_DWORD)v4 != 4 )
    v11 = *(_DWORD *)(a1 + 4 * v4 + 140);
  v12 = *(int *)(a1 + 168);
  v28 = v11;
  v13 = 0;
  if ( (_DWORD)v12 != 4 )
    v13 = *(_DWORD *)(a1 + 4 * v12 + 140);
  v27 = v13;
  if ( !v7 && (_DWORD)v12 != (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v17 = 0;
      if ( *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v18 = 208LL * v17;
          v19 = *(unsigned int *)(v18 + a1 + 368);
          PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(*(_QWORD *)(v18 + a1 + 392) + 24 * v19 + 16), 1, a1, v17);
          PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(_DWORD *)(v18 + a1 + 200), v19, 0);
          ++v17;
        }
        while ( v17 < *(_DWORD *)(a1 + 180) );
        v13 = v27;
        v6 = v29;
      }
      v11 = v28;
    }
    PopPepUpdateIdleStateRefCount(v13, v11, 1, a1, 0xFFFFFFFF);
    result = PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), (unsigned int)v4, 0LL);
  }
  if ( *(_BYTE *)(a1 + 124) )
  {
    v14 = *(_QWORD *)(a1 + 32);
    v26 = 0;
    v23 = v4;
    v24 = v7;
    v25 = v6 == 1;
    v22 = *(_QWORD *)(v14 + 72);
    result = guard_dispatch_icall_no_overrides(5LL, &v22, a3);
  }
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 168) != (_DWORD)v4 )
    {
      if ( PopFxPerfQueryOnDevicePowerChanges && (*(_BYTE *)(a1 + 177) || *(_BYTE *)(a1 + 176) && (_DWORD)v4 == 1) )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
        {
          v21 = 208LL * i;
          if ( *(_BYTE *)(v21 + a1 + 376) )
          {
            LOBYTE(a3) = 1;
            PopFxUpdateComponentPerfStateNominalChange(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v21 + a1 + 200),
              a3,
              (unsigned int)v4);
          }
        }
      }
      if ( *(_DWORD *)(a1 + 168) == 1 && *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v16 = 208LL * v5;
          PopPepUpdateIdleStateRefCount(
            *(_DWORD *)(*(_QWORD *)(v16 + a1 + 392) + 24LL * *(unsigned int *)(v16 + a1 + 368) + 16),
            0,
            0,
            a1,
            v5);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(_DWORD *)(v16 + a1 + 200),
            *(_DWORD *)(v16 + a1 + 380) - 1,
            1);
          ++v5;
        }
        while ( v5 < *(_DWORD *)(a1 + 180) );
      }
      PopPepUpdateIdleStateRefCount(v13, v11, 0, a1, 0xFFFFFFFF);
      result = PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), (unsigned int)v4, 1LL);
    }
LABEL_27:
    v15 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v15 != (_DWORD)v4 )
    {
      LOBYTE(a4) = v7;
      result = PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v15, (unsigned int)v4, a4);
      *(_DWORD *)(a1 + 168) = v4;
    }
  }
  return result;
}
