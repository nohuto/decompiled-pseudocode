/*
 * XREFs of ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140215150
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140061060 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x140062B2C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z @ 0x140066860 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140066E08 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D41C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_a7e2b28c88866e40752e8add3669f9ed_::operator() @ 0x140213588 (_lambda_a7e2b28c88866e40752e8add3669f9ed_--operator().c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline @ 0x14021733C (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall CTouchProcessor::GenerateDeparturesForActivePointers(PERESOURCE *this, struct RIMDEV *a2)
{
  struct RIMDEV *v3; // r12
  char *v4; // rbp
  __int64 i; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PERESOURCE *v9; // rbx
  __int64 *v10; // r14
  unsigned int v11; // r10d
  __int64 v12; // rdi
  char v13; // r12
  struct RIMCOMPLETEFRAME *v14; // rax
  struct CPointerInputFrame *v15; // rax
  const struct CPointerInputFrame *v16; // rax
  const struct CPointerInputFrame *v17; // r14
  int v18; // r10d
  int IsEnabledDeviceUsageNoInline; // eax
  struct CInputPointerNode *v20; // rdx
  int v21; // r8d
  PERESOURCE *v23[16]; // [rsp+38h] [rbp-80h] BYREF
  char v24; // [rsp+C0h] [rbp+8h]
  int v26; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = 0LL;
  if ( tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 16374);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v23, this + 4, 0LL);
  v24 = 0;
  v9 = (PERESOURCE *)this[10];
  if ( v9 != this + 10 )
  {
    v10 = (__int64 *)(this + 6);
    while ( 1 )
    {
      for ( i = *v10; ; i = *(_QWORD *)i )
      {
        if ( (__int64 *)i == v10 )
        {
          v12 = 0LL;
          goto LABEL_12;
        }
        v11 = *(_DWORD *)(i + 40);
        v7 = 0LL;
        if ( v11 )
          break;
LABEL_9:
        ;
      }
      while ( 1 )
      {
        v6 = 480LL * (unsigned int)v7;
        if ( *(_WORD *)(v6 + *(_QWORD *)(i + 232) + 160) == *((_WORD *)v9 + 9) )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v11 )
          goto LABEL_9;
      }
      v12 = CTouchProcessor::ReferenceFrameInt(v6, i - 8);
LABEL_12:
      if ( !v3 || v12 && *(struct RIMDEV **)(*(_QWORD *)(v12 + 256) + 16LL) == v3 )
        break;
      v4 = 0LL;
      v13 = 0;
LABEL_34:
      if ( v12 )
        CTouchProcessor::UnreferenceFrameInt(this, v12);
      if ( v13 )
      {
        v24 = 1;
        v9 = this + 10;
      }
      v9 = (PERESOURCE *)*v9;
      v3 = a2;
      if ( v9 == this + 10 )
        goto LABEL_39;
    }
    v13 = 1;
    if ( v12 )
    {
      v14 = (struct RIMCOMPLETEFRAME *)lambda_a7e2b28c88866e40752e8add3669f9ed_::operator()(v6, v12);
      v4 = (char *)v14;
      if ( v14 )
      {
        v15 = CTouchProcessor::CommitRimCompleteFrame(this, v14, 0, 0);
        if ( v15 )
        {
          v16 = CTouchProcessor::ReferenceInputFrame(this, v15, (struct RIMCOMPLETEFRAME *)v7);
          v17 = v16;
          if ( v16 )
          {
            CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(*((CTouchProcessor **)v16 + 32), v16);
            CTouchProcessor::GenerateMessagesCore(this, -__CFSHR__(v18, 4), -__CFSHR__(v18, 5), 0, v17);
            CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v17);
          }
          v10 = (__int64 *)(this + 6);
        }
      }
    }
    if ( *v9 != (PERESOURCE)v9 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 16515);
      IsEnabledDeviceUsageNoInline = Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline();
      v20 = (struct CInputPointerNode *)(v9 - 2);
      if ( IsEnabledDeviceUsageNoInline )
      {
        v26 = 0;
        CTouchProcessor::CancelActivePointer(this, v20, &v26);
        if ( v26 || *v9 == (PERESOURCE)v9 )
          goto LABEL_31;
        v21 = 16527;
        goto LABEL_30;
      }
      CTouchProcessor::CancelActivePointer(this, v20, 0LL);
      if ( *v9 != (PERESOURCE)v9 )
      {
        v21 = 16533;
LABEL_30:
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, v21);
      }
    }
LABEL_31:
    if ( v4 )
      GreDeleteFastMutex(v4, i, v7, v8);
    v4 = 0LL;
    goto LABEL_34;
  }
LABEL_39:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v23, i);
  return v24;
}
