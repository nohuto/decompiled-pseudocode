/*
 * XREFs of Bulk_Transfer_CompleteCancelable @ 0x140018350
 * Callers:
 *     Bulk_PrepareStage @ 0x140017060 (Bulk_PrepareStage.c)
 *     Bulk_MapStage @ 0x140019DB0 (Bulk_MapStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_RetrieveNextStage @ 0x14003B040 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDqdD @ 0x140018850 (WPP_RECORDER_SF_DDDqdD.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1400331F8 (WPP_RECORDER_SF_DDDqd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Bulk_Transfer_CompleteCancelable(__int64 a1, __int64 *a2, int a3, char a4)
{
  int v5; // edi
  __int64 *v7; // rcx
  __int64 **v8; // rax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  _QWORD *v15; // rdi
  __int64 v16; // rbp
  _QWORD *v17; // rdx
  struct _MDL *v18; // rcx
  KIRQL v19; // di
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 **v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rsi
  __int64 **v26; // rax
  int v27; // eax

  v5 = a3;
  if ( *((_DWORD *)a2 + 16) == 1 )
  {
    v7 = (__int64 *)*a2;
    v8 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v8 == a2 )
    {
      *v8 = v7;
      v7[1] = (__int64)v8;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2048))(WdfDriverGlobals, a2[3]) >= 0 )
      {
        *((_DWORD *)a2 + 16) = 0;
        goto LABEL_6;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(a1 + 48);
        v24 = *(unsigned __int8 *)(v23 + 143);
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v23, v24, 43);
      }
      v25 = a1 + 392;
      *((_DWORD *)a2 + 16) = 2;
      v26 = *(__int64 ***)(v25 + 8);
      if ( *v26 == (__int64 *)v25 )
      {
        *a2 = v25;
        a2[1] = (__int64)v26;
        *v26 = a2;
        *(_QWORD *)(v25 + 8) = a2;
        return;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( *((_DWORD *)a2 + 16) == 3 )
  {
    if ( !a4 )
      return;
    v21 = *a2;
    v22 = (__int64 **)a2[1];
    v5 = -1073676288;
    if ( a3 != -1 )
      v5 = a3;
    if ( *(__int64 **)(v21 + 8) != a2 || *v22 != a2 )
      goto LABEL_19;
    *v22 = (__int64 *)v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
LABEL_6:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  v11 = a2[6];
  if ( *(_WORD *)(v11 + 2) == 56 )
  {
LABEL_7:
    v12 = (_DWORD *)(v11 + 36);
  }
  else
  {
    switch ( *(_WORD *)(v11 + 2) )
    {
      case '9':
      case ':':
        v12 = (_DWORD *)(v11 + 52);
        break;
      default:
        goto LABEL_7;
    }
  }
  *v12 = *((_DWORD *)a2 + 27);
  v13 = *((_DWORD *)a2 + 17);
  if ( v13 == 28 )
  {
LABEL_9:
    *(_DWORD *)(v11 + 4) = 0;
    goto LABEL_12;
  }
  switch ( v13 )
  {
    case 0:
      *(_DWORD *)(v11 + 4) = v5;
      if ( v5 == 1 )
        goto LABEL_12;
      if ( v5 <= -1073738240 )
      {
        if ( v5 == -1073738240 )
        {
          v14 = -1073741637;
          goto LABEL_13;
        }
        if ( v5 == -1073739264 || v5 == -2147483136 || v5 == -2147482880 || v5 == -2147482112 )
        {
          v14 = -1073741811;
          goto LABEL_13;
        }
        goto LABEL_33;
      }
      switch ( v5 )
      {
        case -1073676288:
          v14 = -1073741536;
          goto LABEL_13;
        case -1073737728:
          v14 = -1073741670;
          goto LABEL_13;
        case -1073713152:
          v14 = -1073741810;
          goto LABEL_13;
      }
      if ( v5 )
      {
LABEL_33:
        v14 = -1073741823;
        goto LABEL_13;
      }
LABEL_12:
      v14 = 0;
LABEL_13:
      *((_DWORD *)a2 + 18) = v14;
      ++*(_DWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 256) += *((unsigned int *)a2 + 27);
      if ( *((int *)a2 + 18) < 0 )
        ++*(_DWORD *)(a1 + 252);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqdD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          v9,
          v10);
      v15 = (_QWORD *)a2[12];
      if ( v15 )
      {
        v16 = a2[7];
        *(_BYTE *)(v16 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 96));
        v17 = *(_QWORD **)(v16 + 232);
        if ( *v17 != v16 + 224 )
          goto LABEL_19;
        *v15 = v16 + 224;
        v15[1] = v17;
        *v17 = v15;
        *(_QWORD *)(v16 + 232) = v15;
        KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 96), *(_BYTE *)(v16 + 104));
        a2[12] = 0LL;
      }
      v18 = (struct _MDL *)a2[10];
      if ( v18 )
      {
        v20 = a2[6];
        if ( *(_WORD *)(v20 + 2) != 56 )
        {
          switch ( *(_WORD *)(v20 + 2) )
          {
            case '9':
            case ':':
              goto LABEL_26;
            default:
              break;
          }
        }
        if ( v18 != *(struct _MDL **)(v20 + 48) )
        {
LABEL_26:
          if ( v18 != *(struct _MDL **)(a2[7] + 120) )
          {
            IoFreeMdl(v18);
            a2[10] = 0LL;
          }
        }
      }
      *((_BYTE *)a2 + 16) = 0;
      v19 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
        WdfDriverGlobals,
        a2[3],
        *((unsigned int *)a2 + 18));
      KeLowerIrql(v19);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      return;
    case 1:
    case 13:
    case 26:
      goto LABEL_9;
    case 2:
      *(_DWORD *)(v11 + 4) = -1073741805;
      goto LABEL_33;
    case 3:
    case 31:
      *(_DWORD *)(v11 + 4) = -1073741806;
      v14 = -1073741823;
      goto LABEL_13;
    case 6:
      *(_DWORD *)(v11 + 4) = -1073741820;
      v14 = -1073741823;
      goto LABEL_13;
    case 10:
      *(_DWORD *)(v11 + 4) = -1073741803;
      goto LABEL_33;
    case 20:
      *(_DWORD *)(v11 + 4) = -1073741804;
      goto LABEL_33;
    case 23:
      *(_DWORD *)(v11 + 4) = -1073545216;
      v14 = -1073741823;
      goto LABEL_13;
    case 27:
      *(_DWORD *)(v11 + 4) = -1073610752;
      goto LABEL_33;
    case 34:
      *(_DWORD *)(v11 + 4) = -1073741802;
      goto LABEL_33;
    case 199:
      v27 = -1073741807;
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x3Eu) )
        v27 = -1073709056;
      *(_DWORD *)(v11 + 4) = v27;
      goto LABEL_33;
    default:
      *(_DWORD *)(v11 + 4) = -1073741807;
      goto LABEL_33;
  }
}
