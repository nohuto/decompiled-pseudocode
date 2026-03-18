/*
 * XREFs of UsbhSsh_CheckPortChangeQueuesIdle @ 0x140030598
 * Callers:
 *     UsbhSsh_CheckHubIdle @ 0x1400398B8 (UsbhSsh_CheckHubIdle.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhSsh_CheckPortChangeQueuesIdle(__int64 a1)
{
  unsigned __int16 i; // si
  __int64 v3; // rcx
  signed __int32 v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  KIRQL v16; // al
  KSPIN_LOCK *v17; // rcx
  bool v18; // zf

  FdoExt(a1);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
  {
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v3 = *(_QWORD *)(a1 + 64);
        if ( v3 )
        {
          v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 880), 0xFFFFFFFF);
          v5 = *(_DWORD *)(v3 + 884);
          v6 = *(_QWORD *)(v3 + 888);
          v7 = 32LL * ((v4 - 1) & v5);
          *(_DWORD *)(v7 + v6) = 1413771367;
          *(_QWORD *)(v7 + v6 + 16) = i;
          *(_QWORD *)(v7 + v6 + 8) = 0LL;
          *(_QWORD *)(v7 + v6 + 24) = 0LL;
        }
      }
    }
    if ( i && (v8 = FdoExt(a1), i <= *((unsigned __int8 *)FdoExt(a1) + 2938)) && (v9 = *((_QWORD *)v8 + 382)) != 0 )
    {
      v10 = v9 + 2928LL * i - 2928;
      if ( (UsbhLogMask & 8) != 0 && a1 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        if ( v11 )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
          v13 = *(_DWORD *)(v11 + 884);
          v14 = *(_QWORD *)(v11 + 888);
          v15 = 32LL * ((v12 - 1) & v13);
          *(_DWORD *)(v15 + v14) = 1044672615;
          *(_QWORD *)(v15 + v14 + 8) = 0LL;
          *(_QWORD *)(v15 + v14 + 16) = i;
          *(_QWORD *)(v15 + v14 + 24) = v10;
        }
      }
    }
    else
    {
      v10 = 0LL;
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 440));
    v17 = (KSPIN_LOCK *)(v10 + 440);
    v18 = *(_QWORD *)(v10 + 456) == v10 + 456;
    *(_DWORD *)(v10 + 448) = 0;
    if ( !v18 )
    {
      KeReleaseSpinLock(v17, v16);
      return 3221225473LL;
    }
    KeReleaseSpinLock(v17, v16);
  }
  return 0LL;
}
