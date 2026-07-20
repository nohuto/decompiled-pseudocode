/*
 * XREFs of CloseHandle @ 0x14001CA80
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001A570 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001A92C (BasepGetVolumeGUIDFromNTName.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140020010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CloseHandle(HANDLE Handle)
{
  HANDLE v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void (*v5)(void); // rax
  NTSTATUS v6; // eax

  v1 = Handle;
  if ( (_DWORD)Handle == -12 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
    v1 = *(HANDLE *)(v4 + 48);
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  else if ( (_DWORD)Handle == -11 || (_DWORD)Handle == -10 )
  {
    if ( (_DWORD)Handle == -11 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v1 = *(HANDLE *)(v3 + 40);
      *(_QWORD *)(v3 + 40) = 0LL;
    }
    else
    {
      v2 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v1 = *(HANDLE *)(v2 + 32);
      *(_QWORD *)(v2 + 32) = 0LL;
    }
  }
  v5 = (void (*)(void))SbSelectProcedure(2880154539LL, 1LL, "kLsE", 4LL);
  if ( v5 )
    v5();
  v6 = NtClose(v1);
  if ( v6 >= 0 )
    return 1LL;
  BaseSetLastNTError((unsigned int)v6);
  return 0LL;
}
