/*
 * XREFs of ParseTokenData @ 0x1401378B0
 * Callers:
 *     ParseToken @ 0x1401375C4 (ParseToken.c)
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall ParseTokenData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v4; // edx
  unsigned int v5; // edi
  _QWORD *v7; // rcx
  unsigned int i; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx

  v2 = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = 0;
  if ( v4 + v2 > *(_DWORD *)(a1 + 8) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x24u,
        (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
        v2);
    return (unsigned int)-1073741435;
  }
  else
  {
    v7 = (_QWORD *)(a2 + 16);
    if ( v2 <= 8 )
    {
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 15) > 2 )
      {
        *v7 = 0LL;
        for ( i = 0; i < v2; v2 = *(_DWORD *)(a2 + 12) )
        {
          v9 = i;
          v10 = *(_DWORD *)(a1 + 12) - i++ + v2 - 1;
          *(_BYTE *)(v9 + a2 + 16) = *(_BYTE *)(v10 + *(_QWORD *)a1);
        }
      }
      else
      {
        *v7 = 0LL;
        memmove(v7, (const void *)(*(_QWORD *)a1 + *(unsigned int *)(a1 + 12)), *(unsigned int *)(a2 + 12));
      }
    }
    else
    {
      *v7 = *(_QWORD *)a1 + v4;
    }
    *(_DWORD *)(a1 + 12) += *(_DWORD *)(a2 + 12);
  }
  return v5;
}
