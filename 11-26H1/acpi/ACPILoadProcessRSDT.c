/*
 * XREFs of ACPILoadProcessRSDT @ 0x1400DDE64
 * Callers:
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ACPIPccInitialize @ 0x1400B2344 (ACPIPccInitialize.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1400DB694 (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPILoadProcessFADT @ 0x1400DB9D8 (ACPILoadProcessFADT.c)
 *     ACPIRegDumpAcpiTables @ 0x1400DBB08 (ACPIRegDumpAcpiTables.c)
 */

__int64 ACPILoadProcessRSDT()
{
  char v0; // r12
  char v1; // r13
  int v2; // ebx
  unsigned int *v3; // rax
  int v4; // edx
  unsigned int *v5; // r15
  unsigned int v6; // r14d
  __int64 i; // rbp
  _OWORD *v8; // rsi
  int v9; // eax
  _OWORD *Pool2; // rax
  int v11; // eax
  int v12; // r9d
  _DWORD *v13; // rax
  int v14; // edx
  PVOID v15; // rsi
  PVOID v17; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v1 = 0;
  LOBYTE(v17) = 0;
  v2 = 0;
  v3 = (unsigned int *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v5 = v3;
  if ( !v3 || (v6 = *v3) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431079;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      6,
      18,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
LABEL_58:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        6,
        26,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return (unsigned int)-1072431079;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      6,
      19,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      *v3);
  }
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = *(_OWORD **)&v5[2 * i + 2];
    v9 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 == 1414742611 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          6,
          20,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          *(_QWORD *)&v5[2 * i + 2]);
      }
      continue;
    }
    if ( v9 != 1346584902 && v9 != 1413763923 && v9 != 1413763920 && v9 != 1128878145 && v9 != 1413694288 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_L(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          6,
          21,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          *(_DWORD *)v8);
      }
      continue;
    }
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    P = Pool2;
    if ( !Pool2 )
      goto LABEL_43;
    *Pool2 = *v8;
    Pool2[1] = v8[1];
    *((_DWORD *)Pool2 + 8) = *((_DWORD *)v8 + 8);
    *((_DWORD *)Pool2 + 1) = 36;
    if ( ACPIRegReadAMLRegistryEntry((const void **)&P, v4) )
      v8 = P;
    else
      ExFreePoolWithTag(P, 0);
    v4 = *(_DWORD *)v8 - 1128878145;
    if ( *(_DWORD *)v8 == 1128878145 )
    {
      if ( !v1 )
      {
        v1 = 1;
        *((_QWORD *)AcpiInformation + 4) = v8;
        goto LABEL_41;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 23;
        goto LABEL_40;
      }
    }
    else
    {
      v4 = *(_DWORD *)v8 - 1346584902;
      if ( *(_DWORD *)v8 == 1346584902 )
      {
        if ( !v0 )
        {
          v0 = 1;
          *((_QWORD *)AcpiInformation + 1) = v8;
          v11 = ACPILoadProcessFADT();
          goto LABEL_27;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 22;
          goto LABEL_40;
        }
      }
      else
      {
        v4 = *(_DWORD *)v8 - 1413694288;
        if ( *(_DWORD *)v8 == 1413694288 )
        {
          if ( !(_BYTE)v17 )
          {
            LOBYTE(v17) = 1;
            v11 = ACPIPccInitialize((__int64)v8);
            goto LABEL_27;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = 24;
LABEL_40:
            LOBYTE(v4) = 4;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v4,
              6,
              v12,
              (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
          }
        }
        else
        {
          v4 = *(_DWORD *)v8 - 1413763920;
          if ( *(_DWORD *)v8 == 1413763920 || *(_DWORD *)v8 == 1413763923 )
          {
            v11 = ACPILoadAddDynamicDataBlockTable((__int64)v8, 0);
LABEL_27:
            v2 = v11;
          }
        }
      }
    }
LABEL_41:
    if ( v2 < 0 )
      goto LABEL_54;
  }
  if ( g_SimulatorCallbackObject || AcpiLoadSimulatorTable )
  {
    v13 = (_DWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    v17 = v13;
    if ( !v13 )
    {
LABEL_43:
      v2 = -1073741670;
      goto LABEL_54;
    }
    *v13 = 1413763923;
    v13[1] = 36;
    *((_WORD *)v13 + 4) = 1;
    v13[6] = 1;
    v13[8] = 1;
    *(_DWORD *)((char *)v13 + 10) = 1413894989;
    *((_QWORD *)v13 + 2) = 0x7274616C756D6973LL;
    v13[7] = 1413894989;
    if ( ACPIRegReadAMLRegistryEntry((const void **)&v17, 77) )
    {
      v15 = v17;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          6,
          25,
          (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
          (char)v17);
      }
      v2 = ACPILoadAddDynamicDataBlockTable((__int64)v15, 0);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(v15, 0);
        goto LABEL_54;
      }
    }
    else
    {
      ExFreePoolWithTag(v17, 0);
    }
  }
  ACPIRegDumpAcpiTables();
LABEL_54:
  if ( !v0 )
    goto LABEL_58;
  return (unsigned int)v2;
}
