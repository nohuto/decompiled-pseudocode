/*
 * XREFs of ?Move_Resource_To_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800FE870
 * Callers:
 *     <none>
 * Callees:
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x18003EC8C (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180062AE8 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180063624 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180067534 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800CAB20 (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSaDeviceProxy::Move_Resource_To_SaDeviceParam(CSaDeviceProxy *this, CResourcePriorityTracker **a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  CResourcePriorityTracker *v6; // rax
  CResourcePriorityTracker *v7; // rbp
  __int64 v8; // rdi
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    if ( *((_QWORD *)this + 6) )
    {
      v4 = (char *)(a2 + 13);
      if ( a2[13] )
        ATL::CAutoPtr<CResourcePriorityTracker>::Free(a2 + 13);
      v5 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      *(_QWORD *)v4 = v5;
      v6 = (CResourcePriorityTracker *)operator new[](0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v6 )
        v6 = CResourcePriorityTracker::CResourcePriorityTracker(v6, *(_DWORD *)(*(_QWORD *)v4 + 56LL));
      *((_QWORD *)this + 6) = v6;
    }
    v7 = (CResourcePriorityTracker *)*((_QWORD *)this + 7);
    v8 = (__int64)a2[12];
    if ( v8 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v9);
      ReleaseAudioResourceHandle(v8);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v9);
    }
    a2[12] = v7;
    *((_QWORD *)this + 7) = 0LL;
  }
}
