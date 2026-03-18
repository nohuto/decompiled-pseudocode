/*
 * XREFs of FillControllerRuntimeLog @ 0x1400124C4
 * Callers:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall FillControllerRuntimeLog(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  _DWORD *v6; // rdx
  __int64 v7; // r11

  memset(a2, 0, 0x58uLL);
  *a2 = 88;
  v4 = 0LL;
  a2[1] = 88;
  *((_BYTE *)a2 + 8) = (*(_BYTE *)(a1 + 21) & 0x20) != 0;
  *((_BYTE *)a2 + 9) = *(_BYTE *)(a1 + 22);
  a2[3] = *(_DWORD *)(a1 + 24);
  a2[4] = *(_DWORD *)(a1 + 28);
  *((_QWORD *)a2 + 3) = *(_QWORD *)(a1 + 3792);
  a2[8] = *(_DWORD *)(a1 + 3800);
  *((_WORD *)a2 + 18) = *(_WORD *)(a1 + 320);
  *((_WORD *)a2 + 19) = *(_WORD *)(a1 + 322);
  *((_WORD *)a2 + 20) = *(_WORD *)(a1 + 324);
  *((_WORD *)a2 + 21) = *(_WORD *)(a1 + 326);
  *((_WORD *)a2 + 22) = *(_WORD *)(a1 + 328);
  *((_WORD *)a2 + 23) = *(_WORD *)(a1 + 330);
  *((_WORD *)a2 + 24) = *(_WORD *)(a1 + 332);
  *((_WORD *)a2 + 25) = *(_WORD *)(a1 + 334);
  *((_WORD *)a2 + 26) = *(_WORD *)(a1 + 952);
  *((_WORD *)a2 + 27) = *(_WORD *)(a1 + 954);
  *((_WORD *)a2 + 28) = *(_WORD *)(a1 + 976);
  *((_WORD *)a2 + 29) = *(_WORD *)(a1 + 978);
  *((_WORD *)a2 + 30) = *(_WORD *)(a1 + 980);
  result = *(unsigned __int16 *)(a1 + 982);
  for ( *((_WORD *)a2 + 31) = result; (unsigned int)v4 < *(_DWORD *)(a1 + 224); v4 = (unsigned int)(v4 + 1) )
  {
    result = *(_QWORD *)(a1 + 8 * v4 + 1672);
    if ( result )
    {
      v6 = a2 + 18;
      *((_QWORD *)a2 + 8) += *(_QWORD *)(result + 24);
      v7 = 4LL;
      do
      {
        result = *(_QWORD *)(a1 + 8 * v4 + 1672);
        *v6 += *(_DWORD *)((char *)v6 + result - (_QWORD)a2 - 40);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
