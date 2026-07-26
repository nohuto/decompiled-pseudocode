/*
 * XREFs of ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1400D0A34
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1400D0054 (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1400D0B04 (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(const struct _GUID *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // rdx
  unsigned int AvailableCompartmentId_old; // ecx

  v1 = qword_14011E9D8;
  if ( qword_14011E9D8 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
    return 1LL;
  AvailableCompartmentId_old = dword_14011CE6C;
  if ( (unsigned int)dword_14011CE6C > *(_DWORD *)(qword_14011E9E0 + 16) )
  {
    while ( *((_QWORD *)v1 + 143) != *(_QWORD *)&a1->Data1 || *((_QWORD *)v1 + 144) != *(_QWORD *)a1->Data4 )
    {
      v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
      if ( v1 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011E9D8 )
        goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0xCu,
        (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
        (__int64)a1);
    return 0LL;
  }
  AvailableCompartmentId_old = ndisIfFindAvailableCompartmentId_old(a1);
  if ( !AvailableCompartmentId_old )
    return 0LL;
LABEL_7:
  dword_14011CE6C = AvailableCompartmentId_old + 1;
  if ( AvailableCompartmentId_old == -2 )
    dword_14011CE6C = 2;
  return AvailableCompartmentId_old;
}
