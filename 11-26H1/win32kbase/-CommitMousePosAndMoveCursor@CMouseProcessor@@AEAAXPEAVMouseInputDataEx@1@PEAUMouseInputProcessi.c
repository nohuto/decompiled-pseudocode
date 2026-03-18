/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x1400A2084
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ApiSetEditionCommitMousePosAndMove @ 0x1400A1DC4 (ApiSetEditionCommitMousePosAndMove.c)
 *     ?CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z @ 0x1400A233C (-CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z.c)
 *     EditionCommitMousePosAndMove @ 0x1400A24C8 (EditionCommitMousePosAndMove.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400A2568 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1400A26FC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct MouseInputProcessingState *a3,
        struct _MousePacketPerf *a4)
{
  int v4; // eax
  unsigned int v5; // edi
  struct _MousePacketPerf *v6; // r10
  __int64 v9; // r8
  __int16 v10; // cx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  int v13; // edx
  __int64 v14; // r15
  int v15; // r12d
  int v16; // r14d
  unsigned int v17; // r13d
  int (*v18)(void); // rax
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rdx
  struct _MousePacketPerf *v22; // [rsp+48h] [rbp-28h] BYREF
  _WORD v23[4]; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+58h] [rbp-18h]
  int v25; // [rsp+5Ch] [rbp-14h]
  int v26; // [rsp+60h] [rbp-10h]
  unsigned int v27; // [rsp+64h] [rbp-Ch]

  v4 = *((_DWORD *)a2 + 18);
  v5 = 0;
  v22 = a4;
  v6 = a4;
  if ( (v4 & 0x10) == 0 )
  {
    if ( CBaseProcessor::IsUMSuppressed(this) )
    {
      v21 = 4LL;
LABEL_30:
      InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v21, v9);
      goto LABEL_25;
    }
    v6 = v22;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v5 = ApiSetEditionCommitMousePosAndMove((__int64)a3, 0, 0, (int)a2 + 24, 0, 0LL, 6, (__int64)v6);
  }
  else
  {
    if ( (*((_DWORD *)a2 + 18) & 0x8000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3135LL);
    if ( (*((_DWORD *)a3 + 2) || *((_DWORD *)a3 + 3)) && (*((_BYTE *)a2 + 2) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3143LL);
    v10 = *((_WORD *)a2 + 1);
    v11 = *((_DWORD *)a2 + 5);
    v23[0] = 0;
    v23[1] = v10 & 0xF;
    v23[2] = *((_WORD *)a2 + 2);
    v23[3] = *((_WORD *)a2 + 3);
    v25 = *((_DWORD *)a3 + 2) + *((_DWORD *)a2 + 3);
    v26 = *((_DWORD *)a2 + 4) + *((_DWORD *)a3 + 3);
    if ( (v10 & 0x50) != 0 )
      v11 = (unsigned __int8)v11 | 0xFF515700;
    v12 = *((_DWORD *)a2 + 18);
    v13 = (v12 >> 4) & 1;
    v27 = v11;
    v24 = 0;
    if ( (v12 & 2) == 0 )
      v13 |= 2u;
    if ( (v12 & 0x2000) == 0 )
      v13 |= 4u;
    if ( (v12 & 0x10000) != 0 )
      v13 |= 8u;
    v14 = *((_QWORD *)a2 + 7);
    v15 = *((_DWORD *)a2 + 12);
    v16 = v13 | 0x10;
    v17 = v11;
    if ( (*((_WORD *)a2 + 1) & 0x100) == 0 )
      v16 = v13;
    v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(256LL) + 48) + 6416LL);
    if ( !v18 )
      goto LABEL_34;
    if ( v18() >= 0 )
      v5 = EditionCommitMousePosAndMove((_DWORD)a3, v17, (unsigned int)v23, (int)a2 + 24, v15, v14, v16, (__int64)v22);
    if ( (v5 & 8) != 0 )
      *((_QWORD *)a3 + 1) = 0LL;
  }
  if ( !v5 )
  {
LABEL_34:
    v21 = 2LL;
    goto LABEL_30;
  }
LABEL_25:
  v22 = *(struct _MousePacketPerf **)(W32GetUserSessionState(v20, v19, v9) + 19216);
  InputTraceLogging::Mouse::CommitPosition(*((_QWORD *)a2 + 7), &v22, v5);
  if ( v5 && (v5 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2451LL);
  *((_DWORD *)a2 + 19) = v5;
}
