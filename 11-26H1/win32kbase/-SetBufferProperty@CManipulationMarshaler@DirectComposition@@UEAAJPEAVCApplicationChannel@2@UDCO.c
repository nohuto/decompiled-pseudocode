/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023D660
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140162F80 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x14023D570 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        _DWORD *a1,
        DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        size_t Size,
        struct DirectComposition::CWeakReferenceBase *a6)
{
  unsigned int v9; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rax
  struct DirectComposition::CResourceMarshaler *v14; // r9

  v9 = 0;
  *(_BYTE *)a6 = 0;
  v10 = a3 - 7;
  if ( v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      if ( v11 == 1 && Size == 8 )
      {
        v12 = a4[1];
        v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v12);
        if ( v13 )
        {
          if ( DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v13 + 9), 34) )
            return (unsigned int)DirectComposition::CManipulationMarshaler::SetSourceModifier(
                                   (__int64)a1,
                                   (struct _RTL_GENERIC_TABLE *)a2,
                                   *a4,
                                   v14,
                                   a6);
        }
        else if ( !v12 )
        {
          return v9;
        }
      }
    }
    else if ( Size - 3 <= 0x7C && *(_WORD *)a4 )
    {
      memmove(a1 + 38, a4, Size);
      a1[37] = Size;
      *((_WORD *)a1 + (Size >> 1) + 76) = 0;
      *(_BYTE *)a6 = 1;
      a1[4] |= 0x200u;
      return v9;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 || Size != 128 )
    return (unsigned int)-1073741811;
  v9 = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)(a1 + 32), a4);
  if ( (v9 & 0x80000000) == 0 )
    *(_BYTE *)a6 = 1;
  return v9;
}
