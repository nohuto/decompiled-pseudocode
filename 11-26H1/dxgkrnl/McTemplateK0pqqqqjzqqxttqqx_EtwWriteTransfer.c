/*
 * XREFs of McTemplateK0pqqqqjzqqxttqqx_EtwWriteTransfer @ 0x1400624F4
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403BBFC8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqqqjzqqxttqqx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-D0h] BYREF
  va_list v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+48h] [rbp-B8h]
  va_list v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h]
  va_list v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  va_list v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  va_list v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  __int64 v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  const wchar_t *v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  va_list v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  va_list v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  va_list v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  va_list v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  va_list v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  va_list v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  va_list v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  va_list v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 v39; // [rsp+168h] [rbp+68h] BYREF
  va_list va; // [rsp+168h] [rbp+68h]
  __int64 v41; // [rsp+170h] [rbp+70h] BYREF
  va_list va1; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h] BYREF
  va_list va2; // [rsp+178h] [rbp+78h]
  __int64 v45; // [rsp+180h] [rbp+80h] BYREF
  va_list va3; // [rsp+180h] [rbp+80h]
  __int64 v47; // [rsp+188h] [rbp+88h] BYREF
  va_list va4; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+190h] [rbp+90h]
  const wchar_t *v50; // [rsp+198h] [rbp+98h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va5; // [rsp+1A0h] [rbp+A0h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va6; // [rsp+1A8h] [rbp+A8h]
  __int64 v55; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va7; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va8; // [rsp+1B8h] [rbp+B8h]
  __int64 v59; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va9; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h] BYREF
  va_list va10; // [rsp+1C8h] [rbp+C8h]
  __int64 v63; // [rsp+1D0h] [rbp+D0h] BYREF
  va_list va11; // [rsp+1D0h] [rbp+D0h]
  va_list va12; // [rsp+1D8h] [rbp+D8h] BYREF

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
  v39 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v41 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v43 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v45 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v47 = va_arg(va5, _QWORD);
  v49 = va_arg(va5, _QWORD);
  v50 = va_arg(va5, const wchar_t *);
  va_copy(va6, va5);
  v51 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v53 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v55 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v57 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v59 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v61 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v63 = va_arg(va12, _QWORD);
  v3 = v50;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  v18 = v49;
  v11 = 4LL;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 16LL;
  if ( v50 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v50[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v21 = v5;
  v22 = 0;
  v24 = 4LL;
  va_copy(v23, va5);
  if ( !v50 )
    v3 = L"NULL";
  v20 = v3;
  va_copy(v25, va6);
  v26 = 4LL;
  va_copy(v27, va7);
  v28 = 8LL;
  va_copy(v29, va8);
  v30 = 4LL;
  va_copy(v31, va9);
  va_copy(v33, va10);
  va_copy(v35, va11);
  va_copy(v37, va12);
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &Dxgk_PowerComponent, 0LL, 0x10u, &v7);
}
