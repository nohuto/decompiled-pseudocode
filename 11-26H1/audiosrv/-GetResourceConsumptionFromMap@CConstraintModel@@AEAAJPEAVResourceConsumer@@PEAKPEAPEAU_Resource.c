/*
 * XREFs of ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18007AF98
 * Callers:
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18015A3B4 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL__.c)
 * Callees:
 *     ?GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@W4RmResourceType@@KPEAKPEAPEAU_ResourceInfo@@@Z @ 0x1800AF924 (-GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VRes.c)
 *     ?CompareElements@ResourceConsumerTraits@@SA_NAEBQEAVResourceConsumer@@0@Z @ 0x1801597A4 (-CompareElements@ResourceConsumerTraits@@SA_NAEBQEAVResourceConsumer@@0@Z.c)
 */

__int64 __fastcall CConstraintModel::GetResourceConsumptionFromMap(
        CConstraintModel *this,
        struct ResourceConsumer *a2,
        unsigned int *a3,
        struct _ResourceInfo **a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 i; // rdi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  struct ResourceConsumer *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v4 = 0;
  *a4 = 0LL;
  *a3 = 0;
  v7 = *((_DWORD *)a2 + 2);
  if ( !v7 )
    v7 = 4 * *((_DWORD *)a2 + 40);
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    for ( i = *(_QWORD *)(v8 + 8LL * (v7 % *((_DWORD *)this + 36))); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == v7
        && ResourceConsumerTraits::CompareElements((struct ResourceConsumer *const *)i, &v14) )
      {
        return (unsigned int)CConstraintModel::GetResourceInfoArrayFromResourceList(
                               v11,
                               *(_QWORD *)(i + 8),
                               v12,
                               v13,
                               (__int64)a3,
                               (__int64)a4);
      }
    }
  }
  *a3 = 0;
  *a4 = 0LL;
  return v4;
}
