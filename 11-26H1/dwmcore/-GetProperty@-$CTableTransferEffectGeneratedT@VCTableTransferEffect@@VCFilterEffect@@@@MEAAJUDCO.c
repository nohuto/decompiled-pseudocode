/*
 * XREFs of ?GetProperty@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180285160
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // xmm6_4
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  char v17; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - 16;
  if ( (unsigned int)(a2 - 16) <= 0x3FF )
  {
    v5 = *(_QWORD *)(a1 + 360);
    v6 = v4;
    if ( v4 >= (unsigned __int64)((*(_QWORD *)(a1 + 368) - v5) >> 2) )
    {
      v7 = 13428LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    goto LABEL_14;
  }
  v9 = a2 - 1041;
  if ( (unsigned int)(a2 - 1041) <= 0x3FF )
  {
    v5 = *(_QWORD *)(a1 + 384);
    v6 = v9;
    if ( v9 >= (unsigned __int64)((*(_QWORD *)(a1 + 392) - v5) >> 2) )
    {
      v7 = 13435LL;
      goto LABEL_4;
    }
    goto LABEL_14;
  }
  v10 = a2 - 2066;
  if ( (unsigned int)(a2 - 2066) <= 0x3FF )
  {
    v5 = *(_QWORD *)(a1 + 408);
    v6 = v10;
    if ( v10 >= (unsigned __int64)((*(_QWORD *)(a1 + 416) - v5) >> 2) )
    {
      v7 = 13442LL;
      goto LABEL_4;
    }
    goto LABEL_14;
  }
  v11 = a2 - 3091;
  if ( (unsigned int)(a2 - 3091) <= 0x3FF )
  {
    v5 = *(_QWORD *)(a1 + 432);
    v6 = v11;
    if ( v11 >= (unsigned __int64)((*(_QWORD *)(a1 + 440) - v5) >> 2) )
    {
      v7 = 13449LL;
      goto LABEL_4;
    }
LABEL_14:
    v12 = *(_DWORD *)(v5 + 4 * v6);
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v12;
    *((_DWORD *)a3 + 16) = 18;
    return 0LL;
  }
  v13 = a2 - 10;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
            return 2147942487LL;
          v17 = *(_BYTE *)(a1 + 356);
        }
        else
        {
          v17 = *(_BYTE *)(a1 + 355);
        }
      }
      else
      {
        v17 = *(_BYTE *)(a1 + 354);
      }
    }
    else
    {
      v17 = *(_BYTE *)(a1 + 353);
    }
  }
  else
  {
    v17 = *(_BYTE *)(a1 + 352);
  }
  CExpressionValue::DestroyCurrent(a3);
  *((_DWORD *)a3 + 16) = 17;
  *(_BYTE *)a3 = v17;
  return 0LL;
}
