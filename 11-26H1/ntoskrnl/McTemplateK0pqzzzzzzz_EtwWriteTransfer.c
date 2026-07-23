/*
 * XREFs of McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x140498C4C
 * Callers:
 *     PiDqTraceQueryCreate @ 0x140950F84 (PiDqTraceQueryCreate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 McTemplateK0pqzzzzzzz_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edx
  const wchar_t *v7; // rcx
  __int64 v8; // rdx
  int v9; // edx
  const wchar_t *v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  const wchar_t *v13; // rcx
  __int64 v14; // rdx
  int v15; // edx
  const wchar_t *v16; // rcx
  int v17; // edx
  const wchar_t *v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  const wchar_t *v21; // rcx
  int v22; // eax
  __int64 v24; // rdx
  _BYTE v25[16]; // [rsp+30h] [rbp-99h] BYREF
  va_list v26; // [rsp+40h] [rbp-89h]
  __int64 v27; // [rsp+48h] [rbp-81h]
  va_list v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+58h] [rbp-71h]
  const wchar_t *v30; // [rsp+60h] [rbp-69h]
  int v31; // [rsp+68h] [rbp-61h]
  int v32; // [rsp+6Ch] [rbp-5Dh]
  const wchar_t *v33; // [rsp+70h] [rbp-59h]
  int v34; // [rsp+78h] [rbp-51h]
  int v35; // [rsp+7Ch] [rbp-4Dh]
  const wchar_t *v36; // [rsp+80h] [rbp-49h]
  int v37; // [rsp+88h] [rbp-41h]
  int v38; // [rsp+8Ch] [rbp-3Dh]
  const wchar_t *v39; // [rsp+90h] [rbp-39h]
  int v40; // [rsp+98h] [rbp-31h]
  int v41; // [rsp+9Ch] [rbp-2Dh]
  const wchar_t *v42; // [rsp+A0h] [rbp-29h]
  int v43; // [rsp+A8h] [rbp-21h]
  int v44; // [rsp+ACh] [rbp-1Dh]
  const wchar_t *v45; // [rsp+B0h] [rbp-19h]
  int v46; // [rsp+B8h] [rbp-11h]
  int v47; // [rsp+BCh] [rbp-Dh]
  const wchar_t *v48; // [rsp+C0h] [rbp-9h]
  int v49; // [rsp+C8h] [rbp-1h]
  int v50; // [rsp+CCh] [rbp+3h]
  __int64 v51; // [rsp+108h] [rbp+3Fh] BYREF
  va_list va; // [rsp+108h] [rbp+3Fh]
  __int64 v53; // [rsp+110h] [rbp+47h] BYREF
  va_list va1; // [rsp+110h] [rbp+47h]
  const wchar_t *v55; // [rsp+118h] [rbp+4Fh]
  const wchar_t *v56; // [rsp+120h] [rbp+57h]
  const wchar_t *v57; // [rsp+128h] [rbp+5Fh]
  const wchar_t *v58; // [rsp+130h] [rbp+67h]
  const wchar_t *v59; // [rsp+138h] [rbp+6Fh]
  const wchar_t *v60; // [rsp+140h] [rbp+77h]
  const wchar_t *v61; // [rsp+148h] [rbp+7Fh]
  va_list va2; // [rsp+150h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v51 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v53 = va_arg(va2, _QWORD);
  v55 = va_arg(va2, const wchar_t *);
  v56 = va_arg(va2, const wchar_t *);
  v57 = va_arg(va2, const wchar_t *);
  v58 = va_arg(va2, const wchar_t *);
  v59 = va_arg(va2, const wchar_t *);
  v60 = va_arg(va2, const wchar_t *);
  v61 = va_arg(va2, const wchar_t *);
  v3 = v55;
  va_copy(v26, va);
  v27 = 8LL;
  va_copy(v28, va1);
  v4 = -1LL;
  v29 = 4LL;
  if ( v55 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v55[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v31 = v6;
  v32 = 0;
  if ( !v55 )
    v3 = L"NULL";
  v30 = v3;
  v7 = v56;
  if ( v56 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v56[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v34 = v9;
  v35 = 0;
  if ( !v56 )
    v7 = L"NULL";
  v33 = v7;
  v10 = v57;
  if ( v57 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v57[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v37 = v12;
  v38 = 0;
  if ( !v57 )
    v10 = L"NULL";
  v36 = v10;
  v13 = v58;
  if ( v58 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v58[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v40 = v15;
  v41 = 0;
  if ( !v58 )
    v13 = L"NULL";
  v39 = v13;
  v16 = v59;
  if ( v59 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v59[v24] );
    v17 = 2 * v24 + 2;
  }
  else
  {
    v17 = 10;
  }
  v43 = v17;
  v44 = 0;
  if ( !v59 )
    v16 = L"NULL";
  v42 = v16;
  v18 = v60;
  if ( v60 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v60[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v46 = v20;
  v47 = 0;
  if ( !v60 )
    v18 = L"NULL";
  v45 = v18;
  v21 = v61;
  if ( v61 )
  {
    do
      ++v4;
    while ( v61[v4] );
    v22 = 2 * v4 + 2;
  }
  else
  {
    v22 = 10;
  }
  v49 = v22;
  v50 = 0;
  if ( !v61 )
    v21 = L"NULL";
  v48 = v21;
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, KMPnPEvt_DevQuery_QueryStart, a3, 10LL, v25);
}
