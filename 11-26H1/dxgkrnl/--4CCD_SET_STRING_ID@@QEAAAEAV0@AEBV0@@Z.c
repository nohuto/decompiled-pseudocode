/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14033DF54
 * Callers:
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x140339388 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x140339928 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x140339A78 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x14033A604 (_CcdRetrieveSetIdFromRegistry.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14033B030 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x14033D528 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140349264 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1404016D0 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402AC4B8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14033DB6C (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x14033E0D0 (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  int v4; // eax
  _WORD *v5; // rsi
  void *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  if ( this != (CCD_SET_STRING_ID *)a2 )
  {
    if ( *(_WORD *)(a2 + 8) )
    {
      *((_DWORD *)this + 10) = 0;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      v4 = CCD_SET_STRING_ID::_ReallocString((struct _STRING *)((char *)this + 8), *(_WORD *)(a2 + 8));
      if ( v4 < 0 )
      {
        *(_DWORD *)this = v4;
      }
      else
      {
        memmove(*((void **)this + 2), *(const void **)(a2 + 16), *(unsigned __int16 *)(a2 + 8));
        v5 = (_WORD *)(a2 + 32);
        *((_WORD *)this + 4) = *(_WORD *)(a2 + 8);
        *(_DWORD *)this = 0;
        if ( !*(_QWORD *)(a2 + 24) || !*v5 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1303;
        }
        if ( !*(_QWORD *)(a2 + 24) || !*v5 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
          return this;
        }
        if ( *v5 <= *((_WORD *)this + 16) )
          goto LABEL_12;
        v6 = (void *)*((_QWORD *)this + 3);
        *((_WORD *)this + 16) = 0;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
        v7 = 8LL * (unsigned __int16)*v5;
        if ( !is_mul_ok((unsigned __int16)*v5, 8uLL) )
          v7 = -1LL;
        v8 = operator new[](v7, 0x63644356u, 256LL);
        *((_QWORD *)this + 3) = v8;
        if ( v8 )
        {
LABEL_12:
          memmove(*((void **)this + 3), *(const void **)(a2 + 24), 8LL * (unsigned __int16)*v5);
          *((_WORD *)this + 16) = *v5;
          return this;
        }
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1316;
        *(_DWORD *)this = -1073741801;
      }
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return this;
}
