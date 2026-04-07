/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18005721C
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180057180 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180008418 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180055790 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180057F90 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCDWMDisplay@@$0A@@@QEAAJPEFBQEAVCDWMDisplay@@I@Z @ 0x180064640 (-AddMultipleAndSet@-$DynArray@PEAVCDWMDisplay@@$0A@@@QEAAJPEFBQEAVCDWMDisplay@@I@Z.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x18006A374 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800712B4 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?ApplyUniformSpaceMapping@CDWMDisplaySet@@AEAAXPEAUDXGIOutputInfo@@@Z @ 0x180073960 (-ApplyUniformSpaceMapping@CDWMDisplaySet@@AEAAXPEAUDXGIOutputInfo@@@Z.c)
 *     ?GetOutputInfo@CDWMDXGIAdapter@@QEBAAEAUDXGIOutputInfo@@I@Z @ 0x180075C80 (-GetOutputInfo@CDWMDXGIAdapter@@QEBAAEAUDXGIOutputInfo@@I@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  unsigned int v2; // ebx
  char v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  CDWMDXGIAdapter *v6; // r14
  unsigned int i; // esi
  char *OutputInfo; // rdi
  int updated; // eax
  CDWMDisplaySet *v10; // rcx
  CDWMDisplay *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  CDWMDisplay *v15; // [rsp+60h] [rbp+8h] BYREF
  CDWMDisplay *v16; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v15 = 0LL;
  v3 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 48LL)) != 0;
  v4 = 0LL;
LABEL_2:
  v5 = *((_QWORD *)this + 1);
  if ( (unsigned int)v4 < *(_DWORD *)(v5 + 80) )
  {
    v6 = *(CDWMDXGIAdapter **)(*(_QWORD *)(v5 + 56) + 8 * v4);
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)v6 + 94) )
      {
        v4 = (unsigned int)(v4 + 1);
        goto LABEL_2;
      }
      OutputInfo = (char *)CDWMDXGIAdapter::GetOutputInfo(v6, i);
      updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)OutputInfo);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)OutputInfo) )
      {
        CDWMDisplaySet::ApplyUniformSpaceMapping(v10, (struct DXGIOutputInfo *)OutputInfo);
        if ( OutputInfo[220] >= 0 )
        {
          updated = DXGIOutputInfo::Validate((DXGIOutputInfo *)OutputInfo);
          v2 = updated;
          if ( updated < 0 )
          {
            v13 = 260;
            goto LABEL_20;
          }
          v11 = (CDWMDisplay *)DefaultHeap::AllocClear(0x128uLL);
          if ( !v11 )
            ModuleFailFastForHRESULT(2147942414LL, retaddr);
          v16 = v11;
          v15 = CDWMDisplay::CDWMDisplay(v11, v3, v6, (const struct DXGIOutputInfo *)OutputInfo);
          if ( !v15 )
          {
            v2 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x10Cu, 0LL);
            goto LABEL_21;
          }
          updated = DynArray<CDWMDisplay *,0>::AddMultipleAndSet((char *)this + 40, &v15);
          v2 = updated;
          if ( updated < 0 )
          {
            v13 = 270;
            goto LABEL_20;
          }
          v15 = 0LL;
        }
      }
    }
    v13 = 239;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v13, 0LL);
  }
LABEL_21:
  if ( v15 )
    CDWMDisplay::Release(v15);
  return v2;
}
