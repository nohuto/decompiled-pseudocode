/*
 * XREFs of ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1402DD148
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsWireformatHighBpp@@YA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14005FEB0 (-IsWireformatHighBpp@@YA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

char __fastcall DmmNeedTargetModeWireformatOrColorspaceChange(_QWORD *a1, unsigned int a2, enum _D3DDDIFORMAT a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  VIDPN_MGR *v8; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v10; // rdi
  int NumPathsFromSource; // eax
  unsigned __int64 v12; // r12
  char v13; // si
  int v14; // eax
  __int64 v15; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  DMMVIDPNTARGET *v17; // rcx
  struct DMMVIDPNTARGETMODESET *v18; // rbx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v19; // rax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v20; // ecx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v21; // edx
  __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-10h] BYREF
  struct DMMVIDPNTARGETMODESET *v25; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304953) )
  {
    if ( a1 )
    {
      v6 = a1[395];
      if ( v6 )
      {
        v8 = *(VIDPN_MGR **)(v6 + 104);
        if ( v8 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, (__int64)v8);
          v22 = 0LL;
          ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
          auto_rc<DMMVIDPN const>::reset(&v22, (__int64)ClientCommittedVidPnRef);
          v10 = v22;
          if ( v22 )
          {
            v24 = 0LL;
            NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(v22 + 96), v4, &v24);
            if ( NumPathsFromSource < 0 )
            {
              WdLogSingleEntry3(2LL, v4, v10 + 96, NumPathsFromSource);
              WdLogGlobalForLineNumber = 15598;
              goto LABEL_33;
            }
            v12 = 0LL;
            v13 = 1;
            while ( 1 )
            {
              if ( v12 >= v24 )
                goto LABEL_27;
              LODWORD(v25) = -1;
              v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
                      (DMMVIDPNTOPOLOGY *)(v10 + 96),
                      v4,
                      v12,
                      (unsigned int *)&v25);
              if ( v14 < 0 )
                break;
              v15 = (unsigned int)v25;
              if ( (_DWORD)v25 == -1 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 15622;
              }
              Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v10 + 96), v4, v15);
              if ( !Path )
              {
                WdLogSingleEntry3(2LL, v10, v4, v15);
                WdLogGlobalForLineNumber = 15629;
                goto LABEL_33;
              }
              v17 = (DMMVIDPNTARGET *)*((_QWORD *)Path + 12);
              if ( !v17 )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 15637;
LABEL_27:
                v13 = 0;
LABEL_28:
                auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
                DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
                return v13;
              }
              v18 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v17);
              v25 = v18;
              if ( !*((_QWORD *)v18 + 18) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 15646;
              }
              v19 = (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)*((_QWORD *)v18 + 18);
              v20.0 = v19[33].0;
              v21.0 = v19[34].0;
              if ( a3 == D3DDDIFMT_A16B16G16R16F || a3 == D3DDDIFMT_A16B16G16R16 )
              {
                if ( v21.Value == 12 || v21.Value == 32 )
LABEL_41:
                  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v25, 0LL);
                else
LABEL_31:
                  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v18 + 88));
                goto LABEL_28;
              }
              if ( v21.Value == 12 || v21.Value == 32 )
                goto LABEL_31;
              if ( v21.Value == 30 )
                goto LABEL_41;
              if ( a3 == D3DDDIFMT_A2B10G10R10 || a3 == D3DDDIFMT_A2R10G10B10 )
              {
                if ( !IsWireformatHighBpp(v20) )
                  goto LABEL_41;
              }
              else if ( IsWireformatHighBpp(v20) )
              {
                goto LABEL_41;
              }
              ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v18 + 88));
              ++v12;
            }
            WdLogSingleEntry3(2LL, v12, v4, v14);
            WdLogGlobalForLineNumber = 15618;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 15583;
          }
LABEL_33:
          auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 15566;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 15552;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15537;
    }
  }
  return 0;
}
