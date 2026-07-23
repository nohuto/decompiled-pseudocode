/*
 * XREFs of MiUnmapViewOfSectionPrepare @ 0x1409950D0
 * Callers:
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x1403C5E74 (MiVadMapsLargeImage.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 *     MiCheckSystemDllUnmap @ 0x1409E6908 (MiCheckSystemDllUnmap.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     PerfLogImageUnload @ 0x140ABB148 (PerfLogImageUnload.c)
 */

__int64 __fastcall MiUnmapViewOfSectionPrepare(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        struct _KTHREAD *a6)
{
  __int64 *v6; // r12
  int v7; // ebx
  __int64 *p_Lock; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // r14
  int v12; // ebp
  ULONG_PTR v13; // rax
  __int64 v14; // rdi
  int VadFlags; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // r10
  int v23; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // r8
  __int64 *v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 LockedVadEvent; // rax
  struct _KLOCK_ENTRIES *v29; // r9
  AutoBoost *v30; // rax
  void *v31; // rdx
  AutoBoost *v32; // rsi
  char v33; // cl
  __int64 v34; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+58h] [rbp-50h]
  unsigned int v38; // [rsp+C0h] [rbp+18h] BYREF
  ULONG_PTR v39; // [rsp+C8h] [rbp+20h]

  v6 = (__int64 *)a5;
  v7 = 0;
  p_Lock = (__int64 *)&a6->Header.Lock;
  v38 = 0;
  CurrentThread = KeGetCurrentThread();
  a6 = CurrentThread;
  v11 = 0LL;
  *a4 = 0LL;
  *v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *p_Lock = 0LL;
  a5 = 0LL;
  v12 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  v13 = MiObtainReferencedVadEx(a2, 1LL, (int *)&v38);
  v14 = v13;
  if ( v13 )
  {
    VadFlags = MiReadVadFlags(v13);
    if ( (VadFlags & 0x80000) != 0 && (VadFlags & 0x1C) != 4 )
    {
      v38 = -1073741799;
LABEL_15:
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v14);
      return v38;
    }
    v16 = *(unsigned int *)(v14 + 24);
    v17 = (v16 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
    if ( (VadFlags & 0x1C) == 8 )
    {
      if ( (VadFlags & 0x3E0) == 0xE0 )
        v11 = (v16 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
      a5 = v11;
    }
    v18 = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
         - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
         + 1) << 12;
    if ( (VadFlags & 2) != 0 && (*(_DWORD *)(a1 + 500) & 0x20) == 0 )
    {
      v38 = MiCheckSecuredVad(
              v14,
              v17,
              (*(_DWORD *)(v14 + 28) - *(_DWORD *)(v14 + 24) + 1) << 12,
              85,
              a6->PreviousMode,
              0LL);
      if ( (v38 & 0x80000000) != 0 )
        goto LABEL_15;
    }
    if ( v12 )
    {
      if ( v17 != a2 || (LockedVadEvent = MiLocateLockedVadEvent(v14, 0x80u)) == 0 )
      {
        v38 = -1073741800;
        goto LABEL_15;
      }
      v19 = *(_QWORD *)(LockedVadEvent + 24);
      *(_QWORD *)(LockedVadEvent + 24) = 0LL;
      v30 = (AutoBoost *)KeAbPreAcquire(v19 + 40, 0LL, 0LL, v29);
      v32 = v30;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v19 + 40), v30, v19 + 40);
      if ( v32 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v32, v31);
        else
          *((_BYTE *)v32 + 10) = 1;
      }
      MiUpdateVadStartVpn(v19, *(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32));
      v33 = *(_BYTE *)(v14 + 33);
      *(_DWORD *)(v19 + 28) = *(_DWORD *)(v14 + 28);
      *(_BYTE *)(v19 + 33) = v33;
    }
    else
    {
      v19 = 0LL;
    }
    v20 = a5;
    if ( a5 )
    {
      if ( !(unsigned int)MiVadMapsLargeImage(v14)
        || (v24 = MiLocateLockedVadEvent(v27, 0x10u),
            v18 = *(_QWORD *)(v24 + 32) << 12,
            (v20 += (unsigned __int64)*(unsigned __int8 *)(v24 + 24) << 16) != 0) )
      {
        if ( (PerfGlobalGroupMask & 4) != 0 )
        {
          if ( *(_QWORD *)(v25 + 464) )
          {
            if ( (*(_DWORD *)(v25 + 1532) & 0x1000) == 0 )
            {
              v26 = **(__int64 ***)(v14 + 80);
              v34 = (__int64)v26;
              if ( v26 )
              {
                if ( v26[8] )
                {
                  a5 = *v26;
                  v39 = MiReferenceControlAreaFile((__int64)v26);
                  if ( (MiReadVadFlags2(v14) & 8) != 0 )
                  {
                    v23 = 0;
                  }
                  else
                  {
                    v7 = *(_BYTE *)(a5 + 15) & 0xF;
                    v23 = (*(unsigned __int8 *)(a5 + 15) >> 4) & 7;
                  }
                  PerfLogImageUnload(v22 + 88, v22, a1, v20, v18, *(_DWORD *)(*(_QWORD *)(a5 + 56) + 60LL), v7, v23, 1);
                  MiDereferenceControlAreaFile(v34, v39);
                }
              }
            }
          }
        }
        MiCheckSystemDllUnmap(v20, a6, Process);
      }
    }
    *a4 = v14;
    result = 0LL;
    *v6 = v19;
    *p_Lock = v20;
  }
  else
  {
    result = v38;
    if ( v38 == -1073741664 )
      return 3221225497LL;
  }
  return result;
}
