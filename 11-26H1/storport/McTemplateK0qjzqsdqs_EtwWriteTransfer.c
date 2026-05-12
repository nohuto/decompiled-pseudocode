/*
 * XREFs of McTemplateK0qjzqsdqs_EtwWriteTransfer @ 0x1400D1EA4
 * Callers:
 *     NvmeAdapterSendControlAddSubsystemPort @ 0x1400DC8B0 (NvmeAdapterSendControlAddSubsystemPort.c)
 *     NvmeAdapterSendControlRemoveSubsystemPort @ 0x1400DCAB8 (NvmeAdapterSendControlRemoveSubsystemPort.c)
 *     NvmeAdapterSendControlRemoveNvmeController @ 0x1400ED1FC (NvmeAdapterSendControlRemoveNvmeController.c)
 *     NvmeAdapterSendControlAddNvmeController @ 0x1401A10DC (NvmeAdapterSendControlAddNvmeController.c)
 *     NvmeAdapterSendControlUpdateNvmeController @ 0x1401A133C (NvmeAdapterSendControlUpdateNvmeController.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400278B4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qjzqsdqs_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        const char *a8,
        char a9,
        char a10,
        const char *a11)
{
  const wchar_t *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ecx
  const char *v15; // rdx
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // ecx
  const char *v19; // rcx
  bool v20; // zf
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-81h] BYREF
  int *v23; // [rsp+40h] [rbp-71h]
  __int64 v24; // [rsp+48h] [rbp-69h]
  __int64 v25; // [rsp+50h] [rbp-61h]
  __int64 v26; // [rsp+58h] [rbp-59h]
  const wchar_t *v27; // [rsp+60h] [rbp-51h]
  int v28; // [rsp+68h] [rbp-49h]
  int v29; // [rsp+6Ch] [rbp-45h]
  char *v30; // [rsp+70h] [rbp-41h]
  __int64 v31; // [rsp+78h] [rbp-39h]
  const char *v32; // [rsp+80h] [rbp-31h]
  int v33; // [rsp+88h] [rbp-29h]
  int v34; // [rsp+8Ch] [rbp-25h]
  char *v35; // [rsp+90h] [rbp-21h]
  __int64 v36; // [rsp+98h] [rbp-19h]
  char *v37; // [rsp+A0h] [rbp-11h]
  __int64 v38; // [rsp+A8h] [rbp-9h]
  const char *v39; // [rsp+B0h] [rbp-1h]
  int v40; // [rsp+B8h] [rbp+7h]
  int v41; // [rsp+BCh] [rbp+Bh]
  int v42; // [rsp+F8h] [rbp+47h] BYREF

  v42 = a4;
  v11 = a6;
  v23 = &v42;
  v25 = a5;
  v12 = -1LL;
  v24 = 4LL;
  v26 = 16LL;
  if ( a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a6[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v28 = v14;
  v29 = 0;
  if ( !a6 )
    v11 = L"NULL";
  v31 = 4LL;
  v27 = v11;
  v15 = a8;
  v16 = 5;
  v30 = &a7;
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5;
  }
  v33 = v18;
  v34 = 0;
  v35 = &a9;
  v36 = 4LL;
  if ( !a8 )
    v15 = "NULL";
  v37 = &a10;
  v19 = a11;
  v32 = v15;
  v38 = 4LL;
  v20 = a11 == 0LL;
  if ( a11 )
  {
    do
      ++v12;
    while ( a11[v12] );
    v16 = v12 + 1;
    v20 = a11 == 0LL;
  }
  if ( v20 )
    v19 = "NULL";
  v40 = v16;
  v41 = 0;
  v39 = v19;
  return McGenEventWrite_EtwWriteTransfer((__int64)v19, &EventNVMeoFMiniportControlFailed, 0LL, 9u, &v22);
}
