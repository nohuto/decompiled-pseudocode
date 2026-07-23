/*
 * XREFs of McTemplateK0zztt_EtwWriteTransfer @ 0x1405DEAEC
 * Callers:
 *     PiSwIrpSetAttributes @ 0x1407B33D0 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B350C (PiSwIrpSetLifetime.c)
 *     PiSwGetChildPdo @ 0x140A8BC18 (PiSwGetChildPdo.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140498E70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zztt_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        char a6,
        char a7)
{
  __int64 v7; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // ecx
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-21h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-11h]
  int v17; // [rsp+48h] [rbp-9h]
  int v18; // [rsp+4Ch] [rbp-5h]
  const wchar_t *v19; // [rsp+50h] [rbp-1h]
  int v20; // [rsp+58h] [rbp+7h]
  int v21; // [rsp+5Ch] [rbp+Bh]
  char *v22; // [rsp+60h] [rbp+Fh]
  __int64 v23; // [rsp+68h] [rbp+17h]
  char *v24; // [rsp+70h] [rbp+1Fh]
  __int64 v25; // [rsp+78h] [rbp+27h]

  v7 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v17 = v11;
  v12 = a5;
  if ( !a4 )
    a4 = L"NULL";
  v18 = 0;
  v16 = a4;
  v13 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v9 = 2 * v7 + 2;
    v13 = a5 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v20 = v9;
  v19 = v12;
  v22 = &a6;
  v21 = 0;
  v24 = &a7;
  v23 = 4LL;
  v25 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 5u, &v15);
}
