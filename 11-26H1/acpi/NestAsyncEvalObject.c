/*
 * XREFs of NestAsyncEvalObject @ 0x1400704D4
 * Callers:
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 * Callees:
 *     PushCall @ 0x140003230 (PushCall.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     GetThreadCurrentContext @ 0x14000F264 (GetThreadCurrentContext.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     PushPost @ 0x140015C84 (PushPost.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     LogSchedEvent @ 0x140030800 (LogSchedEvent.c)
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 *     PushFrame @ 0x14004944C (PushFrame.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 */

__int64 __fastcall NestAsyncEvalObject(_WORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadCurrentContext; // rdi
  KIRQL v11; // r10
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  _BYTE *ObjectPath; // rax
  const char *v19; // rdx
  void *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbx

  byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  LogSchedEvent(1312904025, ThreadCurrentContext, (__int64)a1, (__int64)EvalMethodComplete, ThreadCurrentContext);
  if ( ThreadCurrentContext )
  {
    a5 = 0LL;
    v12 = PushFrame(ThreadCurrentContext, 1481917262, 0x80u, (__int64)ParseNestedContext, (__int64 **)&a5);
    if ( !v12 )
    {
      *(_QWORD *)(a5 + 32) = a1;
      ReferenceObjectEx((__int64)a1);
      *(_QWORD *)(v13 + 40) = a1;
      ReferenceObjectEx(v14);
      *(_QWORD *)(v15 + 88) = EvalMethodComplete;
      v16 = a6;
      *(_QWORD *)(v15 + 96) = a2;
      *(_QWORD *)(v15 + 104) = v16;
      *(_QWORD *)(v15 + 120) = *(_QWORD *)(ThreadCurrentContext + 104);
      *(_DWORD *)(v15 + 112) = *(_DWORD *)(ThreadCurrentContext + 64);
      LODWORD(v16) = *(_DWORD *)(ThreadCurrentContext + 64);
      *(_QWORD *)(ThreadCurrentContext + 104) = v15;
      *(_DWORD *)(ThreadCurrentContext + 64) = v16 & 0xFFFFFE7F | 0x80;
      if ( a1[33] == 8 )
      {
        if ( !(unsigned int)PushCall((_QWORD *)ThreadCurrentContext, (__int64)a1, v15 + 48) )
        {
          v17 = *(_QWORD *)(ThreadCurrentContext + 416);
          if ( a3 == *(_DWORD *)(v17 + 60) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              ObjectPath = GetObjectPath((__int64)a1);
              v19 = byte_140075A82;
              v20 = ObjectPath;
              if ( ObjectPath )
                v19 = ObjectPath;
              ConPrintf("\nAMLI: %s(", v19);
              if ( v20 )
                ExFreePoolWithTag(v20, 0);
            }
            v21 = 0LL;
            *(_DWORD *)(v17 + 56) = 0;
            if ( a3 )
            {
              while ( !(unsigned int)DupObjData(
                                       *(_QWORD **)(ThreadCurrentContext + 320),
                                       *(_QWORD *)(v17 + 64) + 40 * v21,
                                       a4 + 40 * v21) )
              {
                if ( (gDebugger & 0xD0) != 0 )
                {
                  PrintObject(a4 + 40LL * *(unsigned int *)(v17 + 56));
                  if ( *(_DWORD *)(v17 + 56) + 1 < a3 )
                    ConPrintf(",");
                }
                v21 = (unsigned int)++*(_DWORD *)(v17 + 56);
                if ( (unsigned int)v21 >= a3 )
                  goto LABEL_18;
              }
            }
            else
            {
LABEL_18:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              *(_WORD *)(v17 + 16) = 2;
            }
          }
          else
          {
            LogError(-1072431093);
            AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431093);
            PrintDebugMessage(0x6Cu, (const void *)a3, (const void *)*(unsigned int *)(v17 + 60), 0LL, 0LL);
          }
        }
      }
      else
      {
        v22 = v15 + 48;
        if ( !(unsigned int)PushPost(ThreadCurrentContext, (__int64)ProcessEvalObj, (__int64)a1, 0LL, v15 + 48) )
          ReadObject(ThreadCurrentContext, (__int64)(a1 + 32), v22);
      }
      return 32772;
    }
  }
  else
  {
    v12 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(0LL, -1072431098);
    PrintDebugMessage(0x6Du, a1, 0LL, 0LL, 0LL);
  }
  return v12;
}
