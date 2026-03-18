/*
 * XREFs of McTemplateU0pffffss_EventWriteTransfer @ 0x18002F800
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pffffss_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        char a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // ecx
  const char *v14; // rcx
  bool v15; // zf
  _BYTE v17[16]; // [rsp+30h] [rbp-61h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-51h]
  __int64 v19; // [rsp+48h] [rbp-49h]
  float *v20; // [rsp+50h] [rbp-41h]
  __int64 v21; // [rsp+58h] [rbp-39h]
  char *v22; // [rsp+60h] [rbp-31h]
  __int64 v23; // [rsp+68h] [rbp-29h]
  char *v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h]
  char *v26; // [rsp+80h] [rbp-11h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  const char *v28; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+98h] [rbp+7h]
  int v30; // [rsp+9Ch] [rbp+Bh]
  const char *v31; // [rsp+A0h] [rbp+Fh]
  int v32; // [rsp+A8h] [rbp+17h]
  int v33; // [rsp+ACh] [rbp+1Bh]
  __int64 v34; // [rsp+E0h] [rbp+4Fh] BYREF
  float v35; // [rsp+E8h] [rbp+57h] BYREF

  v35 = a4;
  v34 = a3;
  v9 = a8;
  v18 = &v34;
  v19 = 8LL;
  v20 = &v35;
  v22 = &a5;
  v24 = &a6;
  v26 = &a7;
  v10 = -1LL;
  v21 = 4LL;
  v11 = 5LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  if ( a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a8[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5;
  }
  v29 = v13;
  v14 = a9;
  if ( !a8 )
    v9 = "NULL";
  v30 = 0;
  v28 = v9;
  v15 = a9 == 0LL;
  if ( a9 )
  {
    do
      v15 = a9[++v10] == 0;
    while ( !v15 );
    v11 = (unsigned int)(v10 + 1);
    v15 = a9 == 0LL;
  }
  if ( v15 )
    v14 = "NULL";
  v32 = v11;
  v31 = v14;
  v33 = 0;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_VISUAL_RENDERCONTENT,
           v11,
           8LL,
           v17);
}
