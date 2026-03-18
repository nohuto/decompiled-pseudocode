/*
 * XREFs of ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023C1C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@@Z @ 0x1401540CC (-AddAnimationTimeListEntry@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@.c)
 *     ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1401578FC (-EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        size_t Size,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  DirectComposition::CApplicationChannel *v8; // rsi
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // r8
  char *v15; // rsi
  size_t v16; // r15
  char *v17; // rax
  char *v18; // rcx
  DirectComposition::CAnimationMarshaler *v19; // rcx
  DirectComposition::CAnimationMarshaler *v20; // rcx
  __int64 v21; // rax

  v6 = 0;
  v8 = (DirectComposition::CApplicationChannel *)a2;
  *a6 = 0;
  v10 = a3 - 4;
  if ( !v10 )
  {
    if ( Size == 8 && !*(_QWORD *)(a1 + 128) )
    {
      *(_QWORD *)(a1 + 96) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( Size == 8 )
    {
      v21 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x40u;
      *(_QWORD *)(a1 + 104) = v21;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    if ( Size == 8 )
    {
      *(_QWORD *)(a1 + 144) = *a4;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v13 = v12 - 2;
  if ( !v13 )
  {
    if ( Size == 1 )
    {
      v20 = (DirectComposition::CAnimationMarshaler *)(a1 - 16);
      if ( (*((_BYTE *)v20 + 200) & 2) != 0 )
      {
        v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(v20);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 24LL) |= 8u;
        *(_BYTE *)(*(_QWORD *)(a1 + 64) + 28LL) = *(_BYTE *)a4;
        DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
          v8,
          *(struct DirectComposition::CAnimationTimeList **)(a1 + 64));
        *(_DWORD *)(a1 + 16) |= 0x4000u;
        goto LABEL_20;
      }
    }
    return (unsigned int)-1073741811;
  }
  v14 = (unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    if ( Size == 8 )
    {
      v19 = (DirectComposition::CAnimationMarshaler *)(a1 - 16);
      if ( (*((_BYTE *)v19 + 200) & 2) != 0 )
      {
        v6 = DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(v19);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 24LL) |= 0x10u;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) = *a4;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = 0LL;
        DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
          v8,
          *(struct DirectComposition::CAnimationTimeList **)(a1 + 64));
        *(_DWORD *)(a1 + 16) |= 0x8000u;
        goto LABEL_20;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( (_DWORD)v14 != 1 || (Size & 0xF) != 0 || (*(_BYTE *)(a1 + 184) & 2) == 0 )
    return (unsigned int)-1073741811;
  v15 = 0LL;
  LODWORD(v16) = 0;
  if ( !Size )
  {
LABEL_17:
    v18 = *(char **)(a1 + 216);
    if ( v18 )
    {
      GreDeleteFastMutex(v18, a2, v14, (__int64)a4);
      *(_DWORD *)(a1 + 16) |= 0x10000u;
    }
    *(_QWORD *)(a1 + 216) = v15;
    *(_DWORD *)(a1 + 224) = v16;
    *(_DWORD *)(a1 + 228) = 0;
LABEL_20:
    *a6 = 1;
    return v6;
  }
  v17 = (char *)Win32AllocPoolWithQuotaImpl(a1, Size, 0x65614344u);
  v15 = v17;
  if ( v17 )
  {
    memmove(v17, a4, Size);
    a2 = 1LL;
    v16 = Size >> 4;
    while ( (unsigned int)a2 < (unsigned int)v16 )
    {
      if ( *(_QWORD *)&v15[16 * (unsigned int)a2] < *(_QWORD *)&v15[16 * (unsigned int)(a2 - 1)] )
      {
        v6 = -1073741811;
        GreDeleteFastMutex(v15, a2, v14, (__int64)a4);
        return v6;
      }
      a2 = (unsigned int)(a2 + 1);
    }
    goto LABEL_17;
  }
  return (unsigned int)-1073741801;
}
