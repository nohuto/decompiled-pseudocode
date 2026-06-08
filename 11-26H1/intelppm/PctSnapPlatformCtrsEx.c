/*
 * XREFs of PctSnapPlatformCtrsEx @ 0x140004C64
 * Callers:
 *     PctResetCountersOnD0 @ 0x140004C40 (PctResetCountersOnD0.c)
 *     PctSnapPlatformCtrs @ 0x1400452E0 (PctSnapPlatformCtrs.c)
 * Callees:
 *     ReadGenAddr @ 0x140001D90 (ReadGenAddr.c)
 *     PctPlatformCounterState @ 0x140002B50 (PctPlatformCounterState.c)
 *     ReadGenAddrHidden @ 0x140005E88 (ReadGenAddrHidden.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 */

__int64 __fastcall PctSnapPlatformCtrsEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // r14d
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  _BYTE *v10; // rdx
  unsigned __int16 v11; // r13
  unsigned __int8 *v12; // rdi
  __int64 v13; // r15
  unsigned __int64 GenAddrHidden; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(__int64, _QWORD, unsigned __int64); // rax
  char v19; // [rsp+20h] [rbp-E0h]
  char v20; // [rsp+21h] [rbp-DFh]
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v26[272]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v26, 0, 0x108uLL);
  v4 = 0;
  v23 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeInitializeAffinityEx2(v26, 32LL);
  if ( (unsigned int)KeIsEmptyAffinityEx(*(_QWORD *)(a1 + 1080) + 48LL) )
  {
    v5 = 1;
    v19 = 1;
    v20 = 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 1080);
    v5 = 0;
    v19 = 0;
    v7 = v6 + 344;
    v8 = v6 + 344;
    v9 = v6 + 608;
    if ( *(_BYTE *)(v6 + 337) )
    {
      PsQuerySystemAvailableCpus(v8, v6 + 608, v9);
    }
    else
    {
      PsQuerySystemAvailableCpus(v8, 0LL, v9);
      *(_BYTE *)(*(_QWORD *)(a1 + 1080) + 337LL) = 1;
    }
    if ( (unsigned int)KeAndAffinityEx2(*(_QWORD *)(a1 + 1080) + 48LL, v7, v26) )
      v10 = v26;
    else
      v10 = (_BYTE *)(*(_QWORD *)(a1 + 1080) + 48LL);
    KeFirstGroupAffinityEx(&Affinity, v10);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v20 = 1;
  }
  v11 = 0;
  v12 = (unsigned __int8 *)&unk_140012010;
  do
  {
    v13 = PctPlatformCounterState(a1, v4);
    if ( *(_BYTE *)v13 && (*((_QWORD *)v12 - 1) & a2) != 0 )
    {
      ++v11;
      if ( v5 )
        GenAddrHidden = ReadGenAddrHidden(*(unsigned int *)(a1 + 84), v12);
      else
        GenAddrHidden = ReadGenAddr(v12);
      v15 = GenAddrHidden;
      *(_QWORD *)(v13 + 8) = KeQueryInterruptTimePrecise(&v23);
      v16 = v15;
      if ( !a3 )
        v16 = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(v13 + 16) = v16;
      *(_QWORD *)(v13 + 24) = v15;
      v17 = (void (__fastcall *)(__int64, _QWORD, unsigned __int64))*((_QWORD *)v12 + 2);
      if ( v17 )
        v17(a1, v4, v15);
      else
        *(_QWORD *)(v13 + 32) = v15;
    }
    v5 = v19;
    ++v4;
    v12 += 48;
  }
  while ( v4 < 5 );
  if ( v20 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v11;
}
