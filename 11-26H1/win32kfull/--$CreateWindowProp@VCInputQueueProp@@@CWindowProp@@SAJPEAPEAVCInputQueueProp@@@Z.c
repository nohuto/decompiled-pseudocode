/*
 * XREFs of ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x14013E7A0
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14013E5A0 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CInputQueueProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax

  v2 = 0;
  v3 = (_QWORD *)Win32AllocPoolZInit(56LL, 1902736213LL);
  if ( v3 )
  {
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    *v3 = &CInputQueueProp::`vftable';
    v3[3] = 0LL;
    v3[4] = 0LL;
    *a1 = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
