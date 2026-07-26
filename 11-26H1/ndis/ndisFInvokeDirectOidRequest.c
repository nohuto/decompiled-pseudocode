/*
 * XREFs of ndisFInvokeDirectOidRequest @ 0x14000E0E0
 * Callers:
 *     ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x14000E250 (-ndisFDoDirectOidRequestInternal@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqD @ 0x14000E010 (WPP_RECORDER_SF_qDqD.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000E6D0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     WPP_RECORDER_SF_qDq @ 0x140023920 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140023BB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequest(struct _NDIS_OBJECT_HEADER *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  __int64 v3; // r14
  struct _NDIS_OID_REQUEST *v4; // rsi
  NDIS_OID Oid; // r15d
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  struct _NDIS_OID_REQUEST *v10; // rbp
  unsigned int v11; // ebx
  struct _NDIS_OID_REQUEST *v12; // rdx
  char v14; // [rsp+38h] [rbp-40h]
  struct _NDIS_OID_REQUEST *v15; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_QWORD *)&a1[4].Type;
  v4 = a2;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v15 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      22,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      Oid,
      v14);
  }
  v7 = ndisOidCloneForCompatibility(a1, v4, 0, &v15);
  v10 = v15;
  v11 = v7;
  if ( !v7 )
  {
    if ( v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        23,
        (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
        (char)v4,
        (char)v15,
        v15->DATA.QUERY_INFORMATION.Oid);
    }
    v12 = v4;
    if ( v10 )
      v12 = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *))(v3 + 296))(*(_QWORD *)&a1[6].Type, v12);
  }
  if ( v11 != 259 && v10 )
    ndisOidFreeInternalCloneRequest(a1, v10, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      v9,
      0x18u,
      (struct _GUID *)&WPP_9d376253b0833eb8aa23ff873eb010f6_Traceguids,
      (char)a1,
      Oid,
      (char)v4,
      v11);
  return v11;
}
