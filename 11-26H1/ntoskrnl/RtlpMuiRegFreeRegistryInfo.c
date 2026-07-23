/*
 * XREFs of RtlpMuiRegFreeRegistryInfo @ 0x1408AE700
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140724660 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1408AE700 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408AF5D8 (RtlpMuiRegLoadRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1408B00B4 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x1408AE700 (RtlpMuiRegFreeRegistryInfo.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegFreeRegistryInfo(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rcx
  void *v21; // rcx

  v2 = 0;
  if ( a1 && a2 )
  {
    v4 = 4095;
    if ( (a2 & 0x400) == 0 )
      v4 = a2;
    if ( (v4 & 1) != 0 )
    {
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
        if ( (*(_DWORD *)a1 & 1) != 0 )
          ExFreePoolWithTag(v5, 0);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
      *(_DWORD *)a1 &= ~1u;
    }
    if ( (v4 & 2) != 0 )
    {
      v6 = *(void **)(a1 + 32);
      if ( v6 )
      {
        if ( (*(_DWORD *)a1 & 2) != 0 )
          ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      *(_DWORD *)a1 &= ~2u;
    }
    if ( (v4 & 4) != 0 )
    {
      v7 = *(void **)(a1 + 40);
      if ( v7 )
      {
        if ( (*(_DWORD *)a1 & 4) != 0 )
          ExFreePoolWithTag(v7, 0);
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      *(_DWORD *)a1 &= ~4u;
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = *(void **)(a1 + 48);
      if ( v8 )
      {
        if ( (*(_DWORD *)a1 & 8) != 0 )
          ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      *(_DWORD *)a1 &= ~8u;
    }
    if ( (v4 & 0x10) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( v9 )
      {
        if ( (*(_DWORD *)a1 & 0x10) != 0 )
        {
          *(_DWORD *)(v9 + 40) &= ~0x40u;
          v10 = *(_DWORD **)(a1 + 56);
          if ( v10 )
          {
            if ( (v10[10] & 0x40) == 0 )
              ExFreePoolWithTag(v10, 0);
          }
        }
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x10u;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        if ( (*(_DWORD *)a1 & 0x20) != 0 )
        {
          *(_DWORD *)(v11 + 40) &= ~0x40u;
          v12 = *(_DWORD **)(a1 + 64);
          if ( v12 )
          {
            if ( (v12[10] & 0x40) == 0 )
              ExFreePoolWithTag(v12, 0);
          }
        }
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x20u;
    }
    if ( (v4 & 0x40) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 88);
      if ( v13 )
      {
        if ( (*(_DWORD *)a1 & 0x40) != 0 )
        {
          *(_DWORD *)(v13 + 40) &= ~0x40u;
          v14 = *(_DWORD **)(a1 + 88);
          if ( v14 )
          {
            if ( (v14[10] & 0x40) == 0 )
              ExFreePoolWithTag(v14, 0);
          }
        }
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x40u;
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 80);
      if ( v15 )
      {
        if ( (*(_DWORD *)a1 & 0x80u) != 0 )
        {
          *(_DWORD *)(v15 + 40) &= ~0x40u;
          v16 = *(_DWORD **)(a1 + 80);
          if ( v16 )
          {
            if ( (v16[10] & 0x40) == 0 )
              ExFreePoolWithTag(v16, 0);
          }
        }
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x80u;
    }
    if ( (v4 & 0x200) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 96);
      if ( v17 )
      {
        if ( _bittest((const signed __int32 *)a1, 9u) )
        {
          *(_DWORD *)(v17 + 40) &= ~0x40u;
          v18 = *(_DWORD **)(a1 + 96);
          if ( v18 )
          {
            if ( (v18[10] & 0x40) == 0 )
              ExFreePoolWithTag(v18, 0);
          }
        }
        *(_QWORD *)(a1 + 96) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x200u;
    }
    if ( (v4 & 0x800) != 0 )
    {
      v19 = *(void **)(a1 + 136);
      if ( v19 )
      {
        if ( _bittest((const signed __int32 *)a1, 0xBu) )
          ExFreePoolWithTag(v19, 0);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x800u;
    }
    if ( (v4 & 0xFFF) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 104);
      if ( v20 )
      {
        RtlpMuiRegFreeRegistryInfo(v20, v4);
        v21 = *(void **)(a1 + 104);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
