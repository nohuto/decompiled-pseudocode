/*
 * XREFs of ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400D0B04
 * Callers:
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400D0A34 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId_old(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdi
  unsigned int v2; // ebx
  int v3; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax

  v1 = qword_14011E9D8;
  v2 = 1;
  v3 = 1;
  while ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
  {
    v5 = v2;
    if ( v3 == 1 )
    {
      v6 = *((_DWORD *)v1 + 4);
      ++v2;
      if ( v5 != v6 )
        v2 = v5;
      if ( v2 < v6 )
        v3 = v2;
    }
    if ( *((_QWORD *)v1 + 143) == *(_QWORD *)&a1->Data1 && *((_QWORD *)v1 + 144) == *(_QWORD *)a1->Data4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x16u,
          0xAu,
          (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
          (__int64)a1);
      v3 = 0;
      break;
    }
    v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
  }
  if ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
    v2 = v3;
  if ( v2 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0xBu,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        (__int64)a1);
    return 0;
  }
  return v2;
}
