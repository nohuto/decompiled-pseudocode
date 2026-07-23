/*
 * XREFs of RtlAcquirePrivilege @ 0x1800D2720
 * Callers:
 *     LdrpMinimalMapModule @ 0x1800D21E4 (LdrpMinimalMapModule.c)
 *     AcquireDebugPrivilege @ 0x18015A6E8 (AcquireDebugPrivilege.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpOpenThreadToken @ 0x1800D2A80 (RtlpOpenThreadToken.c)
 *     RtlImpersonateSelfEx @ 0x1800D2AF0 (RtlImpersonateSelfEx.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18015F440 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x18015F660 (NtAdjustPrivilegesToken.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v4; // rbp
  char v7; // si
  char *Heap_0; // rax
  char *v9; // rbx
  HANDLE *v10; // r12
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG v14; // eax
  __int64 v15; // rcx
  char *v17; // r8
  _TOKEN_PRIVILEGES *PreviousState; // rax
  void *v19; // rcx
  __int64 ThreadInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  v4 = NumPriv;
  BufferLength = 0;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  v7 = Flags | 1;
  if ( (Flags & 2) == 0 )
    v7 = Flags;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (NumPriv - 1 + 90LL));
  v9 = Heap_0;
  if ( Heap_0 )
  {
    v10 = (HANDLE *)(Heap_0 + 8);
    *(_QWORD *)Heap_0 = 0LL;
    *((_QWORD *)Heap_0 + 1) = 0LL;
    *((_DWORD *)Heap_0 + 8) = 0;
    if ( !NtCurrentTeb()->IsImpersonating )
      goto LABEL_6;
    if ( (v7 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4u, v10);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 1u;
        ThreadInformation[0] = 0LL;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, ThreadInformation, 8u);
        goto LABEL_19;
      }
    }
    else
    {
      v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)Heap_0);
      if ( v11 >= 0 )
      {
LABEL_19:
        if ( *(_QWORD *)v9 )
          goto LABEL_9;
LABEL_6:
        if ( (v7 & 2) != 0 )
        {
          v11 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 2u;
LABEL_9:
            *((_QWORD *)v9 + 3) = v9 + 1064;
            *((_QWORD *)v9 + 2) = v9 + 36;
            *((_DWORD *)v9 + 266) = v4;
            if ( (_DWORD)v4 )
            {
              v12 = 0LL;
              v13 = v4;
              do
              {
                v14 = *Privilege;
                v12 += 12LL;
                v15 = *((_QWORD *)v9 + 3);
                ++Privilege;
                ThreadInformation[0] = v14;
                *(_QWORD *)(v12 + v15 - 8) = v14;
                *(_DWORD *)(v12 + *((_QWORD *)v9 + 3)) = 2;
                --v13;
              }
              while ( v13 );
            }
            BufferLength = 1024;
            v11 = NtAdjustPrivilegesToken(
                    *(HANDLE *)v9,
                    0,
                    *((PTOKEN_PRIVILEGES *)v9 + 3),
                    0x400u,
                    *((PTOKEN_PRIVILEGES *)v9 + 2),
                    &BufferLength);
            if ( v11 == -1073741789 )
            {
              while ( 1 )
              {
                PreviousState = (_TOKEN_PRIVILEGES *)RtlAllocateHeap_0(
                                                       NtCurrentPeb()->ProcessHeap,
                                                       NtdllBaseTag + 1310720,
                                                       BufferLength);
                *((_QWORD *)v9 + 2) = PreviousState;
                if ( !PreviousState )
                  break;
                v11 = NtAdjustPrivilegesToken(
                        *(HANDLE *)v9,
                        0,
                        *((PTOKEN_PRIVILEGES *)v9 + 3),
                        BufferLength,
                        PreviousState,
                        &BufferLength);
                if ( v11 != -1073741789 )
                  goto LABEL_13;
                RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v9 + 2));
              }
              v11 = -1073741801;
            }
            else
            {
LABEL_13:
              if ( v11 == 262 )
              {
                if ( (_DWORD)v4 != 1 )
                  goto LABEL_15;
                v11 = -1073741727;
              }
              else if ( v11 >= 0 )
              {
LABEL_15:
                *ReturnedState = v9;
                return 0;
              }
            }
            v17 = (char *)*((_QWORD *)v9 + 2);
            if ( v17 && v17 != v9 + 36 )
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v17);
            NtClose(*(HANDLE *)v9);
          }
        }
        else
        {
          v11 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 1u;
            goto LABEL_9;
          }
        }
        if ( (v9[32] & 1) != 0 )
        {
          NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
          v19 = (void *)*((_QWORD *)v9 + 1);
          if ( v19 )
            NtClose(v19);
        }
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v11;
  }
  return -1073741801;
}
