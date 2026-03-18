/*
 * XREFs of ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1401203D8
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14009F5B4 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     ApiSetEditionPreserveSystemClippedMouseInput @ 0x140120508 (ApiSetEditionPreserveSystemClippedMouseInput.c)
 *     IsEditionPostRawMouseInputMessageSupported @ 0x14012056C (IsEditionPostRawMouseInputMessageSupported.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x140136EE4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  unsigned int v8; // ebx

  v2 = *(unsigned int *)(a1 + 88);
  v3 = *(unsigned int *)(a1 + 72);
  v4 = (_DWORD)v2 == 0 ? 0x20 : 0;
  if ( (v3 & 0x1000) != 0 )
    v4 = (unsigned int)v4 | 2;
  if ( (v3 & 0x80u) != 0LL )
    v4 = (unsigned int)v4 | 8;
  if ( (v3 & 0x20) != 0 )
    v4 = (unsigned int)v4 | 1;
  if ( (v3 & 0x800) != 0 )
    v4 = (unsigned int)v4 | 0x40;
  if ( (v3 & 0x4000) != 0 )
    LODWORD(v4) = v4 | 0x100;
  v5 = v4 | 4;
  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    v5 = v4;
  if ( (v3 & 0x400) != 0 )
    v5 |= 0x400u;
  if ( (v3 & 0x10) != 0 )
    v5 |= 0x80u;
  if ( (v3 & 0x8000) != 0 )
    v5 |= 0x200u;
  if ( (v3 & 8) != 0 )
    v5 |= 0x2000u;
  if ( (_DWORD)v2 )
    goto LABEL_33;
  v6 = *(_DWORD *)(a1 + 76);
  if ( v6 && (v6 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2426LL);
  if ( (*(_DWORD *)(a1 + 76) & 8) != 0
    || (unsigned int)IsEditionPostRawMouseInputMessageSupported(v2, v4, v3) == -1073741637 )
  {
LABEL_33:
    v5 |= 0x10u;
  }
  v7 = v5 | 0x800;
  if ( *(_DWORD *)(a1 + 88) != 4 )
    v7 = v5;
  v8 = v7;
  if ( (unsigned int)ApiSetEditionPreserveSystemClippedMouseInput()
    && (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 2LL) )
  {
    v8 = v7 | 0x1000;
  }
  if ( (*(_DWORD *)(a1 + 72) & 0x20000) != 0 )
    v8 |= 0x20000u;
  return v8;
}
