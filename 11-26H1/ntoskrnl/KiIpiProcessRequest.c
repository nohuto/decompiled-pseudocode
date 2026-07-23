/*
 * XREFs of KiIpiProcessRequest @ 0x14032E310
 * Callers:
 *     KiIpiProcessRequests @ 0x14047B410 (KiIpiProcessRequests.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     PerfInfoLogIpiReceive @ 0x14032E720 (PerfInfoLogIpiReceive.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIpiProcessRequest(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r12
  char v6; // bp
  int v7; // ebx
  unsigned int v8; // eax
  bool i; // zf
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  void **v16; // r14
  unsigned int v17; // ebx
  unsigned __int64 v18; // rsi
  _KPROCESS *Process; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned int v23; // r13d
  _KPROCESS *v24; // rcx
  __int64 result; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  _KPROCESS *v30; // rcx
  __int64 v31; // rax
  void *v32; // rsi
  _KPROCESS *v33; // rcx
  unsigned int v35; // [rsp+34h] [rbp-B4h]
  __int64 v36; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+50h] [rbp-98h]
  __int128 v39; // [rsp+58h] [rbp-90h]
  __int128 v40; // [rsp+68h] [rbp-80h] BYREF
  __int128 v41; // [rsp+78h] [rbp-70h]
  __int128 v42; // [rsp+88h] [rbp-60h]
  __int128 v43; // [rsp+98h] [rbp-50h]

  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  v37 = a2;
  v40 = 0LL;
  v41 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) == 0 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  a3 = qword_140FC9C80;
  v6 = 1;
  v7 = 0;
  if ( qword_140FC9C80 )
  {
    v8 = *(_DWORD *)(qword_140FC9C80 + 4520);
    for ( i = !_BitScanForward((unsigned int *)&a2, v8); !i; i = !_BitScanForward((unsigned int *)&a2, v8) )
    {
      v8 &= v8 - 1;
      a1 = (unsigned int)a2;
      v10 = qword_140FC9C80 + 32 * a2 + 4556;
      if ( v10 && (*(_DWORD *)(v10 + 8) & 0x400000) != 0 )
      {
        a1 = *(unsigned __int8 *)(qword_140FC9C80 + 2 * a1 + 4505);
        v7 |= 1 << a1;
      }
    }
    if ( (v7 & 2) == 0 )
      goto LABEL_7;
  }
  else
  {
    LOBYTE(v7) = 30;
  }
  *(_QWORD *)&v40 = EtwpGetPerfCounter(a1, a2, qword_140FC9C80);
LABEL_7:
  if ( (v7 & 4) != 0 )
    *((LARGE_INTEGER *)&v40 + 1) = RtlGetSystemTimePrecise();
  else
    *((_QWORD *)&v40 + 1) = 0LL;
  if ( (v7 & 8) != 0 )
  {
    v11 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v11) << 32;
    *(_QWORD *)&v41 = v11;
  }
  else
  {
    *(_QWORD *)&v41 = 0LL;
  }
  if ( (v7 & 0x10) != 0 )
    *((_QWORD *)&v41 + 1) = EtwpGetHostPerfCounter(a1, a2, a3);
  else
    *((_QWORD *)&v41 + 1) = 0LL;
LABEL_13:
  v12 = *(_QWORD *)(v4 + 8);
  v13 = v12 & 0xF;
  switch ( v13 )
  {
    case 4u:
      v14 = v12 >> 7;
      v15 = *(unsigned int *)(v14 + 12);
      v16 = *(void ***)v14;
      v35 = v15;
      v17 = v15 - 1;
      v38 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
      do
      {
        v18 = (unsigned __int64)*v16;
        if ( KiFlushPcid )
        {
          if ( v17 <= 1 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( !Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v42 = 1LL;
                *((_QWORD *)&v42 + 1) = v18;
                _EAX = 0;
                __asm { invpcid eax, [rsp+0E8h+var_60] }
              }
              else
              {
                KiSetUserTbFlushPending(Process, v15, a3);
                v15 = v35;
              }
            }
          }
        }
        __invlpg((void *)v18);
        v21 = 4096LL << (9 * ((unsigned __int8)(v18 >> 10) & 3u));
        v36 = v21;
        v22 = v18 & 0x3FF;
        if ( (v18 & 0x3FF) != 0 )
        {
          v23 = v15 - 1;
          do
          {
            v18 += v21;
            if ( KiFlushPcid && v23 <= 1 )
            {
              v24 = KeGetCurrentThread()->ApcState.Process;
              if ( !v24->AddressPolicy )
              {
                if ( (KiFlushPcid & 2) != 0 )
                {
                  *(_QWORD *)&v43 = 1LL;
                  *((_QWORD *)&v43 + 1) = v18;
                  _EAX = 0;
                  __asm { invpcid eax, [rsp+0E8h+var_50] }
                }
                else
                {
                  KiSetUserTbFlushPending(v24, v15, a3);
                }
              }
              v21 = v36;
            }
            __invlpg((void *)v18);
            --v22;
          }
          while ( v22 );
          v15 = v35;
        }
        ++v16;
      }
      while ( (unsigned __int64)v16 < v38 );
      v13 = 4;
LABEL_32:
      v3 = v37;
      goto LABEL_33;
    case 6u:
      __wbinvd();
      goto LABEL_33;
    case 1u:
LABEL_49:
      v27 = __readcr3();
      __writecr3(v27);
      goto LABEL_33;
    case 2u:
      v31 = v12 >> 7;
      v32 = *(void **)v31;
      if ( (unsigned int)(*(_DWORD *)(v31 + 8) - 1) <= 1 )
      {
        if ( KiFlushPcid )
        {
          v33 = KeGetCurrentThread()->ApcState.Process;
          if ( !v33->AddressPolicy )
          {
            if ( (KiFlushPcid & 2) != 0 )
            {
              *(_QWORD *)&v39 = 1LL;
              *((_QWORD *)&v39 + 1) = *(_QWORD *)v31;
              _EAX = 0;
              __asm { invpcid eax, [rsp+0E8h+var_90] }
            }
            else
            {
              KiSetUserTbFlushPending(v33, a2, a3);
            }
          }
        }
      }
      __invlpg(v32);
      goto LABEL_32;
  }
  if ( v13 != 3 )
  {
    if ( v13 == 5 )
    {
      guard_dispatch_icall_no_overrides(v3, *(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 24));
      v5 = *(_QWORD *)(v4 + 40);
    }
    goto LABEL_33;
  }
  if ( !KiFlushPcid )
  {
    v28 = __readcr4();
    if ( (v28 & 0x20080) != 0 )
    {
      __writecr4(v28 ^ 0x80);
      __writecr4(v28);
      goto LABEL_33;
    }
    goto LABEL_49;
  }
  v29 = __readcr3();
  __writecr3(v29);
  v30 = KeGetCurrentThread()->ApcState.Process;
  if ( !v30->AddressPolicy )
    KiSetUserTbFlushPending(v30, a2, a3);
LABEL_33:
  result = (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)(v4 + 48), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 11652), 0xFFFFFFFF) == 1 )
    *(_DWORD *)(v3 + 11648) = 0;
  if ( v6 )
    return PerfInfoLogIpiReceive(&v40, v13, v5);
  return result;
}
