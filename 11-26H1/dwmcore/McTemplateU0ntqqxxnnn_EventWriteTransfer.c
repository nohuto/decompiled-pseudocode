/*
 * XREFs of McTemplateU0ntqqxxnnn_EventWriteTransfer @ 0x1802533F0
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800EF0B0 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0ntqqxxnnn_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v17; // [rsp+40h] [rbp-99h]
  __int64 v18; // [rsp+48h] [rbp-91h]
  char *v19; // [rsp+50h] [rbp-89h]
  __int64 v20; // [rsp+58h] [rbp-81h]
  char *v21; // [rsp+60h] [rbp-79h]
  __int64 v22; // [rsp+68h] [rbp-71h]
  char *v23; // [rsp+70h] [rbp-69h]
  __int64 v24; // [rsp+78h] [rbp-61h]
  char *v25; // [rsp+80h] [rbp-59h]
  __int64 v26; // [rsp+88h] [rbp-51h]
  char *v27; // [rsp+90h] [rbp-49h]
  __int64 v28; // [rsp+98h] [rbp-41h]
  __int64 v29; // [rsp+A0h] [rbp-39h]
  __int64 v30; // [rsp+A8h] [rbp-31h]
  __int64 v31; // [rsp+B0h] [rbp-29h]
  __int64 v32; // [rsp+B8h] [rbp-21h]
  __int64 v33; // [rsp+C0h] [rbp-19h]
  __int64 v34; // [rsp+C8h] [rbp-11h]

  v17 = a4;
  v19 = &a5;
  v18 = 28LL;
  v21 = &a6;
  v20 = 4LL;
  v23 = &a7;
  v22 = 4LL;
  v25 = &a8;
  v27 = &a9;
  v29 = a11;
  v31 = a13;
  v33 = a15;
  v24 = 4LL;
  v26 = 8LL;
  v28 = 8LL;
  v30 = 24LL;
  v32 = 24LL;
  v34 = 24LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Compositor_Context,
           &TargetStats_Ready,
           a3,
           0xAu,
           &v16);
}
