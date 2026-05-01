/*
 * XREFs of ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014080
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F560 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001D8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostIsAllowedToInswap@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001437C (-HampHostIsAllowedToInswap@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064250 (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800648F0 (-HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostWaitForInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v1 = *((_QWORD *)a1 + 99);
  v11 = 0;
  v3 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v1 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 392;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v3);
  v4 = (_QWORD *)((char *)a1 + 984);
  while ( !HampHostIsAllowedToInswap(a1) )
  {
    if ( (unsigned int)CempListEntryIsNull((char *)a1 + 984) )
    {
      v6 = *(_QWORD **)(v3 + 952);
      if ( *v6 != v3 + 944 )
        __fastfail(3u);
      *v4 = v3 + 944;
      *((_QWORD *)a1 + 124) = v6;
      *v6 = v4;
      *(_QWORD *)(v3 + 952) = v4;
    }
    v11 = *(_DWORD *)(v3 + 964);
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v3);
    HamReleaseEnforcementLocks(a1);
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
    {
      v10 = (unsigned int)(v7 - 32);
      v12 = *(_DWORD *)(v3 + 960);
      v13 = *((_DWORD *)a1 + 170);
      if ( a1 )
        v10 = (__int64)a1 - 24;
      v14 = *(_QWORD *)v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (__int64)&unk_1800CD055,
        v8,
        v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
    RtlWaitOnAddress(v3 + 964, &v11, 4LL);
    HamAcquireEnforcementLocks(a1);
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v3);
  }
  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 984) )
    CempListEntryRemoveAndClear(v5);
  ++*(_DWORD *)(v3 + 960);
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v3);
}
