/*
 * XREFs of ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14013F980
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qqdqq @ 0x1400A8EA4 (WPP_RECORDER_SF_qqdqq.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1400A91B8 (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1400A9430 (WPP_RECORDER_SF_qqqqq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14013ADB8 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ??_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z @ 0x14013C4BC (--_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x14013F5DC (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x14013F6EC (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r12
  __int64 v3; // rsi
  unsigned __int8 v4; // r15
  int v5; // edx
  __int64 v6; // r8
  _DWORD *v7; // rbx
  __int64 v8; // r13
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  KPushLockBase *PDClientViaClientDriverHandle; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r9
  struct KPushLockBase *v15; // rdx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-E0h]
  KLockThisExclusive v23; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[248]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 1;
  memset(v24, 0, sizeof(v24));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x1Cu, v22);
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
    || (*(_DWORD *)(v3 + 244) & 1) == 0
    || *(_DWORD *)(v3 + 236)
    || *(_DWORD *)(v3 + 240) == -1 )
  {
    v7 = (_DWORD *)((char *)a1 + 40);
LABEL_37:
    *v7 = -1073741811;
    goto LABEL_38;
  }
  v7 = (_DWORD *)((char *)a1 + 40);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x10u )
  {
    *(_DWORD *)(v3 + 56) = 16;
    *v7 = -1073676268;
    goto LABEL_38;
  }
  v8 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)v8 != 0x80 || *(_BYTE *)(v8 + 1) != 1 || *(_WORD *)(v8 + 2) < 0x10u || *(_DWORD *)(v8 + 4) )
    goto LABEL_37;
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
  if ( OidSourceHandle
    && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
    && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) != 0LL
    && (v12 = *(__int64 **)(v8 + 8), (KPushLockBase *)v12[7] == PDClientViaClientDriverHandle)
    && (struct _NDIS_MINIPORT_BLOCK *)v12[6] == v1
    && *((_DWORD *)v12 + 16) == *(_DWORD *)(v3 + 240) )
  {
    *(_QWORD *)(v8 + 8) = v12[9];
    *(_DWORD *)&v24[88] |= 8u;
    *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v24[168]);
    *(_DWORD *)v24 = 15466902;
    *(_DWORD *)&v24[32] = *(_DWORD *)(v3 + 32);
    *(_DWORD *)&v24[4] = *(_DWORD *)(v3 + 4);
    *(_DWORD *)&v24[8] = *(_DWORD *)(v3 + 8);
    *(_QWORD *)&v24[40] = *(_QWORD *)(v3 + 40);
    *(_DWORD *)&v24[48] = *(_DWORD *)(v3 + 48);
    *(_WORD *)&v24[2] = 248;
    v24[1] = 2;
    *(_DWORD *)&v24[244] = 1;
    *(_DWORD *)&v24[240] = *(_DWORD *)(v3 + 240);
    *v7 = ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v24);
    *(_QWORD *)(v8 + 8) = v12;
    if ( !*v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqdqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v6, v14, v22);
      v15 = qword_14011EE98;
      v12[9] = 0LL;
      v12[7] = 0LL;
      KLockThisExclusive::KLockThisExclusive(&v23, v15);
      v16 = (__int64 *)*v12;
      if ( *(__int64 **)(*v12 + 8) != v12
        || (v17 = (__int64 **)v12[1], *v17 != v12)
        || (*v17 = v16, v16[1] = (__int64)v17,
                        v18 = v12 + 4,
                        *v12 = 0LL,
                        v19 = v12[4],
                        *(__int64 **)(v19 + 8) != v12 + 4)
        || (v20 = (_QWORD *)v12[5], (_QWORD *)*v20 != v18) )
      {
        __fastfail(3u);
      }
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      *v18 = 0LL;
      KLockHolder::~KLockHolder(&v23);
      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v12[6], 0x65u);
      v12[6] = 0LL;
      if ( v12 )
        NDIS_PD_ASSOCIATION::`scalar deleting destructor'((NDIS_PD_ASSOCIATION *)v12);
    }
  }
  else
  {
    *v7 = -1073741808;
  }
LABEL_38:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v6, 0x1Eu, v22);
  return v4;
}
