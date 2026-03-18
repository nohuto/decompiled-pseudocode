/*
 * XREFs of ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x140301A84
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1403018BC (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInter.c)
 * Callees:
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x140302138 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceShapeDescriptor(struct InteractiveControlDevice *a1)
{
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v2; // rsi
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v3; // rdi
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v4; // rcx
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v5; // rbp
  int ScaledComponentValue; // eax
  __int16 v7; // cx

  *((_QWORD *)a1 + 26) = 1LL;
  *((_DWORD *)a1 + 54) = 0;
  if ( *((_DWORD *)a1 + 43) )
  {
    v2 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    v3 = (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)*((_QWORD *)a1 + 23);
    while ( v3 != v2 )
    {
      v4 = v3;
      v5 = v3;
      v3 = *(struct tagINTERACTIVECTRL_COMPONENT_ENTRY **)v3;
      if ( *((_DWORD *)v4 + 4) == 8 && *((_DWORD *)v4 + 25) )
      {
        ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v4, *((_DWORD *)v5 + 17));
        if ( *((_DWORD *)a1 + 43) == 1 )
        {
          *((_DWORD *)a1 + 55) = ScaledComponentValue;
          *((_DWORD *)a1 + 56) = ScaledComponentValue;
          return 0LL;
        }
        v7 = *((_WORD *)v5 + 40);
        if ( v7 == 72 )
        {
          *((_DWORD *)a1 + 55) = ScaledComponentValue;
        }
        else if ( v7 == 73 )
        {
          *((_DWORD *)a1 + 56) = ScaledComponentValue;
        }
      }
    }
  }
  else
  {
    *((_DWORD *)a1 + 55) = 5800;
    *((_DWORD *)a1 + 56) = 5800;
  }
  return 0LL;
}
