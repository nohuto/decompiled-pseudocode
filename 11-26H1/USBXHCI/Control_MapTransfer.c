/*
 * XREFs of Control_MapTransfer @ 0x14000E500
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x14000E0E0 (Control_WdfEvtIoDefault.c)
 *     Control_EP_StartMapping @ 0x140032DD0 (Control_EP_StartMapping.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x140004358 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Control_Transfer_Map @ 0x14000EFE0 (Control_Transfer_Map.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x140015948 (WPP_RECORDER_SF_DDqDD.c)
 *     Control_Transfer_CompleteCancelable @ 0x140020920 (Control_Transfer_CompleteCancelable.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x14004CBA8 (WPP_RECORDER_SF_DDqD.c)
 */

void __fastcall Control_MapTransfer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // edx
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r11
  int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  int v18; // edi
  __int64 v19; // rcx
  PVOID v20; // rax
  unsigned __int16 v21; // r9
  int v22; // ecx
  __int64 v23; // rax
  int v24; // edx
  PMDL Mdl; // rax
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // edx
  KIRQL v30; // dl
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 Priority; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 360);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 48);
  if ( !v3 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 328) && v3 <= 8 && (*(_DWORD *)(v4 + 32) & 1) == 0 )
  {
    v9 = 1;
    goto LABEL_15;
  }
  if ( *(_WORD *)(v4 + 2) != 56 )
  {
    switch ( *(_WORD *)(v4 + 2) )
    {
      case '9':
      case ':':
        goto LABEL_8;
      default:
        break;
    }
  }
  v5 = *(_QWORD **)(v4 + 48);
  if ( v5 && *v5 )
  {
LABEL_33:
    v9 = 3;
    goto LABEL_15;
  }
LABEL_8:
  if ( v3 > *(_DWORD *)(a1 + 24) )
    goto LABEL_33;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = (_QWORD *)(a1 + 224);
  v7 = *(_QWORD **)(a1 + 224);
  if ( v7 == (_QWORD *)(a1 + 224) )
  {
    v7 = (_QWORD *)CommonBuffer_AcquireBuffer(
                     *(char **)(*(_QWORD *)(a1 + 40) + 120LL),
                     *(unsigned int *)(a1 + 24),
                     a1,
                     845639250LL);
  }
  else
  {
    if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    v7[1] = v7;
    *v7 = v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  *(_QWORD *)(v1 + 88) = v7;
  if ( !v7 )
    goto LABEL_33;
  v9 = 2;
LABEL_15:
  *(_DWORD *)(v1 + 64) = v9;
  v10 = *(_QWORD *)(a1 + 360);
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)(v10 + 48);
  if ( v11 != 2 )
  {
    v22 = v11 - 1;
    if ( v22 )
    {
      if ( v22 != 2 )
        goto LABEL_18;
      v23 = *(_QWORD *)(v12 + 48);
      if ( v23 )
      {
        *(_QWORD *)(v10 + 72) = v23;
        goto LABEL_18;
      }
      Mdl = IoAllocateMdl(*(PVOID *)(v12 + 40), *(_DWORD *)(v10 + 104), 0, 0, 0LL);
      *(_QWORD *)(v10 + 72) = Mdl;
      if ( Mdl )
        goto LABEL_48;
      if ( (*(_DWORD *)(v12 + 32) & 0x10) != 0 && *(_QWORD *)(a1 + 120) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            5u,
            0xEu,
            0x1Cu,
            (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
        v26 = *(_QWORD *)(a1 + 120);
        v27 = *(unsigned int *)(v10 + 104);
        *(_QWORD *)(v10 + 72) = v26;
        v28 = *(_QWORD *)(v12 + 40);
        *(_QWORD *)v26 = 0LL;
        *(_WORD *)(v26 + 10) = 0;
        *(_DWORD *)(v26 + 40) = v27;
        *(_QWORD *)(v26 + 32) = v28 & 0xFFFFFFFFFFFFF000uLL;
        *(_WORD *)(v26 + 8) = 8 * ((((unsigned __int64)(v28 & 0xFFF) + v27 + 4095) >> 12) + 6);
        *(_DWORD *)(v26 + 44) = v28 & 0xFFF;
LABEL_48:
        MmBuildMdlForNonPagedPool(*(PMDL *)(v10 + 72));
        goto LABEL_18;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v21 = 29;
LABEL_31:
      LODWORD(Priority) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        2u,
        0xEu,
        v21,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        Priority,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
      goto LABEL_32;
    }
  }
  v13 = *(_QWORD *)(v12 + 40);
  if ( v13 )
  {
    *(_QWORD *)(v10 + 80) = v13;
    goto LABEL_18;
  }
  v19 = *(_QWORD *)(v12 + 48);
  if ( (*(_BYTE *)(v19 + 10) & 5) != 0 )
    v20 = *(PVOID *)(v19 + 24);
  else
    v20 = MmMapLockedPagesSpecifyCache((PMDL)v19, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
  *(_QWORD *)(v10 + 80) = v20;
  if ( !v20 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v21 = 27;
    goto LABEL_31;
  }
LABEL_18:
  v14 = *(_QWORD *)(a1 + 360);
  v15 = *(_DWORD *)(v14 + 64);
  if ( !v15 )
    goto LABEL_23;
  v16 = *(_DWORD *)(v14 + 104);
  if ( v16 > 0x10000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        v16,
        30,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_QWORD *)(v14 + 24),
        v16,
        0);
LABEL_60:
    v18 = -1073741637;
    goto LABEL_42;
  }
  v17 = *(_DWORD *)(a1 + 4);
  if ( v16 > v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
        v16,
        31,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        *(_QWORD *)(v14 + 24),
        v16,
        *(_DWORD *)(a1 + 4));
      v18 = -1073741670;
      goto LABEL_42;
    }
LABEL_32:
    v18 = -1073741670;
    goto LABEL_42;
  }
  if ( v16 != v17 || (*(_DWORD *)(v14 + 80) & 0xFFFLL) == 0 )
  {
    if ( v15 == 3 && **(_QWORD **)(v14 + 72) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v24,
          v16,
          33,
          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          *(_QWORD *)(v14 + 24));
        v18 = -1073741637;
        goto LABEL_42;
      }
      goto LABEL_60;
    }
LABEL_23:
    v18 = Control_Transfer_Map(a1);
    if ( v18 >= 0 )
      return;
    goto LABEL_42;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_32;
  v29 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
  LOBYTE(v29) = 2;
  WPP_RECORDER_SF_DDqD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    v29,
    v16,
    32,
    (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
    *(_QWORD *)(v14 + 24),
    *(_DWORD *)(v14 + 104));
  v18 = -1073741670;
LABEL_42:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(*(_QWORD *)(a1 + 360) + 120LL) = v18;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    *(_DWORD *)(a1 + 108) = 2;
    Control_Transfer_CompleteCancelable(a1);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  else
  {
    v30 = *(_BYTE *)(a1 + 104);
    *(_DWORD *)(a1 + 108) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v30);
    v31 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v31 + 37)
      || (v32 = *(_QWORD *)(v31 + 144),
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 20)) == *(_DWORD *)(v32 + 8)) )
    {
      ESM_AddEvent((PVOID)(v31 + 304));
    }
  }
}
