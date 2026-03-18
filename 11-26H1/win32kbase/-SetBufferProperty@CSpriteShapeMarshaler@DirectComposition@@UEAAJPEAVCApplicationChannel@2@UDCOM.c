/*
 * XREFs of ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023E630
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memcpy_s @ 0x1401C9268 (memcpy_s.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        rsize_t MaxCount)
{
  unsigned int v5; // ebx
  rsize_t v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  char *v13; // rcx
  void *v14; // rcx

  v5 = 0;
  if ( a3 == 9 && (a4 || !MaxCount) )
  {
    v8 = MaxCount >> 2;
    if ( (unsigned int)(MaxCount >> 2) > *(_DWORD *)(a1 + 96) )
    {
      v12 = Win32AllocPoolWithQuotaImpl(a1, MaxCount, 0x64734344u);
      if ( !v12 )
        return (unsigned int)-1073741801;
      v13 = *(char **)(a1 + 88);
      if ( v13 )
        GreDeleteFastMutex(v13, v9, v10, v11);
      *(_QWORD *)(a1 + 88) = v12;
    }
    v14 = *(void **)(a1 + 88);
    *(_QWORD *)(a1 + 96) = (unsigned int)v8;
    memcpy_s(v14, 4LL * (unsigned int)v8, a4, MaxCount);
    *(_DWORD *)(a1 + 16) |= 0x800u;
    return v5;
  }
  return (unsigned int)-1073741811;
}
