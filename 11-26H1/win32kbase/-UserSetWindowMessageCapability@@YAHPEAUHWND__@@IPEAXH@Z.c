/*
 * XREFs of ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140107D30
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     HMInitializeObjectSecurity @ 0x140107ECC (HMInitializeObjectSecurity.c)
 *     HMInitializeSecurityDescriptor @ 0x140107F60 (HMInitializeSecurityDescriptor.c)
 *     ?AddCapabilityToDescriptor@@YAHPEAXK0@Z @ 0x140108974 (-AddCapabilityToDescriptor@@YAHPEAXK0@Z.c)
 *     HMAllocateObjectSecurity @ 0x140108B14 (HMAllocateObjectSecurity.c)
 *     ?RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z @ 0x1401BC2E4 (-RemoveCapabilityFromDescriptor@@YAHPEAXK0@Z.c)
 */

__int64 __fastcall UserSetWindowMessageCapability(HWND a1, int a2, void *a3, int a4)
{
  __int64 v5; // rdi
  unsigned int v8; // esi
  __int64 UserSessionState; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r15
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _RTL_AVL_TABLE *v26; // rbx
  PVOID v27; // rax
  _OWORD Buffer[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+40h] [rbp-38h]

  v5 = (unsigned __int16)a1;
  v8 = 0;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3);
  v13 = W32GetUserSessionState(v11, v10, v12);
  v14 = *(_QWORD *)(UserSessionState + 19920);
  v15 = (unsigned int)(*(_DWORD *)(v13 + 19928) * v5);
  v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 19864);
  memset(Buffer, 0, sizeof(Buffer));
  v21 = v19 + 40 * v5;
  v31 = 0LL;
  if ( !*(_QWORD *)(v21 + 24) )
  {
    if ( a4 )
      return 0LL;
    LOBYTE(v20) = *(_BYTE *)(v15 + v14 + 24);
    if ( !(unsigned int)HMAllocateObjectSecurity(v19 + 40 * v5, v20) )
      return 0LL;
    LOBYTE(v22) = *(_BYTE *)(v15 + v14 + 24);
    if ( !(unsigned int)HMInitializeObjectSecurity(v21, v22) )
    {
      GreDeleteFastMutex(*(char **)(v21 + 24), v23, v24, v25);
      *(_QWORD *)(v21 + 24) = 0LL;
      return 0LL;
    }
  }
  v26 = (struct _RTL_AVL_TABLE *)(*(_QWORD *)(v21 + 24) + 40LL);
  DWORD2(v31) = a2;
  v27 = RtlLookupElementGenericTableAvl(v26, Buffer);
  if ( a4 )
  {
    if ( !v27 )
      return v8;
    return (unsigned int)RemoveCapabilityFromDescriptor(v27, 0x10001u, a3);
  }
  if ( v27 )
    return (unsigned int)AddCapabilityToDescriptor(v27, 0x10001u, a3);
  if ( (unsigned int)HMInitializeSecurityDescriptor(Buffer, &WinMsgCapGenericMapping) )
  {
    v8 = AddCapabilityToDescriptor(Buffer, 0x10001u, a3);
    if ( v8 )
      RtlInsertElementGenericTableAvl(v26, Buffer, 0x30u, 0LL);
    return v8;
  }
  return 0LL;
}
