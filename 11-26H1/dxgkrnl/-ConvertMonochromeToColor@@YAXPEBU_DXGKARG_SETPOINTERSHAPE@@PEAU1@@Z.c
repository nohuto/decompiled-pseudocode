/*
 * XREFs of ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1403B39BC
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMonochromeToColor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2)
{
  UINT Pitch; // esi
  UINT Width; // edx
  __int64 v5; // rbp
  UINT v6; // r10d
  _BYTE *pPixels; // r14
  char *v9; // rbp
  UINT v10; // eax
  UINT i; // edi
  unsigned int v12; // r8d
  __int64 v13; // rcx

  Pitch = a1->Pitch;
  Width = a1->Width;
  v5 = a1->Height * Pitch;
  v6 = 0;
  pPixels = a1->pPixels;
  a2->Width = Width;
  a2->Height = a1->Height;
  a2->Pitch = 4 * Width;
  v9 = &pPixels[v5];
  a2->Flags.Value = 4;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  a2->VidPnSourceId = a1->VidPnSourceId;
  if ( a1->Height )
  {
    v10 = a1->Width;
    do
    {
      for ( i = 0; i < v10; v10 = a1->Width )
      {
        v12 = (((unsigned __int8)(128 >> (i & 7)) & pPixels[Pitch * v6 + (i >> 3)]) != 0 ? 0xFF000000 : 0) | (((unsigned __int8)(128 >> (i & 7)) & (unsigned __int8)v9[Pitch * v6 + (i >> 3)]) != 0 ? 0xFFFFFF : 0);
        v13 = 4 * i++;
        *(_DWORD *)((char *)a2->pPixels + v13 + a2->Pitch * v6) = v12;
      }
      ++v6;
    }
    while ( v6 < a1->Height );
  }
}
