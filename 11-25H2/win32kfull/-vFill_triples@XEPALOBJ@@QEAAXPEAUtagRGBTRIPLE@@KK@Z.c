/*
 * XREFs of ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x14026D9A8
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vFill_triples(XEPALOBJ *this, struct tagRGBTRIPLE *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r8d
  __int64 v5; // r9
  BYTE *p_rgbtRed; // rdx
  __int64 v7; // r10
  int v8; // eax

  v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( a4 < v4 )
    v4 = a4;
  v5 = 0LL;
  if ( v4 )
  {
    p_rgbtRed = &a2->rgbtRed;
    v7 = v4;
    do
    {
      v8 = *(_DWORD *)(v5 + *(_QWORD *)(*(_QWORD *)this + 112LL));
      v5 += 4LL;
      *(p_rgbtRed - 2) = BYTE2(v8);
      *(p_rgbtRed - 1) = BYTE1(v8);
      *p_rgbtRed = v8;
      p_rgbtRed += 3;
      --v7;
    }
    while ( v7 );
  }
}
