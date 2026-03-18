/*
 * XREFs of Isoch_Transfer_CompleteCancelable @ 0x140014110
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_CompleteStaleTransfers @ 0x140014960 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_MapStage @ 0x14001AF10 (Isoch_MapStage.c)
 *     Isoch_CompleteTransfers @ 0x140028DE8 (Isoch_CompleteTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x140014E80 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     TR_QueueDpcForTransferCompletion @ 0x140016E34 (TR_QueueDpcForTransferCompletion.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14001DDB8 (WPP_RECORDER_SF_DDqd.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_Transfer_CompleteCancelable(__int64 a1, __int64 *a2, int a3, int a4, char a5, char a6)
{
  int v7; // ebp
  __int64 *v10; // rcx
  __int64 **v11; // rax
  int v12; // eax
  __int64 v13; // r10
  _DWORD *v14; // rcx
  int v15; // r8d
  __int64 v16; // r9
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  struct _MDL *v21; // rcx
  __int64 v22; // r8
  KIRQL v23; // bl
  __int64 v24; // rsi
  __int64 **v25; // rax
  __int64 v26; // rcx
  __int64 **v27; // rax
  __int64 **v28; // rcx
  __int64 v29; // rdx
  int v30; // r8d

  v7 = a4;
  if ( *((_DWORD *)a2 + 16) == 1 )
  {
    v10 = (__int64 *)*a2;
    v11 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v11 != a2 )
      goto LABEL_37;
    *v11 = v10;
    v10[1] = (__int64)v11;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2048))(WdfDriverGlobals, a2[3]);
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = *(_QWORD *)(a1 + 48);
        v30 = *(unsigned __int8 *)(v29 + 143);
        LOBYTE(v29) = 4;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v29,
          v30,
          17,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          v30,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          a2[3],
          v12);
      }
      v24 = a1 + 408;
      *((_DWORD *)a2 + 16) = 2;
      v25 = *(__int64 ***)(v24 + 8);
      if ( *v25 == (__int64 *)v24 )
      {
        *a2 = v24;
        a2[1] = (__int64)v25;
        *v25 = a2;
        *(_QWORD *)(v24 + 8) = a2;
        return;
      }
      goto LABEL_37;
    }
    *((_DWORD *)a2 + 16) = 0;
LABEL_6:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    v13 = a2[6];
    if ( *(_WORD *)(v13 + 2) == 56 )
    {
LABEL_7:
      v14 = (_DWORD *)(v13 + 36);
    }
    else
    {
      switch ( *(_WORD *)(v13 + 2) )
      {
        case '9':
        case ':':
          v14 = (_DWORD *)(v13 + 52);
          break;
        default:
          goto LABEL_7;
      }
    }
    v15 = 0;
    v16 = v13 + 128;
    *v14 = *((_DWORD *)a2 + 21);
    v17 = 0;
    v18 = *((_DWORD *)a2 + 24);
    if ( v18 )
    {
      do
      {
        if ( a3 == -1 )
        {
          v19 = *(_DWORD *)(v16 + 12LL * v17 + 20);
          if ( v19 == -1 )
          {
            *(_DWORD *)(v16 + 12LL * v17 + 20) = -1073610752;
LABEL_33:
            ++*(_DWORD *)(v13 + 136);
            ++*(_DWORD *)(a1 + 268);
            goto LABEL_13;
          }
        }
        else
        {
          *(_DWORD *)(v16 + 12LL * v17 + 20) = a3;
          v19 = a3;
        }
        if ( v19 )
          goto LABEL_33;
        ++v15;
LABEL_13:
        ++*(_DWORD *)(a1 + 264);
        ++v17;
        v18 = *((_DWORD *)a2 + 24);
      }
      while ( v17 < v18 );
    }
    if ( v7 == -1 )
    {
      if ( *(_DWORD *)(v13 + 136) != v18 )
      {
        *(_DWORD *)(v13 + 4) = 0;
        goto LABEL_18;
      }
      *(_DWORD *)(v13 + 4) = -1073739008;
    }
    else
    {
      *(_DWORD *)(v13 + 4) = v7;
      if ( v7 == 1 )
        goto LABEL_18;
      if ( v7 <= -1073738240 )
      {
        if ( v7 == -1073738240 )
        {
          v20 = -1073741637;
          goto LABEL_19;
        }
        if ( v7 == -1073739264 || v7 == -2147483136 || v7 == -2147482880 || v7 == -2147482112 )
        {
          v20 = -1073741811;
          goto LABEL_19;
        }
      }
      else
      {
        switch ( v7 )
        {
          case -1073676288:
            v20 = -1073741536;
            goto LABEL_19;
          case -1073737728:
            v20 = -1073741670;
            goto LABEL_19;
          case -1073713152:
            v20 = -1073741810;
            goto LABEL_19;
          case 0:
LABEL_18:
            v20 = 0;
LABEL_19:
            *((_DWORD *)a2 + 17) = v20;
            ++*(_DWORD *)(a1 + 248);
            *(_QWORD *)(a1 + 256) += *((unsigned int *)a2 + 21);
            if ( *((int *)a2 + 17) < 0 )
              ++*(_DWORD *)(a1 + 252);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDqdDDDD(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
                v15,
                v16);
            v21 = (struct _MDL *)a2[9];
            if ( v21 )
            {
              v22 = a2[6];
              if ( *(_WORD *)(v22 + 2) != 56 )
              {
                switch ( *(_WORD *)(v22 + 2) )
                {
                  case '9':
                  case ':':
                    goto LABEL_26;
                  default:
                    break;
                }
              }
              if ( v21 != *(struct _MDL **)(v22 + 48) )
              {
LABEL_26:
                IoFreeMdl(v21);
                a2[9] = 0LL;
              }
            }
            *((_BYTE *)a2 + 16) = 0;
            if ( !a6 )
            {
              v23 = KfRaiseIrql(2u);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                WdfDriverGlobals,
                a2[3],
                *((unsigned int *)a2 + 17));
              KeLowerIrql(v23);
LABEL_29:
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
              return;
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
            v28 = *(__int64 ***)(a1 + 432);
            if ( *v28 == (__int64 *)(a1 + 424) )
            {
              a2[1] = (__int64)v28;
              *a2 = a1 + 424;
              *v28 = a2;
              *(_QWORD *)(a1 + 432) = a2;
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
              TR_QueueDpcForTransferCompletion(a1);
              goto LABEL_29;
            }
LABEL_37:
            __fastfail(3u);
        }
      }
    }
    v20 = -1073741823;
    goto LABEL_19;
  }
  if ( *((_DWORD *)a2 + 16) != 3 )
    goto LABEL_6;
  if ( a5 )
  {
    v26 = *a2;
    v27 = (__int64 **)a2[1];
    v7 = -1073676288;
    if ( a4 != -1 )
      v7 = a4;
    if ( *(__int64 **)(v26 + 8) != a2 || *v27 != a2 )
      goto LABEL_37;
    *v27 = (__int64 *)v26;
    *(_QWORD *)(v26 + 8) = v27;
    goto LABEL_6;
  }
}
