/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x140043424
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400433F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        const char *a6)
{
  KIRQL v7; // al
  __int64 *v8; // rcx
  KIRQL v9; // si
  __int64 *v10; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  unsigned __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int16 v19; // cx
  unsigned int v20; // r12d
  unsigned int v21; // r14d
  unsigned __int64 v22; // rcx
  unsigned int v23; // ebx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // edi
  __int64 v27; // rsi
  const char *v28; // rax
  __int64 v29; // rcx
  KIRQL CurrentIrql; // al
  const char *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // edi
  const char *v35; // rax
  KIRQL v36; // al
  __int64 *v37; // rcx
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v44; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v45; // [rsp+6Ch] [rbp-94h] BYREF
  int v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+74h] [rbp-8Ch]
  unsigned int v48; // [rsp+78h] [rbp-88h]
  unsigned int v49; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR v50[2]; // [rsp+80h] [rbp-80h] BYREF
  int *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  int *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  int *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  int *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  const char *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  int *v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  int *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  int *v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  const char *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  int *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  int *v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  const char *v74; // [rsp+150h] [rbp+50h]
  int v75; // [rsp+158h] [rbp+58h]
  int v76; // [rsp+15Ch] [rbp+5Ch]

  v49 = a4;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v7 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v8 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v9 = v7;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
    goto LABEL_7;
  while ( 1 )
  {
    v10 = v8 - 4;
    if ( *(v8 - 4) == a1 )
      break;
    v8 = (__int64 *)*v8;
    if ( &g_MicrosoftTelemetryAssertsTriggeredList == v8 )
      goto LABEL_7;
  }
  if ( v8 == (__int64 *)32 )
  {
LABEL_7:
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
    {
LABEL_52:
      KeReleaseSpinLock(&g_AssertSpinLock, v9);
      return;
    }
    v12 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v10[2] = 0LL;
    *((_DWORD *)v10 + 6) = 0;
    v14 = (__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
    v10[1] = v14 - 60001 + (v14 >> 63);
    v15 = v10 + 4;
    v16 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v16 + 8) = v15;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v10 + 4);
  }
  ++*((_DWORD *)v10 + 4);
  ++*((_DWORD *)v10 + 5);
  v17 = MEMORY[0xFFFFF78000000320];
  v18 = v17 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v18 - v10[1]) <= 0xEA60 )
    goto LABEL_52;
  v19 = *(_WORD *)(MEMORY[0x14000003C] + 0x140000018LL);
  if ( v19 == 267 || v19 == 523 )
  {
    v20 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000008LL);
    v21 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000050LL);
  }
  else
  {
    v20 = 0;
    v21 = 0;
  }
  if ( a1 < 0x140000000LL || (v22 = 0x140000000LL + v21, v22 <= 0x140000000LL) || a1 > v22 )
    v23 = 0;
  else
    v23 = a1 - 0x40000000;
  v24 = *((_DWORD *)v10 + 4);
  v10[1] = v18;
  v47 = v24;
  v25 = *((_DWORD *)v10 + 5);
  v26 = *((_DWORD *)v10 + 6);
  v48 = v25;
  KeReleaseSpinLock(&g_AssertSpinLock, v9);
  v27 = -1LL;
  if ( (unsigned int)dword_140077078 > 5
    && (qword_140077088 & 0x400000000000LL) != 0
    && (qword_140077090 & 0x400000000000LL) == qword_140077090 )
  {
    v38 = 10;
    v51 = &v38;
    v52 = 4LL;
    v53 = (int *)&v39;
    v55 = (int *)&v40;
    v57 = (int *)&v41;
    v28 = (const char *)g_ModuleName;
    v39 = v23;
    v54 = 4LL;
    v40 = v20;
    v56 = 4LL;
    v41 = v21;
    v58 = 4LL;
    if ( !g_ModuleName )
      v28 = "<unknown>";
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v59 = v28;
    v42 = v47;
    v62 = &v42;
    v43 = v48;
    v64 = (int *)&v43;
    v60 = v29 + 1;
    v61 = 0;
    v63 = 4LL;
    v65 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v31 = a6;
    v44 = CurrentIrql;
    v66 = (int *)&v44;
    v68 = "usbhub3.sys";
    v45 = v49;
    v70 = (int *)&v45;
    v46 = a5;
    v72 = &v46;
    if ( !a6 )
      v31 = "<unknown>";
    v67 = 4LL;
    v69 = 12LL;
    v71 = 4LL;
    v73 = 4LL;
    if ( v31 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( v31[v32] );
      v33 = v32 + 1;
    }
    else
    {
      v31 = File;
      v33 = 1;
    }
    v75 = v33;
    v74 = v31;
    v76 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140077078, byte_140069215, 0LL, 0LL, 0xEu, v50);
  }
  if ( dword_140077040 && !v26 && !KeGetCurrentIrql() )
  {
    v34 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v23, g_ModuleName, v20, v21, 0LL, 0LL, 0);
    if ( (unsigned int)dword_140077078 > 5
      && (qword_140077088 & 0x400000000000LL) != 0
      && (qword_140077090 & 0x400000000000LL) == qword_140077090 )
    {
      v46 = 10;
      v51 = &v46;
      v52 = 4LL;
      v53 = (int *)&v45;
      v55 = (int *)&v44;
      v57 = (int *)&v43;
      v35 = (const char *)g_ModuleName;
      v45 = v23;
      v54 = 4LL;
      v44 = v20;
      v56 = 4LL;
      v43 = v21;
      v58 = 4LL;
      if ( !g_ModuleName )
        v35 = "<unknown>";
      do
        ++v27;
      while ( v35[v27] );
      v61 = 0;
      v60 = v27 + 1;
      v42 = v47;
      v59 = v35;
      v62 = &v42;
      v41 = v48;
      v64 = (int *)&v41;
      v66 = (int *)&v40;
      v68 = "usbhub3.sys";
      v39 = v49;
      v70 = (int *)&v39;
      v38 = a5;
      v72 = &v38;
      v63 = 4LL;
      v65 = 4LL;
      v40 = v34;
      v67 = 4LL;
      v69 = 12LL;
      v71 = 4LL;
      v73 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140077078, byte_14006932C, 0LL, 0LL, 0xDu, v50);
    }
    if ( !v34 )
    {
      v36 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v37 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v9 = v36;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v37 - 4) != a1 )
        {
          v37 = (__int64 *)*v37;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v37 )
            goto LABEL_52;
        }
        ++*((_DWORD *)v37 - 2);
      }
      goto LABEL_52;
    }
  }
}
