/*
 * XREFs of EditionCommitMousePosAndMove @ 0x140177C10
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 */

__int64 __fastcall EditionCommitMousePosAndMove(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v11; // rbx
  __int64 v12; // rax

  if ( *(_DWORD *)a4 == 2 )
    v11 = *(_QWORD *)(a4 + 8);
  else
    v11 = 0LL;
  v12 = UpconvertTime(a5);
  return xxxMoveEventAbsolute(*a1, a1[1], a2, v11, a3, v12, a6, a7, a8);
}
