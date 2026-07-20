/*
 * XREFs of CloseHandle @ 0x14001C5D4
 * Callers:
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001ACB8 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001B074 (BasepGetVolumeGUIDFromNTName.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001E6D0 (BaseSetLastNTError.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x14001F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  switch ( (_DWORD)Handle )
  {
    case 0xFFFFFFF4:
      v4 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v1 = *(HANDLE *)(v4 + 48);
      *(_QWORD *)(v4 + 48) = 0LL;
      break;
    case 0xFFFFFFF5:
      v3 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v1 = *(HANDLE *)(v3 + 40);
      *(_QWORD *)(v3 + 40) = 0LL;
      break;
    case 0xFFFFFFF6:
      v2 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v1 = *(HANDLE *)(v2 + 32);
      *(_QWORD *)(v2 + 32) = 0LL;
      break;
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
