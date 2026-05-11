/*
 * XREFs of USBParseMIDIElement @ 0x140038340
 * Callers:
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAB4 (USBParseConvertMIDIJacksAndElements.c)
 * Callees:
 *     BusApiBuildMIDIFunctionUnit @ 0x1400346D8 (BusApiBuildMIDIFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1400381A0 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned int v12; // edi
  int v13; // r15d
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // edx
  int UnitString; // esi
  int v18; // ebp
  int *Pool2; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int *v22; // r14
  unsigned int v23; // ecx
  __int64 v24; // rdx
  const WCHAR *v26; // [rsp+70h] [rbp+8h] BYREF

  v3 = *a3;
  if ( (unsigned __int8)v3 < 5u )
    return 3221225858LL;
  v7 = a3[4];
  v8 = v3;
  if ( v3 < (unsigned __int64)(2 * v7 + 5) )
    return 3221225858LL;
  v9 = (unsigned __int64)&a3[2 * v7 + 5];
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  v11 = v10 + *(unsigned __int16 *)(v10 + 2);
  if ( v9 > v11 )
    return 3221225858LL;
  v12 = 0;
  v26 = 0LL;
  v13 = 0;
  if ( v3 < (unsigned __int64)(2 * v7 + 9) )
    return 3221225858LL;
  v14 = *(unsigned __int8 *)(v9 + 3);
  v15 = v14 + 2 * (v7 + 5);
  if ( v8 < v15 || (unsigned __int64)&a3[v15] > v11 )
    return 3221225858LL;
  v16 = *(unsigned __int8 *)(v9 + 3);
  if ( (_BYTE)v14 )
  {
    do
    {
      v13 = *(unsigned __int8 *)((unsigned int)(v16 * v14 - 1) + v9 + 4) | (v13 << 8);
      --v16;
    }
    while ( v16 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &v26);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v18 = *(unsigned __int8 *)(a2 + 2) << 8;
    Pool2 = (int *)ExAllocatePool2(256LL, 4LL * a3[4], 1096972357LL);
    v22 = Pool2;
    if ( Pool2 )
    {
      LOBYTE(v23) = a3[4];
      if ( (_BYTE)v23 )
      {
        do
        {
          v24 = v12++;
          Pool2[v24] = v18 | a3[2 * v24 + 5];
          v23 = a3[4];
        }
        while ( v12 < v23 );
      }
      UnitString = BusApiBuildMIDIFunctionUnit(
                     a1,
                     v18 | (unsigned int)a3[3],
                     v20,
                     v21,
                     (unsigned __int8)v23,
                     Pool2,
                     v26,
                     v13);
      ExFreePool(v22);
    }
  }
  return (unsigned int)UnitString;
}
