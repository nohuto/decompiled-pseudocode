/*
 * XREFs of NdisFSynchronousOidRequest @ 0x1400CD750
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400036B0 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1400233E0 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall NdisFSynchronousOidRequest(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_MINIPORT_BLOCK **p_Miniport; // rbx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  __int64 v10; // [rsp+40h] [rbp-28h]
  char v11[4]; // [rsp+40h] [rbp-28h]

  p_Miniport = &a1->Miniport;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x12u,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      (char)*p_Miniport,
      (char)a1,
      (char)a2,
      *(_DWORD *)v11);
  }
  FilterDriver = a1->FilterDriver;
  if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
    && (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion != 6
     || FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion < 0x50u) )
  {
    ndisBugCheckEx(0x28uLL, 2uLL, 0LL, 0LL);
  }
  v6 = ndisSynchronousOidRequestInternal((ULONG_PTR)a1, *p_Miniport, a1, a2);
  v8 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v6;
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0xBu,
      0x13u,
      (struct _GUID *)&WPP_2c51eb48a59734479dee2054718361a6_Traceguids,
      (char)*p_Miniport,
      (char)a1,
      (char)a2,
      v10);
  }
  return v8;
}
