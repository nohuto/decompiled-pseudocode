/*
 * XREFs of PfpRpControlRequest @ 0x140B02D24
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfpRpControlRequestVerify @ 0x1404F43A8 (PfpRpControlRequestVerify.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PfpRpControlRequestCopy @ 0x140B02DF8 (PfpRpControlRequestCopy.c)
 *     PfpRpControlRequestPerform @ 0x140B02FDC (PfpRpControlRequestPerform.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpControlRequest(__int64 a1, char a2)
{
  SIZE_T v3; // rdx
  int v4; // ebx
  __int128 v6; // [rsp+38h] [rbp-40h]
  __int128 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-20h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (stru_140E66B30.Padding[1] & 1) != 0 )
  {
    v3 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v3 < 0x18 )
    {
      return (unsigned int)-1073741306;
    }
    else
    {
      v4 = PfpRpControlRequestCopy(*(void **)(a1 + 16), v3, a2);
      if ( v4 >= 0 )
      {
        if ( (unsigned int)PfpRpControlRequestVerify(0LL) )
          return (unsigned int)-1073741701;
        else
          return (unsigned int)PfpRpControlRequestPerform(&stru_140E66B30.KernelShadowStack, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v4;
}
