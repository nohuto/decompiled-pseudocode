/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x140220388
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1401BB5D0 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14005E658 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x14005E8F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     UpconvertTime @ 0x1400E7B30 (UpconvertTime.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x14019289C (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  int v8; // edx
  int v9; // ecx
  __int16 v10; // ax
  __int16 v11; // dx
  __int16 v12; // ax
  bool v13; // zf
  __int16 v14; // ax
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _BYTE v24[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh]
  __int128 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int128 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+88h] [rbp-80h] BYREF
  __int64 v31; // [rsp+98h] [rbp-70h]
  _BYTE v32[96]; // [rsp+A8h] [rbp-60h] BYREF

  if ( !IsInputThread((__int64)a1, a2) )
  {
    v25 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2002);
  }
  v8 = *(_DWORD *)(a2 + 32);
  v29 = 0LL;
  v9 = 256;
  v28 = 0LL;
  if ( v8 || *(_DWORD *)(a2 + 36) )
  {
    v10 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v28) = v8;
    WORD1(v28) = v10;
    LODWORD(v29) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v9 = 258;
  }
  else
  {
    v9 = 264;
  }
  v11 = *(_WORD *)(a2 + 28);
  v12 = *(_WORD *)(a2 + 26) & 0xFFF;
  WORD2(v28) = v12;
  if ( v11 )
  {
    v13 = (v12 & 0xC00) == 0;
    v14 = WORD3(v28);
    if ( !v13 )
      v14 = v11;
    WORD3(v28) = v14;
  }
  if ( (a3 & 2) != 0 )
    v9 |= 0x800u;
  v15 = v9 | 0x200;
  if ( (a3 & 8) != 0 )
    v15 = v9;
  v16 = v15 | 0x400;
  if ( (a3 & 1) == 0 )
    v16 = v15;
  v17 = v16 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v17 = v16;
  v18 = v17 | 0x10000;
  if ( a3 >= 0 )
    v18 = v17;
  if ( (a3 & 0x10) != 0 )
    v18 = v18 & 0xFFFFFFF3 | 4;
  v19 = *(_DWORD *)(a2 + 8);
  v20 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v26 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v26 = 1LL;
  v30 = v26;
  v31 = 0LL;
  *(_QWORD *)&v26 = UpconvertTime(v19);
  *((_QWORD *)&v26 + 1) = v20;
  v27 = v20;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v32, (__int64)&v28, &v26, v18 | 0x40, (__int64)&v30, a4);
  LOBYTE(v21) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v24, v21);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v32, 0LL);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v24, v22);
  if ( CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)v32, 4) )
    return 2LL;
  else
    return (unsigned int)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)v32, 2) + 1;
}
