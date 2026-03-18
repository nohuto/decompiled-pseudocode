/*
 * XREFs of ?UserSetUserObjectCapability@@YAHPEAXK0H@Z @ 0x1401D4CD0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     HMInitializeObjectSecurity @ 0x140107ECC (HMInitializeObjectSecurity.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x140108974 (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x140108B14 (HMAllocateObjectSecurity.c)
 *     ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x1401BC2E4 (-RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z.c)
 */

__int64 __fastcall UserSetUserObjectCapability(void *a1, ACCESS_MASK a2, void *a3, int a4)
{
  __int64 v5; // rdi
  __int64 UserSessionState; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rbx
  int v19; // edx
  int v20; // r8d
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rcx

  v5 = (unsigned __int16)a1;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3);
  v12 = W32GetUserSessionState(v10, v9, v11);
  v13 = *(_QWORD *)(UserSessionState + 19920);
  v14 = (unsigned int)(*(_DWORD *)(v12 + 19928) * v5);
  v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 19864) + 40 * v5;
  if ( !(unsigned __int16)*(_DWORD *)(W32GetUserSessionState(5 * (int)v5, v19, v20)
                                    + 16LL * *(unsigned __int8 *)(v14 + v13 + 24)
                                    + 42628) )
    return 1LL;
  if ( !*(_QWORD *)(v18 + 24) )
  {
    if ( a4 || !(unsigned int)HMAllocateObjectSecurity(v18, *(_BYTE *)(v14 + v13 + 24)) )
      return 0LL;
    LOBYTE(v22) = *(_BYTE *)(v14 + v13 + 24);
    if ( !(unsigned int)HMInitializeObjectSecurity(v18, v22, v23) )
    {
      GreDeleteFastMutex(*(char **)(v18 + 24), v24, v25, v26);
      *(_QWORD *)(v18 + 24) = 0LL;
      return 0LL;
    }
    *(_BYTE *)(v14 + v13 + 25) |= 4u;
    v27 = *(void **)(v18 + 24);
    return AddCapabilityToDescriptor(v27, a2, a3);
  }
  v27 = *(void **)(v18 + 24);
  if ( !a4 )
    return AddCapabilityToDescriptor(v27, a2, a3);
  return RemoveCapabilityFromDescriptor(v27, a2, a3);
}
