/*
 * XREFs of McTemplateK0qxxxxiq_EtwWriteTransfer @ 0x14001B968
 * Callers:
 *     ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x140019950 (-VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14001A6B0 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxxxxiq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  int *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  char *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  char *v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  char *v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  char *v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  char *v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  char *v24; // [rsp+A0h] [rbp+7h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+E8h] [rbp+4Fh] BYREF

  v26 = a4;
  v13 = 4LL;
  v15 = 8LL;
  v12 = &v26;
  v17 = 8LL;
  v14 = &a5;
  v19 = 8LL;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  v24 = &a10;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventVSyncSmoothenedTime, a3, 8u, &v11);
}
