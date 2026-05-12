/*
 * XREFs of McTemplateK0zjquuujssstq_EtwWriteTransfer @ 0x14007EA60
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x140080780 (RaidUnitEndMaintenanceTime.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zjquuujssstq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        char a15)
{
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r8d
  const char *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const char *v22; // rax
  __int64 v23; // rdx
  int v24; // edx
  const char *v25; // rax
  bool v26; // zf
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  int v31; // [rsp+4Ch] [rbp-B4h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  char *v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  char *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  char *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  char *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  const char *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  const char *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  const char *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]

  v15 = -1LL;
  if ( a4 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a4[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v30 = v17;
  v32 = a5;
  v18 = 5;
  if ( !a4 )
    a4 = L"NULL";
  v31 = 0;
  v19 = a11;
  v34 = &a6;
  v36 = &a7;
  v38 = &a8;
  v40 = &a9;
  v42 = a10;
  v29 = a4;
  v33 = 16LL;
  v35 = 4LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 1LL;
  v43 = 16LL;
  if ( a11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a11[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5;
  }
  v45 = v21;
  v22 = a12;
  if ( !a11 )
    v19 = "NULL";
  v46 = 0;
  v44 = v19;
  if ( a12 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a12[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5;
  }
  v48 = v24;
  v49 = 0;
  if ( !a12 )
    v22 = "NULL";
  v47 = v22;
  v25 = a13;
  v26 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v15;
    while ( a13[v15] );
    v18 = v15 + 1;
    v26 = a13 == 0LL;
  }
  if ( v26 )
    v25 = "NULL";
  v51 = v18;
  v50 = v25;
  v52 = 0;
  v53 = &a14;
  v54 = 4LL;
  v55 = &a15;
  v56 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v15, &EventUnitMaintenanceStopOperational, 0LL, 0xDu, &v28);
}
