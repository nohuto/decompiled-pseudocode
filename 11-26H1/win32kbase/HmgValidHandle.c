/*
 * XREFs of HmgValidHandle @ 0x1401528A0
 * Callers:
 *     GreValidateServerHandle @ 0x1401527F0 (GreValidateServerHandle.c)
 *     UserValidateCopyRgn @ 0x140152810 (UserValidateCopyRgn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall HmgValidHandle(__int64 a1, char a2)
{
  unsigned int v3; // ebx
  __int64 SessionState; // rax
  __int64 v5; // rax

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL) + 16LL))(
         *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
         (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  return v5 && *(_BYTE *)(v5 + 14) == a2 && *(_WORD *)(v5 + 12) == HIWORD(v3);
}
