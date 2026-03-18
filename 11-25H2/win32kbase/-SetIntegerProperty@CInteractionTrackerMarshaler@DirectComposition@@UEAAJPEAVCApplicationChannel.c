/*
 * XREFs of ?SetIntegerProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x14011E960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d

  v5 = 0;
  if ( a3 == 19 )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    *((_DWORD *)this + 36) = a4;
    goto LABEL_9;
  }
  if ( a3 > 0x13 )
  {
    switch ( a3 )
    {
      case 0x20u:
        *((_DWORD *)this + 4) &= ~0x20000u;
        *((_DWORD *)this + 43) = a4;
        goto LABEL_9;
      case 0x16u:
        if ( *((_DWORD *)this + 50) != a4 )
        {
          *((_DWORD *)this + 4) &= ~0x1000u;
          *((_DWORD *)this + 50) = a4;
          *a5 = 1;
        }
        return v5;
      case 0x22u:
        *((_BYTE *)this + 456) &= ~2u;
        *((_DWORD *)this + 4) &= ~0x40000u;
        *((_DWORD *)this + 44) = a4;
        goto LABEL_9;
      case 0x2Fu:
        *((_DWORD *)this + 4) &= ~0x40u;
        *((_DWORD *)this + 21) = a4;
        goto LABEL_9;
      case 0x33u:
        *((_DWORD *)this + 4) &= ~0x80u;
        *((_DWORD *)this + 25) = a4;
        goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  v6 = a3 - 10;
  if ( !v6 )
  {
    if ( a4 <= 1 )
    {
      if ( *((_DWORD *)this + 51) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 51) = a4;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( !v9 )
    {
      *((_DWORD *)this + 32) = a4;
      goto LABEL_8;
    }
    v10 = v9 - 4;
    if ( v10 )
    {
      if ( v10 != 1 )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 35) = a4;
    }
    else
    {
      if ( a4 > 1 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 52) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 52) = a4;
    }
    *((_DWORD *)this + 4) &= ~0x100u;
    goto LABEL_9;
  }
  if ( a4 > 1 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 53) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 53) = a4;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x200u;
LABEL_9:
    *a5 = 1;
  }
  return v5;
}
