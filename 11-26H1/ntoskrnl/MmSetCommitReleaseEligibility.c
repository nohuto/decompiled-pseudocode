/*
 * XREFs of MmSetCommitReleaseEligibility @ 0x1406EA39C
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MmSetCommitReleaseEligibility(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // ebp
  __int64 v6; // rdi
  KIRQL v7; // al
  int v8; // edx
  unsigned int v9; // ebx
  char v11; // [rsp+23h] [rbp-45h]
  _OWORD v12[3]; // [rsp+28h] [rbp-40h] BYREF

  v3 = 0;
  memset(v12, 0, sizeof(v12));
  v4 = a2;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v12);
  }
  v6 = a1 + 1024;
  v7 = MiLockWorkingSetExclusive(a1 + 1024, a2, a3);
  v8 = *(_DWORD *)(a1 + 1208);
  if ( (*(_DWORD *)(a1 + 500) & 0x20) != 0 )
  {
    v9 = -1073741558;
  }
  else
  {
    if ( v4 )
      v11 = HIBYTE(v8) & 0xCF | 0x10;
    else
      v11 = HIBYTE(v8) & 0xCF;
    *(_BYTE *)(a1 + 1211) = v11;
    v9 = 0;
  }
  MiUnlockWorkingSetExclusive(v6, v7);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v12, 0);
  return v9;
}
