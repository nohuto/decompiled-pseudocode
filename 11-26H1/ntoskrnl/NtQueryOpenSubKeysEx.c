/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x14084F540
 * Callers:
 *     DifNtQueryOpenSubKeysExWrapper @ 0x140684B50 (DifNtQueryOpenSubKeysExWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x140B2250C (CmpSearchForOpenSubKeys.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryOpenSubKeysEx(int a1, unsigned int a2, int *a3, unsigned int *a4)
{
  SIZE_T v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  int ULongFromUser; // eax
  size_t v14; // r15
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  char *v17; // rdx
  int v18; // eax
  signed __int64 v19; // r9
  unsigned int v20; // ecx
  __int64 v21; // rcx
  char v23; // [rsp+40h] [rbp-2A8h]
  char v24; // [rsp+42h] [rbp-2A6h]
  PVOID Object[2]; // [rsp+48h] [rbp-2A0h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-290h] BYREF
  __int128 v27; // [rsp+68h] [rbp-280h]
  __int128 v28; // [rsp+78h] [rbp-270h]
  _KAFFINITY_EX v29[2]; // [rsp+88h] [rbp-260h] BYREF

  v6 = a2;
  memset(v29, 0, 72);
  memset_0(&v29[0].StaticBitmap[8], 0, 0x1D0uLL);
  Object[0] = 0LL;
  CmpInitializeParseContext(&v29[0].StaticBitmap[8]);
  *(_OWORD *)Src = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0;
  CmpInitializeThreadInfo(v29);
  v24 = CmpAcquireShutdownRundown(v9, v8);
  if ( !v24 )
  {
    v11 = -1073741431;
    goto LABEL_29;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v11 = -1073741727;
    goto LABEL_29;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v11 = -1073741789;
    goto LABEL_29;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a4);
    RtlWriteULongToUser(a4, ULongFromUser);
    ProbeForWrite(a3, v6, 4u);
  }
  v11 = ObReferenceObjectByNameEx(
          a1,
          0,
          131097,
          (_DWORD)CmKeyObjectType,
          PreviousMode,
          (__int64)&v29[0].StaticBitmap[8],
          (__int64)Object);
  if ( v11 >= 0 )
  {
    LODWORD(Src[0]) = v6;
    v14 = v6;
    Src[1] = (void *)CmpAllocateTransientPoolWithQuota();
    if ( Src[1] )
    {
      CmpLockRegistryExclusive(v10);
      v23 = 1;
      v15 = Object[0];
      v11 = CmpPerformKeyBodyDeletionCheck(Object[0], 0LL);
      if ( v11 >= 0 )
      {
        if ( (*(_DWORD *)(v15[1] + 184LL) & 0x40000) == 0 )
        {
LABEL_8:
          v11 = -1073741811;
          goto LABEL_29;
        }
        *(_DWORD *)Src[1] = 0;
        *(_QWORD *)&v27 = 8LL;
        DWORD2(v27) = 8;
        *((_QWORD *)&v28 + 1) = (char *)Src[1] + v14;
        *(_QWORD *)&v28 = v15;
        CmpAttachToRegistryProcess((PRKAPC_STATE)&v29[0].StaticBitmap[2]);
        CmpSearchForOpenSubKeys(v15[1], 0LL, Src);
        CmpDetachFromRegistryProcess(&v29[0].StaticBitmap[2]);
        v11 = DWORD1(v27);
        CmpUnlockRegistry(v16);
        v23 = 0;
        if ( PreviousMode )
          RtlWriteULongToUser(a4, v27);
        else
          *a4 = v27;
        v17 = (char *)Src[1];
        v18 = *(_DWORD *)Src[1];
        if ( PreviousMode )
        {
          RtlWriteULongToUser(a3, v18);
          v17 = (char *)Src[1];
        }
        else
        {
          *a3 = v18;
        }
        if ( v11 >= 0 )
        {
          v19 = v17 - (char *)a3;
          v20 = 0;
          if ( *(_DWORD *)v17 )
          {
            do
            {
              *(_QWORD *)&v17[24 * ++v20] -= v19;
              v17 = (char *)Src[1];
            }
            while ( v20 < *(_DWORD *)Src[1] );
          }
          if ( PreviousMode )
            RtlCopyToUser(a3, v17, v14);
          else
            RtlCopyVolatileMemory(a3, v17, v14);
          v11 = 0;
        }
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
LABEL_29:
  if ( v23 )
    CmpUnlockRegistry(v10);
  CmpCleanupParseContext(&v29[0].StaticBitmap[8], 0LL);
  if ( v24 )
    CmpReleaseShutdownRundown(v21);
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( Src[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v29);
  return (unsigned int)v11;
}
