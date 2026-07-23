/*
 * XREFs of McTemplateK0qqzqqjqzjztx_EtwWriteTransfer @ 0x1405DD228
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140775AE8 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqzqqjqzjztx_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        const wchar_t *a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        __int64 a12,
        const wchar_t *a13,
        char a14,
        char a15)
{
  const wchar_t *v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // eax
  const wchar_t *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const wchar_t *v24; // rax
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-D0h] BYREF
  int *v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  char *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  const wchar_t *v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+6Ch] [rbp-94h]
  char *v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  char *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  char *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  const wchar_t *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  const wchar_t *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  char *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+138h] [rbp+38h] BYREF

  v55 = a4;
  v29 = 4LL;
  v28 = &v55;
  v31 = 4LL;
  v16 = a6;
  v17 = -1LL;
  v30 = &a5;
  v18 = 10;
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v33 = v20;
  v34 = 0;
  v36 = 4LL;
  v35 = &a7;
  if ( !a6 )
    v16 = L"NULL";
  v32 = v16;
  v21 = a11;
  v37 = &a8;
  v39 = a9;
  v41 = &a10;
  v38 = 4LL;
  v40 = 16LL;
  v42 = 4LL;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v44 = v23;
  if ( !a11 )
    v21 = L"NULL";
  v46 = a12;
  v24 = a13;
  v43 = v21;
  v45 = 0;
  v47 = 16LL;
  v25 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v17;
    while ( a13[v17] );
    v18 = 2 * v17 + 2;
    v25 = a13 == 0LL;
  }
  if ( v25 )
    v24 = L"NULL";
  v49 = v18;
  v48 = v24;
  v50 = 0;
  v51 = &a14;
  v52 = 4LL;
  v53 = &a15;
  v54 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 0xDu, &v27);
}
