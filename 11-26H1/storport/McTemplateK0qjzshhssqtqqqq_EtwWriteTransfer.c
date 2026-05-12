/*
 * XREFs of McTemplateK0qjzshhssqtqqqq_EtwWriteTransfer @ 0x14012D748
 * Callers:
 *     StorLogDLRMDripsCallback @ 0x14012E340 (StorLogDLRMDripsCallback.c)
 *     StorLogDLRMEffectivePowerModeCallback @ 0x14012E4F0 (StorLogDLRMEffectivePowerModeCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhssqtqqqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  const wchar_t *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // edx
  int v22; // r8d
  const char *v23; // rcx
  __int64 v24; // rdx
  int v25; // edx
  const char *v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  const char *v29; // rcx
  bool v30; // zf
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  int *v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  const wchar_t *v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  const char *v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  char *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const char *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  const char *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  char *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  char *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  char *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  char *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+158h] [rbp+58h] BYREF

  v65 = a4;
  v17 = a6;
  v33 = &v65;
  v35 = a5;
  v19 = -1LL;
  v34 = 4LL;
  v36 = 16LL;
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v38 = v21;
  v39 = 0;
  if ( !a6 )
    v17 = L"NULL";
  v22 = 5;
  v37 = v17;
  v23 = a7;
  if ( a7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v41 = v25;
  v42 = 0;
  if ( !a7 )
    v23 = "NULL";
  v44 = 2LL;
  v40 = v23;
  v43 = &a8;
  v45 = &a9;
  v26 = a10;
  v46 = 2LL;
  if ( a10 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a10[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v48 = v28;
  v49 = 0;
  if ( !a10 )
    v26 = "NULL";
  v47 = v26;
  v29 = a11;
  v30 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v19;
    while ( a11[v19] );
    v22 = v19 + 1;
    v30 = a11 == 0LL;
  }
  if ( v30 )
    v29 = "NULL";
  v51 = v22;
  v52 = 0;
  v53 = &a12;
  v50 = v29;
  v55 = &a13;
  v54 = 4LL;
  v57 = &a14;
  v56 = 4LL;
  v59 = &a15;
  v61 = &a16;
  v63 = &a17;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v29, a2, 0LL, 0xFu, &v32);
}
