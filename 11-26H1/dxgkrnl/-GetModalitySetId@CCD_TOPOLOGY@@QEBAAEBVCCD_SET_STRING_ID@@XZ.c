/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140349264
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026D888 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x140337980 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1402AC488 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402AC4B8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14033DA1C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14033DF54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x140348330 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 */

void **__fastcall CCD_TOPOLOGY::GetModalitySetId(void **this)
{
  char *v2; // rsi
  unsigned __int16 v3; // r8
  unsigned __int16 *v4; // rbp
  __int64 v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  CCD_SET_STRING_ID *v8; // rax
  _WORD *v9; // rax
  __int16 v10; // cx
  _WORD *v11; // r8
  unsigned int i; // edx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // kr00_8
  __int64 v18; // rax
  _WORD *v19; // r8
  unsigned __int16 v20; // ax
  _DWORD *v21; // rax
  __int64 v22; // rcx
  unsigned int j; // r8d
  _WORD *v25; // rdx
  unsigned __int16 v26; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v28[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v2 = (char *)operator new[](0x8002uLL, 0x63644356u, 256LL);
    if ( v2 )
    {
      v4 = (unsigned __int16 *)this[8];
      v5 = v4[10];
      if ( (_WORD)v5 )
      {
        v6 = v4 + 156;
        v7 = v4[10];
        do
        {
          *v6 |= 2u;
          v6[2] = 0;
          v6 += 74;
          --v7;
        }
        while ( v7 );
      }
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr((CCD_TOPOLOGY *)this, v2, v3) < 0 )
        goto LABEL_37;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v2);
      v8 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v28, &DestinationString);
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)this, (__int64)v8);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v28);
      if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
      {
        v9 = this[8];
        if ( v9 )
          v10 = v9[10];
        else
          v10 = 0;
        if ( v10 != *((_WORD *)this + 16) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2395;
        }
        v11 = this[8];
        for ( i = 0; ; ++i )
        {
          v13 = v11 ? v11[10] : 0;
          if ( i >= v13 || *(_DWORD *)&v11[148 * i + 160] != i )
            break;
        }
        if ( v11 )
          v14 = v11[10];
        else
          v14 = 0;
        if ( i >= v14 )
          goto LABEL_37;
        if ( v11 )
          v15 = v11[10];
        else
          v15 = 0;
        v17 = v15;
        v16 = 2LL * v15;
        if ( !is_mul_ok(v17, 2uLL) )
          v16 = -1LL;
        v18 = operator new[](v16, 0x63644356u, 256LL);
        this[7] = (void *)v18;
        if ( v18 )
        {
          for ( j = 0; ; ++j )
          {
            v25 = this[8];
            v26 = v25 ? v25[10] : 0;
            if ( j >= v26 )
              break;
            *((_WORD *)this[7] + *(unsigned int *)&v25[148 * j + 160]) = j;
          }
          goto LABEL_37;
        }
        v19 = this[8];
        if ( v19 )
          v20 = v19[10];
        else
          v20 = 0;
        WdLogSingleEntry3(6LL, this, v19, v20);
        WdLogGlobalForLineNumber = 2420;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)this);
LABEL_37:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
      if ( (_WORD)v5 )
      {
        v21 = v4 + 156;
        v22 = v5;
        do
        {
          v21[2] = 0;
          *v21 &= ~2u;
          v21 += 74;
          --v22;
        }
        while ( v22 );
      }
    }
  }
  return this;
}
