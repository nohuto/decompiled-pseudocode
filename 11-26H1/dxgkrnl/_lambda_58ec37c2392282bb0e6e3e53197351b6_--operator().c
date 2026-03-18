/*
 * XREFs of _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x14026B94C
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()(CCD_TOPOLOGY **a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d

  result = (__int64)CCD_TOPOLOGY::GetPathDescriptor(*a1, a3);
  if ( _bittest64((const signed __int64 *)a2, 0x32u)
    && (*(_QWORD *)result & 0x4000000000000LL) != 0
    && *(_DWORD *)(a2 + 184) == *(_DWORD *)(result + 184)
    && (*(_QWORD *)result & 0x20000LL) != 0 )
  {
    v5 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*(_DWORD *)(result + 132));
    if ( v5 == 1 || v5 == 3 )
    {
      v8 = *(_DWORD *)(v6 + 152);
      result = *(unsigned int *)(v6 + 156);
    }
    else
    {
      v8 = *(_DWORD *)(v6 + 156);
      result = *(unsigned int *)(v6 + 152);
    }
    if ( (v9 = *(_DWORD *)(v6 + 96), v8 > v9)
      || (v10 = *(_DWORD *)(v6 + 100), (unsigned int)result > v10)
      || (v8 != v9 || (_DWORD)result != v10 ? (result = 0xFFFFFFFFLL) : (result = 0LL),
          (v7 & 0x400) == 0 && (int)result < 0) )
    {
      *(_QWORD *)v6 = v7 & 0xFFFFFFFFFF7DFE78uLL;
    }
  }
  return result;
}
