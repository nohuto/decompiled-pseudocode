/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x1403F4D08
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D1580 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ecx
  NTSTATUS v4; // r8d
  NTSTATUS v5; // r14d
  _QWORD *i; // rbx
  PVOID v7; // rcx
  _QWORD **v8; // r15
  _QWORD *j; // rsi
  _QWORD *v10; // rdx
  NTSTATUS v11; // [rsp+38h] [rbp-79h] BYREF
  NTSTATUS v12; // [rsp+3Ch] [rbp-75h] BYREF
  NTSTATUS v13; // [rsp+40h] [rbp-71h] BYREF
  NTSTATUS v14; // [rsp+44h] [rbp-6Dh] BYREF
  PVOID P; // [rsp+48h] [rbp-69h] BYREF
  __int64 v16; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17[2]; // [rsp+58h] [rbp-59h] BYREF
  PVOID *p_P; // [rsp+78h] [rbp-39h]
  __int64 v19; // [rsp+80h] [rbp-31h]
  NTSTATUS *v20; // [rsp+88h] [rbp-29h]
  __int64 v21; // [rsp+90h] [rbp-21h]
  NTSTATUS *v22; // [rsp+98h] [rbp-19h]
  __int64 v23; // [rsp+A0h] [rbp-11h]
  NTSTATUS *v24; // [rsp+A8h] [rbp-9h]
  __int64 v25; // [rsp+B0h] [rbp-1h]
  __int64 *v26; // [rsp+B8h] [rbp+7h]
  __int64 v27; // [rsp+C0h] [rbp+Fh]
  PVOID *v28; // [rsp+C8h] [rbp+17h]
  __int64 v29; // [rsp+D0h] [rbp+1Fh]

  result = 0;
  v3 = 0;
  v11 = 0;
  v4 = 0;
  v12 = 0;
  v5 = 0;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    P = (PVOID)a1;
    p_P = &P;
    v14 = *(_DWORD *)(a1 + 144);
    v19 = 8LL;
    v20 = &v14;
    v21 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)&byte_140045AA7, 0LL, 0LL, 4u, v17);
    result = 0;
    v3 = 0;
    v4 = 0;
  }
  for ( i = *(_QWORD **)(a1 + 88); i != (_QWORD *)(a1 + 88); i = (_QWORD *)*i )
  {
    ++v4;
    P = i;
    v13 = v4;
    if ( *(_QWORD *)(a1 + 72) != a1 + 72 || (*(_DWORD *)(a1 + 144) & 0x10000) != 0 )
    {
      if ( *((_BYTE *)i + 52) )
        goto LABEL_19;
      v8 = (_QWORD **)(a1 + 120);
      if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
        v8 = (_QWORD **)(a1 + 72);
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        v10 = j - 7;
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
          v10 = j;
        if ( !(unsigned __int8)FsRtlpOplockKeysEqual(i[7], v10[3], 0LL) )
        {
          result = v11 + 1;
          v4 = v13;
          v3 = ++v12;
          ++v11;
          goto LABEL_20;
        }
      }
      v7 = P;
    }
    else
    {
      v7 = i;
    }
    i = (_QWORD *)i[1];
    FsRtlpRemoveAndCompleteWaitingIrp(v7);
    v4 = v13;
    ++v5;
    v3 = v12;
LABEL_19:
    result = v11;
LABEL_20:
    ;
  }
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v13 = result;
    v14 = v4;
    v20 = &v13;
    p_P = (PVOID *)&v14;
    v22 = &v12;
    v11 = v3;
    v24 = &v11;
    v19 = 4LL;
    v26 = &v16;
    LODWORD(P) = *(_DWORD *)(a1 + 144);
    v28 = &P;
    v21 = 4LL;
    v12 = v5;
    v23 = 4LL;
    v25 = 4LL;
    v16 = a1;
    v27 = 8LL;
    v29 = 4LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E06B30,
             (unsigned __int8 *)byte_140045BFD,
             0LL,
             0LL,
             8u,
             v17);
  }
  return result;
}
