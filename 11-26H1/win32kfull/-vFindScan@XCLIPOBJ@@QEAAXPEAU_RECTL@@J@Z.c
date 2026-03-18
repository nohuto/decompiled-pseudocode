/*
 * XREFs of ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464
 * Callers:
 *     ?vPlgWrite32@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A9170 (-vPlgWrite32@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400E3100 (-vStrWrite01@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14018A230 (-vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1401AAFB0 (-vPlgWrite24@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite04@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1401BD660 (-vStrWrite04@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1401C2C60 (-vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140221D60 (-vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140338310 (-vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite16@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140341C80 (-vPlgWrite16@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140341E90 (-vPlgWrite1@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140342230 (-vPlgWrite4@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1403425D0 (-vPlgWrite8@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140342860 (-vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140342C00 (-vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vFindScan(XCLIPOBJ *this, struct _RECTL *a2, LONG a3)
{
  _DWORD *v5; // rdx
  LONG v6; // r11d
  LONG v7; // eax
  LONG v8; // ecx
  LONG v9; // eax
  LONG v10; // r11d
  LONG v11; // eax
  LONG v12; // ecx
  LONG v13; // eax

  a2->left = a2->right;
  if ( a3 == 0x7FFFFFFF )
  {
    a2->top = 0x7FFFFFFF;
    a2->bottom = 0x7FFFFFFF;
    return;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 10);
  if ( a3 >= v5[1] )
  {
    if ( a3 < v5[2] )
      return;
    do
    {
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      *((_QWORD *)this + 10) = v5;
      v6 = v5[2];
    }
    while ( a3 >= v6 );
    v7 = *((_DWORD *)this + 2);
    v8 = v5[1];
    if ( v8 <= v7 )
      v8 = v7;
    v9 = *((_DWORD *)this + 4);
    a2->top = v8;
    if ( v6 >= v9 )
      v6 = v9;
    a2->bottom = v6;
    if ( v8 >= v6 )
    {
      a2->bottom = 0x7FFFFFFF;
    }
    else if ( v6 != 0x7FFFFFFF )
    {
      return;
    }
    a2->top = 0x7FFFFFFF;
    return;
  }
  do
  {
    v5 = (_DWORD *)((char *)v5 - (unsigned int)(4 * *(v5 - 1) + 16));
    *((_QWORD *)this + 10) = v5;
    v10 = v5[1];
  }
  while ( a3 < v10 );
  v11 = *((_DWORD *)this + 2);
  v12 = v5[2];
  if ( v10 <= v11 )
    v10 = v11;
  v13 = *((_DWORD *)this + 4);
  a2->top = v10;
  if ( v12 >= v13 )
    v12 = v13;
  a2->bottom = v12;
  if ( v10 >= v12 )
  {
    a2->top = 0x80000000;
LABEL_23:
    a2->bottom = 0x80000000;
    return;
  }
  if ( v10 == 0x80000000 )
    goto LABEL_23;
}
