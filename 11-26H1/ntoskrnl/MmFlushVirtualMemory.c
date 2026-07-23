/*
 * XREFs of MmFlushVirtualMemory @ 0x140A69F30
 * Callers:
 *     CMFFlushHitsFile @ 0x140848958 (CMFFlushHitsFile.c)
 *     NtFlushVirtualMemory @ 0x140A69D30 (NtFlushVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiFindLastSubsection @ 0x1404466F0 (MiFindLastSubsection.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiFlushAcquire @ 0x1404AC7F4 (MiFlushAcquire.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, __int64 *a3, signed int *a4)
{
  unsigned __int64 v4; // r14
  signed int v5; // esi
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  int v12; // r13d
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // r14
  int VadFlags; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  signed int v18; // edi
  signed int *v19; // rax
  unsigned __int64 v21; // r13
  __int64 ProtoPteAddress; // rax
  __int64 v23; // r8
  unsigned int *LastSubsection; // r13
  __int64 *v25; // r12
  struct _FILE_OBJECT *v26; // r14
  unsigned int *v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // [rsp+28h] [rbp-91h]
  BOOLEAN v30; // [rsp+40h] [rbp-79h]
  char v31; // [rsp+44h] [rbp-75h]
  int v32; // [rsp+48h] [rbp-71h]
  unsigned int *v33; // [rsp+50h] [rbp-69h] BYREF
  __int64 v34; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-59h]
  unsigned __int64 v36; // [rsp+68h] [rbp-51h]
  unsigned int *v37; // [rsp+70h] [rbp-49h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-41h] BYREF
  signed int *v39; // [rsp+80h] [rbp-39h]
  __int128 v40; // [rsp+88h] [rbp-31h] BYREF
  _OWORD v41[3]; // [rsp+98h] [rbp-21h] BYREF

  v4 = *a2;
  v5 = 0;
  v6 = *a3;
  v41[0] = 0LL;
  v7 = 0;
  v39 = a4;
  v8 = v4 - 1;
  v37 = 0LL;
  v9 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v33 = 0LL;
  *a2 = v9;
  memset(&v41[1], 0, 32);
  v10 = (v6 + v8) | 0xFFF;
  LODWORD(v34) = 0;
  v11 = 0LL;
  v35 = 0LL;
  v40 = 0LL;
  v31 = 0;
  v36 = v9;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v7 = 2;
    v31 = 2;
    KiStackAttachProcess(a1, 0, (__int64)v41);
  }
  v12 = 0;
  v32 = 0;
  v30 = KeAreAllApcsDisabled();
  v13 = MiObtainReferencedVadEx(v9, 2LL, (int *)&v34);
  v14 = v13;
  if ( v13 )
  {
    if ( !v6 )
    {
      v10 = ((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF;
      v7 |= 1u;
      v31 = v7;
    }
    VadFlags = MiReadVadFlags(v13);
    if ( (VadFlags & 0x80000) != 0 || v10 >> 12 > v16 )
    {
      v18 = -1073741799;
    }
    else
    {
      v17 = **(_QWORD **)(v14 + 80);
      v34 = v17;
      if ( !*(_QWORD *)(v17 + 64) || (VadFlags & 0x1C) == 8 )
      {
        v18 = -1073741688;
      }
      else if ( *(_QWORD *)(v17 + 32) )
      {
        if ( !v30 )
        {
          if ( (*(_DWORD *)(v17 + 56) & 0x20000) != 0 )
            v12 = 4;
          v32 = v12;
        }
        v21 = v36;
        MiFlushDirtyBitsToPfn(v36, v10, (__int64)CurrentThread);
        MiGetProtoPteAddress(v14, v10 >> 12, 0, &v33);
        ProtoPteAddress = MiGetProtoPteAddress(v14, v21 >> 12, 0, &v37);
        LastSubsection = v33;
        v25 = (__int64 *)v37;
        v36 = ProtoPteAddress;
        if ( v33 )
        {
          v33 = (unsigned int *)MiGetProtoPteAddress(v14, v10 >> 12, 0, (unsigned int **)&CurrentThread);
        }
        else
        {
          if ( !v37 || (v7 & 1) == 0 )
          {
            v18 = (v7 & 1) == 0 ? 0xC0000019 : 0;
            goto LABEL_10;
          }
          LastSubsection = (unsigned int *)MiFindLastSubsection(v17, 0LL, v23);
          v33 = (unsigned int *)(*((_QWORD *)LastSubsection + 1) + 8 * (LastSubsection[11] - LastSubsection[13] - 1LL));
        }
        if ( (unsigned int)MiFlushAcquire(v17, v25, (__int64 *)LastSubsection) )
        {
          MiUnlockAndDereferenceVadShared(v14);
          if ( v7 >= 2 )
          {
            KiUnstackDetachProcess((__int64)v41, 0);
            v31 = -3;
          }
          v26 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v17);
          v27 = v33;
          while ( 1 )
          {
            v18 = FsRtlAcquireFileForCcFlushEx(v26);
            if ( v18 < 0 )
              break;
            LODWORD(v29) = v32;
            v18 = MiFlushSection(v36, (__int64)v27, (ULONG_PTR)v25, (__int64)LastSubsection, 0LL, v29, 0LL, &v40);
            FsRtlReleaseFileForCcFlush(v26);
            v28 = v35;
            if ( v35 < *((_QWORD *)&v40 + 1) )
              v28 = *((_QWORD *)&v40 + 1);
            v35 = v28;
            if ( v18 != -1073741740 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          MiDereferenceControlAreaFile(v34, (unsigned __int64)v26);
          MiFlushRelease(v34, (ULONG_PTR)v25, (ULONG_PTR)LastSubsection);
          LOBYTE(v7) = v31;
          v11 = v35;
          goto LABEL_11;
        }
        v18 = -1073741670;
      }
      else
      {
        v18 = 0;
      }
    }
LABEL_10:
    MiUnlockAndDereferenceVadShared(v14);
    v11 = 0LL;
    goto LABEL_11;
  }
  v18 = v34;
  if ( (_DWORD)v34 == -1073741664 )
    v18 = -1073741799;
LABEL_11:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v41, 0);
  if ( v18 >= 0 )
    v11 = 0LL;
  else
    v5 = v18;
  v19 = v39;
  *v39 = v5;
  *((_QWORD *)v19 + 1) = v11;
  return (unsigned int)v18;
}
