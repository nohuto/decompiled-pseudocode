/*
 * XREFs of ?HampHostChangeAppTerminateReason@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180062C10
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampHostChangeAppTerminateReason(__int64 a1, __int16 a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx

  v2 = 616LL;
  if ( a1 )
    v2 = a1 + 560;
  if ( *(_DWORD *)v2 == 2 && !*(_BYTE *)(a1 + 592) )
  {
    v4 = *(_QWORD *)(a1 + 792);
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v4);
    *(_WORD *)(v4 + 616) = a2;
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v4);
  }
}
