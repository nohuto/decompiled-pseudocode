/*
 * XREFs of HUBHSM_WritingUsb4DromMetaData @ 0x14000A730
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     FWUPDATE_SetMMIO @ 0x14004293C (FWUPDATE_SetMMIO.c)
 */

__int64 __fastcall HUBHSM_WritingUsb4DromMetaData(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int v2; // ecx

  v1 = *(_DWORD **)(a1 + 960);
  v2 = v1[674] - v1[678];
  if ( v2 > 0x10 )
    LOBYTE(v2) = 16;
  v1[681] = 4 * (v1[678] & 0x1FFF | ((v2 & 0x1F) << 13));
  if ( (int)FWUPDATE_SetMMIO(v1) < 0 )
    HUBSM_AddEvent(v1 + 320, 2004LL);
  return 1000LL;
}
