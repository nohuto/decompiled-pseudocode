/*
 * XREFs of SharedAlloc @ 0x14018F340
 * Callers:
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(SIZE_T Size, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 UserSessionState; // rax

  v3 = Size;
  UserSessionState = W32GetUserSessionState(Size, a2, a3);
  return RtlAllocateHeap(*(PVOID *)(UserSessionState + 19896), 0, v3);
}
