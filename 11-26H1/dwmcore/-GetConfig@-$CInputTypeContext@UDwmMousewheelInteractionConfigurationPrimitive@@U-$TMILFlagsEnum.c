/*
 * XREFs of ?GetConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA?AUDwmMousewheelInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801C5DF8
 * Callers:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801C59F4 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmMousewheelInteractionConfigurati.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::GetConfig(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v6; // eax
  __int64 i; // rdx
  __int64 v9; // r9
  int v10; // ecx
  _DWORD *v11; // r8
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // eax

  *a2 = a3;
  a2[1] = a3;
  a2[2] = 0;
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 112); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(a1 + 88);
      if ( a3 < *(_DWORD *)(v9 + 12 * i) )
        break;
      if ( a3 <= *(_DWORD *)(v9 + 12 * i + 4) )
      {
        v14 = *(_DWORD *)(v9 + 12 * i + 8);
        *(_QWORD *)a2 = *(_QWORD *)(v9 + 12 * i);
        a2[2] = v14;
        break;
      }
    }
    v10 = 0;
    v11 = (_DWORD *)(a4 + 4);
    v12 = 0;
    v13 = 3LL;
    do
    {
      if ( *((_BYTE *)v11 - 4) )
      {
        v10 |= *v11 & v11[1];
        v12 |= v11[1];
      }
      v11 += 3;
      --v13;
    }
    while ( v13 );
    a2[2] = v10 & v12 | a2[2] & ~v12;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 8);
    a2[2] = v6;
  }
  return a2;
}
