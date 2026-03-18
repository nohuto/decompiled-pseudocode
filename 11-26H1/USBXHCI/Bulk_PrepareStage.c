/*
 * XREFs of Bulk_PrepareStage @ 0x140017060
 * Callers:
 *     Bulk_MappingLoop @ 0x14003ADD0 (Bulk_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x140015804 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x140016E7C (WPP_RECORDER_SF_DDDDDDD.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x140017A60 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Stage_AcquireMdl @ 0x140017EB0 (Bulk_Stage_AcquireMdl.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018350 (Bulk_Transfer_CompleteCancelable.c)
 *     TR_EnsureInputBufferForTrbs @ 0x140018A08 (TR_EnsureInputBufferForTrbs.c)
 *     Bulk_Stage_Release @ 0x140018AA8 (Bulk_Stage_Release.c)
 *     CommonBuffer_AcquireBuffers @ 0x140018EF0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x140019420 (TR_AcquireSecureSegments.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDqqD @ 0x14004DE94 (WPP_RECORDER_SF_DDDqqD.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Bulk_PrepareStage(__int64 a1)
{
  unsigned __int8 *v1; // rbx
  unsigned __int8 *v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // edi
  __int64 v6; // r13
  __int64 v7; // r8
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  unsigned int v10; // r15d
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r10d
  __int64 v16; // r9
  unsigned __int8 *v17; // rbp
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // r15
  __int64 v20; // rdx
  unsigned __int8 *v21; // rdi
  unsigned __int8 *v22; // r15
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // r8d
  unsigned int v26; // r12d
  KIRQL v27; // al
  _QWORD *v28; // r13
  _QWORD *v29; // rcx
  int v30; // r12d
  unsigned int v31; // edx
  _DWORD *v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // r8d
  int v37; // eax
  KIRQL v38; // al
  _QWORD *v39; // rcx
  int v40; // r8d
  __int64 v41; // rdx
  int v42; // eax
  int v43; // [rsp+20h] [rbp-A8h]
  _QWORD *v44; // [rsp+60h] [rbp-68h] BYREF
  _QWORD *v45; // [rsp+68h] [rbp-60h]
  int v46; // [rsp+70h] [rbp-58h]
  __int128 v47; // [rsp+74h] [rbp-54h]
  __int64 v48; // [rsp+D0h] [rbp+8h]
  char v49; // [rsp+D0h] [rbp+8h]
  PVOID Context; // [rsp+D8h] [rbp+10h]

  v1 = *(unsigned __int8 **)(a1 + 368);
  v3 = *(unsigned __int8 **)v1;
  switch ( *(_DWORD *)(*(_QWORD *)v1 + 76LL) )
  {
    case 1:
      *((_QWORD *)v1 + 8) = *((_QWORD *)v3 + 11) + *((unsigned int *)v3 + 28);
      break;
    case 2:
      *((_QWORD *)v1 + 8) = *((_QWORD *)v3 + 11) + *((unsigned int *)v3 + 28);
      *((_QWORD *)v1 + 9) = *((_QWORD *)v3 + 12);
      break;
    case 3:
      if ( *(_WORD *)(*((_QWORD *)v3 + 6) + 2LL) != 56 )
      {
        switch ( *(_WORD *)(*((_QWORD *)v3 + 6) + 2LL) )
        {
          case '9':
          case ':':
            goto LABEL_4;
          default:
            break;
        }
      }
      if ( (int)Bulk_Stage_AcquireMdl(v1) < 0 )
      {
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v17 = *(unsigned __int8 **)v1;
        if ( v1[44] )
        {
          IoFreeMdl(*((PMDL *)v1 + 6));
          *((_QWORD *)v1 + 6) = 0LL;
          v1[44] = 0;
        }
        v18 = (unsigned __int8 *)*((_QWORD *)v1 + 1);
        v19 = v1 + 8;
        if ( v18 != v1 + 8 )
        {
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
          {
            do
            {
              memset(*((void **)v18 + 2), 0, *((unsigned int *)v18 + 11));
              v18 = *(unsigned __int8 **)v18;
            }
            while ( v19 != v18 );
          }
          v20 = a1 + 208;
          if ( *(unsigned __int8 **)v19 != v19 )
          {
            **((_QWORD **)v1 + 2) = *(_QWORD *)v20;
            *(_QWORD *)(*(_QWORD *)v20 + 8LL) = *((_QWORD *)v1 + 2);
            *(_QWORD *)v20 = *(_QWORD *)v19;
            *(_QWORD *)(*(_QWORD *)v19 + 8LL) = v20;
            *((_QWORD *)v1 + 2) = v1 + 8;
            *(_QWORD *)v19 = v19;
          }
        }
        v21 = (unsigned __int8 *)*((_QWORD *)v1 + 3);
        v22 = v1 + 24;
        if ( v21 != v1 + 24 )
        {
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
          {
            do
            {
              memset(*((void **)v21 + 2), 0, *((unsigned int *)v21 + 11));
              v21 = *(unsigned __int8 **)v21;
            }
            while ( v22 != v21 );
          }
          if ( *(unsigned __int8 **)v22 != v22 )
          {
            **(_QWORD **)(a1 + 216) = *(_QWORD *)v22;
            *(_QWORD *)(*(_QWORD *)v22 + 8LL) = *(_QWORD *)(a1 + 216);
            **((_QWORD **)v1 + 4) = a1 + 208;
            *(_QWORD *)(a1 + 216) = *((_QWORD *)v1 + 4);
            *((_QWORD *)v1 + 4) = v1 + 24;
            *(_QWORD *)v22 = v22;
          }
        }
        v23 = v17[128];
        v24 = v17[132];
        --v17[130];
        v25 = v17[129];
        if ( v1 == &v17[v24 * v23 + 144] )
          v17[132] = (v24 + 1) % v25;
        else
          v17[131] = (int)(v25 + v17[131] - 1) % (int)v25;
        if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
        {
          LOBYTE(v16) = 1;
          Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL, v16);
          v4 = 1;
          goto LABEL_38;
        }
LABEL_37:
        v4 = 4;
        *((_DWORD *)v3 + 28) = *((_DWORD *)v3 + 26);
LABEL_38:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return v4;
      }
      break;
  }
LABEL_4:
  v4 = 1;
  v5 = *((_DWORD *)v3 + 26) - *((_DWORD *)v3 + 28);
  if ( *((_DWORD *)v3 + 19) == 3 )
  {
    v12 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 288) )
    {
      v13 = *((_QWORD *)v3 + 6);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v47 = 0LL;
      v46 = 1;
      LOBYTE(v43) = (*(_BYTE *)(v13 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v14 + 8) + 136LL))(
        v14,
        *((_QWORD *)v1 + 6),
        0LL,
        v5);
    }
    if ( v5 > v12 )
      v5 = v12;
  }
  *((_DWORD *)v1 + 10) = v5;
  Bulk_Stage_EstimateRequiredTrbs(v1);
  if ( *(_BYTE *)(a1 + 288) && (int)TR_EnsureInputBufferForTrbs(a1, *((unsigned int *)v1 + 21)) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    Bulk_Stage_Release(a1, v1);
    if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
    {
      Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL, 1LL);
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v6 = *(_QWORD *)(*(_QWORD *)v1 + 56LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 40) + 736LL) & 8) != 0 )
  {
    v10 = 1;
  }
  else
  {
    v7 = *(unsigned int *)(v6 + 192);
    v8 = *(_DWORD *)(v6 + 196) - v7 - (unsigned int)(*(_DWORD *)(v6 + 196) - v7) % *((_DWORD *)v1 + 20);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 143LL),
        v7,
        *(unsigned int *)(v6 + 196),
        v43);
    v9 = *((_DWORD *)v1 + 21);
    if ( v9 > v8 )
    {
      v15 = *(_DWORD *)(v6 + 196) - *(_DWORD *)(v6 + 196) % *((_DWORD *)v1 + 20);
      v10 = (v9 - v8 + v15 - 1) / v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
          5u,
          *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 143LL),
          0x22u,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids);
    }
    else
    {
      v10 = 0;
    }
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v6 + 40) + 736LL), 0x31u)
    && *(_DWORD *)(*(_QWORD *)(v6 + 48) + 20LL) == 3
    && *(_DWORD *)(*(_QWORD *)(v6 + 56) + 128LL) == 6 )
  {
    ++v10;
  }
  if ( !v10 )
    return 0;
  v26 = 0;
  Context = *(PVOID *)(*(_QWORD *)(a1 + 40) + 120LL);
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v28 = (_QWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 104) = v27;
  v29 = *(_QWORD **)(a1 + 208);
  v48 = a1 + 208;
  if ( (_QWORD *)(a1 + 208) != v29 )
  {
    do
    {
      v29 = (_QWORD *)*v29;
      ++v26;
    }
    while ( v28 != v29 );
    v48 = a1 + 208;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v27);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      5u,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      0x10u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
  if ( v10 <= v26 )
  {
    v30 = 0;
LABEL_47:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v31 = 0;
    v32 = v1 + 8;
    do
    {
      v33 = *(_QWORD **)v48;
      if ( *(_QWORD **)(*(_QWORD *)v48 + 8LL) != v28
        || (v34 = *v33, *(_QWORD **)(*v33 + 8LL) != v33)
        || (*(_QWORD *)v48 = v34,
            *(_QWORD *)(v34 + 8) = v28,
            v35 = *(_QWORD *)v32,
            *(_DWORD **)(*(_QWORD *)v32 + 8LL) != v32) )
      {
        __fastfail(3u);
      }
      *v33 = v35;
      ++v31;
      v33[1] = v32;
      *(_QWORD *)(v35 + 8) = v33;
      *(_QWORD *)v32 = v33;
    }
    while ( v31 < v10 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v30 >= 0 )
    {
      *(_DWORD *)(a1 + 340) = 0;
      return 0;
    }
    goto LABEL_86;
  }
  *(_QWORD *)(a1 + 144) = a1;
  *(_DWORD *)(a1 + 152) = v10 - v26;
  v45 = &v44;
  v44 = &v44;
  *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 160) = 828862034;
  v49 = v10 - v26;
  if ( *(_BYTE *)(a1 + 288) )
    v37 = TR_AcquireSecureSegments(a1, v10 - v26, &v44);
  else
    v37 = CommonBuffer_AcquireBuffers(Context, a1, 828862034, a1 + 128);
  v30 = v37;
  if ( v37 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_88:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      Bulk_Stage_Release(a1, v1);
      if ( *((_DWORD *)v3 + 30) == *((_DWORD *)v3 + 29) )
      {
        Bulk_Transfer_CompleteCancelable(a1, v3, 3221229568LL, 1LL);
      }
      else
      {
        v4 = 4;
        *((_DWORD *)v3 + 28) = *((_DWORD *)v3 + 26);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return v4;
    }
    v41 = *(_QWORD *)(a1 + 56);
    v42 = *(_DWORD *)(v41 + 152);
    LOBYTE(v41) = 2;
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v41,
      14,
      17,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      v42,
      *(_DWORD *)(a1 + 64),
      v49);
LABEL_86:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDqqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        v36,
        36,
        v43,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_DWORD *)(a1 + 64),
        *((_QWORD *)v3 + 3),
        (char)v1,
        v10);
    goto LABEL_88;
  }
  v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v39 = v44;
  *(_BYTE *)(a1 + 104) = v38;
  if ( v39 != &v44 )
  {
    **(_QWORD **)(a1 + 216) = v39;
    v44[1] = *(_QWORD *)(a1 + 216);
    *v45 = a1 + 208;
    *(_QWORD *)(a1 + 216) = v45;
    v45 = &v44;
    v44 = &v44;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  if ( v30 != 259 )
  {
    v48 = a1 + 208;
    goto LABEL_47;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      v40,
      35,
      v43,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      *(_DWORD *)(a1 + 64),
      *((_QWORD *)v3 + 3),
      (char)v1,
      v10);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  Bulk_Stage_Release(a1, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
