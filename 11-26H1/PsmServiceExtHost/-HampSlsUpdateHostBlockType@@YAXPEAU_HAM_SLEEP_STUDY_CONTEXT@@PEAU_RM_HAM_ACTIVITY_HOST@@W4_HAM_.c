/*
 * XREFs of ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003E494
 * Callers:
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003DFCC (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18003E668 (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063BB8 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180063DEC (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800665C4 (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x18006ADC8 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 */

void __fastcall HampSlsUpdateHostBlockType(__int64 a1, struct _RM_HAM_ACTIVITY_HOST *a2, char a3)
{
  char *v6; // rax
  __int64 v7; // rdx
  struct _HAM_SLEEP_STUDY_CONTEXT *v8; // rcx
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v17; // [rsp+60h] [rbp+30h] BYREF
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 )
    {
      v6 = (char *)a2 - 24;
      v7 = 32LL;
      if ( a2 )
        v7 = (__int64)v6;
      if ( (int)HampSlsBlockerEntryFind((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, *(_QWORD *)v7, &v17) >= 0
        && (int)HampSlsBlockerEntryUpdateBlockType(v17, 0LL, a1, a2) < 0
        && (unsigned int)dword_1800E12B0 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
        {
          LODWORD(v17) = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (__int64)&dword_1800E12B0,
            byte_1800D0E51,
            v13,
            v14,
            (__int64)&v17);
        }
      }
    }
    return;
  }
  if ( (int)HampSlsBlockerEntryCreate((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, a2, &v18) < 0 )
  {
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
    {
      LODWORD(v17) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E12B0,
        byte_1800D0E15,
        v15,
        v16,
        (__int64)&v17);
    }
  }
  else if ( (*(_DWORD *)(a1 + 32) & 3) == 1 )
  {
    v9 = v18;
    HampSlsBlockerEntryFindOrInsert((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, v18, &v17);
    LOBYTE(v10) = a3;
    if ( v17 == v9 )
      v9 = 0LL;
    if ( (int)HampSlsBlockerEntryUpdateBlockType(v17, v10, a1, a2) < 0
      && (unsigned int)dword_1800E12B0 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
    {
      LODWORD(v17) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E12B0,
        byte_1800D0EBC,
        v11,
        v12,
        (__int64)&v17);
    }
    goto LABEL_17;
  }
  v9 = v18;
LABEL_17:
  if ( v9 )
    HampSlsBlockerEntryDestroy(v8, v9);
}
