/*
 * XREFs of ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x140169480
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMInitializeObjectSecurity @ 0x1401267E4 (HMInitializeObjectSecurity.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x140126F78 (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x140127118 (HMAllocateObjectSecurity.c)
 *     ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x14019DCF0 (-RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z.c)
 */

int __fastcall UserSetUserObjectCapability(void *a1, __int64 a2, void *a3, int a4)
{
  __int64 v5; // rdi
  unsigned int v7; // r12d
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // rdx
  void *v20; // rcx

  v5 = (unsigned __int16)a1;
  v7 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = W32GetUserSessionState(v10, v9);
  v12 = *(_QWORD *)(UserSessionState + 19888);
  v13 = (unsigned int)(*(_DWORD *)(v11 + 19896) * v5);
  v16 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19832) + 40 * v5;
  if ( !(unsigned __int16)*(_DWORD *)(W32GetUserSessionState(v17, 5 * v5)
                                    + 16LL * *(unsigned __int8 *)(v13 + v12 + 24)
                                    + 42604) )
    return 1;
  if ( !*(_QWORD *)(v16 + 24) )
  {
    if ( a4 || !(unsigned int)HMAllocateObjectSecurity(v16, *(_BYTE *)(v13 + v12 + 24)) )
      return 0;
    LOBYTE(v19) = *(_BYTE *)(v13 + v12 + 24);
    if ( !(unsigned int)HMInitializeObjectSecurity(v16, v19) )
    {
      GreDeleteFastMutex(*(char **)(v16 + 24));
      *(_QWORD *)(v16 + 24) = 0LL;
      return 0;
    }
    *(_BYTE *)(v13 + v12 + 25) |= 4u;
  }
  v20 = *(void **)(v16 + 24);
  if ( a4 )
    return RemoveCapabilityFromDescriptor(v20, v7, a3);
  else
    return AddCapabilityToDescriptor(v20, v7, a3);
}
