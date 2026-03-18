/*
 * XREFs of ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401917F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x140138E6C (-FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401BD260 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UD.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetBufferProperty(
        __int64 a1,
        DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  size_t v10; // rsi
  __int64 v11; // r15
  char *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  _DWORD *v16; // r14
  _DWORD *v17; // r13
  struct DirectComposition::CResourceMarshaler *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  DirectComposition::CResourceMarshaler **v21; // r14
  __int64 v22; // rcx
  void *v23; // rax
  void *v24; // r14
  int v26; // [rsp+70h] [rbp+18h]

  v6 = 0;
  *a6 = 0;
  if ( a3 == 15 )
  {
    if ( *(_QWORD *)(a1 + 192) )
      return (unsigned int)-1073741790;
    v22 = 20 * (Size / 0x14);
    if ( Size == v22 )
    {
      v23 = (void *)Win32AllocPoolWithQuotaImpl(v22, Size, 0x78654344u);
      v24 = v23;
      if ( v23 )
      {
        memmove(v23, a4, Size);
        *(_QWORD *)(a1 + 192) = v24;
        *(_DWORD *)(a1 + 200) = Size / 0x14;
        *a6 = 1;
        *(_DWORD *)(a1 + 16) &= ~0x1000u;
        return v6;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 16 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(a1, a2);
  if ( (Size & 0xF) != 0 )
    return (unsigned int)-1073741811;
  v10 = Size >> 4;
  v11 = (unsigned int)(Size >> 4);
  v12 = (char *)Win32AllocPoolWithQuotaImpl(a1, 24 * v11, 0x78654344u);
  if ( !v12 )
    return (unsigned int)-1073741801;
  v15 = 0;
  v26 = 0;
  v16 = v12 + 12;
  v17 = a4 + 2;
  while ( v15 < (unsigned int)v10 )
  {
    v18 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, *(v17 - 2));
    v13 = (__int64)v18;
    if ( !v18 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v18 + 9), 132) )
    {
      v6 = -1073741811;
      GreDeleteFastMutex(v12, v19, v13, v14);
      return v6;
    }
    *(_QWORD *)(v16 - 3) = v13;
    *(v16 - 1) = *(v17 - 1);
    *v16 = *v17;
    v20 = v17[1];
    v17 += 4;
    v16[1] = v20;
    v15 = ++v26;
    v16 += 6;
  }
  DirectComposition::CExpressionMarshaler::FreePersistentCache(
    (DirectComposition::CExpressionMarshaler *)a1,
    (struct _RTL_GENERIC_TABLE *)a2,
    v13,
    v14);
  if ( (_DWORD)v10 )
  {
    v21 = (DirectComposition::CResourceMarshaler **)v12;
    do
    {
      DirectComposition::CResourceMarshaler::AddRef(*v21);
      v21 += 3;
      --v11;
    }
    while ( v11 );
  }
  *(_QWORD *)(a1 + 160) = v12;
  *(_DWORD *)(a1 + 168) = v10;
  *(_DWORD *)(a1 + 172) = v10;
  return v6;
}
