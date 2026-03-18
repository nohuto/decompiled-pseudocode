/*
 * XREFs of ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x140295140
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vFill_triples(XEPALOBJ *this, struct tagRGBTRIPLE *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r8
  BYTE *p_rgbtRed; // rdx
  __int64 v6; // r10
  int v7; // eax

  if ( a4 >= *(_DWORD *)(*(_QWORD *)this + 28LL) )
    a4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  v4 = 0LL;
  if ( a4 )
  {
    p_rgbtRed = &a2->rgbtRed;
    v6 = a4;
    do
    {
      v7 = *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 112LL));
      v4 += 4LL;
      *(p_rgbtRed - 2) = BYTE2(v7);
      *(p_rgbtRed - 1) = BYTE1(v7);
      *p_rgbtRed = v7;
      p_rgbtRed += 3;
      --v6;
    }
    while ( v6 );
  }
}
