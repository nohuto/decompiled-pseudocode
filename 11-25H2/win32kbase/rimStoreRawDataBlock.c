/*
 * XREFs of rimStoreRawDataBlock @ 0x140182BD0
 * Callers:
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x14003034C (RIMStoreRawDataInPointerDeviceFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall rimStoreRawDataBlock(__int64 a1, __int64 a2, const void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  unsigned __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rax

  v6 = a4;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 355LL);
  *a6 = 0;
  if ( a3 )
  {
    v8 = *(_DWORD *)(a5 + 48);
    *a6 = v8 + 1;
    if ( v8 != -1 )
    {
      v9 = Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x64727352u);
      if ( v9 )
      {
        v10 = Win32AllocPoolZInitImpl(256LL, v6, 0x64727352u);
        *(_QWORD *)(v9 + 8) = v10;
        if ( v10 )
        {
          v11 = *(void **)(v9 + 8);
          *(_DWORD *)v9 = *a6;
          *(_DWORD *)(v9 + 4) = v6;
          memmove(v11, a3, v6);
          *(_QWORD *)(v9 + 16) = 0LL;
          v12 = *(_QWORD *)(a5 + 64);
          if ( v12 )
          {
            *(_QWORD *)(v12 + 16) = v9;
          }
          else
          {
            if ( *(_DWORD *)(a5 + 48) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 398LL);
            if ( *(_QWORD *)(a5 + 56) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 399LL);
            *(_QWORD *)(a5 + 56) = v9;
          }
          *(_QWORD *)(a5 + 64) = v9;
          *(_DWORD *)(a5 + 48) = *a6;
        }
        else
        {
          GreDeleteFastMutex((char *)v9);
        }
      }
    }
  }
}
