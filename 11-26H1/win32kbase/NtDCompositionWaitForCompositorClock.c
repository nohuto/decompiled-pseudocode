/*
 * XREFs of NtDCompositionWaitForCompositorClock @ 0x1400A9220
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ @ 0x1400A963C (-EnsureVBlankEvent@CCompClockInfo@DirectComposition@@AEBA_NXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x14010F4B8 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14010F4E8 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x14010F578 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtDCompositionWaitForCompositorClock(unsigned int a1, void *a2)
{
  __int64 v3; // r12
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // r14
  __int64 v8; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  char v18; // [rsp+40h] [rbp-2B8h]
  __int128 v19; // [rsp+68h] [rbp-290h] BYREF
  __int64 v20; // [rsp+78h] [rbp-280h]
  int v21; // [rsp+80h] [rbp-278h]
  _QWORD v22[34]; // [rsp+A0h] [rbp-258h] BYREF
  _BYTE Src[256]; // [rsp+1B0h] [rbp-148h] BYREF

  v3 = a1;
  v4 = 0;
  memset(Src, 0, sizeof(Src));
  v5 = 0LL;
  if ( (_DWORD)v3 )
  {
    if ( (unsigned int)v3 <= 0x20 && a2 )
      RtlCopyFromUser(Src, a2, 8 * v3);
    else
      v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( DefaultConnection )
    {
      v4 = 0;
      v8 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      v10 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v10 )
        v8 = *(_QWORD *)(v10 + 256);
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0;
      v5 = 0LL;
      if ( !v8 )
        goto LABEL_34;
      v18 = 0;
      ExAcquirePushLockSharedEx((char *)DefaultConnection + 200, 0LL);
      *((_BYTE *)DefaultConnection + 208) = 0;
      if ( *((_DWORD *)DefaultConnection + 54) || *((_DWORD *)DefaultConnection + 55) )
      {
        v19 = *(_OWORD *)((char *)DefaultConnection + 216);
        v20 = *((_QWORD *)DefaultConnection + 29);
        v21 = *((_DWORD *)DefaultConnection + 60);
        v18 = 1;
      }
      ExReleasePushLockSharedEx((char *)DefaultConnection + 200, 0LL);
      if ( v18 )
      {
        ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
        *(_BYTE *)(v8 + 48) = 1;
        v11 = *(_QWORD *)(v8 + 56);
        v12 = v11;
        if ( v11 )
        {
          if ( (_QWORD)v19 != *(_QWORD *)(v11 + 4) || (v13 = 1, (_DWORD)v20 != *(_DWORD *)(v11 + 12)) )
            v13 = 0;
          v12 = *(_QWORD *)(v8 + 56);
          if ( !v13 )
          {
            DirectComposition::CCompClockInfo::Release((DirectComposition::CCompClockInfo *)v11);
            *(_QWORD *)(v8 + 56) = 0LL;
            v12 = 0LL;
          }
        }
        if ( !v12 )
          v4 = DirectComposition::CCompClockInfo::Create(
                 (const struct tagCOMPOSITION_TARGET_ID *)&v19,
                 (struct DirectComposition::CCompClockInfo **)(v8 + 56));
        if ( v4 >= 0 )
        {
          _InterlockedIncrement(*(volatile signed __int32 **)(v8 + 56));
          v5 = *(_QWORD *)(v8 + 56);
        }
        v14 = v8 + 40;
        if ( *(_BYTE *)(v8 + 48) )
          ExReleasePushLockExclusiveEx(v14);
        else
          ExReleasePushLockSharedEx(v14, 0LL);
      }
      else
      {
LABEL_34:
        v4 = -1073741823;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection + 2, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)(v5 + 16)
        && DirectComposition::CCompClockInfo::EnsureVBlankEvent((DirectComposition::CCompClockInfo *)v5) )
      {
        KeEnterCriticalRegion();
        LOBYTE(v15) = 1;
        v4 = DxgkModifyVSyncWaiterInternal(*(unsigned int *)(v5 + 16), *(unsigned int *)(v5 + 12), v15);
        if ( v4 >= 0 )
        {
          memset(v22, 0, 0x108uLL);
          memmove(v22, Src, 8LL * (unsigned int)v3);
          v22[(unsigned int)v3] = *(_QWORD *)(v5 + 24);
          LOBYTE(v16) = 1;
          v4 = ObWaitForMultipleObjects((unsigned int)(v3 + 1), v22, v16);
          DxgkModifyVSyncWaiterInternal(*(unsigned int *)(v5 + 16), *(unsigned int *)(v5 + 12), 0LL);
        }
        KeLeaveCriticalRegion();
      }
      else
      {
        v4 = -1073741823;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        DirectComposition::CCompClockInfo::`scalar deleting destructor'((PVOID)v5, 1u);
    }
  }
  return (unsigned int)v4;
}
