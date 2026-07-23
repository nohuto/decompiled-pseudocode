/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x140B6B030
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(_QWORD *Src, unsigned int a2, char a3)
{
  char v4; // r12
  int v5; // edi
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v8; // rdi
  signed __int64 v9; // rdx
  __int64 v10; // rdx
  int SystemFirmwareTableInformation; // edi
  unsigned int v12; // edi
  _DWORD *Pool2; // rax
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KTHREAD *v15; // rax
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rdi
  __int64 v19; // rdx
  _QWORD *InitialStack; // rbx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  void *v24; // rdi
  void *v25; // r12
  size_t v26; // r8
  void *v27; // rdi
  size_t v28; // r8
  void *v29; // rdx
  _QWORD *v30; // r12
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  unsigned int v34; // [rsp+34h] [rbp-B4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-B0h]
  PVOID P; // [rsp+40h] [rbp-A8h]
  _QWORD *v37; // [rsp+58h] [rbp-90h]
  volatile void *Address; // [rsp+60h] [rbp-88h]
  volatile void *v39; // [rsp+68h] [rbp-80h]
  PVOID BaseAddress; // [rsp+70h] [rbp-78h]
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-70h]
  __int128 v42; // [rsp+88h] [rbp-60h] BYREF
  __int128 v43; // [rsp+98h] [rbp-50h]
  __int128 Srca; // [rsp+A8h] [rbp-40h] BYREF
  int v45; // [rsp+B8h] [rbp-30h]

  v37 = Src;
  Srca = 0LL;
  v45 = 0;
  v34 = 0;
  v42 = 0LL;
  v43 = 0LL;
  P = 0LL;
  v4 = 0;
  BaseAddress = 0LL;
  NumberOfBytes = 0LL;
  if ( a2 < 0x20 )
  {
LABEL_2:
    v5 = -1073741811;
    goto LABEL_69;
  }
  if ( a3 )
    RtlCopyFromUser(&v42, Src, 0x20uLL);
  else
    RtlCopyVolatileMemory(&v42, Src, 0x20uLL);
  Length = *((_QWORD *)&v43 + 1);
  Address = (volatile void *)*((_QWORD *)&v42 + 1);
  v39 = (volatile void *)v43;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL, 0LL, v6);
  v9 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpPlatformBinaryLock.Header.Lock, 0, v8, &ExpPlatformBinaryLock);
    v9 = 17LL;
  }
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, (void *)0x11);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v4 = 1;
  if ( ExpPlatformBinaryLock.InitialStack == (void *)-1LL )
    goto LABEL_13;
  if ( !ExpPlatformBinaryLock.InitialStack )
  {
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, v9) )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10);
    v4 = 0;
    if ( Length )
      goto LABEL_2;
    *(_QWORD *)&Srca = 0x141435049LL;
    *((_QWORD *)&Srca + 1) = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)&Srca, 0, 0x14u, &v34);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v5 = ((SystemFirmwareTableInformation >> 31) & 0x40) - 1073741701;
      goto LABEL_69;
    }
    v12 = v34;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    P = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_69;
    }
    *Pool2 = 1094930505;
    Pool2[1] = 1;
    Pool2[2] = 1413632087;
    Pool2[3] = v12 - 16;
    v5 = ExpGetSystemFirmwareTableInformation((char *)Pool2, 0, v12, &v34);
    if ( v5 < 0 )
      goto LABEL_69;
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL, 0LL, v14);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpPlatformBinaryLock, v16, (__int64)&ExpPlatformBinaryLock);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    if ( ExpPlatformBinaryLock.InitialStack )
    {
      if ( ExpPlatformBinaryLock.InitialStack == (void *)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock.Header.Lock);
        KeAbPostRelease((unsigned __int64)&ExpPlatformBinaryLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19);
LABEL_13:
        v5 = -1073741637;
        goto LABEL_69;
      }
    }
    else
    {
      ExpPlatformBinaryLock.InitialStack = P;
      P = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
  }
  if ( (Length & 0x100000000LL) == 0 )
  {
    InitialStack = ExpPlatformBinaryLock.InitialStack;
    if ( *((_BYTE *)ExpPlatformBinaryLock.InitialStack + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryLock.InitialStack + 65) != 1
      || (v21 = *((unsigned __int16 *)ExpPlatformBinaryLock.InitialStack + 33), (v21 & 1) != 0)
      || (v22 = *((_QWORD *)ExpPlatformBinaryLock.InitialStack + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryLock.InitialStack + 10) != 1 )
    {
      v5 = -1073741701;
      goto LABEL_70;
    }
    v23 = *((unsigned int *)ExpPlatformBinaryLock.InitialStack + 13);
    if ( (unsigned int)v23 > (unsigned int)Length || v21 > HIDWORD(Length) )
    {
      v5 = -1073741789;
      v30 = v37;
      if ( a3 )
        RtlWriteULongToUser((_DWORD *)v37 + 6, v23);
      else
        *((_DWORD *)v37 + 6) = v23;
      v31 = (_DWORD *)v30 + 7;
      if ( a3 )
        RtlWriteULongToUser(v31, *((unsigned __int16 *)InitialStack + 33));
      else
        *v31 = *((unsigned __int16 *)InitialStack + 33);
      goto LABEL_70;
    }
    NumberOfBytes = *((unsigned int *)ExpPlatformBinaryLock.InitialStack + 13);
    v24 = (void *)MmMapIoSpaceEx(v22, v23, 2u);
    BaseAddress = v24;
    if ( !v24 )
    {
      v5 = -1073741670;
      goto LABEL_70;
    }
    if ( a3 )
      RtlWriteULong64ToUser(v37, InitialStack[7]);
    else
      *v37 = InitialStack[7];
    v25 = (void *)Address;
    if ( a3 )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    v26 = *((unsigned int *)InitialStack + 13);
    if ( a3 )
      RtlCopyToUser(v25, v24, v26);
    else
      RtlCopyVolatileMemory(v25, v24, v26);
    if ( *((_WORD *)InitialStack + 33) )
    {
      v27 = (void *)v39;
      if ( a3 )
        ProbeForWrite(v39, HIDWORD(Length), 2u);
      v28 = *((unsigned __int16 *)InitialStack + 33);
      v29 = (char *)InitialStack + 68;
      if ( a3 )
        RtlCopyToUser(v27, v29, v28);
      else
        RtlCopyVolatileMemory(v27, v29, v28);
    }
    v5 = 0;
    v4 = 1;
LABEL_69:
    if ( !v4 )
      goto LABEL_73;
    goto LABEL_70;
  }
  v5 = -1073741811;
LABEL_70:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ExpPlatformBinaryLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32);
LABEL_73:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  if ( P )
    ExFreePoolWithTag(P, 0x54425057u);
  return (unsigned int)v5;
}
