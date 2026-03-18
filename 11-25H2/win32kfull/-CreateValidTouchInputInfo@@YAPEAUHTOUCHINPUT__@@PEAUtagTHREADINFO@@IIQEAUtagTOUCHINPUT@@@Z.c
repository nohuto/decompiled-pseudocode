/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1400CA648
 * Callers:
 *     ForwardTouchMessage @ 0x1400CA82C (ForwardTouchMessage.c)
 * Callees:
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1400CA730 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?CopyTouchInputListSorted@@YAHREBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x14027A420 (-CopyTouchInputListSorted@@YAHREBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
 */

struct HTOUCHINPUT__ *__fastcall CreateValidTouchInputInfo(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        struct tagTOUCHINPUT *const a4)
{
  struct HTOUCHINPUT__ *v4; // rdi
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax
  struct tagTOUCHINPUT *v11; // rbx
  __int64 v13; // rcx
  int *v14; // [rsp+20h] [rbp-40h]
  unsigned int *v15; // [rsp+20h] [rbp-40h]
  unsigned int v16; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-2Ch]
  struct tagTOUCHINPUT *v18; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  _DWORD v20[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+58h] [rbp-8h]
  unsigned int v23; // [rsp+88h] [rbp+28h] BYREF

  v4 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v19 = 0LL;
  v8 = 48LL * a3;
  if ( v8 > 0xFFFFFFFF )
  {
    v13 = 3221225621LL;
LABEL_9:
    SetLastNtError(v13);
    return 0LL;
  }
  v17 = 0;
  v16 = a3;
  v18 = (struct tagTOUCHINPUT *)Win32AllocPoolZInit((unsigned int)v8, 1952871253LL);
  if ( !v18 )
  {
    v13 = 3221225495LL;
    goto LABEL_9;
  }
  v20[0] = a3;
  v20[1] = a3;
  v21 = a4;
  v10 = CopyTouchInputListSorted(
          (const struct tagTOUCHINPUTLIST *volatile)v20,
          (struct tagTOUCHINPUTLIST *)&v16,
          v9,
          &v23,
          v14);
  v11 = v18;
  if ( v10 )
    v4 = AllocTouchInputInfo(a1, v17, v18, v23, v15);
  if ( v11 )
    Win32FreePool(v11);
  return v4;
}
