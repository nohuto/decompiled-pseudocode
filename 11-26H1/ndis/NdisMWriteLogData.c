/*
 * XREFs of NdisMWriteLogData @ 0x1400A4040
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

NDIS_STATUS __stdcall NdisMWriteLogData(NDIS_HANDLE LogHandle, PVOID LogBuffer, UINT LogBufferSize)
{
  NDIS_STATUS v5; // esi
  KSPIN_LOCK *v7; // rbx
  UINT v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rbp
  char *v11; // rcx
  char *v12; // rdx
  size_t v13; // r8
  unsigned int v14; // r8d
  UINT v15; // edx
  UINT v16; // ecx
  __int64 v17; // rbx
  unsigned int *v18; // r15
  struct _MDL *v19; // rcx
  unsigned int ByteCount; // r14d
  __int16 v21; // ax
  PVOID v22; // rcx
  _DWORD *v23; // rdx
  char *MappedSystemVa; // rbp
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  KIRQL Irql; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  Irql = 0;
  IoAcquireCancelSpinLock(&Irql);
  v7 = (KSPIN_LOCK *)((char *)LogHandle + 8);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)LogHandle + 1);
  v8 = *((_DWORD *)LogHandle + 6);
  if ( LogBufferSize > v8 )
  {
    v5 = -2147483643;
  }
  else
  {
    v9 = *((unsigned int *)LogHandle + 8);
    v10 = v8 - (unsigned int)v9;
    v11 = (char *)LogHandle + v9 + 40;
    v12 = (char *)LogBuffer;
    if ( LogBufferSize > (unsigned int)v10 )
    {
      memmove(v11, LogBuffer, (unsigned int)v10);
      v12 = (char *)LogBuffer + v10;
      v13 = LogBufferSize - (unsigned int)v10;
      v11 = (char *)LogHandle + 40;
    }
    else
    {
      v13 = LogBufferSize;
    }
    memmove(v11, v12, v13);
    *((_DWORD *)LogHandle + 7) += LogBufferSize;
    v14 = *((_DWORD *)LogHandle + 7);
    v15 = *((_DWORD *)LogHandle + 6);
    if ( v14 > v15 )
    {
      *((_DWORD *)LogHandle + 7) = v15;
      v14 = v15;
    }
    v16 = LogBufferSize + *((_DWORD *)LogHandle + 8);
    *((_DWORD *)LogHandle + 8) = v16;
    if ( v16 >= v15 )
    {
      v16 -= v15;
      *((_DWORD *)LogHandle + 8) = v16;
    }
    if ( v14 == v15 )
      *((_DWORD *)LogHandle + 9) = v16;
    v17 = *((_QWORD *)LogHandle + 2);
    if ( v17 )
    {
      *((_QWORD *)LogHandle + 2) = 0LL;
      v18 = (unsigned int *)((char *)LogHandle + 36);
      v19 = *(struct _MDL **)(v17 + 8);
      ByteCount = v19->ByteCount;
      if ( ByteCount > v14 )
        ByteCount = v14;
      v21 = v19->MdlFlags & 5;
      if ( v15 - *v18 < ByteCount )
      {
        if ( v21 )
          MappedSystemVa = (char *)v19->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v19, 0, MmCached, 0LL, 0, 0x40000000u);
        if ( MappedSystemVa )
        {
          memmove(MappedSystemVa, (char *)LogHandle + *v18 + 40, *((_DWORD *)LogHandle + 6) - *v18);
          memmove(
            &MappedSystemVa[*((unsigned int *)LogHandle + 6) - (unsigned __int64)*v18],
            (char *)LogHandle + 40,
            ByteCount + *v18 - *((_DWORD *)LogHandle + 6));
        }
        else
        {
          v5 = -1073741670;
        }
        v23 = (char *)LogHandle + 36;
      }
      else
      {
        if ( v21 )
          v22 = v19->MappedSystemVa;
        else
          v22 = MmMapLockedPagesSpecifyCache(v19, 0, MmCached, 0LL, 0, 0x40000000u);
        if ( v22 )
          memmove(v22, (char *)LogHandle + *v18 + 40, ByteCount);
        else
          v5 = -1073741670;
        v23 = (char *)LogHandle + 36;
      }
      v25 = *v18;
      *((_DWORD *)LogHandle + 7) -= ByteCount;
      v26 = ByteCount + v25;
      v27 = *((_DWORD *)LogHandle + 6);
      *v18 = v26;
      if ( v26 >= v27 )
        *v23 = v26 - v27;
      *(_QWORD *)(v17 + 56) = ByteCount;
      _InterlockedExchange64((volatile __int64 *)(v17 + 104), 0LL);
      *(_DWORD *)(v17 + 48) = 0;
      IofCompleteRequest((PIRP)v17, 2);
    }
    v7 = (KSPIN_LOCK *)((char *)LogHandle + 8);
  }
  KeReleaseSpinLockFromDpcLevel(v7);
  IoReleaseCancelSpinLock(Irql);
  return v5;
}
