/*
 * XREFs of ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1401B96AC
 * Callers:
 *     GreGetDIBColorTable @ 0x1400A44D0 (GreGetDIBColorTable.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vFill_rgbquads(XEPALOBJ *this, struct tagRGBQUAD *a2, unsigned int a3, int a4)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // r10
  int v9; // ecx
  struct tagRGBQUAD v10; // [rsp+8h] [rbp+8h]

  v5 = *(_QWORD *)this;
  v6 = *(_DWORD *)(v5 + 24);
  if ( (v6 & 8) != 0 )
  {
    *a2 = (struct tagRGBQUAD)16711680;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)255;
  }
  else if ( (v6 & 2) != 0 && a4 == 3 )
  {
    *a2 = **(struct tagRGBQUAD **)(v5 + 112);
    a2[1] = *(struct tagRGBQUAD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL);
    a2[2] = *(struct tagRGBQUAD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL);
  }
  else if ( (v6 & 4) != 0 )
  {
    *a2 = (struct tagRGBQUAD)255;
    a2[1] = (struct tagRGBQUAD)65280;
    a2[2] = (struct tagRGBQUAD)16711680;
  }
  else
  {
    v7 = a3 + a4;
    if ( v7 >= *(_DWORD *)(v5 + 28) )
      v7 = *(_DWORD *)(v5 + 28);
    if ( a3 < v7 )
    {
      v10.rgbReserved = 0;
      v8 = 4LL * a3;
      do
      {
        ++a3;
        v9 = *(_DWORD *)(v8 + *(_QWORD *)(*(_QWORD *)this + 112LL));
        v10.rgbRed = v9;
        v8 += 4LL;
        v10.rgbBlue = BYTE2(v9);
        v10.rgbGreen = BYTE1(v9);
        *a2++ = v10;
      }
      while ( a3 < v7 );
    }
  }
}
