/*
 * XREFs of ?SetBufferProperty@CCompositionMipmapSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140246F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140137620 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned __int64 a6)
{
  _BYTE *v6; // r15
  int v8; // ebx
  int v9; // r8d
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v19; // rax

  v6 = (_BYTE *)a6;
  v8 = 0;
  *(_BYTE *)a6 = 0;
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( a5 == 16 )
    {
      v19 = *(unsigned int *)(a1 + 64);
      if ( (unsigned int)v19 < *(_DWORD *)(a1 + 76) )
      {
        *(_DWORD *)(a1 + 16) |= 0x80u;
        *(_OWORD *)(*(_QWORD *)(a1 + 56) + 24 * v19 + 8) = *(_OWORD *)a4;
        *v6 = 1;
        *(_DWORD *)(a1 + 88) |= 1 << *(_BYTE *)(a1 + 64);
        return (unsigned int)v8;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 20 )
    return (unsigned int)-1073741811;
  v10 = *a4;
  v11 = a4[1];
  v12 = a4[2];
  v13 = a4[3];
  v14 = a4[4];
  if ( !*a4 || !v11 || v12 - 1 > 0xE )
    return (unsigned int)-1073741811;
  v15 = *a4;
  if ( v10 <= v11 )
    v15 = a4[1];
  if ( v15 < 1 << (v12 - 1) )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 68)
    || *(_DWORD *)(a1 + 72)
    || *(_DWORD *)(a1 + 76)
    || *(_DWORD *)(a1 + 84)
    || *(_DWORD *)(a1 + 80)
    || *(_QWORD *)(a1 + 56) )
  {
    return 3221225485LL;
  }
  a6 = 0LL;
  v8 = RtlULongLongMult(v12, 0x18uLL, &a6);
  if ( v8 >= 0 )
  {
    v17 = Win32AllocPoolWithQuotaZInitImpl(v16, a6, 0x6D6D4344u);
    if ( v17 )
    {
      *(_DWORD *)(a1 + 68) = v10;
      *(_DWORD *)(a1 + 72) = v11;
      *(_DWORD *)(a1 + 76) = v12;
      *(_DWORD *)(a1 + 84) = v14;
      *(_DWORD *)(a1 + 80) = v13;
      *(_QWORD *)(a1 + 56) = v17;
      *(_DWORD *)(a1 + 88) = 0;
      *v6 = 1;
      *(_DWORD *)(a1 + 16) |= 0x40u;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
