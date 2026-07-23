/*
 * XREFs of KeCapturePersistentThreadState @ 0x140351340
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x14078EAC0 (DbgkpWerCaptureLiveTriageDump.c)
 *     LkmdTelCreateReport @ 0x1408B1AA4 (LkmdTelCreateReport.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     RtlGetNtProductType @ 0x1404490A0 (RtlGetNtProductType.c)
 *     IopAddCodeRegion @ 0x1404E058C (IopAddCodeRegion.c)
 *     IopWriteDriverList @ 0x1404E55E0 (IopWriteDriverList.c)
 *     IoGetLoadedDriverInfo @ 0x1404E5730 (IoGetLoadedDriverInfo.c)
 *     IopValidateSectionSize @ 0x14050CBA0 (IopValidateSectionSize.c)
 *     KdCopyDataBlock @ 0x1405E5F14 (KdCopyDataBlock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  char *v13; // rdx
  _DWORD *v14; // r10
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned int v23; // r15d
  const void *StackLimit; // rax
  void *StackBase; // rdi
  const void *v26; // rsi
  unsigned int v27; // edi
  unsigned int i; // r14d
  __int64 result; // rax
  int v30; // edi
  size_t v31; // r8
  struct _KTHREAD *v32; // rax
  unsigned int v33; // edi
  __int64 v34; // rcx
  int v35; // esi
  unsigned int v36; // r14d
  __int64 v37; // rdx
  int v38; // eax
  _DWORD v39[8]; // [rsp+20h] [rbp-20h] BYREF

  v8 = Size;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  if ( ForceDumpDisabled || !AllowCrashDump || byte_140E662A4 && SecureDmpEncryptionContext == 2 )
    return 0LL;
  memset_0((void *)(Size + 4), 0, 0x3FFFCuLL);
  v13 = (char *)v8;
  if ( (v8 & 4) != 0 )
  {
    v13 = (char *)(v8 + 4);
    v15 = 1023LL;
    v14 = (_DWORD *)(v8 + 4);
    v16 = 1LL;
    v17 = 8184LL;
  }
  else
  {
    v14 = (_DWORD *)(v8 + 4);
    v15 = 1024LL;
    v16 = 0LL;
    v17 = 8188LL;
  }
  memset64(v13, 0x4547415045474150uLL, v15);
  if ( v16 )
    *(_DWORD *)&v13[v17] = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *v14 = 875976004;
  *(_DWORD *)(v8 + 12) = (unsigned __int16)NtBuildNumber;
  *(_DWORD *)(v8 + 8) = (unsigned int)NtBuildNumber >> 28;
  *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = MmPfnDatabase;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &PsAltSystemCallRegistrationLock.WaitBlock[2];
  *(_DWORD *)(v8 + 48) = 34404;
  *(_DWORD *)(v8 + 52) = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_DWORD *)(v8 + 56) = a3;
  *(_QWORD *)(v8 + 64) = a4;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(v8 + 4148) = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4152) = 130;
  *(_DWORD *)(v8 + 4176) = 24;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)(v8 + 4160));
  v18 = 9LL;
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  v19 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  *(_DWORD *)(v8 + 0x2000) = CmNtCSDVersion;
  v20 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v20 = *v19;
    v20[1] = v19[1];
    v20[2] = v19[2];
    v20[3] = v19[3];
    v20[4] = v19[4];
    v20[5] = v19[5];
    v20[6] = v19[6];
    v20 += 8;
    v21 = v19[7];
    v19 += 8;
    *(v20 - 1) = v21;
    --v18;
  }
  while ( v18 );
  *v20 = *v19;
  v20[1] = v19[1];
  v20[2] = v19[2];
  v20[3] = v19[3];
  v22 = v19[4];
  *(_DWORD *)(v8 + 4152) |= 0x400u;
  v20[4] = v22;
  *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
  *(_DWORD *)(v8 + 8304) = 8320;
  *(_DWORD *)(v8 + 8308) = 936;
  KdCopyDataBlock(v8 + 8320);
  *(_DWORD *)(v8 + 4152) |= 4u;
  *(_DWORD *)(v8 + 8220) = 9256;
  memmove((void *)(v8 + 9256), KeGetCurrentPrcb(), 0xCF00uLL);
  *(_DWORD *)(v8 + 4152) |= 8u;
  *(_DWORD *)(v8 + 8224) = 62248;
  memmove((void *)(v8 + 62248), CurrentThread->ApcState.Process, 0x840uLL);
  *(_DWORD *)(v8 + 4152) |= 0x10u;
  *(_DWORD *)(v8 + 8228) = 64360;
  memmove((void *)(v8 + 64360), CurrentThread, 0x798uLL);
  v23 = 66304;
  if ( CurrentThread == KeGetCurrentThread() && (*((_DWORD *)&CurrentThread->0 + 1) & 0x20000) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    v26 = *(const void **)(a1 + 152);
    if ( StackLimit <= v26 && v26 < StackBase || (v26 = StackLimit, StackBase > StackLimit) )
      v27 = (_DWORD)StackBase - (_DWORD)v26;
    else
      v27 = 0;
    if ( v27 >= 0x7FFF )
      v27 = 0x7FFF;
    for ( i = 0; i < v27; ++i )
    {
      if ( !MmIsAddressValidEx((__int64)v26 + i) )
        break;
    }
    LODWORD(Size) = i;
    if ( i )
    {
      if ( !(unsigned __int8)IopValidateSectionSize(66304LL, &Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v30 = Size;
      v31 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = 66304;
      *(_DWORD *)(v8 + 8236) = v30;
      *(_QWORD *)(v8 + 8264) = v26;
      memmove((void *)(v8 + 66304), v26, v31);
      v23 = v30 + 66304;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v32 = KeGetCurrentThread();
    LODWORD(Size) = 0;
    v39[0] = 0;
    v33 = (v23 + 7) & 0xFFFFFFF8;
    --v32->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(v34, &Size, v39) >= 0 )
    {
      v35 = Size;
      LODWORD(Size) = 144 * Size;
      if ( (_DWORD)Size
        && (unsigned __int8)IopValidateSectionSize(v33, &Size)
        && (v36 = v33 + Size, LODWORD(Size) = (v39[0] + 7 + 6 * v35) & 0xFFFFFFF8, (_DWORD)Size)
        && (unsigned __int8)IopValidateSectionSize(v36, &Size) )
      {
        if ( (int)IopWriteDriverList(v8, v37, v33, v36) >= 0 )
        {
          *(_DWORD *)(v8 + 4152) |= 0x40u;
          v38 = Size;
          *(_DWORD *)(v8 + 8240) = v33;
          *(_DWORD *)(v8 + 8244) = v35;
          *(_DWORD *)(v8 + 8248) = v36;
          v23 = v36 + v38;
          *(_DWORD *)(v8 + 8252) = v38;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
      IopAddCodeRegion(a1, v23, v8);
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
