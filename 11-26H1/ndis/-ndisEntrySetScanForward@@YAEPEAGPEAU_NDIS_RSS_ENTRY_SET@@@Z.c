/*
 * XREFs of ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1400AEE10
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400AF300 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisEntrySetScanForward(unsigned __int16 *a1, struct _NDIS_RSS_ENTRY_SET *a2)
{
  unsigned __int8 v2; // r9
  __int16 v4; // cx
  unsigned __int16 v6; // dx
  __int64 v7; // r8
  unsigned __int16 v8; // cx
  unsigned __int64 v9; // rax
  __int64 v11; // rcx
  unsigned __int16 v12; // dx
  unsigned __int8 result; // al

  v2 = 0;
  v4 = *a1;
  if ( v4 == -1 )
  {
    v6 = 0;
    v7 = -1LL;
  }
  else
  {
    v8 = v4 + 1;
    v6 = v8 >> 6;
    v7 = ~((1LL << v8) - 1);
  }
  while ( v6 < 2u )
  {
    v9 = *((_QWORD *)a2 + v6) & v7;
    v7 = -1LL;
    if ( _BitScanForward64((unsigned __int64 *)&v11, v9) )
    {
      v2 = 1;
      v12 = v11 + (v6 << 6);
      goto LABEL_9;
    }
    ++v6;
  }
  v12 = -1;
LABEL_9:
  result = v2;
  *a1 = v12;
  return result;
}
