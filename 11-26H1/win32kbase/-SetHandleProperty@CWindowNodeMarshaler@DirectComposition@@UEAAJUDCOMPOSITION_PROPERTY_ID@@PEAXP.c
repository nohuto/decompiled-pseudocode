/*
 * XREFs of ?SetHandleProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x1402368D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CWindowNodeMarshaler::SetHandleProperty(
        __int64 a1,
        int a2,
        __int64 a3,
        _BYTE *a4)
{
  int v4; // ebx
  _BYTE *v5; // rsi
  void *v7; // rcx
  void *v8; // rax
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = a4;
  if ( a2 == 56 )
  {
    v7 = 0LL;
    v10 = 0LL;
    if ( a3 )
    {
      LOBYTE(a4) = 1;
      v4 = DxgkReferenceCompositionObject(a3, 1LL, 1LL, a4, &v10);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v7 = v10;
    }
    v8 = *(void **)(a1 + 416);
    if ( v8 == v7 )
    {
      if ( v7 )
        DxgkReleaseCompositionObjectReference(v7);
    }
    else
    {
      if ( v8 )
      {
        DxgkReleaseCompositionObjectReference(*(void **)(a1 + 416));
        v7 = v10;
      }
      *(_DWORD *)(a1 + 336) |= 0x20u;
      *(_QWORD *)(a1 + 416) = v7;
      *v5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
