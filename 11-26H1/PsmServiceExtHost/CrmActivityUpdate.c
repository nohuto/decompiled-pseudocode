/*
 * XREFs of CrmActivityUpdate @ 0x18001E5C0
 * Callers:
 *     CrmActivityListenerCallback @ 0x18001E5A0 (CrmActivityListenerCallback.c)
 * Callees:
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18001D53C (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmLogActivityUpdate @ 0x18001EA74 (CrmLogActivityUpdate.c)
 *     CrmRegistrationReadyQueueRemoveAndNotify @ 0x18001ECC8 (CrmRegistrationReadyQueueRemoveAndNotify.c)
 *     CrmRegistrationReadyQueueAdd @ 0x18001ED78 (CrmRegistrationReadyQueueAdd.c)
 *     CrmRegistrationNotify @ 0x180020C30 (CrmRegistrationNotify.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002143C (CrmRegistrationReadyQueueRemove.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmActivityUpdate(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 (__fastcall *v9)(_QWORD, __int64); // rax
  int v10; // r14d
  BOOL v11; // r15d
  _BOOL8 v12; // r12
  int v13; // edi
  int v14; // r13d
  int v15; // ebp
  int v17; // r8d
  int v18; // eax
  int v19; // ecx
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // [rsp+80h] [rbp-68h] BYREF
  int v27; // [rsp+88h] [rbp-60h]
  int v28; // [rsp+8Ch] [rbp-5Ch]
  __int64 v29; // [rsp+90h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp-50h]
  __int64 v31; // [rsp+A0h] [rbp-48h]
  __int64 v32; // [rsp+A8h] [rbp-40h]
  int v33; // [rsp+F0h] [rbp+8h]
  BOOL v34; // [rsp+F0h] [rbp+8h]
  int v35; // [rsp+F8h] [rbp+10h]

  v4 = a1 + 80;
  v32 = *(_QWORD *)(a1 + 56);
  v28 = *(_DWORD *)(a1 + 68);
  v7 = *(_QWORD *)(a1 + 48);
  v29 = 0LL;
  v30 = 0LL;
  v31 = *(_QWORD *)(v7 + 16);
  RtlAcquireSRWLockExclusive(a1 + 80);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  v9 = *(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 40);
  v27 = *(_DWORD *)(a2 + 48);
  v10 = v9(0LL, a4);
  v11 = v27 != 0;
  v12 = v10 != 0;
  LODWORD(v26) = v27 == 1;
  if ( v12 == v11 && (v10 == 1) == (v27 == 1) )
  {
    v13 = *(_DWORD *)(a1 + 100);
    v14 = v13;
    v15 = *(_DWORD *)(a1 + 104);
    v35 = v15;
    v33 = 0;
    goto LABEL_4;
  }
  *(_DWORD *)(a2 + 48) = v10;
  RtlAcquireSRWLockShared(*(_QWORD *)(a1 + 48));
  if ( v12 != v11 && (*(_DWORD *)(a1 + 152) || *(_DWORD *)(a1 + 156)) )
  {
    CrmRegistrationNotifyWindowClosedReasonChange(*(_QWORD *)(a1 + 48), a1);
    RtlReleaseSRWLockShared(*(_QWORD *)(a1 + 48));
    v15 = *(_DWORD *)(a1 + 104);
    v18 = v15;
    v13 = *(_DWORD *)(a1 + 100);
    v17 = v13;
    v35 = v15;
  }
  else
  {
    RtlReleaseSRWLockShared(*(_QWORD *)(a1 + 48));
    v13 = *(_DWORD *)(a1 + 100);
    v17 = v13;
    v15 = *(_DWORD *)(a1 + 104);
    v18 = v15;
    v35 = v15;
    v14 = v13;
    if ( v12 == v11 )
      goto LABEL_12;
  }
  if ( v10 )
    v14 = v17 + 1;
  else
    v14 = v17 - 1;
  *(_DWORD *)(a1 + 100) = v14;
LABEL_12:
  if ( (v10 == 1) != (_DWORD)v26 )
  {
    if ( v10 == 1 )
      ++v18;
    else
      --v18;
    *(_DWORD *)(a1 + 104) = v18;
    v35 = v18;
  }
  v19 = *(_DWORD *)(a1 + 96);
  v33 = 0;
  if ( v14 == v19 || v17 == v19 )
  {
    v30 = *(_QWORD *)(a1 + 136);
    v29 = MEMORY[0x7FFE0008];
    *(_QWORD *)(a1 + 136) = MEMORY[0x7FFE0008];
    if ( v14 == *(_DWORD *)(a1 + 96) )
    {
      if ( !v18 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          RtlQueryUnbiasedInterruptTime(a1 + 168);
          v20 = *(_DWORD *)(a1 + 160) == 0;
          *(_QWORD *)(a1 + 176) = MEMORY[0x7FFE0008];
          v26 = 0LL;
          if ( !v20 )
          {
            RtlQueryUnbiasedInterruptTime(&v26);
            v21 = v26;
            *(_QWORD *)(a1 + 208) += v26 - *(_QWORD *)(a1 + 192);
            *(_QWORD *)(a1 + 192) = v21;
          }
          if ( *(_DWORD *)(a1 + 120) && (*(_DWORD *)(a1 + 144) || *(_DWORD *)(a1 + 148)) )
            CrmRegistrationReadyQueueAdd(a1);
          else
            CrmRegistrationReadyQueueRemoveAndNotify(a1, 0LL, 0LL);
        }
        goto LABEL_4;
      }
      v24 = CrmRegistrationReadyQueueRemove(a1, 0LL);
    }
    else
    {
      v34 = *(_DWORD *)(a1 + 124) == 0;
      RtlAcquireSRWLockExclusive(&unk_1800E3958);
      dword_1800E3960 = GetCurrentThreadId();
      v22 = CrmRegistrationReadyQueueRemove(a1, 1LL);
      v23 = *(_QWORD *)(a1 + 48);
      LODWORD(v26) = v22;
      if ( (unsigned int)CrmRegistrationNotify(v23, a1, 1LL) )
        *(_QWORD *)(a1 + 128) = CempQueryUnbiasedInterruptTimeMs64();
      dword_1800E3960 = 0;
      RtlReleaseSRWLockExclusive(&unk_1800E3958);
      v24 = v26 | v34;
    }
    v33 = v24;
    if ( v24 )
    {
      v20 = *(_DWORD *)(a1 + 160) == 0;
      *(_QWORD *)(a1 + 168) = -1LL;
      *(_QWORD *)(a1 + 176) = -1LL;
      v26 = 0LL;
      if ( !v20 )
      {
        RtlQueryUnbiasedInterruptTime(&v26);
        v25 = v26;
        *(_QWORD *)(a1 + 200) += v26 - *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 192) = v25;
      }
    }
  }
LABEL_4:
  *(_DWORD *)(v4 + 8) = 0;
  RtlReleaseSRWLockExclusive(v4);
  return CrmLogActivityUpdate(
           v32,
           v28,
           v31,
           a3,
           v27,
           v10,
           v11,
           v12,
           *(_DWORD *)(a1 + 96),
           v13,
           v14,
           v15,
           v35,
           v33,
           v30,
           v29);
}
