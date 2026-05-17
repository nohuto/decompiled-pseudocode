/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x18002B6D0
 * Callers:
 *     TppIopExecuteCallback @ 0x18002ABD0 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18002BEA0 (TppExecuteWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x1800C0640 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     NtAlpcSetInformation @ 0x180160110 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

struct _TEB *__fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rdi
  signed __int32 v8; // r14d
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rbp
  void *v12; // rcx
  __int64 v13; // rdi
  struct _TEB *v14; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v17; // rdx
  struct _TEB *result; // rax
  struct _TEB **v19; // rdi
  signed __int32 v20; // r8d
  __int64 v21; // rax
  int v22; // eax
  signed __int32 v23; // ecx
  signed __int32 v24; // edx
  __int64 v25; // rcx
  signed __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v28[2]; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+50h] [rbp-28h]
  int v30; // [rsp+54h] [rbp-24h]

  v2 = *(_QWORD *)(a2 + 96);
  if ( v2 && v2 != -1 )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
  {
    v5 = *(_DWORD *)(a1 + 72) == 0;
    LODWORD(v27) = 0;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 184);
      if ( v6 )
        v7 = *(_QWORD *)(v6 + 144);
      else
        v7 = *(_QWORD *)(a1 + 128);
      if ( v7 && TppPoolpSerializedPool != v7 )
      {
        v8 = _InterlockedDecrement((volatile signed __int32 *)(v7 + 416));
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 420));
        _m_prefetchw((const void *)(v7 + 8));
        v9 = *(_QWORD *)(v7 + 8);
        v26 = v9;
        do
        {
          LODWORD(v26) = ((__int16)v9 + 1) ^ (v9 ^ ((__int16)v9 + 1)) & 0xFFFF0000;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v26, v9);
          v26 = v9;
        }
        while ( v10 != v9 );
        *(_DWORD *)(a1 + 144) |= 0x10u;
        v11 = *(_QWORD *)(a1 + 136);
        *(_DWORD *)(a1 + 72) = 1;
        if ( v11 && (*(_BYTE *)(v11 + 288) & 3) == 3 )
        {
          while ( 1 )
          {
            v20 = *(_DWORD *)(v11 + 284);
            v21 = *(_QWORD *)(v11 + 216);
            if ( !v21 || (v22 = *(_DWORD *)(v21 + 440)) == 0 )
              v22 = MEMORY[0x7FFE03C0];
            v23 = v22 + *(_DWORD *)(*(_QWORD *)(v11 + 216) + 420LL);
            v24 = v23 + v22;
            if ( v20 >= v23 && v20 <= v22 + v24 )
              break;
            if ( v20 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 284), v24, v20) )
            {
              v25 = *(_QWORD *)(v11 + 272);
              LODWORD(v26) = v24;
              NtAlpcSetInformation(v25, 8LL, &v26, 4LL);
            }
          }
        }
        if ( !v8 )
        {
          LODWORD(v27) = 1;
          NtSetInformationWorkerFactory(*(_QWORD *)(v7 + 56), 9LL, &v27, 4LL);
        }
      }
    }
    else
    {
      TppRaiseInvalidParameter();
    }
  }
  v12 = *(void **)(a2 + 104);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 80) = v12;
    v13 = 2147353488LL;
    v14 = NtCurrentTeb();
    SubProcessTag = v14->SubProcessTag;
    v14->SubProcessTag = v12;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v17 = (__int64)NtCurrentPeb()->SharedData + 566;
    else
      v17 = 2147353488LL;
    if ( *(_BYTE *)v17 && v12 != SubProcessTag )
    {
      memset(v28, 0, sizeof(v28));
      WORD3(v28[0]) = 1349;
      v29 = (int)SubProcessTag;
      v30 = (int)v12;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 566;
      NtTraceEvent(*(unsigned __int8 *)v13, 1026LL, 8LL, v28);
    }
  }
  result = NtCurrentTeb();
  v19 = (struct _TEB **)(a2 + 128);
  result->ActivityId = *(_GUID *)(a2 + 112);
  if ( a2 != -128 )
  {
    if ( *(struct _TEB **)NtCurrentTeb()->WorkingOnBehalfTicket != *v19 )
    {
      result = (struct _TEB *)NtSetInformationThread(-2LL, 44LL, v19, 8LL, v26, v27);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v19;
    }
    result = *v19;
    *(_QWORD *)(a1 + 248) = *v19;
  }
  return result;
}
