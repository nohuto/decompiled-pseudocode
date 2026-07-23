/*
 * XREFs of PspGetSetContextInternal @ 0x140A4CA50
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x140735750 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind2 @ 0x1402CB250 (RtlVirtualUnwind2.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402CB6E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpValidateContextXStateDisabledFeatures @ 0x1403D6D18 (RtlpValidateContextXStateDisabledFeatures.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x1403D9C14 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextIpForUserCet @ 0x1403DA270 (KeVerifyContextIpForUserCet.c)
 *     KeVerifyContextRecord @ 0x1403DA340 (KeVerifyContextRecord.c)
 *     RtlpIsFrameInBoundsEx @ 0x140412060 (RtlpIsFrameInBoundsEx.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     RtlpCaptureContext @ 0x140536E20 (RtlpCaptureContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspSetContextState @ 0x140776D58 (PspSetContextState.c)
 *     PspGetContext @ 0x140A4D120 (PspGetContext.c)
 *     PspSetContext @ 0x140A4D570 (PspSetContext.c)
 *     RtlCopyContext @ 0x140A4D9B0 (RtlCopyContext.c)
 *     VslGetSetSecureContext @ 0x140A4DBAC (VslGetSetSecureContext.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12
  _QWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // r13
  char v8; // cl
  __int64 v9; // rdx
  ULONG v10; // r15d
  _QWORD *InitialStack; // rdi
  __int64 v12; // rax
  _KTRAP_FRAME *TrapFrame; // rdi
  unsigned __int64 v14; // rbx
  int v15; // eax
  int SetSecureContext; // eax
  __int64 result; // rax
  __int64 v18; // rdx
  char v19; // r9
  _QWORD *i; // rcx
  char *v21; // rcx
  __int64 v22; // rdx
  _CONTEXT *v23; // rbx
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp-88h]
  ULONG ContextLength[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp-70h] BYREF
  _KTRAP_FRAME *v29; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-40h]
  void *v34[8]; // [rsp+D8h] [rbp-30h] BYREF
  char v35[144]; // [rsp+118h] [rbp+10h] BYREF
  char v36; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned __int64 v37; // [rsp+1B0h] [rbp+A8h] BYREF
  char v38; // [rsp+1B8h] [rbp+B0h] BYREF
  char v39; // [rsp+1C0h] [rbp+B8h] BYREF
  char v40; // [rsp+1C8h] [rbp+C0h] BYREF
  char v41; // [rsp+1F0h] [rbp+E8h] BYREF
  char v42; // [rsp+1F8h] [rbp+F0h] BYREF
  char v43; // [rsp+200h] [rbp+F8h] BYREF
  char v44; // [rsp+208h] [rbp+100h] BYREF
  unsigned __int64 v45; // [rsp+210h] [rbp+108h]
  char v46; // [rsp+318h] [rbp+210h] BYREF
  char v47; // [rsp+328h] [rbp+220h] BYREF
  char v48; // [rsp+338h] [rbp+230h] BYREF
  char v49; // [rsp+348h] [rbp+240h] BYREF
  char v50; // [rsp+358h] [rbp+250h] BYREF
  char v51; // [rsp+368h] [rbp+260h] BYREF
  char v52; // [rsp+378h] [rbp+270h] BYREF
  char v53; // [rsp+388h] [rbp+280h] BYREF
  char v54; // [rsp+398h] [rbp+290h] BYREF
  char v55; // [rsp+3A8h] [rbp+2A0h] BYREF

  v4 = 0LL;
  v5 = (_QWORD *)(a1 + 128);
  v29 = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  LOBYTE(v24) = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_BYTE *)(a1 + 89);
  v25 = a3;
  v33 = a2;
  ContextLength[0] = 0;
  if ( (v8 & 0x10) != 0 )
  {
    SetSecureContext = KeVerifyContextRecord((__int64)CurrentThread, *(_QWORD *)(a1 + 120), 0LL, 0LL);
    a3 = v25;
    if ( SetSecureContext < 0 )
      goto LABEL_25;
    v8 = *(_BYTE *)(a1 + 89);
  }
  v9 = 400LL;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 48LL);
  if ( !*(_BYTE *)(a1 + 88) )
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
      goto LABEL_55;
    goto LABEL_10;
  }
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) == 0 )
  {
    InitialStack = CurrentThread->InitialStack;
    if ( (InitialStack[1] & 1) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
      v8 = *(_BYTE *)(a1 + 89);
    }
    v12 = 400LL;
    if ( KiFredEnabled )
      v12 = 416LL;
    TrapFrame = (_KTRAP_FRAME *)&InitialStack[v12 / 0xFFFFFFFFFFFFFFF8uLL];
LABEL_10:
    if ( (v8 & 2) == 0 )
    {
      for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
        ;
      if ( KiFredEnabled )
        v9 = 416LL;
      v21 = (char *)&i[v9 / 0xFFFFFFFFFFFFFFF8uLL];
      v5[19] = v21 - 64;
      v5[22] = v21 - 48;
      v5[23] = v21 - 56;
      v5[28] = v21 - 40;
      v5[29] = v21 - 32;
      v5[30] = v21 - 24;
      v5[31] = v21 - 16;
      v5[6] = v21 - 272;
      v5[7] = v21 - 256;
      v5[8] = v21 - 240;
      v5[9] = v21 - 224;
      v5[10] = v21 - 208;
      v5[11] = v21 - 192;
      v5[12] = v21 - 176;
      v5[13] = v21 - 160;
      v5[14] = v21 - 144;
      v5[15] = v21 - 128;
      v5[21] = &TrapFrame->Rbp;
LABEL_18:
      if ( v33 )
      {
        if ( *(_BYTE *)(a1 + 88) == 1 )
        {
          v18 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)ContextLength = 0LL;
          SetSecureContext = KeVerifyContextXStateCetU((__int64)CurrentThread, v18, (unsigned __int64 *)ContextLength);
          if ( SetSecureContext < 0 )
          {
            a3 = v25;
            goto LABEL_25;
          }
          if ( (*(_BYTE *)(a1 + 89) & 4) != 0 )
          {
            v22 = *(_QWORD *)(a1 + 120);
            v30 = 0LL;
            LODWORD(v30) = 3;
            v31 = 0LL;
            SetSecureContext = KeVerifyContextIpForUserCet(
                                 (__int64)CurrentThread,
                                 v22,
                                 (unsigned int *)&v30,
                                 (__int64)ContextLength);
            if ( SetSecureContext < 0 )
            {
              a3 = v25;
              goto LABEL_25;
            }
          }
        }
        v19 = *(_BYTE *)(a1 + 88);
        if ( v19 == 1 )
        {
          SetSecureContext = RtlpValidateContextXStateDisabledFeatures(
                               *(_QWORD *)(a1 + 120),
                               CurrentThread->ExtendedFeatureDisableMask);
          if ( SetSecureContext < 0 )
          {
            a3 = v25;
            goto LABEL_25;
          }
        }
        if ( (v10 & 0x100008) == 0x100008 && v19 == 1 )
          v4 = *(_QWORD *)(a1 + 120) + 256LL;
        if ( CurrentThread[1].WaitBlock[3].Thread
          && v19 == 1
          && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
        {
          PspSetContextState((__int64)CurrentThread, *(_CONTEXT **)(a1 + 120));
        }
        else
        {
          PspSetContext(TrapFrame, v5, *(_QWORD *)(a1 + 120));
        }
      }
      else
      {
        if ( (v10 & 0x100008) == 0x100008 && *(_BYTE *)(a1 + 88) == 1 )
          _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
        if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(a1 + 88) == 1 )
        {
          v23 = *(_CONTEXT **)(a1 + 120);
          PspGetContext(TrapFrame, v5, v23);
          if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
            RtlCopyContext(v23, v23->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Thread);
        }
        else
        {
          PspGetContext(TrapFrame, v5, *(_QWORD *)(a1 + 120));
        }
      }
      a3 = v25;
      SetSecureContext = 0;
      goto LABEL_25;
    }
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v28, (__int64)&v27) )
    {
      memset_0(v34, 0, sizeof(v34));
      v30 = xmmword_141200030;
      v31 = qword_141200040;
      RtlpCaptureContext();
      v5[19] = &v36;
      v5[21] = &v38;
      v5[22] = &v39;
      v5[23] = &v40;
      v5[28] = &v41;
      v5[29] = &v42;
      v5[30] = &v43;
      v5[31] = &v44;
      v5[6] = &v46;
      v5[7] = &v47;
      v5[8] = &v48;
      v5[9] = &v49;
      v5[10] = &v50;
      v5[11] = &v51;
      v5[12] = &v52;
      v5[13] = &v53;
      v5[14] = &v54;
      v5[15] = &v55;
      v5[20] = &v37;
      while ( 1 )
      {
        v14 = v45;
        if ( !MmIsKernelAddress(v45) || !RtlpIsFrameInBoundsEx(&v28, v37, &v27, v34) )
          break;
        v15 = (unsigned int)RtlpLookupFunctionEntryForStackWalks(v14, (__int64)&v30);
        if ( !*((_QWORD *)&v30 + 1) )
          goto LABEL_54;
        if ( (int)RtlVirtualUnwind2(
                    0,
                    SDWORD2(v30),
                    v14,
                    v15,
                    (__int64)v35,
                    (__int64)&v24,
                    (__int64)&v32,
                    (__int64)&v29,
                    (__int64)v5,
                    (__int64)&v28,
                    (__int64)&v27,
                    0LL,
                    0) < 0 )
        {
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent || PspBreakOnContextUnwindFailure )
            NT_ASSERT(
              "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to fin"
              "d the culprit
    Use gh to continue!!
");
          goto LABEL_54;
        }
        if ( v29 == TrapFrame )
          goto LABEL_18;
      }
      if ( !(_BYTE)KdDebuggerNotPresent && (_BYTE)KdDebuggerEnabled || PspBreakOnContextUnwindFailure )
        NT_ASSERT(
          "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to find th"
          "e culprit
    Use gh to continue!!
");
    }
    goto LABEL_54;
  }
  if ( RtlGetExtendedContextLength(v10, ContextLength) < 0 )
  {
LABEL_54:
    a3 = v25;
LABEL_55:
    SetSecureContext = -1073741823;
    goto LABEL_25;
  }
  SetSecureContext = VslGetSetSecureContext(a2, *(_QWORD *)(a1 + 120), ContextLength[0]);
  a3 = v25;
LABEL_25:
  *(_DWORD *)(a1 + 92) = SetSecureContext;
  result = v4;
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *a3 = a1 + 96;
  else
    *a3 = 0LL;
  return result;
}
