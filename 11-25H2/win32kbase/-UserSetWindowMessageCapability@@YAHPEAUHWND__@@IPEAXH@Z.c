/*
 * XREFs of ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140126640
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMInitializeObjectSecurity @ 0x1401267E4 (HMInitializeObjectSecurity.c)
 *     HMInitializeSecurityDescriptor @ 0x140126874 (HMInitializeSecurityDescriptor.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x140126F78 (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x140127118 (HMAllocateObjectSecurity.c)
 *     ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x14019DCF0 (-RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z.c)
 */

__int64 __fastcall UserSetWindowMessageCapability(HWND a1, __int64 a2, void *a3, int a4)
{
  __int64 v5; // rdi
  int v7; // r13d
  unsigned int v8; // esi
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  struct _RTL_AVL_TABLE *v20; // rbx
  PVOID v21; // rax
  __int64 v23; // rdx
  _OWORD Buffer[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+40h] [rbp-38h]

  v5 = (unsigned __int16)a1;
  v7 = a2;
  v8 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v12 = W32GetUserSessionState(v11, v10);
  v13 = *(_QWORD *)(UserSessionState + 19888);
  v14 = (unsigned int)(*(_DWORD *)(v12 + 19896) * v5);
  v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19832);
  memset(Buffer, 0, sizeof(Buffer));
  v19 = v17 + 40 * v5;
  v26 = 0LL;
  if ( !*(_QWORD *)(v19 + 24) )
  {
    if ( a4 )
      return 0LL;
    LOBYTE(v18) = *(_BYTE *)(v14 + v13 + 24);
    if ( !(unsigned int)HMAllocateObjectSecurity(v17 + 40 * v5, v18) )
      return 0LL;
    LOBYTE(v23) = *(_BYTE *)(v14 + v13 + 24);
    if ( !(unsigned int)HMInitializeObjectSecurity(v19, v23) )
    {
      GreDeleteFastMutex(*(char **)(v19 + 24));
      *(_QWORD *)(v19 + 24) = 0LL;
      return 0LL;
    }
  }
  v20 = (struct _RTL_AVL_TABLE *)(*(_QWORD *)(v19 + 24) + 40LL);
  DWORD2(v26) = v7;
  v21 = RtlLookupElementGenericTableAvl(v20, Buffer);
  if ( a4 )
  {
    if ( !v21 )
      return v8;
    return (unsigned int)RemoveCapabilityFromDescriptor(v21, 0x10001u, a3);
  }
  if ( v21 )
    return (unsigned int)AddCapabilityToDescriptor(v21, 0x10001u, a3);
  if ( (unsigned int)HMInitializeSecurityDescriptor(Buffer, &WinMsgCapGenericMapping) )
  {
    v8 = AddCapabilityToDescriptor(Buffer, 0x10001u, a3);
    if ( v8 )
      RtlInsertElementGenericTableAvl(v20, Buffer, 0x30u, 0LL);
    return v8;
  }
  return 0LL;
}
