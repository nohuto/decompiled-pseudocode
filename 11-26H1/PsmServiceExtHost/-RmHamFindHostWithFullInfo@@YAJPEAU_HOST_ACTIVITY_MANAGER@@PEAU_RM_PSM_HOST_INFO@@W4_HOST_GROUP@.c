/*
 * XREFs of ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002936C
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180055C28 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     memcmp_0 @ 0x1800A28B6 (memcmp_0.c)
 */

__int64 __fastcall RmHamFindHostWithFullInfo(__int64 a1, __int64 a2, char a3, struct _RM_HAM_ACTIVITY_HOST **a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // r13d
  __int64 v12; // r11
  __int64 v13; // r10
  int v14; // edi
  __int64 v15; // r9
  const wchar_t *v16; // rbx

  v4 = *(_QWORD *)(a2 + 544);
  v5 = a1 - 2328;
  v9 = 0LL;
  v10 = 0LL;
  RtlAcquireSRWLockShared(a1 - 2328);
  v11 = *(_DWORD *)(a1 - 2340);
  v12 = -1LL << (v11 & 0x1F);
  v13 = 0LL;
  v14 = -1073741275;
  v15 = v12 & (HIBYTE(v4)
             + 37
             * (BYTE6(v4)
              + 37
              * (BYTE5(v4)
               + 37
               * (BYTE4(v4)
                + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883LL))))))));
LABEL_2:
  if ( v13 )
    goto LABEL_5;
  if ( v11 >> 5 )
  {
    v13 = *(_QWORD *)(a1 - 2336)
        + 8LL
        * (((v11 >> 5) - 1) & (HIBYTE(v15)
                             - 877075889
                             + 442596621 * (unsigned __int8)v15
                             + 37
                             * (BYTE6(v15)
                              + 37
                              * (BYTE5(v15) + 37
                                            * (BYTE4(v15) + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * BYTE1(v15))))))));
LABEL_5:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v15 == (v12 & *(_QWORD *)(v13 + 8)) )
      {
        if ( !v13 )
          break;
        if ( v4 == *(_QWORD *)(v13 + 32) )
        {
          v14 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 16)) <= 1 )
            __fastfail(0xEu);
          v10 = v13;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(v5);
  if ( v14 >= 0 )
  {
    if ( *(_BYTE *)(v10 + 648) == a3 || a3 == 2 )
    {
      RmpAcquireGlobalLock();
      if ( *(int *)((v10 & -(__int64)(v10 != -56)) + 0x18) < 0 )
      {
        v14 = -1073741275;
      }
      else
      {
        ++*(_QWORD *)(v10 + 656);
        v9 = (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 56);
        v14 = 0;
      }
      RmpReleaseGlobalLock();
      if ( v10 )
        RmpObjectRelease((char *)v10);
    }
    else
    {
      v14 = -1073741776;
      if ( v10 )
      {
        RmpObjectRelease((char *)v10);
        return (unsigned int)v14;
      }
    }
    if ( v14 >= 0 )
    {
      v16 = (const wchar_t *)80;
      if ( v9 )
        v16 = (const wchar_t *)((char *)v9 + 24);
      if ( !_wcsicmp((const wchar_t *)a2, v16) && !memcmp_0((const void *)(a2 + 464), v16 + 232, 0x58uLL) )
      {
        v14 = 0;
        *a4 = v9;
        return (unsigned int)v14;
      }
      v14 = -1073741584;
    }
  }
  if ( v9 )
    RmHamHostDereference(v9);
  return (unsigned int)v14;
}
