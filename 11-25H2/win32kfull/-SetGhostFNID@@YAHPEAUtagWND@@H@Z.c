/*
 * XREFs of ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1402AE940
 * Callers:
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGhostFNID(struct tagWND *a1, int a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int16 v4; // r8

  v2 = *((_QWORD *)a1 + 5);
  result = 0LL;
  v4 = *(_WORD *)(v2 + 42);
  if ( v4 >= 0 )
  {
    *(_WORD *)(v2 + 42) = a2 != 0 ? 0x2AA : 0;
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= v4 & 0xD000;
    return 1LL;
  }
  return result;
}
