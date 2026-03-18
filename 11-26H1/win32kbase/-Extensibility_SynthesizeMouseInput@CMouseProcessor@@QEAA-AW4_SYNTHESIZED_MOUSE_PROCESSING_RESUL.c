/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1402235C0
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1401E1680 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     UpconvertTime @ 0x14012E240 (UpconvertTime.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x140136EE4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14013A8FC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  char v5; // bl
  int v8; // edx
  int v9; // ecx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // dx
  bool v13; // zf
  __int16 v14; // ax
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // edx
  int v25; // r8d
  _BYTE v27[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh]
  __int128 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int128 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int128 v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+98h] [rbp-70h]
  _BYTE v35[96]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = a3;
  if ( !IsInputThread((int)a1, a2, a3) )
  {
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2012);
  }
  v8 = *(_DWORD *)(a2 + 32);
  v32 = 0LL;
  v9 = 256;
  v31 = 0LL;
  if ( v8 || *(_DWORD *)(a2 + 36) )
  {
    v10 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v31) = v8;
    WORD1(v31) = v10;
    LODWORD(v32) = *(_DWORD *)(a2 + 36);
    if ( (v5 & 4) != 0 )
      v9 = 258;
  }
  else
  {
    v9 = 264;
  }
  v11 = *(_WORD *)(a2 + 26) & 0xFFF;
  v12 = *(_WORD *)(a2 + 28);
  WORD2(v31) = v11;
  if ( v12 )
  {
    v13 = (v11 & 0xC00) == 0;
    v14 = WORD3(v31);
    if ( !v13 )
      v14 = v12;
    WORD3(v31) = v14;
  }
  if ( (v5 & 2) != 0 )
    v9 |= 0x800u;
  v15 = v9 | 0x200;
  if ( (v5 & 8) != 0 )
    v15 = v9;
  v16 = v15 | 0x400;
  if ( (v5 & 1) == 0 )
    v16 = v15;
  v17 = v16 | 0x2000;
  if ( (v5 & 0x20) == 0 )
    v17 = v16;
  v18 = v17 | 0x10000;
  if ( v5 >= 0 )
    v18 = v17;
  if ( (v5 & 0x10) != 0 )
    v18 = v18 & 0xFFFFFFF3 | 4;
  v19 = *(_DWORD *)(a2 + 8);
  v20 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v29 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v29 = 1LL;
  v33 = v29;
  v34 = 0LL;
  *(_QWORD *)&v29 = UpconvertTime(v19);
  *((_QWORD *)&v29 + 1) = v20;
  v30 = v20;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v35, (__int64)&v31, &v29, v18 | 0x40, (__int64)&v33, a4);
  LOBYTE(v21) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v27, v21, v22, v23);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v35, 0LL);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v27, v24, v25);
  if ( CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)v35, 4) )
    return 2LL;
  else
    return (unsigned int)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)v35, 2) + 1;
}
