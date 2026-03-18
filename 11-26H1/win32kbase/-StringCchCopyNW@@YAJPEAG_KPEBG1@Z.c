/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1400FC330
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreMultiUserInitSession @ 0x1400FC220 (GreMultiUserInitSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // r9
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    if ( !a2 )
      return 2147942487LL;
LABEL_13:
    *(_WORD *)a1 = 0;
    return 2147942487LL;
  }
  if ( a4 > 0x7FFFFFFE )
    goto LABEL_13;
  v4 = a4 - a2;
  v5 = a3 - a1;
  do
  {
    if ( !(v4 + a2) )
      break;
    v6 = *(_WORD *)&a1[v5];
    if ( !v6 )
      break;
    *(_WORD *)a1 = v6;
    a1 += 2;
    --a2;
  }
  while ( a2 );
  v7 = (unsigned __int16 *)(a1 - 2);
  if ( a2 )
    v7 = (unsigned __int16 *)a1;
  *v7 = 0;
  result = 2147942522LL;
  if ( a2 )
    return 0LL;
  return result;
}
