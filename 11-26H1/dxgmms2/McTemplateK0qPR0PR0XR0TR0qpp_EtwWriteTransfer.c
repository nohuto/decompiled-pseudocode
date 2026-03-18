/*
 * XREFs of McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer @ 0x14001360C
 * Callers:
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        char a11)
{
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-81h] BYREF
  int *v13; // [rsp+40h] [rbp-71h]
  __int64 v14; // [rsp+48h] [rbp-69h]
  __int64 v15; // [rsp+50h] [rbp-61h]
  int v16; // [rsp+58h] [rbp-59h]
  int v17; // [rsp+5Ch] [rbp-55h]
  __int64 v18; // [rsp+60h] [rbp-51h]
  int v19; // [rsp+68h] [rbp-49h]
  int v20; // [rsp+6Ch] [rbp-45h]
  __int64 v21; // [rsp+70h] [rbp-41h]
  int v22; // [rsp+78h] [rbp-39h]
  int v23; // [rsp+7Ch] [rbp-35h]
  __int64 v24; // [rsp+80h] [rbp-31h]
  int v25; // [rsp+88h] [rbp-29h]
  int v26; // [rsp+8Ch] [rbp-25h]
  char *v27; // [rsp+90h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-19h]
  char *v29; // [rsp+A0h] [rbp-11h]
  __int64 v30; // [rsp+A8h] [rbp-9h]
  char *v31; // [rsp+B0h] [rbp-1h]
  __int64 v32; // [rsp+B8h] [rbp+7h]
  int v33; // [rsp+F8h] [rbp+47h] BYREF

  v33 = a4;
  v14 = 4LL;
  v17 = 0;
  v16 = 8 * a4;
  v13 = &v33;
  v15 = a5;
  v18 = a6;
  v21 = a7;
  v24 = a8;
  v25 = 4 * a4;
  v19 = 8 * a4;
  v27 = &a9;
  v29 = &a10;
  v31 = &a11;
  v22 = 8 * a4;
  v20 = 0;
  v23 = 0;
  v26 = 0;
  v28 = 4LL;
  v30 = 8LL;
  v32 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventVidSchiCompleteSignalCommmand, 0LL, 9u, &v12);
}
