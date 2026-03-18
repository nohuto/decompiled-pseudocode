/*
 * XREFs of ACPIEcServiceIoLoop @ 0x14001F500
 * Callers:
 *     ACPIEcServiceDevice @ 0x14001F19C (ACPIEcServiceDevice.c)
 * Callees:
 *     ACPIEcLogAction @ 0x14001F2C0 (ACPIEcLogAction.c)
 *     ACPIEcDispatchQueries @ 0x14003E738 (ACPIEcDispatchQueries.c)
 *     ACPIEcLogError @ 0x140055894 (ACPIEcLogError.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

PVOID *__fastcall ACPIEcServiceIoLoop(__int64 a1)
{
  char v1; // si
  char v2; // bp
  int *v3; // rdi
  __int64 v5; // r14
  ULONG v6; // r13d
  ULONG v7; // r12d
  KSPIN_LOCK *i; // rcx
  KIRQL v9; // si
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int8 v12; // dl
  char v13; // bp
  KIRQL v14; // di
  __int64 v15; // rdx
  int *v16; // rcx
  char v17; // al
  KIRQL v18; // di
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rdi
  KIRQL v21; // al
  __int64 v22; // r9
  KIRQL v23; // si
  __int64 v24; // r9
  char v25; // al
  KIRQL v26; // al
  int v27; // edx
  KIRQL v28; // r10
  unsigned __int64 v29; // rcx
  int v30; // r9d
  __int64 v31; // r8
  char v32; // al
  char v33; // al
  char v34; // dl
  unsigned __int16 v35; // cx
  char v36; // al
  PVOID **v37; // rcx
  PVOID **v38; // rax
  char *v39; // rax
  PLIST_ENTRY v40; // rax
  _LIST_ENTRY *Blink; // rdx
  char v42; // r8
  __int16 v43; // cx
  void (__fastcall **v44)(_QWORD); // rdi
  PVOID *result; // rax
  __int64 v46; // rax
  char v47; // [rsp+20h] [rbp-68h]
  ULONG v48; // [rsp+24h] [rbp-64h]
  int v49; // [rsp+28h] [rbp-60h] BYREF
  int *v50; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  PVOID *p_P; // [rsp+40h] [rbp-48h]
  char v53; // [rsp+98h] [rbp+10h]
  char v54; // [rsp+A0h] [rbp+18h]
  char v55; // [rsp+A8h] [rbp+20h]

  v55 = 0;
  v1 = 1;
  v47 = 0;
  v2 = 0;
  v49 = 0;
  p_P = &P;
  v3 = 0LL;
  v53 = 1;
  P = &P;
  v50 = 0LL;
  v5 = 0LL;
  v54 = 0;
  v6 = 0;
  v7 = 0;
  v48 = 0;
  for ( i = (KSPIN_LOCK *)(a1 + 88); ; i = (KSPIN_LOCK *)(a1 + 88) )
  {
    if ( v5 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(i);
      v10 = *(_QWORD *)(a1 + 488);
      if ( v10 )
        v11 = *(_QWORD *)(v10 + 40);
      else
        v11 = 0LL;
      v12 = 48;
      if ( v5 != *(_QWORD *)(a1 + 40) )
        v12 = 64;
      ACPIEcLogAction(a1, v12, v54, v11);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v9);
      __outbyte(v5, v54);
      KeStallExecutionProcessor(1u);
      ++v48;
      v5 = 0LL;
      v6 = 0;
LABEL_11:
      v7 = v48;
      if ( v3 )
      {
        v1 = 1;
        v50 = 0LL;
        v53 = 1;
      }
      else
      {
        v1 = v53;
      }
      goto LABEL_23;
    }
    v48 = v7;
    if ( !v6 )
      goto LABEL_11;
    if ( v3 )
      break;
    v13 = v2 & 0x10;
    if ( v1 )
    {
      v48 = v7 + v6;
      KeStallExecutionProcessor(v6);
      v53 = v1;
      if ( v13 )
      {
        v50 = 0LL;
        if ( v6 >= *(_DWORD *)(a1 + 64) )
        {
          v53 = v1;
          v50 = (int *)(a1 + 2196);
        }
      }
      else
      {
        v16 = (int *)(a1 + 2192);
        if ( v6 < *(_DWORD *)(a1 + 68) )
          v16 = 0LL;
        v50 = v16;
      }
      v7 += v6;
    }
    else if ( v13 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc(i);
      ACPIEcLogAction(a1, 0x30u, 131, 0LL);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v14);
      v15 = *(_QWORD *)(a1 + 40);
      v50 = (int *)(a1 + 2200);
      v53 = 0;
      __outbyte(v15, 0x83u);
      v48 = v7;
    }
    else
    {
      v48 = v7;
      v50 = &v49;
      v53 = 0;
    }
LABEL_23:
    ++v6;
    v17 = __inbyte(*(_QWORD *)(a1 + 32));
    v2 = v17;
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    ACPIEcLogAction(a1, 0x10u, v2, 0LL);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v18);
    if ( v55 && (v2 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 2204);
      v55 = 0;
      v2 |= 0x10u;
    }
    if ( (v2 & 1) != 0 )
    {
      v19 = __inbyte(*(_QWORD *)(a1 + 24));
      v20 = v19;
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v22 = *(_QWORD *)(a1 + 488);
      v23 = v21;
      if ( v22 )
        v24 = *(_QWORD *)(v22 + 40);
      else
        v24 = 0LL;
      ACPIEcLogAction(a1, 0x20u, v20, v24);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v23);
      switch ( *(_BYTE *)(a1 + 496) )
      {
        case 1:
          v1 = v53;
          v6 = 0;
          **(_BYTE **)(a1 + 504) = v20;
          v3 = v50;
          *(_BYTE *)(a1 + 496) = 5;
          break;
        case 2:
          if ( (_BYTE)v20 )
          {
            v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v27 = 1 << v20;
            v28 = v26;
            v49 = 1 << v20;
            v29 = v20 >> 5;
            v30 = *(_DWORD *)(a1 + 4 * (v20 >> 5) + 124);
            if ( (v30 & (1 << v20)) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v29 + 124) = v30 | v27;
              if ( (v27 & *(_DWORD *)(a1 + 4 * v29 + 156)) != 0 )
              {
                v31 = *(unsigned __int8 *)(v20 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 456) + 24 * v31) = *(_BYTE *)(a1 + 446);
                *(_BYTE *)(a1 + 446) = v31;
              }
              else
              {
                v32 = *(_BYTE *)(a1 + 444);
                if ( *(_BYTE *)(a1 + 464) )
                {
                  if ( v32 )
                    *(_BYTE *)(*(unsigned __int8 *)(a1 + 445) + a1 + 188) = v20;
                  else
                    *(_BYTE *)(a1 + 444) = v20;
                  *(_BYTE *)(a1 + 445) = v20;
                }
                else
                {
                  *(_BYTE *)(v20 + a1 + 188) = v32;
                  *(_BYTE *)(a1 + 444) = v20;
                }
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v28);
            v47 = 1;
          }
          v3 = v50;
          v1 = v53;
          v6 = 0;
          *(_BYTE *)(a1 + 496) = 0;
          break;
        case 3:
          v25 = *(_BYTE *)(a1 + 497);
          ++*(_DWORD *)(a1 + 2208);
          v3 = v50;
          v1 = v53;
          v6 = 0;
          *(_BYTE *)(a1 + 496) = v25;
          *(_BYTE *)(a1 + 497) = 7;
          v55 = 1;
          break;
        default:
          if ( *(_DWORD *)(a1 + 2212) < 5u )
            ACPIEcLogError(a1, 2147811343LL);
          ++*(_DWORD *)(a1 + 2212);
          v3 = v50;
          v1 = v53;
          v6 = 0;
          break;
      }
      continue;
    }
    v3 = v50;
    if ( (v2 & 2) != 0 )
      continue;
    switch ( *(_BYTE *)(a1 + 496) )
    {
      case 4:
        v39 = *(char **)(a1 + 504);
        v5 = *(_QWORD *)(a1 + 24);
        *(_BYTE *)(a1 + 496) = 5;
        v34 = *v39;
LABEL_69:
        v54 = v34;
        break;
      case 5:
        v35 = *(_WORD *)(a1 + 502);
        if ( v35 )
        {
          if ( (v2 & 0x10) != 0 || v35 <= *(_WORD *)(a1 + 2320) && (AcpiOverrideAttributes & 0x1000000) != 0 )
          {
            ++*(_QWORD *)(a1 + 504);
            ++*(_BYTE *)(a1 + 499);
            v36 = *(_BYTE *)(a1 + 498);
            *(_WORD *)(a1 + 502) = v35 - 1;
            v5 = *(_QWORD *)(a1 + 40);
            v54 = v36;
            *(_BYTE *)(a1 + 496) = 6;
          }
          else
          {
            *(_BYTE *)(a1 + 497) = 5;
            v5 = *(_QWORD *)(a1 + 40);
            *(_BYTE *)(a1 + 496) = 3;
            v54 = -126;
          }
        }
        else
        {
          v37 = (PVOID **)p_P;
          v38 = *(PVOID ***)(a1 + 488);
          *(_BYTE *)(a1 + 496) = 0;
          *(_WORD *)(a1 + 502) = 0;
          *(_QWORD *)(a1 + 488) = 0LL;
          if ( *v37 != &P )
LABEL_84:
            __fastfail(3u);
          v38[1] = (PVOID *)v37;
          *v38 = &P;
          *v37 = (PVOID *)v38;
          p_P = (PVOID *)v38;
        }
        break;
      case 6:
        v33 = 1;
        v5 = *(_QWORD *)(a1 + 24);
        v34 = *(_BYTE *)(a1 + 499);
        if ( *(_BYTE *)(a1 + 498) != 0x80 )
          v33 = 4;
        *(_BYTE *)(a1 + 496) = v33;
        goto LABEL_69;
    }
    if ( !v5 && !*(_BYTE *)(a1 + 496) )
    {
      *(_BYTE *)(a1 + 512) = 0;
      if ( (v2 & 0x20) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 40);
        *(_BYTE *)(a1 + 496) = 2;
        v54 = -124;
LABEL_76:
        KeSetTimer((PKTIMER)(a1 + 528), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 592));
        continue;
      }
      v40 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 472), (PKSPIN_LOCK)(a1 + 88));
      if ( v40 )
      {
        *(_QWORD *)(a1 + 488) = v40;
        Blink = v40[1].Blink;
        *(_QWORD *)(a1 + 504) = Blink;
        v42 = BYTE1(v40[1].Flink);
        *(_BYTE *)(a1 + 499) = v42;
        v43 = WORD1(v40[1].Flink);
        *(_WORD *)(a1 + 500) = v43;
        *(_BYTE *)(a1 + 498) = v40[1].Flink;
        *(_QWORD *)(a1 + 504) = (char *)Blink - 1;
        v6 = 0;
        *(_BYTE *)(a1 + 499) = v42 - 1;
        *(_WORD *)(a1 + 502) = v43;
        *(_BYTE *)(a1 + 496) = 5;
        goto LABEL_76;
      }
      v1 = 0;
      v53 = 0;
      KeCancelTimer((PKTIMER)(a1 + 528));
    }
  }
  ++*v3;
  if ( v7 > *(_DWORD *)(a1 + 2216) )
    *(_DWORD *)(a1 + 2216) = v7;
  while ( 1 )
  {
    v44 = (void (__fastcall **)(_QWORD))P;
    result = &P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_84;
    v46 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_84;
    P = *(PVOID *)P;
    *(_QWORD *)(v46 + 8) = &P;
    v44[4](v44[5]);
    ExFreePoolWithTag(v44, 0);
  }
  if ( v47 )
    return (PVOID *)ACPIEcDispatchQueries(a1);
  return result;
}
