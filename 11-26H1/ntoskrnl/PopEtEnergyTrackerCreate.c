/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x1407E01B0
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtDeferredInitDxgContext @ 0x1407DFE00 (PopEtDeferredInitDxgContext.c)
 *     PopEtEnergyTrackerFindDxgAdapters @ 0x1407E04A8 (PopEtEnergyTrackerFindDxgAdapters.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(unsigned int *a1, HANDLE *a2)
{
  unsigned int v2; // eax
  int inserted; // edi
  bool v6; // cf
  struct _KTHREAD *CurrentThread; // r9
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 *v11; // rcx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  int v19; // edi
  __int128 v21; // [rsp+50h] [rbp-19h] BYREF
  __int128 v22; // [rsp+60h] [rbp-9h]
  _DWORD v23[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v24; // [rsp+78h] [rbp+Fh]
  __int64 v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+8Ch] [rbp+23h]
  __int128 v28; // [rsp+90h] [rbp+27h]
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h]

  v2 = *a1;
  Object = 0LL;
  Handle = 0LL;
  v23[1] = 0;
  v27 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( !v2 || v2 > 0x40000 )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    if ( (a1[2] & 0xF0000000) <= 0x10000000 )
    {
      v6 = KeGetCurrentThread()->PreviousMode != 0;
      v23[0] = 48;
      v24 = 0LL;
      v25 = 0LL;
      v26 = v6 ? 0 : 0x200;
      v28 = 0LL;
      CurrentThread = KeGetCurrentThread();
      LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
      inserted = ObCreateObjectEx(0, *(_QWORD *)(PopEtGlobals + 32), (unsigned int)v23, (_DWORD)CurrentThread);
      if ( inserted < 0 )
      {
        v8 = Object;
      }
      else
      {
        v8 = Object;
        memset_0(Object, 0, 0x298uLL);
        v8[3] = 0LL;
        v8[2] = 0LL;
        v8[8] = 0LL;
        v8[9] = 0LL;
        v8[6] = 0LL;
        v8[7] = 0LL;
        memset_0(v8 + 10, 0, 0x208uLL);
        v9 = PopEtGlobals;
        v8[12] = PopEtGlobals + 968;
        if ( *(_DWORD *)(v9 + 1096) == -1 )
          PopEtDeferredInitDxgContext();
        PopEtEnergyTrackerFindDxgAdapters(v8);
        v8[4] = *(_QWORD *)a1;
        *((_DWORD *)v8 + 10) = a1[2];
        *((_DWORD *)v8 + 161) |= 1u;
        *((_DWORD *)v8 + 150) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        v11 = (unsigned __int64 *)(PopEtGlobals + 16);
        *((_DWORD *)v8 + 151) = UnbiasedInterruptTime / 0x2710;
        *((_DWORD *)v8 + 152) = 1;
        PopAcquireRwLockExclusive(v11, UnbiasedInterruptTime / 0x2710, v12, v13);
        v14 = PopEtGlobals;
        v15 = *(_QWORD **)(PopEtGlobals + 8);
        if ( *v15 != PopEtGlobals )
          __fastfail(3u);
        *v8 = PopEtGlobals;
        v8[1] = v15;
        *v15 = v8;
        *(_QWORD *)(v14 + 8) = v8;
        PopReleaseRwLock((struct _KTHREAD *)(v14 + 16));
        LODWORD(v21) = 1;
        *(_QWORD *)&v22 = v8;
        inserted = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, &v21);
        if ( inserted >= 0 )
        {
          PopAcquireRwLockExclusive(v8 + 2, v16, v17, v18);
          v19 = *((_DWORD *)v8 + 155);
          if ( !v19 )
            *((_DWORD *)v8 + 161) &= ~1u;
          PopReleaseRwLock((struct _KTHREAD *)(v8 + 2));
          if ( v19 )
          {
            inserted = -1073741670;
          }
          else
          {
            inserted = ObInsertObjectEx(v8, 0LL, 1LL, 1LL, 0, 0LL, &Handle);
            if ( inserted >= 0 )
            {
              inserted = 0;
              *a2 = Handle;
              Handle = 0LL;
            }
            else
            {
              v8 = 0LL;
            }
          }
        }
      }
      if ( Handle )
        NtClose(Handle);
      if ( v8 )
        ObfDereferenceObject(v8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inserted;
}
