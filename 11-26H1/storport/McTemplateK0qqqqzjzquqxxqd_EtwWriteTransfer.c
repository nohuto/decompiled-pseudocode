/*
 * XREFs of McTemplateK0qqqqzjzquqxxqd_EtwWriteTransfer @ 0x14005EFB4
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqzjzquqxxqd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8,
        __int64 a9,
        const wchar_t *a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  __int64 v17; // rcx
  int v18; // r8d
  const wchar_t *v19; // rax
  __int64 v20; // rdx
  int v21; // edx
  const wchar_t *v22; // rax
  bool v23; // zf
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-D0h] BYREF
  int *v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  char *v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  char *v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  char *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  const wchar_t *v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  const wchar_t *v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A8h] [rbp-58h]
  int v41; // [rsp+ACh] [rbp-54h]
  char *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  char *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  char *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  char *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  char *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  char *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+158h] [rbp+58h] BYREF

  v56 = a4;
  v27 = 4LL;
  v26 = &v56;
  v29 = 4LL;
  v28 = &a5;
  v17 = -1LL;
  v31 = 4LL;
  v30 = &a6;
  v18 = 10;
  v33 = 4LL;
  v32 = &a7;
  v19 = a8;
  if ( a8 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a8[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v35 = v21;
  v36 = 0;
  if ( !a8 )
    v19 = L"NULL";
  v38 = 16LL;
  v34 = v19;
  v37 = a9;
  v22 = a10;
  v23 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v17;
    while ( a10[v17] );
    v18 = 2 * v17 + 2;
    v23 = a10 == 0LL;
  }
  if ( v23 )
    v22 = L"NULL";
  v40 = v18;
  v39 = v22;
  v41 = 0;
  v42 = &a11;
  v43 = 4LL;
  v44 = &a12;
  v45 = 1LL;
  v46 = &a13;
  v48 = &a14;
  v50 = &a15;
  v52 = &a16;
  v54 = &a17;
  v47 = 4LL;
  v49 = 8LL;
  v51 = 8LL;
  v53 = 4LL;
  v55 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v17, &EventAdapterCompleteInitialization, 0LL, 0xFu, &v25);
}
