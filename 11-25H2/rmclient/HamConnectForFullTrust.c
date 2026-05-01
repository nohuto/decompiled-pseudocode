/*
 * XREFs of HamConnectForFullTrust @ 0x18001A6C0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionCreate @ 0x180004470 (HampConnectionCreate.c)
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 */

__int64 __fastcall HamConnectForFullTrust(unsigned __int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v6 = a1;
    v3 = HampConnectionCreate(&v6, &unk_18001E960, 0, 0LL, &v7);
    if ( v3 < 0 )
    {
      v4 = v7;
    }
    else
    {
      v4 = 0LL;
      *a2 = v7;
      v3 = 0;
    }
    if ( v4 )
      HampConnectionDestroy(v4);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v3;
}
