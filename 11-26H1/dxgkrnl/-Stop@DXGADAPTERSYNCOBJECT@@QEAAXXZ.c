/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x140353308
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1403531A0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x140353634 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140056FF0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VidMmUnmapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x140081E60 (-VidMmUnmapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STO.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401AD710 (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiDestroyNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYNATIVEFENCE@@@Z @ 0x1401ADE80 (-DdiDestroyNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYNATIVEFENCE@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  void *v5; // rdx
  ADAPTER_RENDER *v6; // rcx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( _InterlockedExchange64((volatile __int64 *)this + 4, 0LL) )
  {
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      v5 = *(void **)(v3 + 32);
      if ( v5 )
        ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 2), v5);
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(*((struct DXG_SIGNAL_GUEST_CPU_EVENT **)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 640LL))(v1);
    if ( *((_QWORD *)this + 6) )
    {
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952) )
      {
        v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v7[0] = *((unsigned __int64 *)this + 6);
        memset(&v7[1], 0, 32);
        if ( (int)ADAPTER_RENDER::DdiDestroyNativeFence(v6, (struct _DXGKARG_DESTROYNATIVEFENCE *)v7) < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2361;
        }
      }
    }
    if ( *((_QWORD *)this + 16) )
    {
      VIDMM_EXPORT::VidMmUnmapPagingProcessGpuVA(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
        (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
        *((_DWORD *)this + 36));
      *((_QWORD *)this + 16) = 0LL;
    }
    if ( *((_QWORD *)this + 15) )
    {
      VIDMM_EXPORT::VidMmUnmapPagingProcessGpuVA(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
        *((struct VIDMM_MONITORED_FENCE_STORAGE **)this + 17),
        *((_DWORD *)this + 36));
      *((_QWORD *)this + 15) = 0LL;
      *((_QWORD *)this + 17) = 0LL;
    }
    LOBYTE(v4) = *((_BYTE *)this + 27) != 0;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 880LL))(
      (char *)this + 56,
      v4);
  }
}
