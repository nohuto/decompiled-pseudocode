/*
 * XREFs of McTemplateU0dffffq_EventWriteTransfer @ 0x18019CB94
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180074510 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0dffffq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        char a5,
        char a6,
        char a7)
{
  int v8; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-49h] BYREF
  int *v10; // [rsp+50h] [rbp-39h]
  __int64 v11; // [rsp+58h] [rbp-31h]
  float *v12; // [rsp+60h] [rbp-29h]
  __int64 v13; // [rsp+68h] [rbp-21h]
  char *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  char *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  char *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  int *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+E0h] [rbp+57h] BYREF
  float v23; // [rsp+E8h] [rbp+5Fh] BYREF

  v23 = a4;
  v22 = a3;
  v11 = 4LL;
  v8 = 0;
  v10 = &v22;
  v13 = 4LL;
  v12 = &v23;
  v15 = 4LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v18 = &a7;
  v20 = &v8;
  v19 = 4LL;
  v21 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_OCCLUSIONEVENT,
           a3,
           7u,
           &v9);
}
