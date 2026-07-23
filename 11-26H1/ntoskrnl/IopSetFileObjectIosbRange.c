/*
 * XREFs of IopSetFileObjectIosbRange @ 0x1407981C0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14021B6F0 (IopAllocateFileObjectExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     IopSetTypeSpecificFoExtension @ 0x1404793A0 (IopSetTypeSpecificFoExtension.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2)
{
  _KPROCESS *i; // rsi
  char **v3; // r14
  PMDL Mdl; // r15
  char **v5; // r13
  __int64 Pool2; // r12
  char *v8; // r13
  _KPROCESS **inserted; // rax
  int v10; // edi
  BOOLEAN v11; // r12
  PVOID MappedSystemVa; // rcx
  __int16 v13; // cx
  char v14; // al
  ULONG v15; // r8d
  char **v16; // rax
  __int64 v17; // rdx
  char **v18; // rdx
  char **j; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rax
  _KPROCESS **v22; // rax
  _KPROCESS **v23; // rcx
  char v24; // [rsp+30h] [rbp-B8h]
  ULONG Length; // [rsp+34h] [rbp-B4h]
  SIZE_T Length_4; // [rsp+38h] [rbp-B0h]
  _KPROCESS *Object; // [rsp+40h] [rbp-A8h]
  __int64 *v28; // [rsp+50h] [rbp-98h] BYREF
  _KPROCESS **v29; // [rsp+58h] [rbp-90h]
  __int64 v30; // [rsp+60h] [rbp-88h]
  char *v31; // [rsp+70h] [rbp-78h]
  _KPROCESS *v32; // [rsp+88h] [rbp-60h]
  _KPROCESS **v33; // [rsp+98h] [rbp-50h]
  _QWORD Buffer[9]; // [rsp+A0h] [rbp-48h] BYREF
  BOOLEAN v37; // [rsp+100h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+108h] [rbp+20h] BYREF

  v28 = 0LL;
  v24 = 0;
  NewElement = 0;
  i = 0LL;
  Buffer[1] = 0LL;
  v3 = 0LL;
  Mdl = 0LL;
  Length_4 = 0LL;
  Object = KeGetCurrentThread()->ApcState.Process;
  v32 = Object;
  v5 = *(char ***)(a2 + 24);
  Pool2 = *((unsigned int *)v5 + 2);
  Length = Pool2;
  if ( !(_DWORD)Pool2 )
    return 3221225485LL;
  v8 = *v5;
  v31 = v8;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&IopPerfIoTrackingLock.Spare35[1]);
  Buffer[0] = Object;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(
                             (PRTL_AVL_TABLE)IopPerfIoTrackingLock.TracingPrivate,
                             Buffer,
                             0x10u,
                             &NewElement);
  v33 = inserted;
  v29 = inserted;
  if ( !inserted )
  {
    v10 = -1073741670;
    v11 = NewElement;
    MappedSystemVa = 0LL;
LABEL_56:
    if ( Mdl )
    {
      if ( MappedSystemVa )
        MmUnmapLockedPages(MappedSystemVa, Mdl);
      MmUnlockPages(Mdl);
      IoFreeMdl(Mdl);
    }
    if ( v3 )
    {
      ObfDereferenceObjectWithTag(Object, 0x70436F49u);
      ExFreePoolWithTag(v3, 0);
    }
    if ( v11 == 1 )
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)IopPerfIoTrackingLock.TracingPrivate, Buffer);
    if ( v24 == 1 )
      ExFreePoolWithTag(i, 0);
    goto LABEL_66;
  }
  v37 = NewElement;
  if ( !NewElement )
  {
    for ( i = inserted[1];
          i && ((char *)i->Header.WaitListHead.Flink != v8 || (char *)i->Header.WaitListHead.Blink != &v8[Pool2]);
          i = (_KPROCESS *)i->DirectoryTableBase )
    {
      ;
    }
  }
  if ( !i )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    i = (_KPROCESS *)Pool2;
    v30 = Pool2;
    if ( !Pool2 )
    {
      MappedSystemVa = 0LL;
LABEL_14:
      v10 = -1073741670;
      v11 = v37;
      goto LABEL_56;
    }
    v24 = 1;
    if ( !Object[1].ReadyTime )
      goto LABEL_20;
    v13 = WORD2(Object[3].PerProcessorCycleTimes);
    if ( v13 == 332 || (v14 = 0, v13 == 452) )
      v14 = 1;
    v15 = 4;
    if ( !v14 )
LABEL_20:
      v15 = 8;
    ProbeForRead(v8, Length, v15);
    Mdl = IoAllocateMdl(v8, Length, 0, 1u, 0LL);
    if ( !Mdl )
      goto LABEL_22;
    v10 = MmProbeAndLockPagesEx((__int64)Mdl, *(_BYTE *)(a2 + 64) & 1 | 2LL);
    if ( v10 < 0 )
    {
LABEL_53:
      v11 = v37;
      goto LABEL_54;
    }
    if ( (Mdl->MdlFlags & 5) != 0 )
      MappedSystemVa = Mdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
    Length_4 = (SIZE_T)MappedSystemVa;
    if ( !MappedSystemVa )
      goto LABEL_14;
    *(_QWORD *)(Pool2 + 24) = Mdl;
    *(_QWORD *)(Pool2 + 8) = v8;
    *(_QWORD *)(Pool2 + 16) = &v8[Length];
    *(_DWORD *)Pool2 = 1;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 32) = MappedSystemVa;
    LODWORD(Pool2) = Length;
  }
  v16 = (char **)ExAllocatePool2(0x40uLL);
  v3 = v16;
  if ( !v16 )
  {
LABEL_22:
    v10 = -1073741670;
    v11 = v37;
LABEL_55:
    MappedSystemVa = (PVOID)Length_4;
    goto LABEL_56;
  }
  *v16 = v8;
  v16[1] = &v8[(unsigned int)Pool2];
  v16[3] = &v8[(unsigned __int64)((char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink)];
  v16[2] = (char *)i->ProfileListHead.Flink;
  v16[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v3[4] = (char *)Object;
  v10 = IopAllocateFileObjectExtension(a1, &v28, 0);
  if ( v10 < 0 )
    goto LABEL_53;
  v10 = IopSetTypeSpecificFoExtension((__int64)v28, 2u, (signed __int64)v3);
  if ( v10 == -1073741823 )
  {
    v17 = *(_QWORD *)(a1 + 208);
    v18 = v17 ? *(char ***)(v17 + 24) : 0LL;
    if ( v3[4] == (char *)Object )
    {
      for ( j = v18; j; j = (char **)j[5] )
      {
        if ( *v3 == *j && v3[1] == j[1] )
        {
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v3, 0);
          v10 = 0;
          goto LABEL_66;
        }
      }
      v20 = (signed __int64)v18[5];
      v3[5] = (char *)v20;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 5, (signed __int64)v3, v20) != v20 )
      {
        _m_prefetchw(v18 + 5);
        do
        {
          v21 = (signed __int64)v18[5];
          v3[5] = (char *)v21;
        }
        while ( _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 5, (signed __int64)v3, v21) != v21 );
      }
      v10 = 0;
    }
  }
  v11 = v37;
  if ( v10 < 0 )
    goto LABEL_55;
  if ( v24 == 1 )
  {
    if ( v37 == 1 )
    {
      v22 = v33;
      *v33 = Object;
      v23 = v22;
    }
    else
    {
      v23 = v29;
      i->DirectoryTableBase = (unsigned __int64)v29[1];
    }
    v23[1] = i;
  }
  else
  {
    ++i->Header.LockNV;
  }
LABEL_54:
  if ( v10 < 0 )
    goto LABEL_55;
LABEL_66:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&IopPerfIoTrackingLock.Spare35[1]);
  return (unsigned int)v10;
}
