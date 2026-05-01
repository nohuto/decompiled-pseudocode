/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006D4E8
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005CCF8 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180042868 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@4@Z @ 0x18005D274 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$__ea_18005D274.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007D87C (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  __int64 v8; // rcx
  struct _HAM_HOST_DEPENDENCY *v9; // rcx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  char v15; // al
  __int64 v16; // [rsp+60h] [rbp+17h] BYREF
  __int64 v17; // [rsp+68h] [rbp+1Fh] BYREF
  const wchar_t *v18; // [rsp+70h] [rbp+27h] BYREF
  char v19; // [rsp+B0h] [rbp+67h] BYREF
  char JobType; // [rsp+B8h] [rbp+6Fh] BYREF
  int v21; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 99);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v22 = *((_QWORD *)a1 + 101);
    v3 = 544LL;
    if ( a1 )
      v3 = (__int64)a1 + 488;
    v16 = v3;
    v4 = 612LL;
    if ( a1 )
      v4 = (__int64)a1 + 556;
    v21 = *(_DWORD *)v4;
    v19 = *((_BYTE *)a1 + 592);
    JobType = RmHamHostGetJobType(a1);
    v8 = (unsigned int)(v7 + 24);
    if ( a1 )
      v8 = (__int64)a1 - 24;
    v17 = *(_QWORD *)v8;
    v18 = (const wchar_t *)((char *)a1 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
      v8,
      byte_1800CD843,
      v5,
      v6,
      &v18,
      (__int64)&v17,
      (__int64)&JobType,
      (__int64)&v19,
      (__int64)&v21,
      &v16,
      (__int64)&v22);
  }
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 83) |= 0x100000000000000uLL;
  HampHostReleaseLockExclusive(a1);
  v9 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 89);
  if ( v9 )
    HampDepGroupInvalidateDependency(v9);
  v10 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
  if ( v10 )
    HampDepGroupRemoveHost(v10, a1);
  if ( v2 )
  {
    v11 = *(_QWORD *)(v2 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v11 + 328) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v2 + 88));
      *(_QWORD *)(v11 + 328) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v11);
    }
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v2);
    if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 102) )
    {
      v13 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
    v15 = *((_BYTE *)a1 + 592);
    if ( v15 )
    {
      if ( v15 == 1 && a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v2 + 576) )
        *(_QWORD *)(v2 + 576) = 0LL;
    }
    else if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v2 + 568) )
    {
      *(_QWORD *)(v2 + 568) = 0LL;
    }
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v2);
  }
}
