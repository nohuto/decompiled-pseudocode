/*
 * XREFs of ACPIFanCompletePendingIrps @ 0x140017A5C
 * Callers:
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqss @ 0x140018464 (WPP_RECORDER_SF_qDqss.c)
 */

char __fastcall ACPIFanCompletePendingIrps(__int64 a1, char a2)
{
  KSPIN_LOCK *v3; // rbp
  char v4; // si
  KIRQL v6; // r11
  _QWORD *v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool v12; // al
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  IRP *v18; // rsi
  _QWORD *v19; // rcx
  const char *v20; // rdx
  char v21; // r8
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+40h] [rbp-28h]
  _QWORD *v26; // [rsp+50h] [rbp-18h] BYREF
  _QWORD **v27; // [rsp+58h] [rbp-10h]

  v27 = &v26;
  v3 = (KSPIN_LOCK *)(a1 + 184);
  v4 = 0;
  v26 = &v26;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v7 = *(_QWORD **)(a1 + 216);
  while ( 1 )
  {
    v8 = v7;
    if ( v7 == (_QWORD *)(a1 + 216) )
      break;
    v9 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( (*(_DWORD *)(v9 + 24) != 2703936 || a2 || *(_DWORD *)*(v8 - 18) != *(_DWORD *)(a1 + 308))
      && _InterlockedExchange64(v8 - 8, 0LL) )
    {
      if ( *(_DWORD *)(v9 + 24) == 2703936 )
      {
        v11 = *(v8 - 18);
        *(_DWORD *)v11 = *(_DWORD *)(a1 + 308);
        v12 = *(_DWORD *)(a1 + 384) == 1 || *(_BYTE *)(a1 + 300);
        *(_BYTE *)(v11 + 4) = v12;
        *(_DWORD *)(v11 + 8) = *(_DWORD *)(a1 + 304);
        *(v8 - 14) = 12LL;
LABEL_15:
        *((_DWORD *)v8 - 30) = 0;
      }
      else if ( *(_DWORD *)(v9 + 24) == 2703940 )
      {
        v10 = *(v8 - 18);
        *(_DWORD *)v10 = *(_DWORD *)(a1 + 324);
        *(_OWORD *)(v10 + 4) = *(_OWORD *)(a1 + 328);
        *(v8 - 14) = 20LL;
        goto LABEL_15;
      }
      v13 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8
        || (v14 = (_QWORD *)v8[1], (_QWORD *)*v14 != v8)
        || (*v14 = v13, *(_QWORD *)(v13 + 8) = v14, v15 = v27, *v27 != &v26) )
      {
LABEL_32:
        __fastfail(3u);
      }
      v8[1] = v27;
      *v8 = &v26;
      *v15 = v8;
      v27 = (_QWORD **)v8;
      break;
    }
  }
  KeReleaseSpinLock(v3, v6);
  v16 = v26;
  while ( v16 != &v26 )
  {
    v17 = v16;
    v18 = (IRP *)(v16 - 21);
    v16 = (_QWORD *)*v16;
    if ( (_QWORD *)v16[1] != v17 )
      goto LABEL_32;
    v19 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v19 != v17 )
      goto LABEL_32;
    *v19 = v16;
    v20 = byte_140075A82;
    v21 = 0;
    v16[1] = v19;
    v22 = byte_140075A82;
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 8);
      v21 = a1;
      if ( (v23 & 0x200000000000LL) != 0 )
      {
        v20 = *(const char **)(a1 + 608);
        if ( (v23 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = (__int64)v20;
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_qDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v20,
        16,
        24,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        (char)v18,
        v18->IoStatus.Status,
        v21,
        v25,
        (__int64)v22);
    }
    IofCompleteRequest(v18, 0);
    v4 = 1;
  }
  return v4;
}
