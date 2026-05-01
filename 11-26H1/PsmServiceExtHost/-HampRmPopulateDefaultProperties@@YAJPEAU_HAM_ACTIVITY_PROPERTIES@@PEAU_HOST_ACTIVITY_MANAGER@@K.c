/*
 * XREFs of ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18002B1F0
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011730 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18002A6FC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006AAB8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002B3F0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18002BCD8 (-RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmPopulateDefaultProperties(
        struct _HAM_ACTIVITY_PROPERTIES *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        char a3)
{
  struct ExecutionModel::_ResourceSetInfo *v6; // r8
  _BYTE *v7; // rcx
  __int64 v8; // rdx
  _BYTE *v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rcx
  ULONG v26; // ebx
  int *v27; // rdi
  __int64 result; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-338h] BYREF
  _BYTE v30[164]; // [rsp+30h] [rbp-328h] BYREF
  char v31; // [rsp+D4h] [rbp-284h] BYREF
  _BYTE v32[384]; // [rsp+1B0h] [rbp-1A8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v30);
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v32);
  if ( !*((_WORD *)a1 + 70)
    || (result = RmRpsQueryResourceSetInfo(*((_QWORD *)a2 - 198), (char *)a1 + 140, v32), (int)result >= 0) )
  {
    v7 = v30;
    v8 = 2LL;
    v9 = v32;
    do
    {
      v7 += 128;
      v10 = *(_OWORD *)v9;
      v11 = *((_OWORD *)v9 + 1);
      v9 += 128;
      *((_OWORD *)v7 - 8) = v10;
      v12 = *((_OWORD *)v9 - 6);
      *((_OWORD *)v7 - 7) = v11;
      v13 = *((_OWORD *)v9 - 5);
      *((_OWORD *)v7 - 6) = v12;
      v14 = *((_OWORD *)v9 - 4);
      *((_OWORD *)v7 - 5) = v13;
      v15 = *((_OWORD *)v9 - 3);
      *((_OWORD *)v7 - 4) = v14;
      v16 = *((_OWORD *)v9 - 2);
      *((_OWORD *)v7 - 3) = v15;
      v17 = *((_OWORD *)v9 - 1);
      *((_OWORD *)v7 - 2) = v16;
      *((_OWORD *)v7 - 1) = v17;
      --v8;
    }
    while ( v8 );
    v18 = *((_OWORD *)v9 + 1);
    *(_OWORD *)v7 = *(_OWORD *)v9;
    v19 = *((_OWORD *)v9 + 2);
    *((_OWORD *)v7 + 1) = v18;
    v20 = *((_OWORD *)v9 + 3);
    *((_OWORD *)v7 + 2) = v19;
    v21 = *((_OWORD *)v9 + 4);
    *((_OWORD *)v7 + 3) = v20;
    v22 = *((_OWORD *)v9 + 5);
    *((_OWORD *)v7 + 4) = v21;
    v23 = *((_OWORD *)v9 + 6);
    v24 = *((_QWORD *)v9 + 14);
    *((_OWORD *)v7 + 5) = v22;
    *((_OWORD *)v7 + 6) = v23;
    *((_QWORD *)v7 + 14) = v24;
    ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
      (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a1 + 280),
      (struct _RM_RESOURCE_SET_PROPERTIES *)v30,
      v6);
    if ( (*(_BYTE *)(v25 + 40) & 0x10) != 0 && *((_QWORD *)a1 + 45) < *((_QWORD *)a1 + 43) )
    {
      return 3221225485LL;
    }
    else
    {
      BitMapHeader = 0LL;
      RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 96, 0x2Fu);
      v26 = 0;
      v27 = (int *)&v31;
      do
      {
        if ( *v27 < 101 )
          RtlSetBit(&BitMapHeader, v26);
        ++v26;
        ++v27;
      }
      while ( v26 < 0x2F );
      if ( (v30[42] & 7) == 4 )
        *(_DWORD *)a1 |= 0x80000u;
      if ( (a3 & 1) == 0 )
        *(_DWORD *)a1 &= ~0x80000u;
      return 0LL;
    }
  }
  return result;
}
