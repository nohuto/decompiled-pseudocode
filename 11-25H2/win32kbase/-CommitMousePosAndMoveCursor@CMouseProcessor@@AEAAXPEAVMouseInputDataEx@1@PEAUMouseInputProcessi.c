/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x14018F020
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005ECCC (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140060388 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400B98F0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1400D76EC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1400EC86C (-GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ.c)
 *     ?CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z @ 0x1400ED5F4 (-CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x140194D7C (ApiSetEditionCommitMousePosAndMove.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct MouseInputProcessingState *a3,
        struct _MousePacketPerf *a4)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rcx
  BOOL v15; // ebx
  int v16; // edi
  int v17; // ebx
  bool v18; // al
  int v19; // edx
  int v20; // ecx
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  _WORD v22[4]; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+50h] [rbp-20h]
  int v24; // [rsp+54h] [rbp-1Ch]
  int v25; // [rsp+58h] [rbp-18h]
  int PublicExtraInfo; // [rsp+5Ch] [rbp-14h]

  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16)
    && CBaseProcessor::IsUMSuppressed(this, v8) )
  {
    v9 = 0;
    v10 = 4;
LABEL_24:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v10);
    goto LABEL_25;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v9 = ApiSetEditionCommitMousePosAndMove((_DWORD)a3, 0, 0, (int)a2 + 24, 0, 0LL, 6, (__int64)a4);
  }
  else
  {
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x8000) )
    {
      LODWORD(v21) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3125LL);
    }
    if ( (*((_DWORD *)a3 + 2) || *((_DWORD *)a3 + 3)) && (*((_BYTE *)a2 + 2) & 1) != 0 )
    {
      LODWORD(v21) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3133LL);
    }
    v13 = *((_WORD *)a2 + 1) & 0xF;
    v22[0] = 0;
    v22[1] = v13;
    v22[2] = *((_WORD *)a2 + 2);
    v22[3] = *((_WORD *)a2 + 3);
    v24 = *((_DWORD *)a3 + 2) + *((_DWORD *)a2 + 3);
    v25 = *((_DWORD *)a3 + 3) + *((_DWORD *)a2 + 4);
    PublicExtraInfo = CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(a2);
    v23 = 0;
    v15 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(v14, 16);
    v16 = v15 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2) )
      v16 = v15;
    v17 = v16 | 4;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000) )
      v17 = v16;
    v18 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000);
    v19 = v17 | 8;
    if ( !v18 )
      v19 = v17;
    v20 = v19 | 0x10;
    if ( (*((_WORD *)a2 + 1) & 0x100) == 0 )
      v20 = v19;
    v9 = ApiSetEditionCommitMousePosAndMove(
           (_DWORD)a3,
           PublicExtraInfo,
           (unsigned int)v22,
           (int)a2 + 24,
           *((_DWORD *)a2 + 12),
           *((_QWORD *)a2 + 7),
           v20,
           (__int64)a4);
    if ( (v9 & 8) != 0 )
      *((_QWORD *)a3 + 1) = 0LL;
  }
  if ( !v9 )
  {
    v10 = 2;
    goto LABEL_24;
  }
LABEL_25:
  v21 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19184);
  InputTraceLogging::Mouse::CommitPosition(*((_QWORD *)a2 + 7), (__int64)&v21, v9);
  if ( v9 && (v9 & 1) == 0 )
  {
    LODWORD(v21) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2441LL);
  }
  *((_DWORD *)a2 + 19) = v9;
}
