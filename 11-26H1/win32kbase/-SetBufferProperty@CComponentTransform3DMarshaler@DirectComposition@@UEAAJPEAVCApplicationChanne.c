/*
 * XREFs of ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401963D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        size_t Size,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  size_t v13; // r8
  __int64 v14; // rax
  void *v15; // rcx

  v6 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    v13 = Size;
    if ( Size == 8 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x200u;
      v14 = 84LL;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v13 = Size;
    if ( Size == 12 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x100u;
      v14 = 72LL;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v13 = Size;
    if ( Size == 12 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x400u;
      v14 = 92LL;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v13 = Size;
    if ( Size == 16 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x800u;
      v14 = 104LL;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v13 = Size;
    if ( Size == 12 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x2000u;
      v14 = 120LL;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v13 = Size;
    if ( Size == 12 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x4000u;
      v14 = 136LL;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  if ( v12 != 1 )
    return (unsigned int)-1073741811;
  v13 = Size;
  if ( Size != 64 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 16) &= ~0x8000u;
  v14 = 148LL;
LABEL_22:
  v15 = (void *)(v14 + a1);
  if ( !v15 )
    return (unsigned int)-1073741811;
  memmove(v15, a4, v13);
  *a6 = 1;
  return v6;
}
