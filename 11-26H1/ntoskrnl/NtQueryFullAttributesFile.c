/*
 * XREFs of NtQueryFullAttributesFile @ 0x1409868B0
 * Callers:
 *     DifNtQueryFullAttributesFileWrapper @ 0x140685FE0 (DifNtQueryFullAttributesFileWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x140986DF0 (FsRtlpCleanupEcps.c)
 */

NTSTATUS __cdecl NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  char PreviousMode; // di
  PFILE_NETWORK_OPEN_INFORMATION v5; // rax
  struct _KTHREAD *CurrentThread; // rdx
  NTSTATUS v7; // ebx
  char v8; // al
  PVOID v9; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-270h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-268h] BYREF
  int v13; // [rsp+60h] [rbp-258h]
  int v14; // [rsp+70h] [rbp-248h]
  POBJECT_ATTRIBUTES v15; // [rsp+80h] [rbp-238h]
  int v16; // [rsp+90h] [rbp-228h]
  __int16 v17; // [rsp+96h] [rbp-222h]
  int v18; // [rsp+A8h] [rbp-210h]
  PFILE_NETWORK_OPEN_INFORMATION v19; // [rsp+B8h] [rbp-200h]
  char v20; // [rsp+D9h] [rbp-1DFh]
  char v21; // [rsp+DBh] [rbp-1DDh]
  _BYTE *v22; // [rsp+E0h] [rbp-1D8h]
  int v23; // [rsp+E8h] [rbp-1D0h]
  PVOID P[2]; // [rsp+F0h] [rbp-1C8h]
  __int128 v25; // [rsp+100h] [rbp-1B8h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+110h] [rbp-1A8h]
  _OWORD Src[3]; // [rsp+130h] [rbp-188h] BYREF
  __int64 v28; // [rsp+160h] [rbp-158h]
  _BYTE v29[272]; // [rsp+170h] [rbp-148h] BYREF

  memset_0(v29, 0, sizeof(v29));
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForWrite(FileInformation, 0x38uLL, 8u);
  memset_0(v12, 0, 0xE0uLL);
  memset(Src, 0, sizeof(Src));
  v28 = 0LL;
  v12[0] = 14680072;
  v17 = 7;
  v18 = 1;
  v16 = 2113536;
  v20 = 1;
  v21 = 1;
  v22 = v29;
  v15 = ObjectAttributes;
  v23 = 32;
  v5 = (PFILE_NETWORK_OPEN_INFORMATION)Src;
  if ( !PreviousMode )
    v5 = FileInformation;
  v19 = v5;
  *(_OWORD *)P = 0LL;
  v25 = 0LL;
  CurrentSilo = 0LL;
  LOWORD(P[0]) = 40;
  CurrentSilo = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         128,
         (__int64)v12,
         (__int64)CurrentSilo,
         &Handle);
  if ( P[1] )
  {
    v8 = FsRtlpCleanupEcps(P[1]);
    v9 = P[1];
    if ( v8 )
      v9 = 0LL;
    P[1] = v9;
  }
  if ( v14 == -1096154543 )
  {
    v7 = v13;
    if ( v13 >= 0 && PreviousMode )
      RtlCopyToUser(FileInformation, Src, 0x38uLL);
  }
  else if ( v7 >= 0 )
  {
    ObCloseHandle(Handle, PreviousMode);
    return -1073741788;
  }
  return v7;
}
