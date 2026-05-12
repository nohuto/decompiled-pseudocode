/*
 * XREFs of McTemplateK0qjzshhdqq_EtwWriteTransfer @ 0x1400E3880
 * Callers:
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 *     NvmeFabricControllerQueueAuthenticate @ 0x1400FBB60 (NvmeFabricControllerQueueAuthenticate.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzshhdqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rcx
  const wchar_t *v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  const char *v17; // rax
  __int64 v18; // rcx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-99h] BYREF
  int *v21; // [rsp+40h] [rbp-89h]
  __int64 v22; // [rsp+48h] [rbp-81h]
  __int64 v23; // [rsp+50h] [rbp-79h]
  __int64 v24; // [rsp+58h] [rbp-71h]
  const wchar_t *v25; // [rsp+60h] [rbp-69h]
  int v26; // [rsp+68h] [rbp-61h]
  int v27; // [rsp+6Ch] [rbp-5Dh]
  const char *v28; // [rsp+70h] [rbp-59h]
  int v29; // [rsp+78h] [rbp-51h]
  int v30; // [rsp+7Ch] [rbp-4Dh]
  char *v31; // [rsp+80h] [rbp-49h]
  __int64 v32; // [rsp+88h] [rbp-41h]
  char *v33; // [rsp+90h] [rbp-39h]
  __int64 v34; // [rsp+98h] [rbp-31h]
  char *v35; // [rsp+A0h] [rbp-29h]
  __int64 v36; // [rsp+A8h] [rbp-21h]
  char *v37; // [rsp+B0h] [rbp-19h]
  __int64 v38; // [rsp+B8h] [rbp-11h]
  char *v39; // [rsp+C0h] [rbp-9h]
  __int64 v40; // [rsp+C8h] [rbp-1h]
  int v41; // [rsp+108h] [rbp+3Fh] BYREF

  v41 = a4;
  v22 = 4LL;
  v21 = &v41;
  v12 = -1LL;
  v23 = a5;
  v14 = a6;
  v24 = 16LL;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v26 = v16;
  v27 = 0;
  if ( !a6 )
    v14 = L"NULL";
  v25 = v14;
  v17 = a7;
  if ( a7 )
  {
    do
      ++v12;
    while ( a7[v12] );
    v18 = (unsigned int)(v12 + 1);
  }
  else
  {
    v18 = 5LL;
  }
  v30 = 0;
  v29 = v18;
  if ( !a7 )
    v17 = "NULL";
  v32 = 2LL;
  v28 = v17;
  v34 = 2LL;
  v31 = &a8;
  v36 = 4LL;
  v33 = &a9;
  v38 = 4LL;
  v35 = &a10;
  v37 = &a11;
  v39 = &a12;
  v40 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v18, a2, 0LL, 0xAu, &v20);
}
