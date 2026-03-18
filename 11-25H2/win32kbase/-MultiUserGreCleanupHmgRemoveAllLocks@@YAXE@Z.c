/*
 * XREFs of ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140085920
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1400845B0 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x14006F370 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1400BFC00 (UserIsProcessImmersiveAppContainer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14015E824 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1401A0934 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall MultiUserGreCleanupHmgRemoveAllLocks(char a1)
{
  __int64 CurrentProcess; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  GdiHandleManager *v9; // rbx
  unsigned int NextEntryIndex; // r12d
  struct _ENTRY *v11; // rdi
  struct OBJECT *EntryObject; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rbx
  __int64 v17; // rcx
  int v18; // r8d
  bool v19; // zf
  struct _GRETHREAD *v20; // rax
  int v21; // esi
  struct OBJECT *v22; // rax
  struct OBJECT *v23; // rbx
  unsigned int v24; // eax
  char v25; // al
  struct _ERESOURCE *v26; // rbx
  __int64 v27; // rcx
  int v28; // r8d
  bool v29; // zf
  struct _GRETHREAD *v30; // rax
  struct _ENTRY *v31; // [rsp+30h] [rbp-58h] BYREF
  HSEMAPHORE v32; // [rsp+38h] [rbp-50h] BYREF
  HSEMAPHORE v33; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v34; // [rsp+98h] [rbp+10h]
  unsigned int v35; // [rsp+A0h] [rbp+18h]
  __int64 v36; // [rsp+A8h] [rbp+20h]

  v31 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  v36 = CurrentProcess;
  v5 = *(_QWORD *)(W32GetSessionState(v3) + 88);
  if ( !*(_DWORD *)(v5 + 3032) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && !*(_DWORD *)(CurrentProcessWin32Process + 64)
        && (a1 != 5 || !(unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess)) )
      {
        return;
      }
    }
  }
  SEMOBJ<20>::SEMOBJ<20>(&v33);
  v35 = 0;
  v7 = 0;
  v34 = 0;
  v8 = 0;
  v9 = *(GdiHandleManager **)(v5 + 5672);
  NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v9, 0, &v31);
  if ( !NextEntryIndex )
    goto LABEL_54;
  do
  {
    v11 = v31;
    if ( *(_DWORD *)(v5 + 3032) )
      goto LABEL_29;
    if ( a1 == 5 && *((_BYTE *)v31 + 14) == 5 && *((char *)v31 + 15) < 0 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(v9, NextEntryIndex);
      v13 = (_QWORD *)*((_QWORD *)EntryObject + 80);
      v14 = v13 ? *v13 : 0LL;
      if ( v14 == CurrentProcess )
      {
        SEMOBJ<20>::SEMOBJ<20>(&v32);
        v15 = HmgPentryFromPobj(EntryObject);
        *(_BYTE *)(v15 + 15) &= ~0x80u;
        *((_QWORD *)EntryObject + 80) = 0LL;
        v16 = (struct _ERESOURCE *)v32;
        if ( v32 )
        {
          if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          {
            v19 = gbLockEtw == 0;
          }
          else
          {
            v17 = *(_QWORD *)(W32GetSessionState(v17) + 88);
            v19 = *(_DWORD *)(v17 + 16) == 0;
          }
          if ( !v19 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            McTemplateK0pz_EtwWriteTransfer(v17, (unsigned int)&LockRelease, v18, (_DWORD)v16, (__int64)L"Hmgr");
          v20 = GreGetCurrentThreadCrossSessionCheck();
          if ( v20 )
          {
            v19 = (*((_BYTE *)v20 + 28))-- == 1;
            if ( v19 )
              *(_QWORD *)v20 &= ~0x100000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v16);
          v32 = 0LL;
        }
      }
    }
    if ( *(_DWORD *)(v5 + 3032)
      || ((*((_DWORD *)v11 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
    {
LABEL_29:
      v21 = *((unsigned __int8 *)v11 + 14);
      if ( a1 != (_BYTE)v21 && (a1 || (unsigned __int8)(v21 - 1) > 0x1Du) )
        goto LABEL_50;
      v22 = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v5 + 5672), NextEntryIndex);
      v23 = v22;
      if ( *(_DWORD *)(v5 + 3032) )
        goto LABEL_47;
      if ( *((_DWORD *)v22 + 2) && (v21 == 5 || v21 == 7 || v21 == 8 || v21 == 9 || v21 == 16) )
        *((_WORD *)v22 + 7) |= 0x40u;
      if ( *(_DWORD *)(v5 + 3032) )
        goto LABEL_47;
      if ( !*((_DWORD *)v22 + 2) && (*((_BYTE *)v22 + 14) & 0x40) == 0 )
      {
        v24 = *((unsigned __int16 *)v22 + 6);
        if ( (_WORD)v24 )
        {
          if ( !v7 )
          {
            v35 = v24;
            v34 = *((_BYTE *)v11 + 14);
          }
          v8 |= 1 << *((_BYTE *)v11 + 14);
          ++v7;
        }
LABEL_47:
        *((_DWORD *)v23 + 2) = 0;
        *((_WORD *)v23 + 6) = 0;
        *((_QWORD *)v23 + 2) = 0LL;
        *((_BYTE *)v11 + 6) = 0;
        v25 = *((_BYTE *)v11 + 15) & 0xFE;
        *((_BYTE *)v11 + 15) = v25;
        if ( (v25 & 0x20) != 0 )
          *((_QWORD *)v11 + 2) = 0LL;
        *((_BYTE *)v11 + 15) &= ~0x20u;
LABEL_50:
        CurrentProcess = v36;
        goto LABEL_51;
      }
      if ( !(unsigned int)HmgSetOwner(*(_QWORD *)v22, -2147483630, *((_BYTE *)v11 + 14)) )
        goto LABEL_50;
      CurrentProcess = v36;
      if ( (*((_BYTE *)v23 + 14) & 0x40) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 1756));
    }
LABEL_51:
    v9 = *(GdiHandleManager **)(v5 + 5672);
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v9, NextEntryIndex, &v31);
  }
  while ( NextEntryIndex );
  if ( v7 )
    TraceLoggingWriteUnsupportedGdiUsage(NextEntryIndex + 26, v7, v8, v35, v34);
LABEL_54:
  v26 = (struct _ERESOURCE *)v33;
  if ( v33 )
  {
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    {
      v29 = gbLockEtw == 0;
    }
    else
    {
      v27 = *(_QWORD *)(W32GetSessionState(v27) + 88);
      v29 = *(_DWORD *)(v27 + 16) == 0;
    }
    if ( !v29 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v27, (unsigned int)&LockRelease, v28, (_DWORD)v26, (__int64)L"Hmgr");
    v30 = GreGetCurrentThreadCrossSessionCheck();
    if ( v30 )
    {
      v19 = (*((_BYTE *)v30 + 28))-- == 1;
      if ( v19 )
        *(_QWORD *)v30 &= ~0x100000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v26);
  }
}
