/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1404016D0
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x140337980 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x140339538 (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x140339680 (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14033DF54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1404018CC (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(__int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // rdi
  int v6; // eax
  void *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebp
  __int64 result; // rax
  __int64 v11; // rax
  CCD_SET_STRING_ID *v12; // rcx
  int v13; // eax
  CCD_SET_STRING_ID *TopologySetIdByClass; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  if ( (unsigned int)a3 <= 8 && (v6 = 278, _bittest(&v6, a3)) )
  {
    v7 = *(void **)(a1 + 96);
    ValueName.Buffer = L"Recent";
    *(_QWORD *)&ValueName.Length = 917516LL;
    v8 = CcdWriteStrValueToRegistry(v7, &ValueName, (PCANSI_STRING)(a2 + 8));
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( !*(_QWORD *)(a1 + 88) )
      {
        v11 = operator new(0x38uLL, 0x63644356u, 256LL);
        if ( v11 )
        {
          *(_DWORD *)v11 = 0;
          *(_OWORD *)(v11 + 8) = 0LL;
          *(_QWORD *)(v11 + 24) = 0LL;
          *(_WORD *)(v11 + 32) = 0;
          *(_OWORD *)(v11 + 40) = 0LL;
          *(_QWORD *)(a1 + 88) = v11;
        }
        else
        {
          *(_QWORD *)(a1 + 88) = 0LL;
          WdLogSingleEntry4(6LL, 56LL, 15LL, a1, *(_QWORD *)(a1 + 96));
          WdLogGlobalForLineNumber = 1041;
        }
      }
      v12 = *(CCD_SET_STRING_ID **)(a1 + 88);
      if ( v12 )
        CCD_SET_STRING_ID::operator=(v12, a2);
      ValueName = 0LL;
      CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(v3, (__int64)&ValueName);
      v13 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
      v9 = v13;
      if ( v13 >= 0 )
      {
        TopologySetIdByClass = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(
                                                      a1,
                                                      v3,
                                                      1);
        if ( TopologySetIdByClass )
          CCD_SET_STRING_ID::operator=(TopologySetIdByClass, a2);
      }
      else
      {
        WdLogSingleEntry5(2LL, v13, a2, v3, a1, *(_QWORD *)(a1 + 96));
        WdLogGlobalForLineNumber = 886;
      }
    }
    else
    {
      WdLogSingleEntry5(2LL, v8, a2, v3, a1, *(_QWORD *)(a1 + 96));
      WdLogGlobalForLineNumber = 856;
    }
    return v9;
  }
  else
  {
    WdLogSingleEntry4(1LL, a2, a3, a1, *(_QWORD *)(a1 + 96));
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 833;
  }
  return result;
}
