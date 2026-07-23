/*
 * XREFs of MiInsertNewZeroThread @ 0x14050FC38
 * Callers:
 *     MiStartZeroEngineThreads @ 0x140B29FA4 (MiStartZeroEngineThreads.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEngineAffinity @ 0x1402F6724 (MiEngineAffinity.c)
 *     MiIncrementZeroEngineThread @ 0x1404FAFBC (MiIncrementZeroEngineThread.c)
 *     MiRemoveThreadFromEngineLists @ 0x140502E5C (MiRemoveThreadFromEngineLists.c)
 *     MiDeleteZeroThreadContext @ 0x140532C28 (MiDeleteZeroThreadContext.c)
 *     MiMakeSpaceForConductorListZeroThread @ 0x14077C6D8 (MiMakeSpaceForConductorListZeroThread.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInsertNewZeroThread(_QWORD *P)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  PVOID v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  NTSTATUS SpaceForConductorListZeroThread; // esi
  KIRQL v7; // al
  unsigned int v8; // ecx
  KIRQL v9; // r15
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  volatile LONG *v12; // rcx
  __int64 v13; // r8
  __int128 *v14; // rax
  __int128 *v15; // rcx
  KIRQL v16; // r15
  volatile LONG *v17; // rcx
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v21; // [rsp+60h] [rbp-20h] BYREF
  __int128 v22; // [rsp+68h] [rbp-18h] BYREF

  v1 = P[10];
  Handle = 0LL;
  v2 = P;
  v3 = 0LL;
  Object = 0LL;
  v4 = *(_QWORD *)(v1 + 136);
  v22 = 0LL;
  v21 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 256LL) + 128LL);
  SpaceForConductorListZeroThread = MiMakeSpaceForConductorListZeroThread(v4, &v21);
  if ( SpaceForConductorListZeroThread < 0 )
    goto LABEL_30;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v1 + 184) + 14200LL));
  v8 = *(_DWORD *)(v1 + 4);
  v9 = v7;
  if ( v8 >= *(_DWORD *)(v1 + 8) )
  {
    SpaceForConductorListZeroThread = -1073741523;
  }
  else
  {
    *(_DWORD *)(v1 + 4) = v8 + 1;
    v10 = v2 + 20;
    v11 = *(_QWORD **)(v1 + 176);
    if ( *v11 != v1 + 168 )
      __fastfail(3u);
    *v10 = v1 + 168;
    v2[21] = v11;
    *v11 = v10;
    *(_QWORD *)(v1 + 176) = v10;
    MiIncrementZeroEngineThread((__int64)v2, 1);
  }
  v12 = (volatile LONG *)(*(_QWORD *)(v1 + 184) + 14200LL);
  if ( v9 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  else
    ExReleaseSpinLockExclusive(v12, v9);
  v13 = 0LL;
  if ( SpaceForConductorListZeroThread < 0 )
  {
    SpaceForConductorListZeroThread = 0;
LABEL_30:
    MiDeleteZeroThreadContext(v2);
    return (unsigned int)SpaceForConductorListZeroThread;
  }
  if ( *(_DWORD *)v1 )
  {
    v15 = (__int128 *)*MiEngineAffinity(v1);
    v14 = &v22;
    v22 = *v15;
  }
  else
  {
    v14 = 0LL;
  }
  SpaceForConductorListZeroThread = PsCreateSystemThreadEx(
                                      &Handle,
                                      0x1FFFFFLL,
                                      v13,
                                      v5,
                                      v13,
                                      MiBackgroundZeroNodePages,
                                      v2,
                                      v14,
                                      v13);
  if ( SpaceForConductorListZeroThread >= 0 )
  {
    SpaceForConductorListZeroThread = ObReferenceObjectByHandleWithTag(
                                        Handle,
                                        0x1FFFFFu,
                                        (POBJECT_TYPE)PsThreadType,
                                        0,
                                        0x655A6D4Du,
                                        &Object,
                                        0LL);
    ObCloseHandle(Handle, 0);
    v3 = Object;
  }
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v1 + 184) + 14200LL));
  if ( SpaceForConductorListZeroThread < 0 )
  {
    MiRemoveThreadFromEngineLists(v2);
  }
  else
  {
    if ( !*(_BYTE *)(v1 + 34) )
      *(_BYTE *)(v1 + 34) = 1;
    *v21 = v3;
    if ( !v2[9] )
    {
      v2[9] = v3;
      v3 = 0LL;
    }
    ++*(_DWORD *)(v4 + 60);
    v2 = 0LL;
  }
  v17 = (volatile LONG *)(*(_QWORD *)(v1 + 184) + 14200LL);
  if ( v16 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v17);
  else
    ExReleaseSpinLockExclusive(v17, v16);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x655A6D4Du);
  if ( v2 )
    goto LABEL_30;
  return (unsigned int)SpaceForConductorListZeroThread;
}
