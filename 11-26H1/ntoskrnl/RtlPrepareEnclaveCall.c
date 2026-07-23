/*
 * XREFs of RtlPrepareEnclaveCall @ 0x1404EAF94
 * Callers:
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall RtlPrepareEnclaveCall(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v11; // rdi
  __int64 ULong64FromUser; // rax
  unsigned __int64 v13; // rax

  v11 = *(_QWORD *)(a1 + 384);
  ULong64FromUser = RtlReadULong64FromUser(v11);
  if ( *(_WORD *)(a1 + 368) != 51 || ULong64FromUser != a3 && ULong64FromUser != a4 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 384) = v11 + 8;
  *(_QWORD *)(a1 + 360) = ULong64FromUser;
  if ( a5 )
  {
    v13 = __readmsr(0x6A7u);
    if ( KiUserCetPl3SspCanonicalizeMask )
      v13 &= KiUserCetPl3SspCanonicalizeMask;
    __writemsr(0x6A7u, v13 + 8);
  }
  *(_QWORD *)(a1 + 80) = a2;
  *a6 = *(_QWORD *)(a1 + 360);
  *a7 = *(_QWORD *)(a1 + 344);
  return 0LL;
}
