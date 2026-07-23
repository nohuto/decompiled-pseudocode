/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x1403F4F58
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D1580 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140509BE4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlCheckUpperOplock @ 0x140791080 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  char v1; // di
  _QWORD *v3; // r10
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // esi
  __int64 **v8; // r11
  int v9; // eax
  __int64 *v10; // rcx
  __int64 *v11; // rcx
  NTSTATUS result; // eax
  int v13; // edx
  __int64 *i; // r8
  int v15; // r10d
  char v16; // r8
  char v17; // dl
  int v18; // eax
  int v19; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v20; // [rsp+40h] [rbp-31h] BYREF
  __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v24; // [rsp+78h] [rbp+7h]
  __int64 v25; // [rsp+80h] [rbp+Fh]
  int *v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+90h] [rbp+1Fh]
  __int64 *v28; // [rsp+98h] [rbp+27h]
  __int64 v29; // [rsp+A0h] [rbp+2Fh]
  __int64 *v30; // [rsp+A8h] [rbp+37h]
  __int64 v31; // [rsp+B0h] [rbp+3Fh]

  v1 = 0;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v20 = a1;
    v24 = &v20;
    v19 = *(_DWORD *)(a1 + 144);
    v25 = 8LL;
    v26 = &v19;
    v27 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_14005BC1D, 0LL, 0LL, 4u, v23);
  }
  v3 = (_QWORD *)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 40);
  v5 = a1 + 56;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 144) & 0x1010000;
  if ( v4 == (_QWORD *)(a1 + 40) )
  {
    if ( v6 == v5 && *(_QWORD *)(a1 + 72) == a1 + 72 )
    {
      v9 = *(_DWORD *)(a1 + 144) & 0x8000020 | 1;
      goto LABEL_8;
    }
    v8 = (__int64 **)(a1 + 72);
    if ( *(_QWORD *)(a1 + 56) != a1 + 56 )
    {
LABEL_7:
      v9 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x3000;
      goto LABEL_8;
    }
    if ( v4 == (_QWORD *)(a1 + 40) )
    {
      v13 = 0;
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x3000;
      for ( i = *v8; i != (__int64 *)v8; i = (__int64 *)*i )
      {
        v15 = *((_DWORD *)i + 12);
        if ( (v15 & 0x8000000) != 0 )
          v1 = 1;
        if ( v13 && (v15 & 0xF00000) != v13 )
          goto LABEL_7;
        v13 = v15 & 0xF00000;
        *(_DWORD *)(a1 + 144) |= v15 & 0xF00000;
      }
      goto LABEL_9;
    }
  }
  else
  {
    if ( v6 != v5 || *(_QWORD *)(a1 + 72) != a1 + 72 )
    {
      v9 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0xB000;
      goto LABEL_8;
    }
    v3 = (_QWORD *)(a1 + 40);
  }
  v16 = 0;
  v17 = 0;
  do
  {
    if ( *(_DWORD *)(v4[2] + 24LL) == 590400 )
    {
      v16 = 1;
    }
    else
    {
      v17 = 1;
      if ( !v16 )
        goto LABEL_41;
    }
    if ( v17 )
      goto LABEL_44;
LABEL_41:
    v4 = (_QWORD *)*v4;
  }
  while ( v4 != v3 );
  if ( v16 && v17 )
  {
LABEL_44:
    v9 = *(_DWORD *)(a1 + 144) & 0x8000020 | 0x1010;
    goto LABEL_8;
  }
  v18 = *(_DWORD *)(a1 + 144) & 0x8000020;
  if ( v16 )
    v9 = v18 | 0x1000;
  else
    v9 = v18 | 0x10;
LABEL_8:
  *(_DWORD *)(a1 + 144) = v9;
LABEL_9:
  *(_DWORD *)(a1 + 144) |= v7;
  if ( v1 )
  {
LABEL_15:
    result = *(_DWORD *)(a1 + 144) | 0x8000000;
  }
  else
  {
    v10 = *(__int64 **)(a1 + 56);
    if ( v10 != (__int64 *)(a1 + 56) )
    {
      while ( (v10[6] & 0x8000000) == 0 )
      {
        v10 = (__int64 *)*v10;
        if ( v10 == (__int64 *)(a1 + 56) )
          goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    {
LABEL_13:
      v11 = *(__int64 **)(a1 + 72);
      if ( v11 != (__int64 *)(a1 + 72) )
      {
        while ( v11 != (__int64 *)(a1 + 72) )
        {
          if ( (v11[6] & 0x8000000) != 0 )
            goto LABEL_15;
          v11 = (__int64 *)*v11;
        }
      }
    }
    result = *(_DWORD *)(a1 + 144) & 0xF7FFFFFF;
  }
  *(_DWORD *)(a1 + 144) = result;
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v20 = a1;
    v24 = &v20;
    v19 = *(_DWORD *)(a1 + 144);
    v25 = 8LL;
    v26 = &v19;
    v21 = *(_QWORD *)(a1 + 88);
    v28 = &v21;
    v22 = *(_QWORD *)(a1 + 96);
    v30 = &v22;
    v27 = 4LL;
    v29 = 8LL;
    v31 = 8LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E06B30,
             (unsigned __int8 *)&word_14005BC6E,
             0LL,
             0LL,
             6u,
             v23);
  }
  return result;
}
