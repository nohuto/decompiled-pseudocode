/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1409A6390
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x14042F140 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409A6B58 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  __int64 v4; // rbx
  size_t v7; // rdi
  _WORD *v8; // rsi
  int v9; // ebp
  unsigned __int64 v10; // r14
  _WORD *v11; // rax
  _WORD *v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rcx
  _WORD *v15; // rax
  int v16; // eax
  unsigned __int16 v17; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v19; // r9d
  unsigned __int16 *v20; // r11
  unsigned __int16 v21; // dx
  int v22; // r10d
  struct _LIST_ENTRY *Flink; // rdi
  unsigned __int64 v24; // r8
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KTHREAD *v29; // rax
  struct _KLOCK_ENTRIES *v30; // r9
  void *v31; // rdx
  LegacyAutoBoost *v32; // r14
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  signed __int64 v35; // rtt
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  _WORD *Pool2; // rax
  __int128 *Buffer; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+38h] [rbp-C0h]
  __int128 v44; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+60h] [rbp-98h]
  __int128 v46; // [rsp+70h] [rbp-88h]
  __int128 v47; // [rsp+80h] [rbp-78h]
  __int128 v48; // [rsp+90h] [rbp-68h]
  __int128 v49; // [rsp+A0h] [rbp-58h]
  __int128 v50; // [rsp+B0h] [rbp-48h]

  v4 = *a2;
  if ( (_WORD)v4 && (unsigned __int16)v4 <= 0x3F0u && (v4 & 1) == 0 && !*((_DWORD *)a2 + 4) )
  {
    v7 = *a2;
    if ( a4 )
    {
      Pool2 = (_WORD *)ExAllocatePool2(0x101uLL);
      v8 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v9 = PiControlCopyUserModeCallersBuffer(Pool2, a4, 1);
      if ( v9 < 0 )
      {
LABEL_52:
        ExFreePoolWithTag(v8, 0);
        return (unsigned int)v9;
      }
    }
    else
    {
      v8 = (_WORD *)*((_QWORD *)a2 + 1);
    }
    v9 = 0;
    if ( (unsigned int)v4 >= 2 && v8 )
    {
      if ( *v8 && (v10 = (unsigned __int64)(unsigned int)v4 >> 1, v8[v10 - 1]) )
      {
        if ( (unsigned int)v4 > (unsigned __int64)(v4 - 2) || v8[v10] )
        {
          v11 = (_WORD *)ExAllocatePool2(0x100uLL);
          v12 = v11;
          if ( !v11 )
          {
            v9 = -1073741670;
            goto LABEL_46;
          }
          memmove(v11, v8, v7);
          v12[v10] = 0;
        }
        else
        {
          v12 = v8;
        }
      }
      else
      {
        v12 = v8;
      }
    }
    else
    {
      v12 = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiDmDeviceInterfaceManager, 1u);
    Buffer = &v44;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    if ( !v12 )
      goto LABEL_42;
    v14 = 0x7FFFLL;
    HIDWORD(v45) = dword_140F83690;
    v15 = v12;
    *(_QWORD *)&v45 = v12;
    v43 = 0LL;
    do
    {
      if ( !*v15 )
        break;
      ++v15;
      --v14;
    }
    while ( v14 );
    v16 = -1073741811;
    if ( v14 )
    {
      v16 = 0;
      v17 = -2 - 2 * v14;
    }
    else
    {
      v17 = v43;
    }
    if ( v16 < 0 || dword_140F83690 == 3 && v17 <= 8u )
      goto LABEL_42;
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v22 = v21 >> 1;
    Flink = CurrentServerSiloGlobals[75].Flink;
    for ( DWORD2(v45) = 0; v22; v19 = (unsigned __int16)v24 + 65599 * v19 )
    {
      v24 = *v20++;
      --v22;
      if ( (unsigned int)v24 >= 0x61 )
      {
        if ( (unsigned int)v24 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v24 >= 0xC0u )
            LOWORD(v24) = *((_WORD *)&Flink->Flink
                          + (v24 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v24 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v24 >> 8))))
                        + v24;
        }
        else
        {
          LOWORD(v24) = v24 - 32;
        }
      }
    }
    DWORD2(v45) = v19;
    v25 = (unsigned __int64 *)RtlLookupElementGenericTableAvl(&stru_140F83628, &Buffer);
    if ( v25 && (v26 = *v25) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      ExReleaseResourceLite(&PiDmDeviceInterfaceManager);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28);
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v32 = (LegacyAutoBoost *)KeAbPreAcquire(v26, 0LL, 0LL, v30);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v26, 0, v32, (struct _KTHREAD *)v26);
      if ( v32 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v32, v31);
        else
          *((_BYTE *)v32 + 10) = 1;
      }
      *((_BYTE *)a2 + 20) = *(_QWORD *)(v26 + 40) != 0LL;
      _m_prefetchw((const void *)v26);
      v33 = *(_QWORD *)v26;
      v34 = *(_QWORD *)v26 - 16LL;
      if ( (*(_QWORD *)v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v34 = 0LL;
      if ( (v33 & 2) != 0
        || (v35 = *(_QWORD *)v26, v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v26, v34, v33)) )
      {
        ExfReleasePushLock((_QWORD *)v26);
      }
      KeAbPostRelease(v26);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37);
      PiDmObjectRelease((unsigned int *)v26);
    }
    else
    {
LABEL_42:
      ExReleaseResourceLite(&PiDmDeviceInterfaceManager);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39);
      v9 = -1073741772;
      if ( !v12 )
        goto LABEL_46;
    }
    if ( v8 && v8 != v12 )
      ExFreePoolWithTag(v12, 0);
LABEL_46:
    if ( !a4 || !v8 )
      return (unsigned int)v9;
    goto LABEL_52;
  }
  return 3221225485LL;
}
