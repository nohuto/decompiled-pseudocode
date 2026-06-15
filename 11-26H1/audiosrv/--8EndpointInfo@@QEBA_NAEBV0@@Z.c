/*
 * XREFs of ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F0F9C
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800F31A0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800F5054 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800F5180 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     ?CompareElements@ResourceConsumerTraits@@SA_NAEBQEAVResourceConsumer@@0@Z @ 0x1801597A4 (-CompareElements@ResourceConsumerTraits@@SA_NAEBQEAVResourceConsumer@@0@Z.c)
 *     ?ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z @ 0x18015B548 (-ResourceConstraintsApply@CConstraintModel@@QEAA_NPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800F389C (-IdInVariant@EndpointInfo@@QEBA_NPEBGAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVar.c)
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x1800F567C (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

char __fastcall EndpointInfo::operator==(__int64 *a1, __int64 *a2)
{
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 ***v10; // rsi
  __int64 ***v11; // r15
  __int64 *v12; // r14
  __int64 *v13; // rbp
  __int64 v14; // rcx
  const unsigned __int16 *v15; // r8
  unsigned __int64 v16; // r9
  const unsigned __int16 *v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 ***v22; // rsi
  __int64 ***v23; // r14
  __int64 *v24; // rbx
  __int64 *v25; // rbp
  __int64 v26; // rcx
  const unsigned __int16 *v27; // r8
  unsigned __int64 v28; // r9
  const unsigned __int16 *v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rdx

  if ( *((_DWORD *)a1 + 24) == *((_DWORD *)a2 + 24) )
  {
    v4 = (const unsigned __int16 *)(a2 + 8);
    if ( (unsigned __int64)a2[11] > 7 )
      v4 = *(const unsigned __int16 **)v4;
    v5 = (const unsigned __int16 *)(a1 + 8);
    if ( *((_QWORD *)v5 + 3) > 7uLL )
      v5 = *(const unsigned __int16 **)v5;
    if ( SimpleWildcardStringCompare(v5, a1[10], v4, a2[10]) )
    {
      if ( a1[2] && a2[2] )
      {
        v6 = a2;
        if ( (unsigned __int64)a2[3] > 7 )
          v6 = (__int64 *)*a2;
        v7 = a1;
        if ( (unsigned __int64)a1[3] > 7 )
          v7 = (__int64 *)*a1;
        if ( !(unsigned int)_o__wcsicmp(v7, v6) )
          return 1;
      }
      if ( a1[6] && a2[6] )
      {
        v8 = a2 + 4;
        if ( (unsigned __int64)a2[7] > 7 )
          v8 = (_QWORD *)*v8;
        v9 = a1 + 4;
        if ( (unsigned __int64)a1[7] > 7 )
          v9 = (_QWORD *)*v9;
        if ( !(unsigned int)_o__wcsicmp(v9, v8) )
          return 1;
      }
    }
  }
  v10 = (__int64 ***)a2[13];
  v11 = (__int64 ***)a2[14];
  while ( v10 != v11 )
  {
    v12 = **v10;
    v13 = (*v10)[1];
    while ( v12 != v13 )
    {
      v14 = *v12;
      if ( *((_DWORD *)a1 + 24) == *(_DWORD *)(*v12 + 68) )
      {
        v15 = (const unsigned __int16 *)(v14 + 32);
        v16 = *(_QWORD *)(v14 + 48);
        if ( *(_QWORD *)(v14 + 56) > 7uLL )
          v15 = *(const unsigned __int16 **)v15;
        v17 = (const unsigned __int16 *)(a1 + 8);
        if ( (unsigned __int64)a1[11] > 7 )
          v17 = *(const unsigned __int16 **)v17;
        if ( SimpleWildcardStringCompare(v17, a1[10], v15, v16) )
        {
          v19 = a1;
          if ( (unsigned __int64)a1[3] > 7 )
            v19 = (__int64 *)*a1;
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v18, v19, *v10 + 3) )
            return 1;
          v21 = a1 + 4;
          if ( (unsigned __int64)a1[7] > 7 )
            v21 = (_QWORD *)*v21;
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v20, v21, *v10 + 6) )
            return 1;
        }
      }
      ++v12;
    }
    ++v10;
  }
  v22 = (__int64 ***)a1[13];
  v23 = (__int64 ***)a1[14];
  while ( v22 != v23 )
  {
    v24 = **v22;
    v25 = (*v22)[1];
    while ( v24 != v25 )
    {
      v26 = *v24;
      if ( *((_DWORD *)a2 + 24) == *(_DWORD *)(*v24 + 68) )
      {
        v27 = (const unsigned __int16 *)(v26 + 32);
        v28 = *(_QWORD *)(v26 + 48);
        if ( *(_QWORD *)(v26 + 56) > 7uLL )
          v27 = *(const unsigned __int16 **)v27;
        v29 = (const unsigned __int16 *)(a2 + 8);
        if ( (unsigned __int64)a2[11] > 7 )
          v29 = *(const unsigned __int16 **)v29;
        if ( SimpleWildcardStringCompare(v29, a2[10], v27, v28) )
        {
          v31 = a2;
          if ( (unsigned __int64)a2[3] > 7 )
            v31 = (__int64 *)*a2;
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v30, v31, *v22 + 3) )
            return 1;
          v33 = a2 + 4;
          if ( (unsigned __int64)a2[7] > 7 )
            v33 = (_QWORD *)*v33;
          if ( (unsigned __int8)EndpointInfo::IdInVariant(v32, v33, *v22 + 6) )
            return 1;
        }
      }
      ++v24;
    }
    ++v22;
  }
  return 0;
}
