/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x140018320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v1; // esi
  BOOLEAN v2; // r13
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // r12d
  int *ThreadProperty; // rax
  int v7; // edi
  unsigned int v8; // r15d
  PACCESS_TOKEN v9; // rax
  void *v10; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // edi
  struct _KTHREAD *v13; // r14
  PACCESS_TOKEN v14; // rax
  void *v15; // r15
  unsigned int ThreadSessionId; // eax
  KIRQL v17; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v19; // rdx
  KIRQL v20; // al
  int v21; // edx
  KIRQL v22; // r15
  int v23; // edx
  KIRQL v24; // dl
  char *v25; // rsi
  unsigned int v26; // edi
  KIRQL v27; // di
  struct _KEVENT *v28; // rcx
  unsigned int v30; // eax
  int v31; // r15d
  int v32; // r12d
  unsigned int v33; // edi
  NTSTATUS v34; // edi
  NTSTATUS v35; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v36; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v37; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *v38; // rax
  _DWORD *v39; // rcx
  int v40; // eax
  int v41; // r14d
  KIRQL v42; // r8
  __int64 v43; // rcx
  _OWORD Buf1[2]; // [rsp+40h] [rbp-9h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+B0h] [rbp+67h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+B8h] [rbp+6Fh] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+C0h] [rbp+77h] BYREF
  PVOID TokenInformation; // [rsp+C8h] [rbp+7Fh] BYREF

  v1 = 0;
  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      43,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    if ( *((_DWORD *)a1 + 12) )
    {
      if ( *((_QWORD *)a1 + 5) )
      {
        CurrentThread = KeGetCurrentThread();
        v5 = **((_DWORD **)a1 + 2);
        memset(Buf1, 0, 24);
        ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
        if ( ThreadProperty )
        {
          v7 = *ThreadProperty;
          ObfDereferenceObject(ThreadProperty);
          v8 = v7;
          if ( v7 )
            goto LABEL_20;
        }
        CopyOnOpen = 0;
        EffectiveOnly = 0;
        ImpersonationLevel = SecurityAnonymous;
        TokenInformation = 0LL;
        if ( KeGetCurrentIrql() >= 2u )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
        }
        else
        {
          v9 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
          v10 = v9;
          if ( v9 )
          {
            v34 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
            PsDereferenceImpersonationToken(v10);
            if ( v34 >= 0 )
            {
              v12 = (unsigned int)TokenInformation;
LABEL_12:
              if ( v12 == -1 )
              {
                v13 = KeGetCurrentThread();
                CopyOnOpen = 0;
                EffectiveOnly = 0;
                ImpersonationLevel = SecurityAnonymous;
                TokenInformation = 0LL;
                if ( KeGetCurrentIrql() >= 2u )
                {
                  ThreadSessionId = PsGetCurrentProcessSessionId();
                }
                else
                {
                  v14 = PsReferenceImpersonationToken(v13, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
                  v15 = v14;
                  if ( v14 )
                  {
                    v35 = SeQueryInformationToken(v14, TokenSessionId, &TokenInformation);
                    PsDereferenceImpersonationToken(v15);
                    if ( v35 >= 0 )
                    {
                      v12 = (unsigned int)TokenInformation;
                      goto LABEL_17;
                    }
                  }
                  ThreadSessionId = PsGetThreadSessionId(v13);
                }
                v12 = ThreadSessionId;
              }
LABEL_17:
              if ( v12 < dword_14011E898 )
              {
                v41 = 0;
                v42 = KeAcquireSpinLockRaiseToDpc(&qword_14011E8E0);
                if ( v12 < dword_14011E898 )
                  v41 = *((_DWORD *)qword_14011E8E8 + 6 * v12);
                KeReleaseSpinLock(&qword_14011E8E0, v42);
                if ( !v41 )
                  v41 = 1;
                v7 = v41;
              }
              else
              {
                v7 = 1;
              }
              v8 = v7;
LABEL_20:
              v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
              v18 = qword_14011E9D8;
              v19 = 0LL;
              while ( v18 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
              {
                if ( *((_DWORD *)v18 + 4) == v8 )
                {
                  v19 = v18;
                  break;
                }
                if ( *((_DWORD *)v18 + 4) > v8 )
                  break;
                v18 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v18;
              }
              *(_OWORD *)((char *)Buf1 + 8) = *(_OWORD *)((char *)v19 + 1684);
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v17);
              v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
              v21 = *((_DWORD *)a1 + 14);
              v22 = v20;
              if ( v21 )
              {
                v23 = v21 - 1;
                if ( !v23 )
                {
                  v5 = 0;
                  goto LABEL_77;
                }
                if ( v23 != 1 )
                {
                  v1 = -1073741808;
                  v24 = v20;
LABEL_49:
                  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v24);
                  goto LABEL_50;
                }
LABEL_77:
                while ( 1 )
                {
                  v38 = qword_14011E9D8;
                  v37 = 0LL;
                  while ( v38 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
                  {
                    if ( *((_DWORD *)v38 + 4) > v5 )
                    {
                      v37 = v38;
                      break;
                    }
                    v38 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v38;
                  }
                  if ( !v37 )
                    goto LABEL_75;
                  v5 = *((_DWORD *)v37 + 4);
                  if ( v7 != v5 )
                  {
                    v43 = *((_QWORD *)&Buf1[0] + 1) - *(_QWORD *)((char *)v37 + 1684);
                    if ( *((_QWORD *)&Buf1[0] + 1) == *(_QWORD *)((char *)v37 + 1684) )
                      v43 = *(_QWORD *)&Buf1[1] - *(_QWORD *)((char *)v37 + 1692);
                    if ( v43 && ((*((_DWORD *)v37 + 420) & 2) != 0 || v7 != 1) )
                      continue;
                  }
                  goto LABEL_84;
                }
              }
              v36 = qword_14011E9D8;
              v37 = 0LL;
              while ( v36 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
              {
                if ( *((_DWORD *)v36 + 4) == v5 )
                {
                  v37 = v36;
                  break;
                }
                if ( *((_DWORD *)v36 + 4) > v5 )
                  break;
                v36 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v36;
              }
              if ( !v37 )
              {
LABEL_75:
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v22);
                v1 = -1073741772;
                if ( *((_DWORD *)a1 + 14) )
                  v1 = -2147483622;
                goto LABEL_44;
              }
              if ( v7 != *((_DWORD *)v37 + 4)
                && memcmp((char *)Buf1 + 8, (char *)v37 + 1684, 0x10uLL)
                && ((*((_DWORD *)v37 + 420) & 2) != 0 || v7 != 1) )
              {
                v37 = 0LL;
                goto LABEL_75;
              }
LABEL_84:
              _InterlockedIncrement((volatile signed __int32 *)v37 + 11);
              v39 = (_DWORD *)*((_QWORD *)a1 + 2);
              v40 = *((_DWORD *)v37 + 4);
              EffectiveOnly = 1;
              *v39 = v40;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v22);
              if ( *((_DWORD *)a1 + 8) )
              {
                v1 = -1073741808;
                goto LABEL_43;
              }
              v33 = *((_DWORD *)a1 + 13);
              v32 = *((_DWORD *)a1 + 12);
              if ( !*((_QWORD *)a1 + 5) )
              {
                *((_DWORD *)a1 + 12) = 0;
LABEL_43:
                v2 = EffectiveOnly;
LABEL_44:
                if ( !v2 )
                  goto LABEL_50;
                v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37 + 11, 0xFFFFFFFF) == 1 )
                {
                  v28 = (struct _KEVENT *)*((_QWORD *)v37 + 214);
                  if ( v28 )
                    KeSetEvent(v28, 0, 0);
                }
                v24 = v27;
                goto LABEL_49;
              }
              if ( v32 <= 0 )
              {
LABEL_41:
                v26 = v33 - *((_DWORD *)a1 + 13);
                *((_DWORD *)a1 + 12) = v26;
                if ( !v26 )
                  v1 = -1073741811;
                goto LABEL_43;
              }
              v25 = (char *)*((_QWORD *)a1 + 5);
              while ( 1 )
              {
                if ( v2 )
                {
LABEL_40:
                  v1 = 0;
                  goto LABEL_41;
                }
                if ( v33 > 0x234 )
                  break;
                if ( v33 == 564 )
                {
                  v30 = 516;
                  v31 = 1080;
                }
                else if ( v33 )
                {
                  switch ( v33 )
                  {
                    case 8u:
                      v30 = 8;
                      v31 = 16;
                      break;
                    case 0x10u:
                      v31 = 32;
LABEL_88:
                      v30 = 16;
                      break;
                    case 0x20u:
                      v31 = 48;
                      v30 = 16;
                      break;
                    case 0x30u:
                      v30 = 516;
                      v31 = 564;
                      break;
                    default:
                      goto LABEL_38;
                  }
                }
                else
                {
                  v30 = 4;
                  v31 = 8;
                }
LABEL_57:
                if ( v32 >= v30 )
                {
                  memmove(v25, (char *)v37 + v33 + 64, v30);
                  v25 += v31 - v33;
                  v32 += v33 - v31;
                  v33 = v31;
                  goto LABEL_39;
                }
LABEL_38:
                v2 = 1;
LABEL_39:
                if ( v32 <= 0 )
                  goto LABEL_40;
              }
              if ( v33 != 1080 )
              {
                switch ( v33 )
                {
                  case 0x448u:
                    v30 = 516;
                    v31 = 1616;
                    break;
                  case 0x650u:
                    v30 = 4;
                    v31 = 1620;
                    break;
                  case 0x654u:
                    v31 = 1636;
                    v2 = 1;
                    v30 = 16;
                    break;
                  default:
                    goto LABEL_38;
                }
                goto LABEL_57;
              }
              v31 = 1096;
              goto LABEL_88;
            }
          }
          CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
        }
        v12 = CurrentProcessSessionId;
        goto LABEL_12;
      }
      v1 = -1073741808;
    }
    else
    {
      v1 = -1073741808;
    }
  }
  else
  {
    v1 = -1073741808;
  }
LABEL_50:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x2Cu,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1,
      v1);
  KeLeaveCriticalRegion();
  return v1;
}
