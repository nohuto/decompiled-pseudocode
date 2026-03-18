/*
 * XREFs of SharedAlloc @ 0x140152440
 * Callers:
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(SIZE_T Size, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = Size;
  UserSessionState = W32GetUserSessionState(Size, a2);
  return RtlAllocateHeap(*(PVOID *)(UserSessionState + 19864), 0, v2);
}
