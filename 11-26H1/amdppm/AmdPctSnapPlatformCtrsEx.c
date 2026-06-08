/*
 * XREFs of AmdPctSnapPlatformCtrsEx @ 0x1400023CC
 * Callers:
 *     AmdResetCountersOnD0 @ 0x140004730 (AmdResetCountersOnD0.c)
 *     AmdPctSnapPlatformCtrs @ 0x140040BF0 (AmdPctSnapPlatformCtrs.c)
 * Callees:
 *     ReadGenAddr @ 0x1400021A0 (ReadGenAddr.c)
 *     AmdPctEnumPlatfromCtr @ 0x1400026B0 (AmdPctEnumPlatfromCtr.c)
 *     AmdPctPlatformCounterState @ 0x1400028B8 (AmdPctPlatformCounterState.c)
 *     ReadGenAddrHidden @ 0x140003AF0 (ReadGenAddrHidden.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 */

__int64 __fastcall AmdPctSnapPlatformCtrsEx(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v4; // r14
  char v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  _BYTE *v10; // rdx
  unsigned int v11; // esi
  char v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 GenAddrHidden; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  wchar_t *v21; // rax
  char v23; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v24; // [rsp+20h] [rbp-E0h]
  char v25; // [rsp+22h] [rbp-DEh]
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v31[272]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v31, 0, 0x108uLL);
  v4 = 0;
  v28 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeInitializeAffinityEx2(v31, 32LL);
  if ( !byte_140015880 )
  {
    if ( !(unsigned int)KeIsEmptyAffinityEx(*(_QWORD *)(a1 + 1080) + 48LL) )
      goto LABEL_3;
LABEL_6:
    v5 = 0;
    v23 = 1;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 80) )
    goto LABEL_6;
LABEL_3:
  v23 = 0;
  if ( byte_140015880 )
  {
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 1080);
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
    if ( (unsigned int)KeAndAffinityEx2(*(_QWORD *)(a1 + 1080) + 48LL, v7, v31) )
      v10 = v31;
    else
      v10 = (_BYTE *)(*(_QWORD *)(a1 + 1080) + 48LL);
    KeFirstGroupAffinityEx(&Affinity, v10);
  }
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v5 = 1;
LABEL_15:
  v25 = v5;
  v11 = AmdPctEnumPlatfromCtr(a1, 0LL, 0x800000000000LL);
  if ( v11 < *(_DWORD *)(a1 + 1252) )
  {
    v12 = v23;
    do
    {
      v13 = 48LL * v11;
      v16 = AmdPctPlatformCounterState(a1, v11);
      if ( *(_BYTE *)v16 && (*(_QWORD *)(v15 + v13 + 8) & a2) != 0 )
      {
        v17 = v15 + v13 + 16;
        v24 = v4 + 1;
        if ( v12 )
          GenAddrHidden = ReadGenAddrHidden(*(unsigned int *)(a1 + 84), v17);
        else
          GenAddrHidden = ReadGenAddr(v15 + v13 + 16, v17, v14);
        v19 = GenAddrHidden;
        *(_QWORD *)(v16 + 8) = KeQueryInterruptTimePrecise(&v28);
        v20 = v19;
        if ( !a3 )
          v20 = *(_QWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 16) = v20;
        *(_QWORD *)(v16 + 24) = v19;
        v21 = (&AmdPctPlatformCounterCfg)[v13 / 8 + 2];
        if ( v21 )
          ((void (__fastcall *)(__int64, _QWORD, unsigned __int64))v21)(a1, v11, v19);
        else
          *(_QWORD *)(v16 + 32) = v19;
        v4 = v24;
      }
      ++v11;
    }
    while ( v11 < *(_DWORD *)(a1 + 1252) );
    v5 = v25;
  }
  if ( v5 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v4;
}
