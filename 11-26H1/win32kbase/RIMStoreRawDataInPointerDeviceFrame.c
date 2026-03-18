/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1400F9A08
 * Callers:
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1400F955C (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall RIMStoreRawDataInPointerDeviceFrame(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rbp
  _QWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rcx
  __int64 v16; // rax

  v5 = (_QWORD *)(a1 + 728);
  v6 = a4;
  *a5 = 0;
  v8 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    while ( v8[3] != *(_QWORD *)(a2 + 16) )
    {
      v8 = (_QWORD *)*v8;
      if ( v8 == v5 )
        return;
    }
    if ( v8 )
    {
      if ( !*((_DWORD *)v8 + 4) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 837LL);
      if ( !(_DWORD)v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 347LL);
      *a5 = 0;
      if ( a3 )
      {
        v9 = *((_DWORD *)v8 + 12);
        *a5 = v9 + 1;
        if ( v9 != -1 )
        {
          v10 = Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x64727352u);
          if ( v10 )
          {
            v11 = Win32AllocPoolZInitImpl(256LL, v6, 0x64727352u);
            *(_QWORD *)(v10 + 8) = v11;
            if ( v11 )
            {
              v15 = *(void **)(v10 + 8);
              *(_DWORD *)v10 = *a5;
              *(_DWORD *)(v10 + 4) = v6;
              memmove(v15, a3, v6);
              *(_QWORD *)(v10 + 16) = 0LL;
              v16 = v8[8];
              if ( v16 )
              {
                *(_QWORD *)(v16 + 16) = v10;
              }
              else
              {
                if ( *((_DWORD *)v8 + 12) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 390LL);
                if ( v8[7] )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 391LL);
                v8[7] = v10;
              }
              v8[8] = v10;
              *((_DWORD *)v8 + 12) = *a5;
            }
            else
            {
              GreDeleteFastMutex((char *)v10, v12, v13, v14);
            }
          }
        }
      }
    }
  }
}
