/*
 * XREFs of KeFindNextProcessorNumberEx @ 0x14025F6C0
 * Callers:
 *     KeFindNextProcessorIndexEx @ 0x14025F64C (KeFindNextProcessorIndexEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindNextProcessorNumberEx(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v5; // r10d
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned __int64 v12; // rax

  v3 = *a2;
  v5 = *a1;
  if ( (unsigned __int16)v3 < (unsigned __int16)v5
    && (v6 = *(_QWORD *)&a1[4 * v3 + 4]) != 0
    && (v7 = *((unsigned __int8 *)a2 + 2), (unsigned __int8)v7 < 0x40u)
    && (_BitScanForward64(&v8, __ROR8__(v6, v7)), v9 = ((_BYTE)v7 + (_BYTE)v8) & 0x3F, v9 >= v7) )
  {
    *(_DWORD *)a3 = 0;
    *(_WORD *)a3 = v3;
    *(_BYTE *)(a3 + 2) = v9;
    return 1;
  }
  else
  {
    v11 = 0;
    v10 = 1;
    while ( v11 < v5 )
    {
      LOWORD(v3) = (unsigned __int16)(v3 + 1) < (unsigned __int16)v5 ? v3 + 1 : 0;
      if ( (unsigned __int16)v3 < (unsigned __int16)v5 )
      {
        v12 = *(_QWORD *)&a1[4 * (unsigned __int16)v3 + 4];
        if ( v12 )
        {
          _BitScanForward64(&v12, v12);
          *(_DWORD *)a3 = 0;
          *(_BYTE *)(a3 + 2) = v12;
          *(_WORD *)a3 = v3;
          return v10;
        }
      }
      ++v11;
    }
    return 0;
  }
}
