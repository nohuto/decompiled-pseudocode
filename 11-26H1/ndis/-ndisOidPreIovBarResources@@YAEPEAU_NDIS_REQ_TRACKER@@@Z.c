/*
 * XREFs of ?ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E2250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1400E0B7C (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovBarResources(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  char v5; // bl
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // r9
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int64 v13; // [rsp+80h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = ndisCaptureIovOidContext((__int64)&v13, a1);
  v12 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x54u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( *(_DWORD *)(v1 + 4) != 12 )
    goto LABEL_4;
  v5 = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v6 = -1073676268;
LABEL_9:
    *(_DWORD *)(v1 + 68) = 12;
LABEL_10:
    *((_DWORD *)a1 + 10) = v6;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v1 + 52) < 0xCu )
  {
    v6 = -1073676266;
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL) + 20;
  v8 = v7;
  if ( v7 < 0xC )
    v8 = 12;
  if ( *(_DWORD *)(v1 + 48) < 0xCu )
  {
    v6 = -1073676268;
LABEL_17:
    *(_DWORD *)(v1 + 68) = v8;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v1 + 52) < v7 )
  {
    v6 = -1073676266;
    goto LABEL_17;
  }
  if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) != &ndisIntReqGeneric )
  {
LABEL_4:
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_22:
    v5 = 1;
    goto LABEL_23;
  }
  if ( (_BYTE)v12 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 4) + 64LL) = v9;
    if ( !ndisIovFindVFByVFId(v4, *(_WORD *)(v10 + 4)) )
    {
      *((_DWORD *)a1 + 10) = -1073741811;
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x55u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v5,
      *((_DWORD *)a1 + 10));
  return v5;
}
