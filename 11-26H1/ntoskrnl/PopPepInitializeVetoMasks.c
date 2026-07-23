/*
 * XREFs of PopPepInitializeVetoMasks @ 0x1404DB10C
 * Callers:
 *     PopPepDeviceStarted @ 0x1404E4194 (PopPepDeviceStarted.c)
 *     PopPepPlatformStateRegistered @ 0x1406146A4 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403BBF88 (PopPepUpdateIdleStateRefCount.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x1404DB680 (PopPluginRequestDeviceIdleConstraints.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404DBA80 (PopFxReinitializeAccountingInstance.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1404DBB18 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x14052ED84 (PopPluginRequestComponentIdleConstraints.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     EmClientRuleEvaluate @ 0x140C09C90 (EmClientRuleEvaluate.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  char v4; // r14
  ULONG_PTR v5; // r15
  __int64 v6; // rsi
  __int128 *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rdx
  int *v10; // r8
  unsigned int i; // edi
  __int64 v12; // rdx
  int *v13; // r8
  KIRQL v14; // r13
  int DeepSleepPlatformStateIndex; // eax
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // r13d
  int *v22; // r14
  int v23; // r12d
  unsigned int v24; // edi
  unsigned int v25; // edx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  char v29; // di
  __int64 v30; // r13
  int *v31; // r12
  int v32; // edx
  __int64 j; // r14
  unsigned int v34; // ecx
  _DWORD *v35; // rax
  __int64 v36; // rdi
  KIRQL v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+3Ch] [rbp-C4h]
  __int128 *v41; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h]
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int128 v44; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v45[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+88h] [rbp-78h] BYREF
  char v48; // [rsp+8Ch] [rbp-74h] BYREF
  _BYTE v49[16]; // [rsp+100h] [rbp+0h] BYREF
  int v50; // [rsp+110h] [rbp+10h] BYREF
  char v51; // [rsp+114h] [rbp+14h] BYREF

  v2 = a2;
  v39 = a2;
  v38 = 0;
  v45[1] = 0;
  v44 = 0LL;
  memset_0(v45, 0, 0x94uLL);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = PopPepConstraintOverrides;
  v41 = 0LL;
  v42 = PopPepPlatformState;
  v7 = (__int128 *)(v5 + 216);
  while ( v6 )
  {
    v7 = (__int128 *)(v5 + 216);
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 8), (PCUNICODE_STRING)(v5 + 216), 1u) )
    {
      v4 = 1;
      break;
    }
    v6 = *(_QWORD *)v6;
  }
  v8 = 0;
  *(_BYTE *)(a1 + 188) = 0;
  v46 = *v7;
  v9 = ((unsigned __int8)v49 - 120) & 4;
  if ( (((unsigned __int8)v49 - 120) & 4) != 0 )
    v47 = 1;
  v10 = &v47;
  if ( (((unsigned __int8)v49 - 120) & 4) != 0 )
    v10 = (int *)&v48;
  memset64(v10, 0x100000001uLL, 16LL - (v9 != 0));
  if ( (((unsigned __int8)v49 - 120) & 4) != 0 )
    *(int *)((char *)v10 + (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  for ( i = 0; i < (unsigned int)v2; ++i )
  {
    v45[0] = i;
    *(_QWORD *)&v44 = v45;
    DWORD2(v44) = 8;
    v41 = &v44;
    EmClientRuleEvaluate(&GUID_EM_PEP_UPADTE_DEVICE_CONTRAINT, &v41, 1LL, &v38);
    if ( v38 == 2 )
      *(_BYTE *)(a1 + 188) = 1;
  }
  v12 = ((unsigned __int8)v49 + 16) & 4;
  if ( (((unsigned __int8)v49 + 16) & 4) != 0 )
    v50 = 1;
  v13 = &v50;
  if ( (((unsigned __int8)v49 + 16) & 4) != 0 )
    v13 = (int *)&v51;
  memset64(v13, 0x100000001uLL, 16LL - (v12 != 0));
  if ( (((unsigned __int8)v49 + 16) & 4) != 0 )
    *(int *)((char *)v13 + (-(__int64)(v12 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 124) = 1;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v37 = v14;
  if ( *(_DWORD *)(a1 + 172) != 2 )
  {
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v16 = *(_QWORD *)(a1 + 32);
    v38 = DeepSleepPlatformStateIndex;
    v17 = PopPluginRequestDeviceIdleConstraints(v16, &v50, (unsigned int)v2);
    if ( v4 )
    {
      *(_BYTE *)(a1 + 188) = 0;
    }
    else if ( v17 )
    {
      if ( !*(_BYTE *)(a1 + 188) )
      {
LABEL_34:
        v21 = v39;
        v22 = &v50;
        v23 = 1;
        while ( v8 < v21 )
        {
          if ( !*(_BYTE *)(448LL * v8 + v42 + 57) && *(&v50 + v8) != 1 )
            PopFxBugCheck(0x620uLL, v5, v8, 0LL);
          v24 = *v22;
          v25 = 1;
          do
          {
            if ( v25 >= v24 )
              break;
            v26 = v25++ - 1;
            *(_DWORD *)(a1 + 4 * v26 + 144) |= v23;
          }
          while ( v25 <= 3 );
          if ( v38 != -1 && v8 == v38 && (unsigned int)*v22 > 1 )
          {
            KxAcquireSpinLock((PKSPIN_LOCK)(v5 + 640));
            PopFxReinitializeAccountingInstance(v5 + 640, 2LL);
            *(_DWORD *)(v5 + 652) = *v22;
            *(_QWORD *)(v5 + 664) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v5 + 648) = 1;
            KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 640));
            _InterlockedOr((volatile signed __int32 *)(v5 + 864), 0x810u);
          }
          ++v22;
          v23 *= 2;
          ++v8;
        }
        LODWORD(v2) = v21;
        v27 = *(_DWORD *)(a1 + 152);
        v8 = 0;
        v14 = v37;
        *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
        *(_DWORD *)(a1 + 164) = v27;
        goto LABEL_48;
      }
LABEL_29:
      if ( (_DWORD)v2 )
      {
        v18 = 0LL;
        v19 = v2;
        do
        {
          v20 = *(int *)((char *)&v47 + v18);
          if ( *(int *)((char *)&v50 + v18) < v20 )
            *(int *)((char *)&v50 + v18) = v20;
          v18 += 4LL;
          --v19;
        }
        while ( v19 );
      }
      goto LABEL_34;
    }
    if ( !*(_BYTE *)(a1 + 188) )
    {
LABEL_48:
      v28 = *(int *)(a1 + 168);
      if ( (_DWORD)v28 != 4 )
        PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(a1 + 4 * v28 + 140), 1, a1, 0xFFFFFFFF);
      if ( *(_BYTE *)(a1 + 124) )
      {
        v29 = 0;
        while ( v8 < *(_DWORD *)(a1 + 180) )
        {
          v30 = 208LL * v8;
          v43 = *(_QWORD *)(*(_QWORD *)(v5 + 872) + 8LL * v8);
          memset_0(&v50, 0, 0x80uLL);
          if ( (unsigned __int8)PopPluginRequestComponentIdleConstraints(
                                  *(_QWORD *)(a1 + 32),
                                  v8,
                                  &v50,
                                  (unsigned int)v2) )
          {
            v31 = &v50;
            v32 = 1;
            for ( j = 0LL; ; j = (unsigned int)(j + 1) )
            {
              v40 = v32;
              if ( (unsigned int)j >= v39 )
                break;
              if ( !*(_BYTE *)(448LL * (unsigned int)j + v42 + 57) && *(&v50 + j) )
                PopFxBugCheck(0x621uLL, v5, v8, (unsigned int)j);
              v34 = 0;
              if ( *(_DWORD *)(a1 + v30 + 380) )
              {
                v35 = (_DWORD *)(*(_QWORD *)(a1 + v30 + 392) + 16LL);
                do
                {
                  if ( v34 >= *v31 )
                    break;
                  *v35 |= v32;
                  ++v34;
                  v35 += 6;
                }
                while ( v34 < *(_DWORD *)(a1 + v30 + 380) );
              }
              if ( v38 != -1 && (_DWORD)j == v38 )
              {
                if ( *v31 )
                {
                  v36 = v43 + 200;
                  KxAcquireSpinLock((PKSPIN_LOCK)(v43 + 200));
                  PopFxReinitializeAccountingInstance(v36, 2LL);
                  *(_DWORD *)(v36 + 12) = *v31;
                  *(_QWORD *)(v36 + 24) = MEMORY[0xFFFFF78000000008];
                  *(_BYTE *)(v36 + 8) = 1;
                  KxReleaseSpinLock((PKSPIN_LOCK)v36);
                  v29 = 1;
                  _InterlockedOr((volatile signed __int32 *)(v5 + 864), 0x10u);
                  v32 = v40;
                }
              }
              ++v31;
              v32 *= 2;
            }
            LODWORD(v2) = v39;
          }
          PopPepUpdateIdleStateRefCount(
            0,
            *(_DWORD *)(*(_QWORD *)(a1 + v30 + 392) + 24LL * *(unsigned int *)(a1 + v30 + 368) + 16),
            1,
            a1,
            *(_DWORD *)(a1 + v30 + 200));
          if ( v29 )
            _InterlockedOr((volatile signed __int32 *)(v5 + 864), 0x100u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v5 + 864), 0xFFFFFEFF);
          ++v8;
        }
        v14 = v37;
        if ( *(_BYTE *)(a1 + 124) )
          goto LABEL_75;
      }
      if ( *(_BYTE *)(a1 + 188) )
LABEL_75:
        *(_DWORD *)(a1 + 172) = 2;
      goto LABEL_76;
    }
    goto LABEL_29;
  }
LABEL_76:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), v14);
}
