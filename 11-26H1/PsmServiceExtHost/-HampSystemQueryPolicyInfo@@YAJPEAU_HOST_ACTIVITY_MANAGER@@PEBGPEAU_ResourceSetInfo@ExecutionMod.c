/*
 * XREFs of ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18002A908
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C270 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x18007E8D8 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002B3F0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemQueryPolicyInfo(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 v6; // rcx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 result; // rax
  _BYTE v23[384]; // [rsp+20h] [rbp-1A8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v23);
  if ( !*a2 || (result = RmRpsQueryResourceSetInfo(*((_QWORD *)a1 - 198), a2, v23), (int)result >= 0) )
  {
    v6 = 2LL;
    v7 = v23;
    do
    {
      v8 = v7[1];
      *(_OWORD *)a3 = *v7;
      v9 = v7[2];
      *((_OWORD *)a3 + 1) = v8;
      v10 = v7[3];
      *((_OWORD *)a3 + 2) = v9;
      v11 = v7[4];
      *((_OWORD *)a3 + 3) = v10;
      v12 = v7[5];
      *((_OWORD *)a3 + 4) = v11;
      v13 = v7[6];
      *((_OWORD *)a3 + 5) = v12;
      v14 = v7[7];
      v7 += 8;
      *((_OWORD *)a3 + 6) = v13;
      a3 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a3 + 128);
      *((_OWORD *)a3 - 1) = v14;
      --v6;
    }
    while ( v6 );
    v15 = v7[1];
    *(_OWORD *)a3 = *v7;
    v16 = v7[2];
    *((_OWORD *)a3 + 1) = v15;
    v17 = v7[3];
    *((_OWORD *)a3 + 2) = v16;
    v18 = v7[4];
    *((_OWORD *)a3 + 3) = v17;
    v19 = v7[5];
    *((_OWORD *)a3 + 4) = v18;
    v20 = v7[6];
    v21 = *((_QWORD *)v7 + 14);
    *((_OWORD *)a3 + 5) = v19;
    *((_OWORD *)a3 + 6) = v20;
    *((_QWORD *)a3 + 14) = v21;
    return 0LL;
  }
  return result;
}
