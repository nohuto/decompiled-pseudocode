/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x140072854
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x140071E80 (rimProcessMissingPointerDeviceContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1400732B8 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140073934 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1401B5F48 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 **__fastcall RIMCmActiveContactsBeginNoButton(__int64 **a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *i; // r8
  __int64 v9; // xmm1_8
  __int128 v10; // xmm0
  unsigned int v11; // edx
  __int64 *v12; // rdi
  unsigned int v13; // ecx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 j; // r8
  __int64 v18; // xmm1_8
  __int128 v19; // xmm0
  __int128 v21; // [rsp+20h] [rbp-30h]
  __int128 v22; // [rsp+20h] [rbp-30h]
  __int128 v23; // [rsp+38h] [rbp-18h]
  __int128 v24; // [rsp+38h] [rbp-18h]

  v2 = a2 + 1000;
  if ( !*(_DWORD *)(a2 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 461LL);
  if ( !*(_QWORD *)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 48LL);
  if ( !*(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 49LL);
  v5 = *(__int64 **)v2;
  v23 = v2;
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
  if ( !*(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
  v6 = *v5;
  v21 = v2;
  v7 = 0;
  for ( i = *(__int64 **)v2; ; v6 = i[2 * v7] )
  {
    if ( (__int64 *)v6 != &i[2 * v7] )
    {
      v9 = v6;
      v10 = v21;
      goto LABEL_16;
    }
    DWORD2(v21) = ++v7;
    if ( v7 >= *(_DWORD *)(v2 + 8) )
      break;
  }
  if ( v7 != *(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
  if ( !*(_QWORD *)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  if ( !*(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
  *((_QWORD *)&v23 + 1) = *(unsigned int *)(v2 + 8);
  v9 = *(_QWORD *)v2 + 16LL * DWORD2(v23);
  v10 = v23;
LABEL_16:
  *(_OWORD *)a1 = v10;
  a1[2] = (__int64 *)v9;
  if ( !*(_DWORD *)(a2 + 1008) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
  if ( !*(_QWORD *)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
  if ( !*(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
  v11 = *(_DWORD *)(v2 + 8);
  if ( (*a1 != (__int64 *)v2 || *((_DWORD *)a1 + 2) != v11 || a1[2] != (__int64 *)(*(_QWORD *)v2 + 16LL * v11))
    && (a1[2][2] & 4) != 0 )
  {
    if ( !v11 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 483LL);
    if ( *a1 != (__int64 *)v2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 484LL);
    v12 = *a1;
    if ( !**a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    if ( !*((_DWORD *)v12 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    v13 = *((_DWORD *)v12 + 2);
    if ( *a1 == v12 && *((_DWORD *)a1 + 2) == v13 && a1[2] == (__int64 *)(*v12 + 16LL * v13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 485LL);
    if ( !*a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 81LL);
    if ( *((_DWORD *)a1 + 2) >= *((_DWORD *)*a1 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
    v22 = *(_OWORD *)a1;
    v14 = *a1;
    v15 = *a1[2];
    v16 = (unsigned int)a1[1];
    for ( j = **a1; ; v15 = *(_QWORD *)(j + 16LL * v16) )
    {
      if ( v15 != j + 16LL * v16 )
      {
        v18 = v15;
        v19 = v22;
        goto LABEL_44;
      }
      DWORD2(v22) = ++v16;
      if ( v16 >= *(_DWORD *)(v22 + 8) )
        break;
    }
    if ( v16 != *((_DWORD *)v14 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
    if ( !*v14 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    if ( !*((_DWORD *)v14 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    *((_QWORD *)&v24 + 1) = *((unsigned int *)v14 + 2);
    v18 = *v14 + 16LL * DWORD2(v24);
    *(_QWORD *)&v24 = v14;
    v19 = v24;
LABEL_44:
    *(_OWORD *)a1 = v19;
    a1[2] = (__int64 *)v18;
  }
  return a1;
}
