/*
 * XREFs of ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x14022B450
 * Callers:
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402B3814 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x14019CD44 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        struct DXGHWQUEUE *a4,
        unsigned int a5,
        unsigned int a6,
        struct tagRECT *a7,
        struct tagRECT *a8,
        unsigned int a9,
        struct tagRECT *a10,
        unsigned int Size,
        unsigned __int8 *a12)
{
  unsigned int v14; // r14d
  __int64 v15; // rax
  const wchar_t *v16; // r9
  struct DXGKVMB_COMMAND_BASE *v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rsi
  struct DXGPROCESS *v22; // [rsp+50h] [rbp-178h] BYREF
  void *Src; // [rsp+58h] [rbp-170h]
  void *v24; // [rsp+60h] [rbp-168h]
  DXG_VMBUS_CHANNEL_BASE *v25; // [rsp+68h] [rbp-160h]
  struct DXGKVMB_COMMAND_BASE *v26[2]; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-148h]

  v22 = a2;
  v25 = this;
  Src = a10;
  v24 = a12;
  v14 = 16 * a9;
  if ( a9 > 0x2000 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 11591LL;
    v16 = L"SubRectCount is invalid";
LABEL_3:
    WdLogGlobalForLineNumber = v15;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( Size > 0x20000 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 11596LL;
    v16 = L"PrivateDriverDataSize is invalid";
    goto LABEL_3;
  }
  *(_OWORD *)v26 = 0LL;
  v27 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v26, this, v14 + Size + 80, 0LL, 0LL, 0LL);
  v18 = v26[0];
  if ( v26[0] )
  {
    *(_QWORD *)v26[0] = 0LL;
    *((_DWORD *)v18 + 2) = 0;
    *((_BYTE *)v18 + 12) = 0;
    *((_DWORD *)v18 + 3) &= 0x1FFu;
    *((_QWORD *)v18 + 2) = 38LL;
    *((_DWORD *)v18 + 2) = *((_DWORD *)v22 + 122);
    *((_DWORD *)v18 + 6) = *(_DWORD *)(*((_QWORD *)a3 + 2) + 472LL);
    if ( a4
      && (*((_BYTE *)DXGADAPTER::IsFeatureEnabled(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL),
                       &v22,
                       0x23u)
          + 2) & 1) != 0 )
    {
      v19 = *((_DWORD *)a4 + 7);
    }
    else
    {
      v19 = *((_DWORD *)a3 + 7);
    }
    *((_DWORD *)v18 + 7) = v19;
    *((_DWORD *)v18 + 8) = a5;
    *((_DWORD *)v18 + 9) = a6;
    *(struct tagRECT *)((char *)v18 + 40) = *a7;
    *(struct tagRECT *)((char *)v18 + 56) = *a8;
    *((_DWORD *)v18 + 18) = a9;
    *((_DWORD *)v18 + 19) = Size;
    if ( a9 )
      memmove((char *)v18 + 80, Src, v14);
    if ( Size )
      RtlCopyFromUser((char *)v18 + v14 + 80, v24, Size);
    v20 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v25, (unsigned __int8 *)v26[1], v26[0], v27);
    v21 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 11650;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendBlt failed: 0x%I64x", v21, 0LL, 0LL, 0LL, 0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v26);
    return (unsigned int)v21;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11604;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate input buffer",
      11604LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v26);
    return 3221225495LL;
  }
}
