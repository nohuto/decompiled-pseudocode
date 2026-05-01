/*
 * XREFs of ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18005C360
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180028630 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005C470 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 result; // rax
  _QWORD *v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+30h] [rbp-28h] BYREF

  v14 = 0LL;
  if ( a3 != a4 )
  {
    v7 = a2 + 80;
    if ( *(_QWORD *)(a1 + 184) )
    {
      v8 = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, a2 + 80);
      v9 = *(_QWORD *)(a1 + 184);
      v10 = *(_QWORD **)(v9 + 16 * (v8 & ((8LL << *(_BYTE *)(a1 + 200)) - 1)));
      if ( v10 )
      {
        v12 = **(_QWORD ***)(v9 + 16 * (v8 & ((8LL << *(_BYTE *)(a1 + 200)) - 1)) + 8);
        while ( v10 != v12 )
        {
          if ( v10[2] >= v8 )
          {
            if ( v10[2] > v8 )
              return 0LL;
            if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v9, v7, v10 + 3) )
            {
              if ( v10 == (_QWORD *)(a1 + 168) )
                return 0LL;
              v13 = v10[72];
              v14 = __PAIR64__(a4, a3);
              result = RtlPublishWnfStateData(v13, 0LL, &v14, 8LL, 0LL);
              if ( (int)result >= 0 )
                return 0LL;
              return result;
            }
          }
          v10 = (_QWORD *)*v10;
        }
      }
    }
  }
  return 0LL;
}
