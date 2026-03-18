/*
 * XREFs of ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011B9D0
 * Callers:
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1402068D4 (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x140271168 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x1402927D8 (-CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 *     ?SetProductVersionInfo@@YAHXZ @ 0x1402B7908 (-SetProductVersionInfo@@YAHXZ.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1402B85DC (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // r9
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    if ( !a2 )
      return 3221225485LL;
    goto LABEL_12;
  }
  if ( a4 > 0x7FFFFFFE )
  {
LABEL_12:
    *(_WORD *)a1 = 0;
    return 3221225485LL;
  }
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
  result = 2147483653LL;
  if ( a2 )
    return 0LL;
  return result;
}
