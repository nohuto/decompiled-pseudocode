/*
 * XREFs of ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140200300
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x140135908 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14010F174 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140186278 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     _lambda_6b46e4e4378c66c584bfdf6fd4343c38_::operator() @ 0x1401F9E80 (_lambda_6b46e4e4378c66c584bfdf6fd4343c38_--operator().c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FAC30 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140208F4C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x140208F90 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C984 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

char __fastcall CTouchProcessor::GenerateDeparturesForActivePointers(PERESOURCE *this, struct RIMDEV *a2)
{
  struct RIMDEV *v3; // r12
  char *v4; // rbp
  __int64 v5; // rcx
  CTouchProcessor **v6; // r15
  CTouchProcessor *v7; // rbx
  __int64 **v8; // r13
  __int64 *v9; // rdx
  struct CInputPointerNode *v10; // r14
  unsigned int v11; // r10d
  unsigned int v12; // r8d
  __int64 v13; // rdi
  char v14; // r12
  struct RIMCOMPLETEFRAME *v15; // rax
  struct CPointerInputFrame *v16; // rax
  struct RIMCOMPLETEFRAME *v17; // r8
  const struct CPointerInputFrame *v18; // rax
  const struct CPointerInputFrame *v19; // r14
  int v20; // r10d
  PERESOURCE *v22[15]; // [rsp+30h] [rbp-78h] BYREF
  char v23; // [rsp+B0h] [rbp+8h]

  v3 = a2;
  v4 = 0LL;
  if ( tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16451);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v22, this + 4, 0LL);
  v6 = (CTouchProcessor **)(this + 10);
  v23 = 0;
  v7 = (CTouchProcessor *)this[10];
  if ( v7 != (CTouchProcessor *)(this + 10) )
  {
    v8 = (__int64 **)(this + 6);
    do
    {
      v9 = *v8;
      v10 = (CTouchProcessor *)((char *)v7 - 16);
      while ( 1 )
      {
        if ( v9 == (__int64 *)v8 )
        {
          v13 = 0LL;
          goto LABEL_12;
        }
        v11 = *((_DWORD *)v9 + 10);
        v12 = 0;
        if ( v11 )
          break;
LABEL_9:
        v9 = (__int64 *)*v9;
      }
      while ( 1 )
      {
        v5 = 480LL * v12;
        if ( *(_WORD *)(v5 + v9[29] + 160) == *((_WORD *)v7 + 9) )
          break;
        if ( ++v12 >= v11 )
          goto LABEL_9;
      }
      v13 = CTouchProcessor::ReferenceFrameInt(v5, v9 - 1);
LABEL_12:
      if ( !v3 || v13 && *(struct RIMDEV **)(*(_QWORD *)(v13 + 256) + 16LL) == v3 )
      {
        v14 = 1;
        if ( v13 )
        {
          v15 = (struct RIMCOMPLETEFRAME *)lambda_6b46e4e4378c66c584bfdf6fd4343c38_::operator()(v5, v13);
          v4 = (char *)v15;
          if ( v15 )
          {
            v16 = CTouchProcessor::CommitRimCompleteFrame(this, v15, 0, 0);
            if ( v16 )
            {
              v18 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)this, v16, v17, 0);
              v19 = v18;
              if ( v18 )
              {
                CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(*((CTouchProcessor **)v18 + 32), v18);
                CTouchProcessor::GenerateMessagesCore(
                  (CTouchProcessor *)this,
                  -__CFSHR__(v20, 4),
                  -__CFSHR__(v20, 5),
                  0,
                  v19);
                CTouchProcessor::UnreferenceFrame(this, v19);
              }
              v10 = (CTouchProcessor *)((char *)v7 - 16);
            }
          }
        }
        if ( *(CTouchProcessor **)v7 != v7 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16592);
          CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v10);
          if ( *(CTouchProcessor **)v7 != v7 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16594);
        }
        if ( v4 )
          GreDeleteFastMutex(v4);
        v4 = 0LL;
      }
      else
      {
        v4 = 0LL;
        v14 = 0;
      }
      if ( v13 )
        CTouchProcessor::UnreferenceFrameInt(this, v13);
      if ( v14 )
      {
        v7 = *v6;
        v23 = 1;
      }
      else
      {
        v7 = *(CTouchProcessor **)v7;
      }
      v3 = a2;
    }
    while ( v7 != (CTouchProcessor *)v6 );
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v22);
  return v23;
}
