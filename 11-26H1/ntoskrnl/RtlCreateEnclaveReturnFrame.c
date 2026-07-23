/*
 * XREFs of RtlCreateEnclaveReturnFrame @ 0x14062782C
 * Callers:
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 * Callees:
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall RtlCreateEnclaveReturnFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  _QWORD *v13; // rbx
  char *v14; // rsi
  unsigned __int64 v16; // rax
  __int64 v18; // rbx

  v13 = (_QWORD *)(a1 + 360);
  if ( *(_WORD *)(a1 + 368) != 51 || *v13 != a3 )
  {
    v14 = (char *)(*(_QWORD *)(a1 + 384) - 80LL);
    ProbeForWrite(v14, 8uLL, 4u);
    RtlWriteULong64ToUser(v14 + 40, *(_QWORD *)(a1 + 80));
    RtlWriteULong64ToUser(v14 + 56, *v13);
    RtlWriteULong64ToUser(v14 + 64, *(_QWORD *)(a1 + 344));
    *(_QWORD *)(a1 + 384) = v14;
    _R8 = *v13;
    if ( a10 )
    {
      v16 = __readmsr(0x6A7u);
      if ( KiUserCetPl3SspCanonicalizeMask )
        v16 &= KiUserCetPl3SspCanonicalizeMask;
      _RDX = v16 - 8;
      __asm { wrussq  qword ptr [rdx], r8 }
      __writemsr(0x6A7u, v16 - 8);
    }
  }
  if ( a7 )
  {
    v18 = *(_QWORD *)(a1 + 384);
    RtlWriteULong64ToUser(v18 + 64, a8);
    RtlWriteULong64ToUser(v18 + 72, a7);
  }
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 80) = a9;
  *(_QWORD *)(a1 + 360) = a2;
  *(_WORD *)(a1 + 368) = 51;
  return 0LL;
}
