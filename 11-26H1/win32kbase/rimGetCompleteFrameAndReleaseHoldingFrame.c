/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140074598
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x140066268 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     rimFreePointerRawDataListWorker @ 0x14007621C (rimFreePointerRawDataListWorker.c)
 *     ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x140076290 (-DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // rcx
  _QWORD *v6; // rdi
  unsigned int v7; // r12d
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // ebp
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  _QWORD *v16; // rax
  unsigned int v17; // ebp
  __int64 i; // r14
  __int64 v19; // r15
  _OWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  char *v26; // rcx
  __int64 result; // rax
  int v28; // eax

  v4 = (_QWORD *)(a1 + 728);
  *a3 = 0LL;
  v6 = (_QWORD *)(a2 + 16);
  v7 = 0;
  v8 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 == v4 )
  {
LABEL_38:
    v8 = 0LL;
LABEL_39:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1020LL);
    goto LABEL_4;
  }
  while ( v8[3] != *v6 )
  {
    v8 = (_QWORD *)*v8;
    if ( v8 == v4 )
      goto LABEL_38;
  }
  if ( !v8 )
    goto LABEL_39;
LABEL_4:
  if ( !*((_DWORD *)v8 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1021LL);
  if ( v8[3] != *v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1022LL);
  if ( !*((_DWORD *)v8 + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1023LL);
  v9 = *((unsigned int *)v8 + 10);
  if ( (_DWORD)v9 != *((_DWORD *)v8 + 11) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1024LL);
    v9 = *((unsigned int *)v8 + 10);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
    McTemplateK0qqq_EtwWriteTransfer(v9, &BeginPointerFrameCommit, (__int64)a3, 0, v9, 0);
  v10 = v8[7];
  v11 = 0LL;
  while ( v10 )
  {
    v28 = *(_DWORD *)(v10 + 4);
    v10 = *(_QWORD *)(v10 + 16);
    v11 = ((v28 + 7) & 0xFFFFFFF8) + (_DWORD)v11 + 24;
  }
  v12 = 192 * *((_DWORD *)v8 + 10);
  v13 = v12 + v11 + 240;
  if ( v13 )
  {
    v14 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v13, 0x66637352u);
    v15 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v7 = 1;
      v16 = v14 + 2;
      v17 = 0;
      v16[1] = v16;
      *v16 = v16;
      v15[6] = *((_DWORD *)v8 + 10);
      *((_QWORD *)v15 + 4) = v8[3];
      *((_QWORD *)v15 + 6) = v8[4];
      *((_QWORD *)v15 + 29) = v15 + 60;
      for ( i = v8[9]; v17 < *((_DWORD *)v8 + 10); i += 192LL )
      {
        v19 = 192LL * v17;
        v20 = (_OWORD *)(v19 + *((_QWORD *)v15 + 29));
        *v20 = *(_OWORD *)i;
        v20[1] = *(_OWORD *)(i + 16);
        v20[2] = *(_OWORD *)(i + 32);
        v20[3] = *(_OWORD *)(i + 48);
        v20[4] = *(_OWORD *)(i + 64);
        v20[5] = *(_OWORD *)(i + 80);
        v20[6] = *(_OWORD *)(i + 96);
        v20[7] = *(_OWORD *)(i + 112);
        v20[8] = *(_OWORD *)(i + 128);
        v20[9] = *(_OWORD *)(i + 144);
        v20[10] = *(_OWORD *)(i + 160);
        v20[11] = *(_OWORD *)(i + 176);
        DbgDumpNode(v17, (struct tagRIMPOINTERINFONODE *)i);
        if ( i == v8[10] )
          *((_QWORD *)v15 + 27) = v19 + *((_QWORD *)v15 + 29);
        ++v17;
      }
      v15[7] = *((_DWORD *)v8 + 12);
      if ( v8[7] )
        *((_QWORD *)v15 + 28) = *((_QWORD *)v15 + 29) + v12;
      v21 = v8[7];
      v22 = *((_QWORD *)v15 + 28);
      while ( 2 )
      {
        if ( v21 )
        {
          while ( 1 )
          {
            *(_DWORD *)v22 = *(_DWORD *)v21;
            *(_DWORD *)(v22 + 4) = *(_DWORD *)(v21 + 4);
            *(_QWORD *)(v22 + 8) = v22 + 24;
            memmove((void *)(v22 + 24), *(const void **)(v21 + 8), *(unsigned int *)(v21 + 4));
            v23 = 0LL;
            v24 = *(_DWORD *)(v21 + 4) + 7;
            *(_QWORD *)(v22 + 16) = 0LL;
            v25 = (v24 & 0xFFFFFFF8) + 24;
            if ( *(_QWORD *)(v21 + 16) )
            {
              v23 = v22 + v25;
              *(_QWORD *)(v22 + 16) = v23;
            }
            v21 = *(_QWORD *)(v21 + 16);
            v22 = v23;
            if ( !v23 )
              break;
            if ( !v21 )
              goto LABEL_30;
          }
          if ( v21 )
          {
LABEL_30:
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1178LL);
            continue;
          }
        }
        break;
      }
      *a3 = v15;
    }
  }
  v26 = (char *)v8[9];
  if ( v26 )
  {
    GreDeleteFastMutex(v26, v11, (__int64)a3, a4);
    v8[9] = 0LL;
  }
  rimFreePointerRawDataListWorker((PVOID)v8[7]);
  result = v7;
  *((_DWORD *)v8 + 4) = 0;
  v8[4] = 0LL;
  v8[5] = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  v8[7] = 0LL;
  v8[8] = 0LL;
  v8[10] = 0LL;
  return result;
}
