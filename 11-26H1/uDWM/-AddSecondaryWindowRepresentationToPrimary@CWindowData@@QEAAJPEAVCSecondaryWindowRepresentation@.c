/*
 * XREFs of ?AddSecondaryWindowRepresentationToPrimary@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@@Z @ 0x180028DC8
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180028C4C (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentationToPrimary(
        CWindowData *this,
        struct CSecondaryWindowRepresentation *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // edi
  int v9; // eax
  struct CSecondaryWindowRepresentation **v10; // [rsp+40h] [rbp+8h] BYREF
  struct CSecondaryWindowRepresentation *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (char *)this + 496;
  v5 = *((_DWORD *)this + 130);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v7 = 0;
    if ( v6 > *((_DWORD *)this + 129) )
    {
      v10 = &v11;
      v9 = DynArrayImpl<0>::Grow((__int64)this + 496, 8u, 1, a4, (unsigned __int64 *)&v10);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC2u, 0LL);
      else
        *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v4 + 6))++) + *(_QWORD *)v4) = *v10;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v4 + 8LL * v5) = a2;
      *((_DWORD *)this + 130) = v6;
    }
  }
  return v7;
}
