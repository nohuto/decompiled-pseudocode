/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x14015BB60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x14015BDFC (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int16 a3, int a4, unsigned int a5)
{
  __int64 *i; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rbx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __m128i v25; // xmm1
  int v26; // [rsp+20h] [rbp-A1h]
  _OWORD v27[7]; // [rsp+30h] [rbp-91h] BYREF
  char v28; // [rsp+A0h] [rbp-21h]
  int v29; // [rsp+A1h] [rbp-20h]
  __int16 v30; // [rsp+A5h] [rbp-1Ch]
  char v31; // [rsp+A7h] [rbp-1Ah]
  PERESOURCE *v32[8]; // [rsp+B0h] [rbp-11h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v32,
    (PERESOURCE *)(a1 + 32),
    0LL);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  }
  for ( i = *(__int64 **)(a1 + 64); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(a1 + 64) )
    {
      v29 = 0;
      v30 = 0;
      v31 = 0;
      memset(v27, 0, sizeof(v27));
      v10 = v27[1];
      *a2 = v27[0];
      v28 = 0;
      v11 = v27[2];
      a2[1] = v10;
      v12 = v27[3];
      a2[2] = v11;
      v13 = v27[4];
      a2[3] = v12;
      v14 = v27[5];
      a2[4] = v13;
      v15 = v27[6];
      a2[5] = v14;
      a2[6] = v15;
      CInputDest::~CInputDest((CInputDest *)v27);
      goto LABEL_6;
    }
    if ( *((_WORD *)i + 16) == a3 )
      break;
  }
  v18 = i + 30;
  v19 = (__int64 *)i[30];
  if ( v19 == v18 )
    goto LABEL_17;
  do
  {
    v20 = v19;
    if ( *((_DWORD *)v19 + 6) == a4 )
      break;
    v19 = (__int64 *)*v19;
  }
  while ( v19 != v18 );
  if ( v19 == v18 )
  {
LABEL_17:
    v29 = 0;
    v30 = 0;
    v31 = 0;
    memset(v27, 0, sizeof(v27));
    v21 = v27[1];
    *a2 = v27[0];
    v22 = v27[2];
    a2[1] = v21;
    v23 = v27[3];
    a2[2] = v22;
    v24 = v27[4];
    a2[3] = v23;
    v25 = (__m128i)v27[5];
    a2[4] = v24;
    a2[5] = v25;
    a2[6] = v27[6];
    v28 = 0;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v25, 12)) )
      HMAssignmentUnlock((__int64 *)&v27[5]);
  }
  else
  {
    if ( *((_WORD *)v20 + 10) != a3 )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6200LL);
    }
    if ( *((_DWORD *)v20 + 6) != a4 )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6201LL);
    }
    CTouchProcessor::DelegateCaptureInt(a1, a2, v20, a5, v26);
  }
LABEL_6:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v32, v16);
  return a2;
}
