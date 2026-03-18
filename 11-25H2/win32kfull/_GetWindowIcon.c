/*
 * XREFs of _GetWindowIcon @ 0x140130B5C
 * Callers:
 *     NtUserInternalGetWindowIcon @ 0x14012FE80 (NtUserInternalGetWindowIcon.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x1401303C4 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1401310F0 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rax
  _BOOL8 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct tagCURSOR *v11; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  if ( (_DWORD)a2 == 1 )
    v5 = *(_QWORD *)(v2 + 272);
  else
    v5 = *(_QWORD *)(v2 + 264);
  LOBYTE(a2) = 3;
  v6 = (struct tagCURSOR *)HMValidateHandleNoRip(v5, a2);
  if ( (v6
     || ((v9 = *(_QWORD *)(a1 + 136), v3 != 1)
       ? (v6 = *(struct tagCURSOR **)(v9 + 112))
       : (v6 = *(struct tagCURSOR **)(v9 + 80)),
         v6 || (v6 = *(struct tagCURSOR **)(W32GetUserSessionState(v8, v7) + 35128)) != 0LL))
    && (v11 = _DuplicateCursor(v6, v7)) != 0LL )
  {
    return *(_QWORD *)v11;
  }
  else
  {
    return 0LL;
  }
}
