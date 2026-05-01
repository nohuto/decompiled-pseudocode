/*
 * XREFs of ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18005A320
 * Callers:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180065F5C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  signed __int64 v4; // r10
  unsigned __int64 v5; // r9
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v4 = a3 - a1;
    v5 = 2147483646 - v3;
    do
    {
      if ( !(v5 + v3) )
        break;
      v6 = *(_WORD *)&a1[v4];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v7 = (unsigned __int16 *)a1;
    *v7 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  else
  {
    result = 3221225485LL;
    if ( v3 )
      *(_WORD *)a1 = 0;
  }
  return result;
}
