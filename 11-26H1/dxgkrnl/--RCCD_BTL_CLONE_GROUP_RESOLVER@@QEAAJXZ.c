/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1403397F8
 * Callers:
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x14033973C (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(_QWORD *a1)
{
  unsigned int i; // edx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  unsigned int j; // edx
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 v11; // r10
  __int64 v12; // r9

  for ( i = 0; i < *(unsigned __int16 *)(*a1 + 32LL); *(_QWORD *)(v3 + a1[1] + 56) &= 0xFFFF0FFFFFFFFFFFuLL )
    v3 = 296LL * i++;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             Global,
             BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_,
             a1,
             4LL);
  if ( (_DWORD)result == -2147483622 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(*a1 + 32LL); ++j )
    {
      v7 = 0;
      if ( j )
      {
        v8 = a1[1];
        while ( *(_DWORD *)(296LL * v7 + v8 + 240) != *(_DWORD *)(296LL * j + v8 + 240) )
        {
          if ( ++v7 >= j )
            goto LABEL_7;
        }
        v9 = a1[1];
        v10 = 296LL * v7;
        v11 = *(_BYTE *)(v10 + v8 + 185);
        v12 = 296LL * j;
        if ( ((*(_BYTE *)(v12 + v9 + 185) ^ v11) & 3) != 0
          || !v11
          && (*(_DWORD *)(v10 + v9 + 72) != *(_DWORD *)(v12 + v9 + 72)
           || *(_DWORD *)(v10 + v9 + 76) != *(_DWORD *)(v12 + v9 + 76)) )
        {
          return 3221226021LL;
        }
      }
LABEL_7:
      ;
    }
    return 0LL;
  }
  else if ( !(_DWORD)result )
  {
    return 3221226021LL;
  }
  return result;
}
