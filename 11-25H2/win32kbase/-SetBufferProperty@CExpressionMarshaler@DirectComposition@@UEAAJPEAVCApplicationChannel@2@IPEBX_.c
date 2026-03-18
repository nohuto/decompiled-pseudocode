/*
 * XREFs of ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1401989E0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400EBF50 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1402368F0 (-FreePersistentCache@CExpressionMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetBufferProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  char *v12; // rbp
  _DWORD *v13; // r14
  struct DirectComposition::CApplicationChannel *v14; // r13
  _DWORD *v15; // r15
  struct DirectComposition::CResourceMarshaler *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  DirectComposition::CResourceMarshaler **v19; // r14
  __int64 v20; // rcx
  void *v21; // rax
  void *v22; // r14
  int v25; // [rsp+80h] [rbp+18h]

  v6 = 0;
  *a6 = 0;
  if ( a3 == 14 )
  {
    if ( *((_QWORD *)this + 23) )
      return (unsigned int)-1073741790;
    v20 = 20 * (Size / 0x14);
    if ( Size == v20 )
    {
      v21 = (void *)Win32AllocPoolWithQuotaImpl(v20, Size, 0x78654344u);
      v22 = v21;
      if ( v21 )
      {
        memmove(v21, a4, Size);
        *((_QWORD *)this + 23) = v22;
        *((_DWORD *)this + 48) = Size / 0x14;
        *a6 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
        return v6;
      }
      return (unsigned int)-1073741801;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 15 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(this, a2, a3, a4, Size, a6);
  if ( (Size & 0xF) != 0 )
    return (unsigned int)-1073741811;
  v9 = Size >> 4;
  v10 = (unsigned int)(Size >> 4);
  v11 = Win32AllocPoolWithQuotaImpl((__int64)this, 24 * v10, 0x78654344u);
  v12 = (char *)v11;
  if ( !v11 )
    return (unsigned int)-1073741801;
  v25 = 0;
  if ( (_DWORD)v9 )
  {
    v13 = a4 + 8;
    v14 = a2;
    v15 = (_DWORD *)(v11 + 12);
    while ( 1 )
    {
      v16 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, *(v13 - 2));
      if ( !v16 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v16 + 9), 156) )
        break;
      *(_QWORD *)(v15 - 3) = v17;
      *(v15 - 1) = *(v13 - 1);
      *v15 = *v13;
      v18 = v13[1];
      v13 += 4;
      v15[1] = v18;
      v15 += 6;
      if ( ++v25 >= (unsigned int)v9 )
        goto LABEL_14;
    }
    v6 = -1073741811;
    GreDeleteFastMutex(v12);
  }
  else
  {
    v14 = a2;
LABEL_14:
    DirectComposition::CExpressionMarshaler::FreePersistentCache(this, v14);
    if ( (_DWORD)v9 )
    {
      v19 = (DirectComposition::CResourceMarshaler **)v12;
      do
      {
        DirectComposition::CResourceMarshaler::AddRef(*v19);
        v19 += 3;
        --v10;
      }
      while ( v10 );
    }
    *((_QWORD *)this + 19) = v12;
    *((_DWORD *)this + 40) = v9;
    *((_DWORD *)this + 41) = v9;
  }
  return v6;
}
