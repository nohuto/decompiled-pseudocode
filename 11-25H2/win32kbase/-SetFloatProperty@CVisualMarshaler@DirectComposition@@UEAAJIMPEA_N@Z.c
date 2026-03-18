/*
 * XREFs of ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1400CD770
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140228AC0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComp.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140105310 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v7; // edx
  bool v8; // al
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  bool v12; // al
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  unsigned int v16; // r10d
  int v18; // r9d
  float v19; // xmm1_4
  bool v20; // zf

  v4 = 0;
  if ( a2 > 0x20 )
  {
    switch ( a2 )
    {
      case '!':
        v7 = 0x1000000;
        if ( *((float *)this + 24) != a3 )
        {
          *((float *)this + 24) = a3;
          goto LABEL_32;
        }
        goto LABEL_11;
      case '"':
        v7 = 0x1000000;
        if ( *((float *)this + 25) != a3 )
        {
          *((float *)this + 25) = a3;
          goto LABEL_32;
        }
        goto LABEL_11;
      case '#':
        v7 = 0x2000000;
        if ( *((float *)this + 26) != a3 )
        {
          *((float *)this + 26) = a3;
          goto LABEL_32;
        }
        goto LABEL_11;
      case '$':
        v7 = 0x2000000;
        if ( *((float *)this + 27) != a3 )
        {
          *((float *)this + 27) = a3;
          goto LABEL_32;
        }
        goto LABEL_11;
      case ',':
        v7 = 0x20000000;
        if ( *((float *)this + 29) != a3 )
        {
          *((float *)this + 29) = a3;
          goto LABEL_32;
        }
        goto LABEL_11;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case 0x20u:
      v7 = 0x1000000;
      if ( *((float *)this + 23) != a3 )
      {
        *((float *)this + 23) = a3;
        goto LABEL_32;
      }
      goto LABEL_11;
    case 1u:
      v7 = 128;
      if ( *((float *)this + 18) != a3 )
      {
        *((float *)this + 18) = a3;
        goto LABEL_32;
      }
      goto LABEL_11;
    case 2u:
      v7 = 128;
      if ( *((float *)this + 19) != a3 )
      {
        *((float *)this + 19) = a3;
        goto LABEL_32;
      }
      goto LABEL_11;
    case 3u:
      v7 = 128;
      if ( *((float *)this + 20) != a3 )
      {
        *((float *)this + 20) = a3;
        goto LABEL_32;
      }
      goto LABEL_11;
  }
  if ( a2 != 24 )
  {
    if ( a2 == 25 )
    {
      v7 = 0x200000;
      if ( *((float *)this + 22) != a3 )
      {
        *((float *)this + 22) = a3;
LABEL_32:
        v8 = 1;
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    if ( a2 == 26 )
    {
      v7 = 0x400000;
      v19 = fminf(1.0, fmaxf(a3, 0.0));
      if ( *((float *)this + 28) != v19 )
      {
        *((float *)this + 28) = v19;
        goto LABEL_32;
      }
      goto LABEL_11;
    }
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v7 = 0x200000;
  if ( *((float *)this + 21) != a3 )
  {
    *((float *)this + 21) = a3;
    goto LABEL_32;
  }
LABEL_11:
  v8 = 0;
LABEL_12:
  *a4 = v8;
  v9 = 0LL;
  v10 = *((_QWORD *)this + 5);
  v11 = 0LL;
  while ( v10 )
  {
    if ( *(_DWORD *)(v10 + 12) != a2 )
      goto LABEL_28;
    v18 = *(_DWORD *)(v10 + 8);
    if ( (v18 & 1) != 0 )
      goto LABEL_41;
    if ( (v18 & 2) != 0 )
    {
      v9 = v10;
      v20 = v11 == 0;
    }
    else
    {
      if ( (v18 & 4) == 0 )
        goto LABEL_28;
      v11 = v10;
      v20 = v9 == 0;
    }
    if ( !v20 )
      goto LABEL_41;
LABEL_28:
    v10 = *(_QWORD *)(v10 + 32);
  }
  if ( !v9 )
  {
    v12 = *a4;
    goto LABEL_16;
  }
LABEL_41:
  *a4 = 1;
  v12 = 1;
LABEL_16:
  v13 = a2 - 1;
  if ( !v13 || (v14 = v13 - 1) == 0 || (v15 = v14 - 1) == 0 || (v16 = v15 - 21) == 0 || v16 - 1 <= 1 )
  {
    *a4 = 1;
    goto LABEL_23;
  }
  if ( v12 )
LABEL_23:
    *((_DWORD *)this + 4) |= v7;
  return v4;
}
