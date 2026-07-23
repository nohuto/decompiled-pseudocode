/*
 * XREFs of ntoskrnl_20 @ 0x140A83F40
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406D11AC (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x1406D1524 (ExpSetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x14083E0D0 (ExSetLicenseTamperState.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     sub_140886514 @ 0x140886514 (sub_140886514.c)
 *     sub_140A84308 @ 0x140A84308 (sub_140A84308.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ntoskrnl_20(_QWORD *a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *Pool2; // rdi
  __int64 *v7; // r14
  unsigned __int64 *v8; // r12
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  int v14; // ebx
  char v15; // cl
  __int64 *v16; // rax
  _QWORD *v18; // [rsp+88h] [rbp+10h] BYREF
  int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  Pool2 = 0LL;
  v7 = 0LL;
  if ( !a2 )
  {
    v14 = -1073741811;
    goto LABEL_32;
  }
  if ( ((unsigned __int8)a4 & 1) == 0 && !a1[5854] )
  {
    v14 = 0;
    goto LABEL_32;
  }
  v8 = a1 + 5878;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 5878), 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = (_QWORD *)a1[5877];
  if ( v12 )
  {
    v18 = (_QWORD *)*v12;
    sub_140A84308(&v18);
    v13 = v18;
    v14 = 0;
LABEL_11:
    v15 = v19;
    if ( (v19 & 1) != 0 )
      *v13 = *(_QWORD *)a2;
    if ( (v15 & 2) != 0 )
      *((_DWORD *)v13 + 2) = *(_DWORD *)(a2 + 8);
    if ( (v15 & 4) != 0 )
      v13[2] = *(_QWORD *)(a2 + 16);
    if ( (v15 & 8) != 0 )
      v13[3] = *(_QWORD *)(a2 + 24);
    if ( (v15 & 0x10) != 0 )
      v13[4] = *(_QWORD *)(a2 + 32);
    if ( (v15 & 0x20) != 0 )
      *((_BYTE *)v13 + 40) = *(_BYTE *)(a2 + 40);
    goto LABEL_29;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 && (v16 = (__int64 *)ExAllocatePool2(0x100uLL), (v7 = v16) != 0LL) )
  {
    *v16 = (__int64)Pool2;
    v13 = Pool2;
    *Pool2 = 0LL;
    Pool2[2] = 0LL;
    *((_DWORD *)Pool2 + 2) = 4;
    Pool2[3] = 0LL;
    Pool2[4] = 0LL;
    *((_BYTE *)Pool2 + 40) = 1;
    v14 = sub_140886514(v16);
    if ( v14 >= 0 )
    {
      a1[5877] = v7;
      Pool2 = 0LL;
      v7 = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    v14 = -1073741801;
  }
LABEL_29:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((unsigned __int64)v8);
LABEL_32:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v14;
}
