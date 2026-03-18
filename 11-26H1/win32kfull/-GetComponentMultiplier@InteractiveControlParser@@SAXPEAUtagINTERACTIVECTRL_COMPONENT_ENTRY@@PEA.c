/*
 * XREFs of ?GetComponentMultiplier@InteractiveControlParser@@SAXPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@PEAJ1@Z @ 0x140301FDC
 * Callers:
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x140301B4C (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlParser::GetComponentMultiplier(
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY *a1,
        int *a2,
        int *a3)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax

  if ( !*((_DWORD *)a1 + 19) && !*((_DWORD *)a1 + 18) )
  {
    *((_DWORD *)a1 + 18) = *((_DWORD *)a1 + 16);
    *((_DWORD *)a1 + 19) = *((_DWORD *)a1 + 17);
  }
  *a2 = 1;
  *a3 = 1;
  v4 = *((_DWORD *)a1 + 14) & 0xF;
  v5 = v4 - 16;
  if ( v4 < 8 )
    v5 = v4;
  v6 = *((_DWORD *)a1 + 15);
  switch ( v6 )
  {
    case 17:
      v7 = 1000 * *a2;
LABEL_17:
      *a2 = v7;
      goto LABEL_18;
    case 19:
      v7 = 2540 * *a2;
      goto LABEL_17;
    case 18:
      v7 = 5730 * *a2;
      goto LABEL_17;
    case 20:
      v7 = 100 * *a2;
      goto LABEL_17;
  }
  if ( !v6 && *((_DWORD *)a1 + 4) == 3 )
  {
    v7 = 36000 * *a2;
    goto LABEL_17;
  }
LABEL_18:
  if ( v5 >= 0 )
  {
    if ( v5 > 0 )
    {
      v10 = *a2;
      do
      {
        --v5;
        v10 *= 10;
      }
      while ( v5 > 0 );
      *a2 = v10;
    }
  }
  else
  {
    v8 = *a3;
    v9 = (unsigned int)-v5;
    do
    {
      v8 *= 10;
      --v9;
    }
    while ( v9 );
    *a3 = v8;
  }
}
