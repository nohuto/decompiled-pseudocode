/*
 * XREFs of ?ndisSendWithPause@@YAHPEAXPEAU_NDIS_PACKET@@@Z @ 0x140049090
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400490C0 (-ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 */

__int64 __fastcall ndisSendWithPause(void *a1, struct _NDIS_PACKET *a2)
{
  struct _NDIS_PACKET *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  ndisSendPacketsWithPause(a1, &v3, 1u);
  return 259LL;
}
