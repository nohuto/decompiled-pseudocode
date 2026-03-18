/*
 * XREFs of ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x140059DDC
 * Callers:
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140003020 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140059AC0 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     McTemplateK0pqqqQR3XR3XR3XR3q_EtwWriteTransfer @ 0x14005A70C (McTemplateK0pqqqQR3XR3XR3XR3q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

__int64 __fastcall VidSchiCancelQueuedFlips(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned int a6)
{
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD *v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char v15[8]; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v16; // [rsp+68h] [rbp-31h]
  unsigned __int64 v17; // [rsp+70h] [rbp-29h]
  __int64 *v18; // [rsp+78h] [rbp-21h] BYREF
  struct _VIDSCH_GLOBAL *v19; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+8Ch] [rbp-Dh]
  __int64 **v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  unsigned __int64 v24; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+Fh]
  unsigned int v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B4h] [rbp+1Bh]

  v18 = (__int64 *)&v24;
  v7 = a2;
  v22 = &v18;
  v17 = a4;
  v24 = a4;
  v8 = *((unsigned int *)a1 + 10);
  v16 = a3;
  v26 = a3;
  v19 = a1;
  v9 = *((_QWORD *)a1 + 4);
  v25 = 0LL;
  v27 = 0;
  v23 = 0LL;
  v20 = a2;
  v21 = 1;
  v15[0] = 0;
  DpSynchronizeExecution(v9, VidSchiCancelQueuedFlipsAtISR, &v19, v8, v15);
  v10 = v23;
  v11 = (_QWORD *)(*((_QWORD *)a1 + v7 + 431) + 304LL * v16);
  if ( (int)v23 >= 0 )
  {
    v12 = v25;
    *a5 = v25;
    if ( v12 < v17 || (v13 = v11[49], v12 > v13) )
    {
      v11[51] = 0LL;
      v11[52] = 0LL;
    }
    else
    {
      v11[51] = v12;
      v11[52] = v13;
    }
  }
  if ( (byte_14008A204 & 0x20) != 0 )
    McTemplateK0pqqqQR3XR3XR3XR3q_EtwWriteTransfer(
      a6,
      (_DWORD)v11 + 416,
      (_DWORD)v11 + 408,
      *((_QWORD *)a1 + 2),
      v7,
      v10);
  return v10;
}
