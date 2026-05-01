/*
 * XREFs of ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18003E668
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003E494 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x18006ADC8 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 * Callees:
 *     ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003E70C (-HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall HampSlsBlockerEntryFind(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        __int64 a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  char v3; // si
  unsigned __int64 v4; // rcx
  int v5; // esi
  unsigned int v6; // edi
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_BYTE *)a1 + 24);
  v4 = (unsigned __int64)a1 + 16;
  v5 = v3 & 1;
  v6 = 0;
  v8 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    if ( !v8 )
      return (unsigned int)-1073741275;
    v8 ^= v4;
  }
  if ( v8 )
  {
    do
    {
      v9 = HampSlsBlockerEntryCompare(&v12, (struct _RTL_BALANCED_NODE *)v8);
      if ( v9 < 0 )
      {
        v10 = *(_QWORD *)v8;
      }
      else
      {
        if ( v9 <= 0 )
          break;
        v10 = *(_QWORD *)(v8 + 8);
      }
      if ( v5 && v10 )
        v8 ^= v10;
      else
        v8 = v10;
    }
    while ( v8 );
    if ( v8 )
    {
      *a3 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v8;
      return v6;
    }
  }
  return (unsigned int)-1073741275;
}
