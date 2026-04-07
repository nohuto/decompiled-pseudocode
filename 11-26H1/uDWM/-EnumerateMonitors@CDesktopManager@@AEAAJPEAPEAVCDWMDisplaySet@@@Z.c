/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056DE8
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180057018 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800570E0 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ??0CDWMDisplaySet@@QEAA@XZ @ 0x18005714C (--0CDWMDisplaySet@@QEAA@XZ.c)
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180057180 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800582A8 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  int v2; // ebx
  volatile signed __int32 *v4; // rax
  const struct CDWMDXGIEnumeration **v5; // rsi
  CDWMDisplaySet *v6; // rcx
  CDWMDisplaySet *v7; // rax
  CDWMDisplaySet *v8; // rax
  __int64 v9; // rcx
  unsigned int i; // r14d
  CDWMDisplaySet *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  CDWMDisplaySet *v15; // r8
  unsigned int v16; // edx
  int v17; // ebp
  unsigned int v18; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  CDWMDisplaySet *v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 18);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v4 )
    _InterlockedIncrement(v4);
  v5 = (const struct CDWMDXGIEnumeration **)((char *)this + 136);
  while ( 1 )
  {
    if ( *v5 )
    {
      (*(void (__fastcall **)(const struct CDWMDXGIEnumeration *))(*(_QWORD *)*v5 + 8LL))(*v5);
      *v5 = 0LL;
    }
    v6 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
    if ( v6 )
    {
      CDWMDisplaySet::Release(v6);
      *((_QWORD *)this + 18) = 0LL;
    }
    if ( (int)CDWMDXGIEnumeration::Create(v5) >= 0 )
    {
      v7 = (CDWMDisplaySet *)operator new(0x70uLL);
      v20 = v7;
      if ( !v7 )
      {
        *((_QWORD *)this + 18) = 0LL;
LABEL_19:
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x422u, 0LL);
        goto LABEL_20;
      }
      v8 = CDWMDisplaySet::CDWMDisplaySet(v7);
      *((_QWORD *)this + 18) = v8;
      if ( !v8 )
        goto LABEL_19;
      v2 = CDWMDisplaySet::Init(v8, *v5);
    }
    if ( *v5 )
    {
      v9 = *((_QWORD *)*v5 + 2);
      if ( v9 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 104LL))(v9) )
          break;
      }
    }
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x434u, 0LL);
    goto LABEL_20;
  }
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 8u);
  for ( i = 0; ; ++i )
  {
    v12 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
    if ( i >= *((_DWORD *)v12 + 16) )
      break;
    v13 = *((_QWORD *)CDWMDisplaySet::DisplayNoRef(v12, i) + 11);
    v14 = *((unsigned int *)this + 32);
    v15 = *(CDWMDisplaySet **)(v13 + 16);
    v16 = v14 + 1;
    v20 = v15;
    if ( (int)v14 + 1 < (unsigned int)v14 )
    {
      v2 = -2147024362;
      v18 = 183;
      v17 = -2147024362;
      goto LABEL_28;
    }
    v17 = 0;
    if ( v16 <= *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v14) = v15;
      *((_DWORD *)this + 32) = v16;
    }
    else
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8, 1, &v20);
      v2 = v17;
      if ( v17 < 0 )
      {
        v18 = 194;
LABEL_28:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v18, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x43Au, 0LL);
LABEL_20:
        ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
      }
    }
    v2 = v17;
  }
  return (unsigned int)v2;
}
