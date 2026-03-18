/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140182330
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x14002EF30 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x14002EF5C (rimReclaimHoldingFrame.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1400B36E8 (-DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1400ED090 (EtwTraceBeginPointerFrameCommit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *HoldingFrame; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  unsigned int v16; // r14d
  __int64 i; // r15
  __int64 v18; // r12
  _OWORD *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  int v23; // ecx

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1028LL);
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1029LL);
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1030LL);
  if ( !*((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1031LL);
  if ( *((_DWORD *)HoldingFrame + 10) != *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1032LL);
  EtwTraceBeginPointerFrameCommit(0LL, *((_DWORD *)HoldingFrame + 10), v7);
  v8 = HoldingFrame[7];
  v9 = 0LL;
  while ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 4);
    v8 = *(_QWORD *)(v8 + 16);
    v9 = ((v10 + 7) & 0xFFFFFFF8) + (_DWORD)v9 + 24;
  }
  v11 = 192 * *((_DWORD *)HoldingFrame + 10);
  v12 = v9 + v11 + 240;
  if ( v12 )
  {
    v13 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v12, 0x66637352u);
    v14 = v13;
    if ( v13 )
    {
      *v13 = v12;
      v15 = v13 + 2;
      v16 = 0;
      v15[1] = v15;
      *v15 = v15;
      v14[6] = *((_DWORD *)HoldingFrame + 10);
      *((_QWORD *)v14 + 4) = HoldingFrame[3];
      *((_QWORD *)v14 + 6) = HoldingFrame[4];
      *((_QWORD *)v14 + 29) = v14 + 60;
      for ( i = HoldingFrame[9]; v16 < *((_DWORD *)HoldingFrame + 10); i += 192LL )
      {
        v18 = 192LL * v16;
        v19 = (_OWORD *)(v18 + *((_QWORD *)v14 + 29));
        *v19 = *(_OWORD *)i;
        v19[1] = *(_OWORD *)(i + 16);
        v19[2] = *(_OWORD *)(i + 32);
        v19[3] = *(_OWORD *)(i + 48);
        v19[4] = *(_OWORD *)(i + 64);
        v19[5] = *(_OWORD *)(i + 80);
        v19[6] = *(_OWORD *)(i + 96);
        v19[7] = *(_OWORD *)(i + 112);
        v19[8] = *(_OWORD *)(i + 128);
        v19[9] = *(_OWORD *)(i + 144);
        v19[10] = *(_OWORD *)(i + 160);
        v19[11] = *(_OWORD *)(i + 176);
        DbgDumpNode(v16, (struct tagRIMPOINTERINFONODE *)i);
        if ( i == HoldingFrame[10] )
        {
          v8 = v18 + *((_QWORD *)v14 + 29);
          *((_QWORD *)v14 + 27) = v8;
        }
        ++v16;
      }
      v14[7] = *((_DWORD *)HoldingFrame + 12);
      if ( HoldingFrame[7] )
        *((_QWORD *)v14 + 28) = *((_QWORD *)v14 + 29) + v11;
      v20 = HoldingFrame[7];
      v21 = *((_QWORD *)v14 + 28);
      while ( v20 )
      {
        while ( 1 )
        {
          *(_DWORD *)v21 = *(_DWORD *)v20;
          *(_DWORD *)(v21 + 4) = *(_DWORD *)(v20 + 4);
          *(_QWORD *)(v21 + 8) = v21 + 24;
          memmove((void *)(v21 + 24), *(const void **)(v20 + 8), *(unsigned int *)(v20 + 4));
          v22 = 0LL;
          v23 = *(_DWORD *)(v20 + 4) + 7;
          *(_QWORD *)(v21 + 16) = 0LL;
          v8 = (v23 & 0xFFFFFFF8) + 24;
          if ( *(_QWORD *)(v20 + 16) )
          {
            v22 = v21 + (unsigned int)v8;
            *(_QWORD *)(v21 + 16) = v22;
          }
          v20 = *(_QWORD *)(v20 + 16);
          v21 = v22;
          if ( !v22 )
            break;
          if ( !v20 )
            goto LABEL_29;
        }
        if ( !v20 )
          break;
LABEL_29:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1186LL);
      }
      *a3 = v14;
      v3 = 1;
    }
  }
  rimReclaimHoldingFrame(v8, v9, (__int64)HoldingFrame);
  return v3;
}
