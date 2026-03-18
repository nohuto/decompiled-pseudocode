/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830
 * Callers:
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001AE78 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x14006F750 (HmgShareUnlockRemoveObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x14008D360 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6A80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14003E28C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x14004AC30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1400B5DE8 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C8258 (HmgDecProcessHandleCountFastOpt.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(unsigned int **this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  PVOID *p_DeviceContext; // rcx
  unsigned int v5; // ebx
  char EtwGdiHandleType; // di
  unsigned int *v7; // r8
  __int64 v8; // rsi
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v11; // ecx
  int v12; // r8d
  int (*v13)(void); // rax
  unsigned __int8 v14; // bl
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, _QWORD); // rax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  unsigned int v20; // esi
  GdiHandleManager *v21; // rdi
  struct OBJECT *EntryObject; // rbx
  int v23; // r9d
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  GdiHandleManager *v27; // rbx
  struct OBJECT *v28; // rax

  v2 = (*this)[2];
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
  {
    p_DeviceContext = (PVOID *)this[2];
  }
  else if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
  {
    p_DeviceContext = *(PVOID **)(W32GetSessionState(v3) + 88);
  }
  else
  {
    p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
  v5 = v2 & 0xFFFFFFFE;
  HmgDecProcessHandleCountFastOpt(p_DeviceContext, v5);
  EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)*this + 14));
  v8 = *(_QWORD *)GdiHandleManager::GetEntryObject(*((GdiHandleManager **)this[2] + 709), *v7);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(
      v11,
      (unsigned int)&GdiDestroyHandle,
      v12,
      v8,
      EtwGdiHandleType,
      ProcessSessionId,
      v5);
  }
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2664LL);
  if ( v13 )
  {
    if ( v13() >= 0 )
    {
      v14 = *((_BYTE *)*this + 14);
      v15 = *(_QWORD *)GdiHandleManager::GetEntryObject(*((GdiHandleManager **)this[2] + 709), **this);
      v16 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2672LL);
      if ( v16 )
        v16(v15, v14);
    }
  }
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
  {
    v18 = 0LL;
    if ( *CurrentThreadWin32Thread )
      v18 = *CurrentThreadWin32Thread + 8LL;
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 336);
      if ( v19 )
      {
        v20 = **this;
        v21 = (GdiHandleManager *)*((_QWORD *)this[2] + 709);
        EntryObject = GdiHandleManager::GetEntryObject(v21, v20);
        v23 = (unsigned __int16)*(_DWORD *)GdiHandleManager::GetEntryObject(v21, v20) | (*(_DWORD *)EntryObject >> 8) & 0xFF0000;
        v24 = *(_QWORD *)(v19 + 24);
        v25 = 0LL;
        if ( v24 )
        {
          v26 = *(_QWORD *)(v19 + 40);
          while ( *(_DWORD *)(v26 + 4 * v25) != v23 )
          {
            if ( ++v25 >= v24 )
              goto LABEL_23;
          }
          *(_DWORD *)(v26 + 4 * v25) = *(_DWORD *)(v26 + 4 * v24 - 4);
          *(_DWORD *)(*(_QWORD *)(v19 + 40) + 4LL * (*(_QWORD *)(v19 + 24))-- - 4) = 0;
        }
      }
    }
  }
LABEL_23:
  *((_BYTE *)*this + 14) = 0;
  *((_QWORD *)*this + 2) = 0LL;
  (*this)[2] = 0;
  v27 = (GdiHandleManager *)*((_QWORD *)this[2] + 709);
  v28 = GdiHandleManager::GetEntryObject(v27, **this);
  GdiHandleManager::ReleaseLockAndEntry(v27, v28);
  *((_DWORD *)this + 2) = 0;
  *this = 0LL;
  KeLeaveCriticalRegion();
}
