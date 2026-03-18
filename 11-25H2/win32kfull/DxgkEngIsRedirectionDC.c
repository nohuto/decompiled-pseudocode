/*
 * XREFs of DxgkEngIsRedirectionDC @ 0x140326620
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14009A87C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDC(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 36LL) & 0x4000;
  else
    v1 = 1;
  DCOBJA::~DCOBJA((DCOBJA *)v3);
  return v1;
}
