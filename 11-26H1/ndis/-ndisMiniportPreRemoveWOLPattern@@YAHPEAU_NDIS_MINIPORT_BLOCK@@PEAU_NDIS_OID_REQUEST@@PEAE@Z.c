/*
 * XREFs of ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14006CD20
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140061D60 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B6D20 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisMiniportPreRemoveWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  void *OidSourceHandle; // rax
  _BYTE *v4; // r8
  __int64 v5; // rdx
  _DWORD *v6; // rdx
  void *v7; // r11
  __int64 v8; // r9
  __int64 *v9; // rcx
  bool v10; // zf
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 result; // rax

  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v6 = *(_DWORD **)(v5 + 40);
  v7 = OidSourceHandle;
  v9 = *(__int64 **)(v8 + 968);
  *v4 = 0;
  if ( !v9 )
    goto LABEL_8;
  while ( *((_DWORD *)v9 + 49) != *v6 )
  {
    v9 = (__int64 *)*v9;
    if ( !v9 )
      goto LABEL_8;
  }
  v10 = v9 + 1 == 0LL;
  v11 = v9 + 1;
  v12 = v11;
  if ( v10 )
  {
LABEL_8:
    result = 3221291035LL;
LABEL_9:
    *v4 = 1;
    return result;
  }
  while ( (void *)v12[2] != v7 )
  {
    v12 = (_QWORD *)*v12;
    if ( !v12 )
      goto LABEL_8;
  }
  result = 0LL;
  if ( *v11 )
    goto LABEL_9;
  return result;
}
