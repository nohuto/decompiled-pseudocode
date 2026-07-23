/*
 * XREFs of ?RtlpGetSystemOverrideRva@@YA_NKEPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@PEAKK@Z @ 0x140A6BEF8
 * Callers:
 *     ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x140A6BDA0 (-RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV-$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0-.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpGetSystemOverrideRva(
        unsigned int a1,
        char a2,
        const struct _RTL_SYSTEM_OVERRIDE_INFORMATION *a3,
        unsigned int *a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v21; // ecx

  if ( a1 > 0x10040 )
  {
    switch ( a1 )
    {
      case 0x10041u:
        v8 = a2 != 0 ? 0xFFFFFFEA : 0;
        goto LABEL_71;
      case 0x10042u:
        v8 = a2 != 0 ? 0xFFFFFFEB : 0;
        goto LABEL_71;
      case 0x10043u:
        v8 = a2 != 0 ? 0xFFFFFFEC : 0;
        goto LABEL_71;
      case 0x10044u:
        v8 = a2 != 0 ? 0xFFFFFFED : 0;
        goto LABEL_71;
      case 0x10045u:
        v8 = a2 != 0 ? 0xFFFFFFEE : 0;
        goto LABEL_71;
      case 0x10046u:
        v8 = a2 != 0 ? 0xFFFFFFEF : 0;
        goto LABEL_71;
      case 0x10047u:
        v8 = a2 != 0 ? 0xFFFFFFF0 : 0;
        goto LABEL_71;
      case 0x10048u:
        v8 = a2 != 0 ? 0xFFFFFFF1 : 0;
        goto LABEL_71;
      case 0x10049u:
        v8 = a2 != 0 ? 0xFFFFFFF2 : 0;
        goto LABEL_71;
      case 0x1004Au:
        v8 = a2 != 0 ? 0xFFFFFFF3 : 0;
        goto LABEL_71;
      case 0x1004Bu:
        v8 = a2 != 0 ? 0xFFFFFFF4 : 0;
        goto LABEL_71;
      case 0x1004Cu:
        v8 = a2 != 0 ? 0xFFFFFFF5 : 0;
        goto LABEL_71;
      case 0x1004Du:
        v8 = a2 != 0 ? 0xFFFFFFF6 : 0;
        goto LABEL_71;
      case 0x1004Eu:
        v8 = a2 != 0 ? 0xFFFFFFF7 : 0;
        goto LABEL_71;
      case 0x1004Fu:
        v8 = a2 != 0 ? 0xFFFFFFF8 : 0;
        goto LABEL_71;
      case 0x10050u:
        v8 = a2 != 0 ? 0xFFFFFFF9 : 0;
        goto LABEL_71;
      case 0x10051u:
        v8 = a2 != 0 ? 0xFFFFFFFA : 0;
        goto LABEL_71;
      case 0x10052u:
        v8 = a2 != 0 ? 0xFFFFFFFB : 0;
        goto LABEL_71;
      case 0x10053u:
        v8 = a2 != 0 ? 0xFFFFFFFC : 0;
        goto LABEL_71;
      case 0x10054u:
        v8 = a2 != 0 ? 0xFFFFFFFD : 0;
        goto LABEL_71;
      case 0x10055u:
        v8 = a2 != 0 ? 0xFFFFFFFE : 0;
        goto LABEL_71;
      case 0x10056u:
        if ( !a2 )
          return 0;
        v9 = 52;
        break;
      default:
        return 0;
    }
    goto LABEL_76;
  }
  if ( a1 == 65600 )
  {
    v8 = a2 != 0 ? 0xFFFFFFE9 : 0;
    goto LABEL_71;
  }
  if ( a1 > 0x154 )
  {
    if ( a1 > 0x1001B )
    {
      v18 = a1 - 65564;
      if ( !v18 )
      {
        v9 = a2 != 0 ? 28 : 21;
        goto LABEL_72;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v9 = a2 != 0 ? 53 : 25;
        goto LABEL_72;
      }
      if ( v19 - 1 <= 1 )
      {
        v9 = a2 != 0 ? 53 : 27;
        goto LABEL_72;
      }
    }
    else
    {
      if ( a1 == 65563 )
      {
        v9 = a2 != 0 ? 29 : 23;
        goto LABEL_72;
      }
      v14 = a1 - 341;
      if ( !v14 )
      {
        v8 = a2 != 0 ? 0xFFFFFFDB : 0;
        goto LABEL_71;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        v8 = a2 != 0 ? 0xFFFFFFDC : 0;
        goto LABEL_71;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v8 = a2 != 0 ? 0xFFFFFFDD : 0;
        goto LABEL_71;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v8 = a2 != 0 ? 0xFFFFFFDE : 0;
        goto LABEL_71;
      }
      if ( v17 == 1 )
      {
        v8 = a2 != 0 ? 0xFFFFFFDF : 0;
        goto LABEL_71;
      }
    }
    return 0;
  }
  if ( a1 == 340 )
  {
    v8 = a2 != 0 ? 0xFFFFFFDA : 0;
    goto LABEL_71;
  }
  if ( a1 > 0x14E )
  {
    v10 = a1 - 335;
    if ( !v10 )
    {
      v8 = a2 != 0 ? 0xFFFFFFD5 : 0;
      goto LABEL_71;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v8 = a2 != 0 ? 0xFFFFFFD6 : 0;
      goto LABEL_71;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v8 = a2 != 0 ? 0xFFFFFFD7 : 0;
      goto LABEL_71;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v8 = a2 != 0 ? 0xFFFFFFD8 : 0;
      goto LABEL_71;
    }
    if ( v13 == 1 )
    {
      v8 = a2 != 0 ? 0xFFFFFFD9 : 0;
      goto LABEL_71;
    }
    return 0;
  }
  if ( a1 == 334 )
  {
    v8 = a2 != 0 ? 0xFFFFFFD4 : 0;
    goto LABEL_71;
  }
  v4 = a1 - 321;
  if ( !v4 )
  {
    v9 = a2 != 0 ? 5 : 2;
    goto LABEL_72;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = a2 != 0 ? 4 : 0;
    goto LABEL_72;
  }
  v6 = v5 - 9;
  if ( !v6 )
  {
    v8 = a2 != 0 ? 0xFFFFFFD1 : 0;
    goto LABEL_71;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = a2 != 0 ? 0xFFFFFFD2 : 0;
    goto LABEL_71;
  }
  if ( v7 != 1 )
    return 0;
  v8 = a2 != 0 ? 0xFFFFFFD3 : 0;
LABEL_71:
  v9 = v8 + 53;
LABEL_72:
  if ( v9 == 53 )
    return 0;
LABEL_76:
  v21 = *((_DWORD *)a3 + v9);
  if ( !v21 )
    return 0;
  *a4 = v21;
  return 1;
}
