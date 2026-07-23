/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x140855850
 * Callers:
 *     DifNtQueryOpenSubKeysExWrapper @ 0x140688730 (DifNtQueryOpenSubKeysExWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x140B2490C (CmpSearchForOpenSubKeys.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
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

  v6 = BufferLength;
  v7 = (int)TargetKey;
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
    ULongFromUser = RtlReadULongFromUser(RequiredSize);
    RtlWriteULongToUser(RequiredSize, ULongFromUser);
    ProbeForWrite(Buffer, v6, 4u);
  }
  v11 = ObReferenceObjectByNameEx(
          v7,
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
          RtlWriteULongToUser(RequiredSize, v27);
        else
          *RequiredSize = v27;
        v17 = (char *)Src[1];
        v18 = *(_DWORD *)Src[1];
        if ( PreviousMode )
        {
          RtlWriteULongToUser(Buffer, v18);
          v17 = (char *)Src[1];
        }
        else
        {
          *(_DWORD *)Buffer = v18;
        }
        if ( v11 >= 0 )
        {
          v19 = v17 - (_BYTE *)Buffer;
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
            RtlCopyToUser(Buffer, v17, v14);
          else
            RtlCopyVolatileMemory(Buffer, v17, v14);
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
  return v11;
}
