/*
 * XREFs of ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180037E08
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18004975C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180049B58 (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x18004A100 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007A570 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180038C60 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 */

struct _HAM_SESSION *__fastcall HampSessionFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  int v5; // esi
  int v6; // eax
  unsigned __int64 v7; // rax

  v2 = (unsigned __int64)a1 + 392;
  v3 = a2;
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v4 = *(_QWORD *)v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
  {
    if ( v4 )
    {
      v4 ^= v2;
      goto LABEL_9;
    }
    goto LABEL_17;
  }
LABEL_9:
  while ( v4 )
  {
    v6 = HampSessionCompareById((void *)v3, (void *)v4);
    if ( v6 < 0 )
    {
      v7 = *(_QWORD *)v4;
    }
    else
    {
      if ( v6 <= 0 )
        break;
      v7 = *(_QWORD *)(v4 + 8);
    }
    if ( v5 && v7 )
      v4 ^= v7;
    else
      v4 = v7;
  }
  if ( v4 )
  {
    if ( !*(_QWORD *)(v4 + 24) )
    {
LABEL_17:
      v4 = 0LL;
      goto LABEL_13;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_13:
  RtlReleaseSRWLockShared(v2 + 16);
  return (struct _HAM_SESSION *)v4;
}
