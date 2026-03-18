/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140075390 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  __int64 v2; // rcx
  PVOID *p_DeviceContext; // rbx
  struct _ENTRY *EntryFromObject; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // esi
  LONG v9; // r13d
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  LONG v12; // r8d
  LONG *v13; // rcx
  LONG v14; // eax
  LONG left; // edx
  LONG top; // ecx
  LONG right; // r9d
  LONG bottom; // r8d
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  HANDLE v23; // rax
  char *v24; // rcx
  __int64 result; // rax
  __int64 v26; // rbx
  HANDLE CurrentThreadId; // rax
  char *v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // [rsp+20h] [rbp-30h] BYREF
  __int64 v31; // [rsp+28h] [rbp-28h] BYREF
  struct _RECTL v32; // [rsp+30h] [rbp-20h] BYREF

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(PVOID **)(W32GetSessionState(v2) + 88);
  else
    p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  *((_DWORD *)this + 9) |= 0x10u;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleManager *)p_DeviceContext[709], this);
  else
    EntryFromObject = (struct _ENTRY *)HmgPentryFromPobj(this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  v5 = *((_QWORD *)this + 62);
  if ( v5 && (*(_DWORD *)(v5 + 116) & 0x800) != 0 )
    v6 = *(_QWORD *)((char *)this + 532);
  else
    v6 = *((_QWORD *)this + 64);
  v7 = (_DWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)&v32.right = v6;
  v8 = 0;
  *(_QWORD *)&v32.left = 0LL;
  v9 = v6;
  v30 = v6;
  v10 = HIDWORD(v6);
  if ( v5 )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v31);
    if ( (v7[10] & 0x8000) != 0
      && ((v11 = *((_QWORD *)this + 62), v12 = *(_DWORD *)(v11 + 56), v13 = (LONG *)(v11 + 60), v12 < v9)
       || *v13 < SHIDWORD(v30)) )
    {
      v14 = *v13;
      left = v32.left;
      top = v32.top;
      right = v32.right;
      if ( v32.left < 0 )
        left = 0;
      v32.left = left;
      if ( v32.top < 0 )
        top = 0;
      v32.top = top;
      if ( v12 < v32.right )
        right = v12;
      bottom = v32.bottom;
      v32.right = right;
      if ( v14 < v32.bottom )
        bottom = v14;
      v32.bottom = bottom;
      if ( right >= left )
      {
        if ( bottom < top )
          top = bottom;
        v32.top = top;
      }
      else
      {
        left = right;
        v32.left = right;
      }
    }
    else
    {
      bottom = v32.bottom;
      right = v32.right;
      top = v32.top;
      left = v32.left;
    }
    if ( (v7[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
    {
      v32.left = v7[644] + left;
      v32.right = v7[644] + right;
      v32.top = v7[645] + top;
      v32.bottom = v7[645] + bottom;
    }
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v31);
  }
  v19 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 1112, 0LL);
  *((_QWORD *)this + 140) = PsGetCurrentThreadId();
  v20 = *((_QWORD *)this + 142);
  if ( v20 && v20 != *(_QWORD *)(v19 + 4160) )
  {
    v30 = *((_QWORD *)this + 142);
    RGNOBJ::vSet((RGNOBJ *)&v30, &v32);
LABEL_42:
    v26 = *((_QWORD *)this + 142);
    *(_DWORD *)(v26 + 72) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v21) + 88)
                                                                            + 4144LL));
    CurrentThreadId = PsGetCurrentThreadId();
    v28 = (char *)this + 1112;
    if ( CurrentThreadId == *((HANDLE *)this + 140) )
    {
      *((_QWORD *)this + 140) = 0LL;
      ExReleasePushLockExclusiveEx(v28, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v28, 0LL);
    }
    KeLeaveCriticalRegion();
    *(struct _RECTL *)((char *)this + 1000) = v32;
    *((_QWORD *)this + 127) = 0LL;
    *((_QWORD *)this + 129) = 0LL;
    *((_DWORD *)this + 260) = v9;
    *((_DWORD *)this + 261) = v10;
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v29 = *((_DWORD *)this + 257);
      v8 = *((_DWORD *)this + 256);
    }
    else
    {
      v29 = 0;
    }
    *((_DWORD *)this + 299) = v29;
    result = 1LL;
    *((_DWORD *)this + 298) = v8;
    return result;
  }
  v30 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v30, 0x70u);
  v22 = v30;
  if ( v30 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v30, &v32);
    *((_QWORD *)this + 142) = v22;
    goto LABEL_42;
  }
  *((_QWORD *)this + 142) = *(_QWORD *)(v19 + 4160);
  v23 = PsGetCurrentThreadId();
  v24 = (char *)this + 1112;
  if ( v23 == *((HANDLE *)this + 140) )
  {
    *((_QWORD *)this + 140) = 0LL;
    ExReleasePushLockExclusiveEx(v24, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v24, 0LL);
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
