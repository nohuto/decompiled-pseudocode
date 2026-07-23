/*
 * XREFs of MiValidateStrongCodeDriverImage @ 0x140B22198
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateStrongCodeDriverImage(__int64 a1)
{
  unsigned int *v1; // rdx
  unsigned int *v2; // r10
  int v3; // eax
  int v4; // r8d
  __int64 v5; // r9

  v1 = (unsigned int *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
  v2 = &v1[10 * *(unsigned __int16 *)(a1 + 6)];
  while ( 1 )
  {
    if ( v1 >= v2 )
      return 0LL;
    v3 = v1[9];
    if ( (v3 & 0x20000000) != 0 )
    {
      v4 = v3 & 0x2000000;
      if ( v3 < 0 && !v4 )
      {
        *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 194;
        return 3221225595LL;
      }
      v5 = v1[4];
      if ( ((v5 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v1[2] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) && ((_DWORD)v5 || !v4) )
        break;
    }
    v1 += 10;
  }
  *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 196;
  return 3221225595LL;
}
