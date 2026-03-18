/*
 * XREFs of McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x14004FF60
 * Callers:
 *     Etw_ControllerDelete @ 0x14004F408 (Etw_ControllerDelete.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x14004F508 (Etw_ControllerFirmareVersionUpdate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000EF70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const char *v4; // rdx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  const char *v9; // rax
  __int64 v10; // rdx
  int v11; // edx
  const char *v12; // rax
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-D0h] BYREF
  va_list v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  va_list v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  va_list v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  va_list v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  va_list v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  va_list v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  va_list v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  va_list v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  const char *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  const char *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  const char *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  va_list v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  va_list v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  va_list v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  va_list v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  va_list v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  __int64 v51; // [rsp+178h] [rbp+78h] BYREF
  va_list va; // [rsp+178h] [rbp+78h]
  __int64 v53; // [rsp+180h] [rbp+80h] BYREF
  va_list va1; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h] BYREF
  va_list va2; // [rsp+188h] [rbp+88h]
  __int64 v57; // [rsp+190h] [rbp+90h] BYREF
  va_list va3; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h] BYREF
  va_list va4; // [rsp+198h] [rbp+98h]
  __int64 v61; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va5; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va6; // [rsp+1A8h] [rbp+A8h]
  __int64 v65; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va7; // [rsp+1B0h] [rbp+B0h]
  const char *v67; // [rsp+1B8h] [rbp+B8h]
  const char *v68; // [rsp+1C0h] [rbp+C0h]
  const char *v69; // [rsp+1C8h] [rbp+C8h]
  __int64 v70; // [rsp+1D0h] [rbp+D0h] BYREF
  va_list va8; // [rsp+1D0h] [rbp+D0h]
  __int64 v72; // [rsp+1D8h] [rbp+D8h] BYREF
  va_list va9; // [rsp+1D8h] [rbp+D8h]
  __int64 v74; // [rsp+1E0h] [rbp+E0h] BYREF
  va_list va10; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h] BYREF
  va_list va11; // [rsp+1E8h] [rbp+E8h]
  va_list va12; // [rsp+1F0h] [rbp+F0h] BYREF

  va_start(va12, a3);
  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v51 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v53 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v55 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v57 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v59 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v61 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v63 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v65 = va_arg(va8, _QWORD);
  v67 = va_arg(va8, const char *);
  v68 = va_arg(va8, const char *);
  v69 = va_arg(va8, const char *);
  va_copy(va9, va8);
  v70 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v72 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v74 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v76 = va_arg(va12, _QWORD);
  v17 = 8LL;
  va_copy(v16, va);
  v19 = 4LL;
  va_copy(v18, va1);
  v4 = v67;
  va_copy(v20, va2);
  v5 = 5;
  v21 = 4LL;
  va_copy(v22, va3);
  v6 = -1LL;
  v23 = 4LL;
  va_copy(v24, va4);
  va_copy(v26, va5);
  va_copy(v28, va6);
  va_copy(v30, va7);
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  if ( v67 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v67[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5;
  }
  v33 = v8;
  v9 = v68;
  if ( !v67 )
    v4 = "NULL";
  v34 = 0;
  v32 = v4;
  if ( v68 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v68[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  v36 = v11;
  v37 = 0;
  if ( !v68 )
    v9 = "NULL";
  v35 = v9;
  v12 = v69;
  v13 = v69 == 0LL;
  if ( v69 )
  {
    do
      ++v6;
    while ( v69[v6] );
    v5 = v6 + 1;
    v13 = v69 == 0LL;
  }
  if ( v13 )
    v12 = "NULL";
  v39 = v5;
  v38 = v12;
  v40 = 0;
  va_copy(v41, va8);
  v42 = 8LL;
  va_copy(v43, va9);
  v44 = 4LL;
  va_copy(v45, va10);
  va_copy(v47, va11);
  va_copy(v49, va12);
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v6, a2, 0LL, 0x11u, &v15);
}
