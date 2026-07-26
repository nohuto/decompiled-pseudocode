/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1400E7FDC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140004764 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  KIRQL v2; // r12
  __int64 **v3; // rdx
  __int64 *v4; // rcx
  __int64 *v5; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int16 v13; // cx
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // r13d
  int v20; // edi
  const CHAR *v21; // r12
  const CHAR *v22; // rdx
  KIRQL CurrentIrql; // al
  int v24; // edi
  const GUID *v25; // r8
  ULONG v26; // r10d
  __int64 **v27; // rcx
  __int64 *v28; // rax
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v35; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-94h]
  _EVENT_DATA_DESCRIPTOR v37[2]; // [rsp+78h] [rbp-90h] BYREF
  int *v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  int *v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  int *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  int *v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  _BYTE v46[16]; // [rsp+D8h] [rbp-30h] BYREF
  int *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  int *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  int *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  _BYTE v53[16]; // [rsp+118h] [rbp+10h] BYREF

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
    v3 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v4 = *v3;
      v3 = (__int64 **)v4;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v4 )
        break;
      v5 = v4 - 4;
      if ( *(v4 - 4) == a1 )
        goto LABEL_10;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v5 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_38;
    v7 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v5[2] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    v5[1] = ((__int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v9 = v5 + 4;
    v10 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    v5[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v10 + 8) = v9;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v5 + 4);
LABEL_10:
    ++*((_DWORD *)v5 + 4);
    ++*((_DWORD *)v5 + 5);
    v11 = MEMORY[0xFFFFF78000000320];
    v12 = v11 * KeQueryTimeIncrement() / 10000;
    if ( (unsigned __int64)(v12 - v5[1]) <= 0xEA60 )
    {
LABEL_38:
      KeReleaseSpinLock(&g_AssertSpinLock, v2);
      return;
    }
    v13 = *(_WORD *)(MEMORY[0x14000003C] + 0x140000018LL);
    if ( v13 == 267 || v13 == 523 )
    {
      v14 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000008LL);
      v15 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000050LL);
    }
    else
    {
      v14 = 0;
      v15 = 0;
    }
    if ( a1 < 0x140000000LL || (v16 = 0x140000000LL + v15, v16 <= 0x140000000LL) || a1 > v16 )
      v17 = 0;
    else
      v17 = a1 - 0x40000000;
    v18 = *((_DWORD *)v5 + 5);
    v19 = *((_DWORD *)v5 + 4);
    v5[1] = v12;
    v20 = *((_DWORD *)v5 + 6);
    v36 = v18;
    KeReleaseSpinLock(&g_AssertSpinLock, v2);
    v21 = "<unknown>";
    if ( (unsigned int)dword_140136040 > 5 && tlgKeywordOn((__int64)&dword_140136040, 0x400000000000LL) )
    {
      v29 = 10;
      v38 = &v29;
      v39 = 4LL;
      v40 = (int *)&v30;
      v22 = "<unknown>";
      v30 = v17;
      v42 = (int *)&v31;
      v44 = (int *)&v32;
      v41 = 4LL;
      v31 = v14;
      if ( g_ModuleName )
        v22 = (const CHAR *)g_ModuleName;
      v43 = 4LL;
      v32 = v15;
      v45 = 4LL;
      tlgCreate1Sz_char((__int64)v46, v22);
      v33 = v19;
      v47 = (int *)&v33;
      v34 = v36;
      v49 = (int *)&v34;
      v48 = 4LL;
      v50 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      v52 = 4LL;
      v35 = CurrentIrql;
      v51 = &v35;
      tlgCreate1Sz_char((__int64)v53, "<unknown>");
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140136040, byte_140105835, 0LL, 0LL, 0xBu, v37);
    }
    if ( dword_140136078 && !v20 && !KeGetCurrentIrql() )
    {
      v24 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v17, g_ModuleName, v14, v15, 0LL, 0LL, 0);
      if ( (unsigned int)dword_140136040 > 5 && tlgKeywordOn((__int64)&dword_140136040, 0x400000000000LL) )
      {
        v39 = 4LL;
        v38 = &v35;
        v35 = 10;
        v40 = (int *)&v34;
        v34 = v17;
        v42 = (int *)&v33;
        v44 = (int *)&v32;
        v41 = 4LL;
        v33 = v14;
        if ( g_ModuleName )
          v21 = (const CHAR *)g_ModuleName;
        v43 = 4LL;
        v32 = v15;
        v45 = 4LL;
        tlgCreate1Sz_char((__int64)v46, v21);
        v31 = v19;
        v47 = (int *)&v31;
        v30 = v36;
        v48 = 4LL;
        v49 = (int *)&v30;
        v51 = &v29;
        v50 = 4LL;
        v29 = v24;
        v52 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140136040, byte_140105948, v25, 0LL, v26, v37);
      }
      if ( !v24 )
      {
        v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
        v27 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v28 = *v27;
          v27 = (__int64 **)v28;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v28 )
            goto LABEL_38;
          if ( *(v28 - 4) == a1 )
          {
            ++*((_DWORD *)v28 - 2);
            goto LABEL_38;
          }
        }
      }
    }
  }
}
