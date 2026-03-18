/*
 * XREFs of ?SetProperty@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180284660
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180022630 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVerticalAlignment@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA1C8 (-SetVerticalAlignment@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetHorizontalAlignment@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z @ 0x18021F004 (-SetHorizontalAlignment@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetSnapToPixels@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024E948 (-SetSnapToPixels@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z.c)
 *     ?SetSuperDownSample@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024EA8C (-SetSuperDownSample@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetProperty(__int64 a1, int a2, int a3, char *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v8; // rdx
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v4 = a2 - 4;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 4;
        if ( v6 )
        {
          if ( v6 != 1 )
            return 2147942487LL;
          if ( a3 != 17 )
          {
            v8 = 12508LL;
LABEL_25:
            v9 = -2147024809;
            goto LABEL_26;
          }
          v9 = CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetSuperDownSample(a1, *a4);
          if ( v9 < 0 )
          {
            v8 = 12509LL;
LABEL_26:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v8,
              (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
              (const char *)(unsigned int)v9);
            return (unsigned int)v9;
          }
        }
        else
        {
          if ( a3 != 17 )
          {
            v8 = 12503LL;
            goto LABEL_25;
          }
          v9 = CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetSnapToPixels(a1, *a4);
          if ( v9 < 0 )
          {
            v8 = 12504LL;
            goto LABEL_26;
          }
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v8 = 12498LL;
          goto LABEL_25;
        }
        v9 = CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetVerticalAlignment((float *)a1, *(float *)a4);
        if ( v9 < 0 )
        {
          v8 = 12499LL;
          goto LABEL_26;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v8 = 12493LL;
        goto LABEL_25;
      }
      v9 = CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetHorizontalAlignment((float *)a1, *(float *)a4);
      if ( v9 < 0 )
      {
        v8 = 12494LL;
        goto LABEL_26;
      }
    }
  }
  else
  {
    if ( a3 != 17 )
    {
      v8 = 12488LL;
      goto LABEL_25;
    }
    if ( *a4 != *(_BYTE *)(a1 + 104) )
    {
      *(_BYTE *)(a1 + 104) = *a4;
      CBrush::NotifyOnChanged(a1, 0, a1);
    }
  }
  return 0LL;
}
