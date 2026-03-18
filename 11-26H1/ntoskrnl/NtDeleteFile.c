/*
 * XREFs of NtDeleteFile @ 0x140B28140
 * Callers:
 *     DifNtDeleteFileWrapper @ 0x1406759C0 (DifNtDeleteFileWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x1409B5D30 (FsRtlpCleanupEcps.c)
 */

__int64 __fastcall NtDeleteFile(__int64 a1)
{
  char PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v7[12]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+88h] [rbp-80h]
  int v9; // [rsp+98h] [rbp-70h]
  __int16 v10; // [rsp+9Eh] [rbp-6Ah]
  int v11; // [rsp+B0h] [rbp-58h]
  char v12; // [rsp+E2h] [rbp-26h]
  _BYTE *v13; // [rsp+E8h] [rbp-20h]
  int v14; // [rsp+F0h] [rbp-18h]
  PVOID P[2]; // [rsp+F8h] [rbp-10h]
  __int128 v16; // [rsp+108h] [rbp+0h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+118h] [rbp+10h]
  _BYTE v18[272]; // [rsp+138h] [rbp+30h] BYREF

  memset_0(v18, 0, sizeof(v18));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(v7, 0, 0xE0uLL);
  v7[0] = 14680072;
  v9 = 4096;
  v10 = 7;
  v13 = v18;
  CurrentSilo = 0LL;
  *(_OWORD *)P = 0LL;
  LOWORD(P[0]) = 40;
  v11 = 1;
  v12 = 1;
  v8 = a1;
  v14 = 32;
  v16 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v4 = ObOpenObjectByNameEx(
         a1,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         0x10000,
         (__int64)v7,
         (__int64)CurrentSilo,
         &v6);
  if ( P[1] )
    FsRtlpCleanupEcps((_DWORD *)P[1]);
  result = v7[4];
  if ( v7[8] != -1096154543 )
    return v4;
  return result;
}
