/*
 * XREFs of MiCheckWsLimits @ 0x1403C6670
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckWsLimits(__int64 a1, __int64 *a2, unsigned __int64 *a3, char a4, char a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  int v14; // eax

  v5 = *a2;
  v6 = 0;
  v7 = *a3;
  if ( *a2 > *a3 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = *a2;
    v6 = 1073741826;
  }
  v10 = 0x7FFFFFFF0LL;
  if ( v7 > 0x7FFFFFFF0LL )
  {
    v7 = 0x7FFFFFFF0LL;
    v6 = 1073741826;
  }
  v11 = 25LL;
  if ( v5 > 0x7FFFFFFF0LL )
    goto LABEL_5;
  v10 = *a2;
  if ( v5 < 0x19 )
  {
    v10 = 25LL;
    if ( v7 < 0x19 )
      v7 = 25LL;
LABEL_5:
    v6 = 1073741826;
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( v13 )
    v11 = *(_QWORD *)(v13 + 32);
  if ( v11 + 6 >= v7 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = v11 + 7;
    v6 = 1073741826;
  }
  v14 = *(_DWORD *)(a1 + 184);
  if ( (a4 & 4) == 0
    && ((v14 & 0x20) == 0 || (a4 & 8) != 0)
    && (a4 & 1) == 0
    && (((a4 & 2) == 0) & ((unsigned __int8)v14 >> 4)) == 0 )
  {
    goto LABEL_16;
  }
  if ( v10 + 6 >= v7 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = v10 + 7;
    v6 = 1073741826;
  }
  if ( (v14 & 0xF) == 0 || v7 >= 0x1000 )
    goto LABEL_16;
  if ( (a5 & 1) == 0 )
    return 3221225548LL;
  v7 = 4096LL;
  v6 = 1073741826;
LABEL_16:
  *a2 = v10;
  result = v6;
  *a3 = v7;
  return result;
}
