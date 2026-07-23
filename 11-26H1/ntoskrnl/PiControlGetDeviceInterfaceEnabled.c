/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x140966DF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  struct _KTHREAD *v27; // rax
  struct _KLOCK_ENTRIES *v28; // r9
  void *v29; // rdx
  LegacyAutoBoost *v30; // r14
  signed __int64 v31; // rax
  signed __int64 v32; // rdx
  signed __int64 v33; // rtt
  _WORD *Pool2; // rax
  __int128 *Buffer; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+38h] [rbp-C0h]
  __int128 v38; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+60h] [rbp-98h]
  __int128 v40; // [rsp+70h] [rbp-88h]
  __int128 v41; // [rsp+80h] [rbp-78h]
  __int128 v42; // [rsp+90h] [rbp-68h]
  __int128 v43; // [rsp+A0h] [rbp-58h]
  __int128 v44; // [rsp+B0h] [rbp-48h]

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
    Buffer = &v38;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    if ( !v12 )
      goto LABEL_42;
    v14 = 0x7FFFLL;
    HIDWORD(v39) = dword_140F83650;
    v15 = v12;
    *(_QWORD *)&v39 = v12;
    v37 = 0LL;
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
      v17 = v37;
    }
    if ( v16 < 0 || dword_140F83650 == 3 && v17 <= 8u )
      goto LABEL_42;
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v22 = v21 >> 1;
    Flink = CurrentServerSiloGlobals[75].Flink;
    for ( DWORD2(v39) = 0; v22; v19 = (unsigned __int16)v24 + 65599 * v19 )
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
    DWORD2(v39) = v19;
    v25 = (unsigned __int64 *)RtlLookupElementGenericTableAvl(&stru_140F835E8, &Buffer);
    if ( v25 && (v26 = *v25) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      ExReleaseResourceLite(&PiDmDeviceInterfaceManager);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      v30 = (LegacyAutoBoost *)KeAbPreAcquire(v26, 0LL, 0LL, v28);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v26, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v26, 0, v30, (struct _KTHREAD *)v26);
      if ( v30 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v30, v29);
        else
          *((_BYTE *)v30 + 10) = 1;
      }
      *((_BYTE *)a2 + 20) = *(_QWORD *)(v26 + 40) != 0LL;
      _m_prefetchw((const void *)v26);
      v31 = *(_QWORD *)v26;
      v32 = *(_QWORD *)v26 - 16LL;
      if ( (*(_QWORD *)v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v32 = 0LL;
      if ( (v31 & 2) != 0
        || (v33 = *(_QWORD *)v26, v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v26, v32, v31)) )
      {
        ExfReleasePushLock((_QWORD *)v26);
      }
      KeAbPostRelease(v26);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PiDmObjectRelease((unsigned int *)v26);
    }
    else
    {
LABEL_42:
      ExReleaseResourceLite(&PiDmDeviceInterfaceManager);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
