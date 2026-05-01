/*
 * XREFs of ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043D80
 * Callers:
 *     ?HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180043C8C (-HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U4@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4446555@Z @ 0x1800019A8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U4@U3@U4@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@656333333@Z @ 0x180044484 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapper.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180045630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HamRmHostLogRundownEvents(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // edx
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _HAM_ACTIVITY *FirstActivity; // rdi
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // [rsp+A0h] [rbp-80h] BYREF
  int JobType; // [rsp+A4h] [rbp-7Ch] BYREF
  int v20; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-50h] BYREF
  const wchar_t *v26; // [rsp+D8h] [rbp-48h] BYREF
  char *v27; // [rsp+E0h] [rbp-40h] BYREF
  char *v28; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-30h] BYREF
  _QWORD v30[5]; // [rsp+F8h] [rbp-28h] BYREF
  char v31; // [rsp+130h] [rbp+10h] BYREF
  char v32; // [rsp+138h] [rbp+18h] BYREF
  int v33; // [rsp+140h] [rbp+20h] BYREF
  int v34; // [rsp+148h] [rbp+28h] BYREF

  v20 = 0;
  v34 = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v20, (union _RM_OPTIMIZATION_STATE *)&v34);
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
  {
    v4 = (unsigned int)(v2 + 24);
    v22 = *((_QWORD *)a1 + 78);
    v24 = *((_QWORD *)a1 + 101);
    v31 = *((_BYTE *)a1 + 664);
    v33 = *((_DWORD *)a1 + 164);
    LODWORD(v21) = v34;
    v18 = v20;
    v32 = *((_BYTE *)a1 + 592);
    if ( a1 )
      v4 = (unsigned __int64)a1 - 24;
    v23 = v3;
    v25 = *(_QWORD *)v4;
    JobType = RmHamHostGetJobType(a1);
    v26 = (const wchar_t *)((char *)a1 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v5,
      (__int64)&unk_1800CDB59,
      v6,
      v7,
      &v26,
      (__int64)&JobType,
      (__int64)&v25,
      (__int64)&v32,
      (__int64)&v18,
      (__int64)&v21,
      (__int64)&v33,
      (__int64)&v31,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22);
  }
  FirstActivity = HampHostGetFirstActivity(a1);
  while ( FirstActivity )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
    {
      v14 = (unsigned int)(v9 + 24);
      v26 = (const wchar_t *)*((_QWORD *)FirstActivity + 50);
      v25 = *((_QWORD *)FirstActivity + 49);
      v22 = *((_QWORD *)FirstActivity + 64);
      v15 = *((_BYTE *)FirstActivity + 552) & 1;
      v24 = v10;
      v31 = v15;
      JobType = *((_DWORD *)FirstActivity + 106);
      v32 = *((_BYTE *)FirstActivity + 563);
      v18 = *((_DWORD *)FirstActivity + 28);
      v27 = (char *)FirstActivity + 252;
      v28 = (char *)FirstActivity + 124;
      if ( a1 )
        v14 = (unsigned __int64)a1 - 24;
      v23 = v13;
      v21 = v11;
      LOBYTE(v33) = v12;
      v29 = *(_QWORD *)v14;
      v30[0] = *((_QWORD *)FirstActivity + 5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v14,
        (unsigned int)&unk_1800CDA84,
        v10,
        v11,
        (__int64)v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v18,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&JobType,
        (__int64)&v31,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26);
    }
    v16 = *((_QWORD *)FirstActivity + 12);
    v17 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v16 != v17 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v16 - 96);
  }
  HampHostReleaseLockExclusive(a1);
  RmHamHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 56) & -(__int64)(a1 != 0LL)),
    0,
    1u,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampHostLogProcess,
    0LL);
}
