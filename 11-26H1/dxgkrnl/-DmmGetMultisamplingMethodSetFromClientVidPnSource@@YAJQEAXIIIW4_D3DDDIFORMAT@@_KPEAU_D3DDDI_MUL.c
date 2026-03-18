/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x14025A284
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1401D37F0 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x14003B508 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004BD5C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402DCAB8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // r14
  __int64 result; // rax
  __int64 v12; // rbx
  VIDPN_MGR *v13; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // ebx
  DMMVIDPN *v15; // rdi
  DMMVIDPNTARGET *SourceFromId; // rax
  DMMVIDPNTARGET *v17; // r15
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  int v21; // eax
  __int64 v22; // r9
  int v23; // eax
  unsigned __int64 v24; // r8
  _DWORD v25[2]; // [rsp+50h] [rbp-20h] BYREF
  VIDPN_MGR *v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  DMMVIDPN *v28; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+50h]
  unsigned int v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v8 = a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9882;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9890;
  }
  v12 = *((_QWORD *)this + 395);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9895;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v13 = *(VIDPN_MGR **)(v12 + 104);
  v26 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 9909;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, (__int64)v13);
  v28 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v15 = v28;
    SourceFromId = DMMVIDPN::GetSourceFromId(v28, v8);
    v17 = SourceFromId;
    if ( SourceFromId )
    {
      v18 = (unsigned __int64 *)DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
      a8 = v18;
      v19 = v18[18];
      if ( v19 )
      {
        BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                      (DMMVIDPNSOURCEMODESET *)v18,
                      v29,
                      v30,
                      a5,
                      (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v19 + 72));
        if ( BestMatch )
        {
          v21 = DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)v18, *((_DWORD *)BestMatch + 6));
          ClientVidPnFromLastClientCommitedVidPn = v21;
          if ( v21 >= 0 )
          {
            v25[0] = v8;
            v25[1] = -1;
            LOBYTE(v22) = 1;
            v23 = VIDPN_MGR::FormalizeVidPnChange(
                    v26,
                    (unsigned __int64)v15 & -(__int64)((DMMVIDPN *)((char *)v15 + 88) != 0LL),
                    3LL,
                    v22,
                    v25);
            ClientVidPnFromLastClientCommitedVidPn = v23;
            if ( v23 >= 0 )
            {
              v24 = *((_QWORD *)v17 + 21) >> 3;
              if ( v10 )
                *v10 = 8 * v24;
              if ( a6 >= v24 )
              {
                if ( a7 )
                  memmove(a7, *((const void **)v17 + 20), 8 * v24);
                auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
                ClientVidPnFromLastClientCommitedVidPn = 0;
              }
              else
              {
                WdLogSingleEntry2(7LL, a6, v24);
                WdLogGlobalForLineNumber = 10047;
                if ( !v10 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 10050;
                }
                auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
                ClientVidPnFromLastClientCommitedVidPn = -1073741789;
              }
              goto LABEL_38;
            }
            if ( v23 == -1071774970 )
            {
              WdLogSingleEntry3(3LL, v15, v8, this);
              WdLogGlobalForLineNumber = 10018;
            }
            else
            {
              WdLogSingleEntry5(2LL, v29, v30, a5, v8, v23);
              WdLogGlobalForLineNumber = 10023;
            }
          }
          else
          {
            WdLogSingleEntry5(2LL, v8, v29, v30, a5, v21);
            WdLogGlobalForLineNumber = 9994;
          }
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
        }
        else
        {
          WdLogSingleEntry5(7LL, v29, v30, a5, v8, this);
          WdLogGlobalForLineNumber = 9979;
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
          ClientVidPnFromLastClientCommitedVidPn = -1071774970;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 9959;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&a8, 0LL);
        ClientVidPnFromLastClientCommitedVidPn = 1075708679;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9940;
      ClientVidPnFromLastClientCommitedVidPn = -1071774972;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 9926;
  }
LABEL_38:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
  return (unsigned int)ClientVidPnFromLastClientCommitedVidPn;
}
