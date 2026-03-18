/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x14029BEC8
 * Callers:
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x14029CB18 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x14029E57C (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14029C2EC (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x14029C4AC (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x14029C5C0 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1402B0B58 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B1A40 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a3,
        unsigned int a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        unsigned int a8,
        struct DXGCONTEXT **a9,
        struct COREDEVICEACCESS *a10)
{
  unsigned int v13; // ebp
  struct DXGFASTMUTEX *v14; // rdi
  int v15; // edi
  struct DXGFASTMUTEX *v16; // rsi
  int v17; // edx
  unsigned int v18; // eax
  OUTPUTDUPL_CONTEXT **v19; // r13
  OUTPUTDUPL_MGR *v20; // rcx
  OUTPUTDUPL_MGR *v21; // rcx
  int v22; // eax
  const wchar_t *v24; // r9
  int v25; // [rsp+50h] [rbp-138h]
  unsigned int v26; // [rsp+54h] [rbp-134h]
  struct DXGFASTMUTEX *v29[2]; // [rsp+70h] [rbp-118h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v30; // [rsp+80h] [rbp-108h]
  struct DXGCONTEXT **v31; // [rsp+88h] [rbp-100h]
  struct DXGK_PRESENT_PARAMS *v32; // [rsp+90h] [rbp-F8h]
  _BYTE v33[24]; // [rsp+98h] [rbp-F0h] BYREF
  struct VIDMM_DMA_BUFFER *v34[16]; // [rsp+B0h] [rbp-D8h] BYREF

  v30 = a6;
  v32 = a7;
  v13 = 0;
  v31 = a9;
  memset(v34, 0, sizeof(v34));
  v14 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, v14, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  LODWORD(v14) = *((_DWORD *)v14 + 16);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  v15 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a10, (unsigned int)v14, v34);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1082;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire DMA buffer for context = 0x%I64x",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
  v29[0] = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a8);
  v16 = v29[0];
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, v29[0], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  v17 = 1;
  v18 = 0;
  v19 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v16 + 6);
  v20 = this;
  v25 = 1;
  while ( 1 )
  {
    v26 = v18;
    if ( v18 >= *((_DWORD *)v20 + 2) )
      break;
    if ( *v19 && *((_DWORD *)*v19 + 79) )
    {
      if ( v17 )
      {
        if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v20) )
        {
          v15 = OUTPUTDUPL_MGR::LogPresentParams(v21, a3, v30, a8, *((struct AUTOEXPANDALLOCATION **)v29[0] + 7));
          if ( v15 < 0 )
          {
            WdLogSingleEntry1(2LL);
            v24 = L"Failed to log diag packet 0x%I64x";
            WdLogGlobalForLineNumber = 1106;
LABEL_20:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, (__int64)a2, 0LL, 0LL, 0LL, 0LL);
            break;
          }
        }
        v25 = 0;
      }
      v22 = OUTPUTDUPL_CONTEXT::ProcessPresent(
              *v19,
              a2,
              a3,
              a4,
              a5,
              v30,
              v32,
              *((struct AUTOEXPANDALLOCATION **)v29[0] + 7),
              v31);
      v15 = v22;
      if ( v22 != -1071775486 )
      {
        if ( v22 < 0 )
        {
          v13 = v22;
          WdLogSingleEntry1(2LL);
          v24 = L"Process present failed for context 0x%I64x";
          WdLogGlobalForLineNumber = 1135;
          goto LABEL_20;
        }
        if ( v22 == 259 )
LABEL_14:
          v13 = 259;
        v17 = v25;
        v20 = this;
        goto LABEL_5;
      }
      v15 = 259;
      *((_DWORD *)*v19 + 70) = 1;
      goto LABEL_14;
    }
LABEL_5:
    v18 = v26 + 1;
    ++v19;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1153;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"As we failed to process the present we will mark all the contexts on VidPnSource 0x%I64x for destroy",
      a8,
      0LL,
      0LL,
      0LL,
      0LL);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a8, 0LL, 0LL, 0, 7);
    if ( v13 != v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1156;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RetStatus == Status", 1156LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v13 != -1073741130 )
      v13 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v13;
}
