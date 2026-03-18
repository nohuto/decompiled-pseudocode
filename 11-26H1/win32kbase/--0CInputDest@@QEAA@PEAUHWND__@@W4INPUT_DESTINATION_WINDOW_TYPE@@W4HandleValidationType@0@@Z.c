/*
 * XREFs of ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x140067018 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400CCC34 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400CEB40 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x140125F18 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x140126220 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     NtUserReportInertia @ 0x14015FBC0 (NtUserReportInertia.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ValidateHbwnd @ 0x1400533C0 (ValidateHbwnd.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     INPUTDEST_FROM_BASEWND @ 0x140211E30 (INPUTDEST_FROM_BASEWND.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 *__fastcall CInputDest::CInputDest(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 *result; // rax
  __int64 v15; // rax
  __m128i *v16; // rax
  __m128i v17; // [rsp+38h] [rbp-D0h]
  __m128i v18; // [rsp+48h] [rbp-C0h]
  __m128i v19; // [rsp+58h] [rbp-B0h]
  __m128i v20; // [rsp+68h] [rbp-A0h]
  __m128i v21; // [rsp+78h] [rbp-90h]
  __m128i v22; // [rsp+88h] [rbp-80h]
  __int64 *v23[2]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v24[7]; // [rsp+A8h] [rbp-60h] BYREF

  memset(a1, 0, 0x70uLL);
  *((_BYTE *)a1 + 112) = 0;
  memset(v24, 0, sizeof(v24));
  if ( a3 == 2 )
  {
    if ( a4 == 2 )
    {
      v10 = ValidateHwndEx(a2, 1, 0);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 248LL);
      LOBYTE(v8) = 1;
      v10 = HMValidateHandleNoSecure(a2, v8);
    }
    v11 = v10;
    memset(v24, 0, sizeof(v24));
    if ( v11 )
    {
      LODWORD(v24[0]) = 4;
      *(_QWORD *)&v24[5] = v11;
      HIDWORD(v24[5]) = 2;
    }
    v12 = (__m128i)v24[5];
    v17 = (__m128i)v24[0];
    v18 = (__m128i)v24[1];
    v19 = (__m128i)v24[2];
    v20 = (__m128i)v24[3];
    v21 = (__m128i)v24[4];
    v13 = (__m128i)v24[6];
LABEL_9:
    v22 = v13;
    goto LABEL_10;
  }
  if ( a3 == 1 )
  {
    if ( a4 == 2 )
    {
      v15 = ValidateHbwnd(a2, v8, v9);
    }
    else
    {
      if ( a4 != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 262LL);
      LOBYTE(v8) = 23;
      v15 = HMValidateHandleNoSecure(a2, v8);
    }
    v16 = (__m128i *)INPUTDEST_FROM_BASEWND(v24, v15);
    v12 = v16[5];
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v21 = v16[4];
    v13 = v16[6];
    goto LABEL_9;
  }
  v12 = (__m128i)v24[5];
  v22 = (__m128i)v24[6];
  v21 = (__m128i)v24[4];
  v20 = (__m128i)v24[3];
  v19 = (__m128i)v24[2];
  v18 = (__m128i)v24[1];
  v17 = (__m128i)v24[0];
LABEL_10:
  if ( _mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) )
  {
    if ( !v12.m128i_i64[0] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 274LL);
    v23[1] = (__int64 *)v12.m128i_i64[0];
    v23[0] = a1 + 10;
    HMAssignmentLock(v23, 0, v9);
  }
  result = a1;
  *(__m128i *)a1 = v17;
  *((__m128i *)a1 + 1) = v18;
  *((__m128i *)a1 + 2) = v19;
  *((__m128i *)a1 + 3) = v20;
  *((__m128i *)a1 + 4) = v21;
  *((__m128i *)a1 + 5) = v12;
  *((__m128i *)a1 + 6) = v22;
  return result;
}
