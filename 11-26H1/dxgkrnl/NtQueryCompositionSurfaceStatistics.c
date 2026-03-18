/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x14003BE60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1400265E0 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x140067720 (Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline.c)
 *     ?QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1400A34C0 (-QueryStats@CCompositionBuffer@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(HANDLE Handle, void *a2)
{
  _QWORD *v4; // rsi
  NTSTATUS Stats; // ebx
  _QWORD *v6; // rdi
  CCompositionSurface *v7; // rdi
  __int64 v8; // rcx
  HANDLE CurrentThreadId; // rax
  _QWORD *v10; // rcx
  CCompositionBuffer *ActiveBuffer; // rax
  PVOID Object; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE Src[80]; // [rsp+50h] [rbp-88h] BYREF

  memset(Src, 0, sizeof(Src));
  KeEnterCriticalRegion();
  v4 = 0LL;
  Object = 0LL;
  Stats = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  if ( Stats >= 0 )
  {
    v6 = Object;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
    {
      v4 = v6;
    }
    else
    {
      ObfDereferenceObject(v6);
      Stats = -1073741788;
    }
  }
  if ( Stats >= 0 )
  {
    v7 = 0LL;
    Stats = ObReferenceObjectByPointer(v4, 3u, g_pDxgkCompositionObjectType, 0);
    if ( Stats >= 0 )
    {
      KeEnterCriticalRegion();
      v7 = (CCompositionSurface *)(v4 + 5);
      ExAcquirePushLockSharedEx(v4 + 6, 0LL);
      Stats = 0;
    }
    if ( Stats >= 0 )
    {
      Stats = -1073741823;
      Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline();
      v8 = *((_QWORD *)v7 + 19);
      if ( v8 )
        Stats = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 48LL))(v8, Src);
      if ( !*((_QWORD *)v7 + 19) || Stats == -1073741637 )
      {
        ActiveBuffer = CCompositionSurface::GetActiveBuffer(v7);
        if ( ActiveBuffer )
          Stats = CCompositionBuffer::QueryStats(ActiveBuffer, (struct CSM_BUFFER_STATISTICS *)Src);
      }
      if ( Stats < 0 && !(unsigned int)Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline() )
        memset(Src, 0, sizeof(Src));
      CurrentThreadId = PsGetCurrentThreadId();
      v10 = (_QWORD *)((char *)v7 + 8);
      if ( CurrentThreadId == *((HANDLE *)v7 + 2) )
      {
        *((_QWORD *)v7 + 2) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v10, 0LL);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject((char *)v7 - 40);
    }
    ObfDereferenceObject(v4);
  }
  if ( a2 )
    RtlCopyToUser(a2, Src, 0x50uLL);
  else
    Stats = -1073741811;
  KeLeaveCriticalRegion();
  return (unsigned int)Stats;
}
