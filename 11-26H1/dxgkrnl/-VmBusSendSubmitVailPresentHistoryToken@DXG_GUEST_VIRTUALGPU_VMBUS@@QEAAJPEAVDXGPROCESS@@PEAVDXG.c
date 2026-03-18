/*
 * XREFs of ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1402BE5B8
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  int v15; // r8d
  char *v16; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  __int64 v22; // r9
  _OWORD *v23; // rdx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  bool v26; // zf
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // ebx
  PVOID P[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-148h]
  char v32; // [rsp+44h] [rbp-144h] BYREF

  if ( a7 )
    v15 = *(_DWORD *)(a7 + 8);
  else
    v15 = 0;
  *(_OWORD *)P = 0LL;
  v31 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, a1, v15 + 1160, 0LL, 0LL, 0LL);
  v16 = (char *)P[0];
  if ( P[0] )
  {
    v18 = *(_DWORD *)(a2 + 488);
    *((_BYTE *)P[0] + 12) = 0;
    *((_DWORD *)v16 + 3) &= 0x1FFu;
    *(_QWORD *)v16 = 0LL;
    *((_DWORD *)v16 + 2) = v18;
    *((_QWORD *)v16 + 2) = 64LL;
    if ( a3 )
      v19 = *(_DWORD *)(a3 + 28);
    else
      v19 = 0;
    *((_DWORD *)v16 + 6) = v19;
    *((_QWORD *)v16 + 4) = a5;
    v20 = a8;
    *((_QWORD *)v16 + 6) = a7;
    *((_QWORD *)v16 + 5) = a6;
    *((_QWORD *)v16 + 7) = a4;
    if ( a8 )
      v20 = *(_DWORD *)(a8 + 84);
    *((_DWORD *)v16 + 16) = v20;
    if ( a9 )
      v21 = *(_DWORD *)(a9 + 20);
    else
      v21 = 0;
    v22 = 8LL;
    *((_DWORD *)v16 + 17) = v21;
    v23 = v16 + 72;
    v24 = (_OWORD *)a6;
    do
    {
      *v23 = *v24;
      v23[1] = v24[1];
      v23[2] = v24[2];
      v23[3] = v24[3];
      v23[4] = v24[4];
      v23[5] = v24[5];
      v23[6] = v24[6];
      v23 += 8;
      v25 = v24[7];
      v24 += 8;
      *(v23 - 1) = v25;
      --v22;
    }
    while ( v22 );
    *v23 = *v24;
    v23[1] = v24[1];
    v23[2] = v24[2];
    *((_QWORD *)v23 + 6) = *((_QWORD *)v24 + 6);
    v26 = *((_DWORD *)v16 + 18) == 2;
    *((_QWORD *)v16 + 10) = a11;
    if ( v26 )
    {
      *((_QWORD *)v16 + 12) = a10;
      v27 = *((_DWORD *)v16 + 33) & 0xFDFFFFFF;
      *((_QWORD *)v16 + 17) = 0LL;
      *((_QWORD *)v16 + 15) = 0LL;
      *((_DWORD *)v16 + 33) = v27 | 0x20000000;
      *(_DWORD *)(a6 + 60) |= 0x20000000u;
      *((_QWORD *)v16 + 18) = 0LL;
    }
    if ( a7 )
      v28 = *(_DWORD *)(a7 + 8);
    else
      v28 = 0;
    *((_DWORD *)v16 + 288) = v28;
    if ( a7 )
      memmove(v16 + 1160, (const void *)(a7 + 16), *(unsigned int *)(a7 + 8));
    v29 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            a1,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v31);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return v29;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v32 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
