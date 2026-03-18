/*
 * XREFs of _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x140124150
 * Callers:
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140123C6C (_anonymous_namespace_--xxxSwitchCursors.c)
 * Callees:
 *     xxxClientLoadImage @ 0x1401244C4 (xxxClientLoadImage.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124AB0 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 */

__int64 __fastcall anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  int v5; // esi
  char *v6; // rax
  __int64 Image; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  _DWORD v10[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h]

  v10[1] = 0;
  v2 = (char *)&unk_140353F38;
  v3 = 4LL;
  v5 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 2056LL);
  do
  {
    v6 = v2 - 4;
    if ( !v5 )
      v6 = v2;
    v11 = *(unsigned __int16 *)v6;
    v10[0] = 0;
    Image = xxxClientLoadImage((unsigned int)v10, v4, 2, 0, 0, 64);
    if ( Image )
      zzzInternalSetSystemCursor(Image, *((unsigned int *)v2 - 2), v10, 5LL);
    v2 += 12;
    --v3;
  }
  while ( v3 );
  result = W32GetUserSessionState(v8, v4);
  *(_DWORD *)(*(_QWORD *)(result + 36312) + 88LL) = 1;
  return result;
}
