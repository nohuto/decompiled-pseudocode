/*
 * XREFs of ?HampSystemRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180062A70
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampSystemRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // r10

  v7 = 48LL;
  if ( a1 )
    v7 = (__int64)a1 - 8;
  return (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, void *))(*(_QWORD *)(*(_QWORD *)v7 + 40LL) + 160LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
