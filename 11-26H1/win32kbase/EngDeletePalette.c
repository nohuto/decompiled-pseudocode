/*
 * XREFs of EngDeletePalette @ 0x1400C2C10
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401962A0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  __int64 v1; // rcx
  unsigned int *v2; // rbx
  BOOL v3; // edi
  unsigned int v4; // eax
  __int64 SessionState; // rax
  unsigned int *v7; // [rsp+38h] [rbp+10h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, hpal);
  v2 = v7;
  v3 = 0;
  if ( v7 )
  {
    v4 = v7[6];
    if ( (v4 & 0x100) == 0 )
    {
      v7[6] = v4 | 0x4000000;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v7);
      v2 = v7;
      v3 = 1;
    }
    if ( v2 )
    {
      SessionState = W32GetSessionState(v1);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v2);
    }
  }
  return v3;
}
