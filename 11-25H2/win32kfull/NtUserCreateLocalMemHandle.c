/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1401D9E30
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, ULONG64 a4)
{
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  _DWORD *v10; // rdx
  unsigned int v11; // eax

  EnterCrit(0LL, 0LL);
  LOBYTE(v6) = 6;
  v8 = HMValidateHandleWithDescriptor(a1, v6);
  v9 = 0;
  if ( v8 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v10 = (_DWORD *)a4;
      v7 = MmUserProbeAddress;
      if ( a4 >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = *(_DWORD *)(v8 + 16);
    }
    if ( a2 && (v11 = *(_DWORD *)(v8 + 16), a3 >= v11) )
      memmove((void *)a2, (const void *)(v8 + 20), v11);
    else
      v9 = -1073741789;
  }
  else
  {
    v9 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
