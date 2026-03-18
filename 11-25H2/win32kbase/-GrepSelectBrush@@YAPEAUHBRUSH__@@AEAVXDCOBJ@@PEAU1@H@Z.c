/*
 * XREFs of ?GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x14013FB30
 * Callers:
 *     <none>
 * Callees:
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     GreDCSelectBrush @ 0x14001CA90 (GreDCSelectBrush.c)
 */

__int64 __fastcall GrepSelectBrush(struct XDCOBJ *a1, struct HOBJ__ *a2, int a3)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*(_DWORD **)a1) + 8) & 0xFFFFFFFE) != 0 )
    return GreDCSelectBrush(*(_QWORD *)a1, a2);
  return v3;
}
