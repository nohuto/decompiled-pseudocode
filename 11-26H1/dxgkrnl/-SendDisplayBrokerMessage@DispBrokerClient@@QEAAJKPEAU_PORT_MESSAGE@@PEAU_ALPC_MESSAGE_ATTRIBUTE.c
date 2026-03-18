/*
 * XREFs of ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F8020
 * Callers:
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F7EF0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x140415298 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ @ 0x140435A30 (-SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     _DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14005FBFC (_DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x140061438 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?CacheAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAXAEAU?$AlpcDatagram@$04@DispBroker@@@Z @ 0x1401C70DC (-CacheAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAXAEAU-$AlpcDatagram@$04@DispBroker@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403F6C4C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

__int64 __fastcall DispBrokerClient::SendDisplayBrokerMessage(
        DispBrokerClient *this,
        unsigned int a2,
        struct _PORT_MESSAGE *a3,
        struct _ALPC_MESSAGE_ATTRIBUTES *a4,
        struct _PORT_MESSAGE *a5,
        unsigned __int64 *a6,
        struct _ALPC_MESSAGE_ATTRIBUTES *a7,
        union _LARGE_INTEGER *a8)
{
  __int64 TotalLength; // rax
  const wchar_t *v12; // r9
  struct _PORT_MESSAGE *v13; // r14
  struct _ALPC_MESSAGE_ATTRIBUTES *v14; // r12
  unsigned __int64 *v15; // rsi
  unsigned int v16; // ebx
  ULONG Length; // ecx
  union _LARGE_INTEGER *v19; // r15
  int v20; // eax
  unsigned int v21; // edi
  unsigned int *v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // [rsp+20h] [rbp-91h]
  ULONG *v25; // [rsp+50h] [rbp-61h] BYREF
  __int128 v26; // [rsp+60h] [rbp-51h] BYREF
  DispBrokerClient *v27; // [rsp+70h] [rbp-41h]
  ULONG **v28; // [rsp+78h] [rbp-39h]
  _BYTE v29[112]; // [rsp+80h] [rbp-31h] BYREF
  int v30; // [rsp+100h] [rbp+4Fh] BYREF
  int v31; // [rsp+108h] [rbp+57h] BYREF
  DispBrokerClientHandle *v32; // [rsp+110h] [rbp+5Fh] BYREF
  struct _ALPC_MESSAGE_ATTRIBUTES *v33; // [rsp+118h] [rbp+67h]

  v33 = a4;
  v27 = this;
  *(_QWORD *)&v26 = &v31;
  v31 = -1073741811;
  *((_QWORD *)&v26 + 1) = &v30;
  v30 = 0;
  v28 = &v25;
  v25 = 0LL;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v29, &v26);
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    TotalLength = 426LL;
    v12 = L"Caller did not specified the message to be sent to display broker.";
LABEL_8:
    WdLogGlobalForLineNumber = TotalLength;
    goto LABEL_9;
  }
  if ( (unsigned __int64)a3->u1.s1.TotalLength < 0x50 )
  {
    WdLogSingleEntry1(2LL);
    TotalLength = a3->u1.s1.TotalLength;
    v12 = L"The message is smaller than AlpcMessage (size = 0x%I64x).";
    WdLogGlobalForLineNumber = 436;
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, TotalLength, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v16 = v31;
    goto LABEL_11;
  }
  v13 = a5;
  v14 = a7;
  v15 = a6;
  v25 = (ULONG *)a3;
  if ( a5 )
  {
    if ( !a6 )
    {
LABEL_7:
      WdLogSingleEntry0(2LL);
      TotalLength = 445LL;
      v12 = L"The parameters of the receiving message are not consistent.";
      goto LABEL_8;
    }
  }
  else if ( a6 || a7 )
  {
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 8) )
  {
    Length = a3[1].u1.Length;
    if ( Length != 1 && Length - 9 > 1 )
    {
      WdLogSingleEntry1(2LL);
      v24 = v25[10];
      WdLogGlobalForLineNumber = 461;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DisplayBroker is disabled so failing type 0x%I64x",
        v24,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = -1073741637;
      goto LABEL_11;
    }
  }
  v19 = a8;
  if ( (a2 & 0x20000) == 0 )
  {
    if ( a5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 472;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Receiving message does not mean anything when senting async message.",
        472LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_10;
    }
    if ( a8 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 481;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Timeout does not mean anything when senting async message.",
        481LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_10;
    }
  }
  DispBrokerClient::ReferencePort((struct _KTHREAD **)this, &v32);
  if ( v32 )
  {
    v30 |= 2u;
    v20 = ZwAlpcSendWaitReceivePort(*((_QWORD *)v32 + 1), a2, a3, v33, v13, v15, v14, v19);
    v21 = v20;
    v31 = v20;
    if ( v20 == -1073740031 )
    {
      v31 = -1073741772;
      WdLogSingleEntry2(3LL, **(unsigned int **)this, -1073741772LL);
      WdLogGlobalForLineNumber = 556;
    }
    else if ( v20 == 258 )
    {
      v30 |= 4u;
      v31 = -1073741505;
      WdLogSingleEntry3(2LL, **(unsigned int **)this, -1073741505LL, 0LL);
      v22 = *(unsigned int **)this;
      WdLogGlobalForLineNumber = 566;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Timeout to send ALPC message to display broker in session 0x%I64x, returning 0x%I64x.",
        *v22,
        v31,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      if ( v20 >= 0 )
      {
        DispBrokerClientReference::Assign(&v32, 0LL);
        v16 = v21;
        goto LABEL_11;
      }
      WdLogSingleEntry3(2LL, **(unsigned int **)this, v20, 1LL);
      v23 = *(unsigned int **)this;
      WdLogGlobalForLineNumber = 574;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to send ALPC message to display broker in session 0x%I64x (Status = 0x%I64x).",
        *v23,
        v31,
        1LL,
        0LL,
        0LL);
    }
  }
  else
  {
    if ( v25[10] == 5 && a3->u1.s1.TotalLength >= 0x60u )
      DXGSESSIONDATA::CacheAsyncRefreshOrientation(*(_QWORD *)this, v25);
    v31 = -1073741772;
    WdLogSingleEntry2(3LL, **(unsigned int **)this, -1073741772LL);
    WdLogGlobalForLineNumber = 532;
  }
  v16 = v31;
  DispBrokerClientReference::Assign(&v32, 0LL);
LABEL_11:
  DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v29);
  return v16;
}
