/*
 * XREFs of ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140247440
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     memcpy_s @ 0x1401C9268 (memcpy_s.c)
 */

__int64 __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        rsize_t MaxCount,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  rsize_t v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  char *v14; // rcx
  void *v15; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 && (a4 || !MaxCount) )
  {
    v9 = MaxCount >> 3;
    if ( (unsigned int)(MaxCount >> 3) > *(_DWORD *)(a1 + 80) )
    {
      v13 = Win32AllocPoolWithQuotaImpl(a1, MaxCount, 0x687A4344u);
      if ( !v13 )
        return (unsigned int)-1073741801;
      v14 = *(char **)(a1 + 72);
      if ( v14 )
        GreDeleteFastMutex(v14, v10, v11, v12);
      *(_QWORD *)(a1 + 72) = v13;
    }
    v15 = *(void **)(a1 + 72);
    *(_QWORD *)(a1 + 80) = (unsigned int)v9;
    memcpy_s(v15, 8LL * (unsigned int)v9, a4, MaxCount);
    *a6 = 1;
    *(_DWORD *)(a1 + 16) |= 0x100u;
    return v6;
  }
  return (unsigned int)-1073741811;
}
