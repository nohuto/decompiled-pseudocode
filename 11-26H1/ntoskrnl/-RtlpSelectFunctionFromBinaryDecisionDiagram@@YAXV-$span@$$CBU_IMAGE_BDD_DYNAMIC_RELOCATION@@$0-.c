/*
 * XREFs of ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x140A6BDA0
 * Callers:
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x140A6BBBC (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?RtlpGetSystemOverrideRva@@YA_NKEPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@PEAKK@Z @ 0x140A6BEF8 (-RtlpGetSystemOverrideRva@@YA_NKEPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@PEAKK@Z.c)
 */

__int64 __fastcall RtlpSelectFunctionFromBinaryDecisionDiagram(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int *a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        struct _RTL_SYSTEM_OVERRIDE_INFORMATION *a6,
        unsigned int a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 *v9; // rbp
  unsigned int v10; // r8d
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // eax
  unsigned __int16 v15; // ax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 result; // rax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+20h] [rbp-28h]
  unsigned __int64 v22; // [rsp+68h] [rbp+20h]

  v22 = a4;
  v7 = *(_QWORD *)a1;
  v9 = (unsigned __int64 *)a2;
  v10 = 0;
  v11 = a1;
  while ( 1 )
  {
    v12 = v10;
    if ( v10 >= v7 )
      goto LABEL_26;
    v13 = *(_QWORD *)(v11 + 8);
    v14 = *(unsigned __int16 *)(v13 + 8LL * v10);
    a1 = v13 + 8LL * v10;
    if ( !__PAIR32__(*(_WORD *)(a1 + 2), v14) )
    {
      v16 = *a3;
LABEL_9:
      v17 = 0;
      goto LABEL_18;
    }
    if ( v14 == v10 && *(unsigned __int16 *)(a1 + 2) == v10 )
    {
      a2 = *(unsigned int *)(v13 + 8LL * v10 + 4);
      if ( a2 >= *v9 )
      {
LABEL_26:
        gsl::details::terminate((gsl::details *)a1, a2);
        JUMPOUT(0x140A6BEEELL);
      }
      v16 = *(_DWORD *)(v9[1] + 4 * a2);
      goto LABEL_9;
    }
    a1 = *(unsigned int *)(v13 + 8LL * v10 + 4);
    if ( (unsigned int)a1 >= 0x161 )
      goto LABEL_6;
    a2 = a4 + 45;
    if ( !a5 )
      a2 = a4;
    if ( !a2 || !_bittest64((const signed __int64 *)a2, a1) )
    {
LABEL_6:
      v15 = *(_WORD *)(v13 + 8LL * v10);
      goto LABEL_7;
    }
    if ( !v10 && a6 )
      break;
LABEL_22:
    v15 = *(_WORD *)(v13 + 8 * v12 + 2);
LABEL_7:
    v10 = v15;
  }
  a7 = 0;
  if ( !RtlpGetSystemOverrideRva(a1, a5, a6, &a7, v21) )
  {
    a4 = v22;
    goto LABEL_22;
  }
  v16 = a7;
  v17 = 1;
LABEL_18:
  v18 = a3[3];
  if ( a5 )
  {
    a3[2] = v16;
    result = v18 & 0xFFFFFFFD | (2 * v17);
    a3[3] = result;
  }
  else
  {
    a3[1] = v16;
    v20 = v17 | v18 & 0xFFFFFFFE;
    result = (unsigned int)(4 * v17);
    a3[3] = result | v20 & 0xFFFFFFFB;
  }
  return result;
}
