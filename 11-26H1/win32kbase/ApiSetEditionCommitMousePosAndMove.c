/*
 * XREFs of ApiSetEditionCommitMousePosAndMove @ 0x1400A1DC4
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x1400A2084 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 * Callees:
 *     EditionCommitMousePosAndMove @ 0x1400A24C8 (EditionCommitMousePosAndMove.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionCommitMousePosAndMove(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v11; // r14d
  unsigned int v12; // ebx
  int (*v13)(void); // rax

  v11 = a1;
  v12 = 0;
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6416LL);
  if ( v13 && v13() >= 0 )
    return (unsigned int)EditionCommitMousePosAndMove(v11, a2, a3, a4, a5, a6, a7, a8);
  return v12;
}
