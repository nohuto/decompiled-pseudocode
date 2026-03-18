/*
 * XREFs of NtQueryAttributesFile @ 0x1409B5A50
 * Callers:
 *     DifNtQueryAttributesFileWrapper @ 0x1406810A0 (DifNtQueryAttributesFileWrapper.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x1409B5D30 (FsRtlpCleanupEcps.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

__int64 __fastcall NtQueryAttributesFile(__int64 a1, unsigned __int64 a2)
{
  char PreviousMode; // r15
  unsigned __int64 v5; // rbx
  char UCharFromUser; // al
  struct _KTHREAD *CurrentThread; // rdx
  int v8; // ebx
  char v9; // al
  PVOID v10; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-270h] BYREF
  _DWORD v13[12]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v14; // [rsp+80h] [rbp-238h]
  int v15; // [rsp+90h] [rbp-228h]
  __int16 v16; // [rsp+96h] [rbp-222h]
  int v17; // [rsp+A8h] [rbp-210h]
  unsigned __int64 v18; // [rsp+B0h] [rbp-208h]
  _OWORD *v19; // [rsp+B8h] [rbp-200h]
  char v20; // [rsp+D9h] [rbp-1DFh]
  _BYTE *v21; // [rsp+E0h] [rbp-1D8h]
  int v22; // [rsp+E8h] [rbp-1D0h]
  PVOID P[2]; // [rsp+F0h] [rbp-1C8h]
  __int128 v24; // [rsp+100h] [rbp-1B8h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+110h] [rbp-1A8h]
  _OWORD v26[3]; // [rsp+130h] [rbp-188h] BYREF
  __int64 v27; // [rsp+160h] [rbp-158h]
  _BYTE v28[272]; // [rsp+170h] [rbp-148h] BYREF

  memset_0(v28, 0, sizeof(v28));
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = a2;
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 + 40 < a2 || a2 + 40 > 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    do
    {
      UCharFromUser = RtlReadUCharFromUser((volatile void *)v5);
      RtlWriteUCharToUser((_BYTE *)v5, UCharFromUser);
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v5 != ((a2 + 39) & 0xFFFFFFFFFFFFF000uLL) + 4096 );
  }
  memset_0(v13, 0, 0xE0uLL);
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  v13[0] = 14680072;
  v16 = 7;
  v17 = 1;
  v15 = 2113536;
  v18 = a2;
  v19 = v26;
  v20 = 1;
  v21 = v28;
  v14 = a1;
  v22 = 32;
  *(_OWORD *)P = 0LL;
  v24 = 0LL;
  CurrentSilo = 0LL;
  LOWORD(P[0]) = 40;
  CurrentSilo = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v8 = ObOpenObjectByNameEx(
         a1,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         128,
         (__int64)v13,
         (__int64)CurrentSilo,
         &Handle);
  if ( P[1] )
  {
    v9 = FsRtlpCleanupEcps(P[1]);
    v10 = P[1];
    if ( v9 )
      v10 = 0LL;
    P[1] = v10;
  }
  if ( v13[8] == -1096154543 )
    return v13[4];
  if ( v8 >= 0 )
  {
    ObCloseHandle(Handle, PreviousMode);
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v8;
}
