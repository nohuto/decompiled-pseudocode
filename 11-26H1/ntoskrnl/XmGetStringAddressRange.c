/*
 * XREFs of XmGetStringAddressRange @ 0x1404A1A40
 * Callers:
 *     XmStosOp @ 0x1404A1400 (XmStosOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

__int64 __fastcall XmGetStringAddressRange(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v6; // ebp
  unsigned __int16 v7; // r10
  _DWORD *v8; // r13
  int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // eax
  _DWORD *v13; // r15
  __int64 v14; // r12
  int v15; // eax
  int v16; // edx
  int v17; // edi
  int v18; // r8d
  int v19; // edx
  int v20; // r9d
  unsigned int v21; // eax

  if ( *(_BYTE *)(a1 + 137) )
    v6 = *(_DWORD *)(a1 + 52);
  else
    v6 = *(unsigned __int16 *)(a1 + 52);
  v7 = *(_WORD *)(a1 + 56);
  v8 = (_DWORD *)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 120);
  v10 = ((_WORD)v6 + 16 * v7) & 0xFFF;
  v11 = v9 + 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v12 = v10 / v11 + 1;
  else
    v12 = (v9 - v10 + 4096) / v11;
  v13 = (_DWORD *)(a1 + 16);
  if ( *a4 > v12 )
  {
    *a4 = v12;
    v13 = (_DWORD *)(a1 + 16);
  }
  v14 = x86BiosTranslateAddress(v7, (unsigned __int16)v6);
  v15 = *(_DWORD *)(a1 + 120);
  v16 = *a4 - 1;
  v17 = v16 * (v15 + 1);
  if ( (*v8 & 0x400) != 0 )
    v17 = v16 * ~v15;
  if ( (unsigned int)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 56), v17 + (unsigned int)(unsigned __int16)v6)
     - (_DWORD)v14 != v17 )
    *a4 = 1;
  v18 = *(_DWORD *)(a1 + 120);
  v19 = *a4 * (v18 + 1);
  v20 = *v13 & 0x400;
  if ( v20 )
    v19 = *a4 * ~v18;
  if ( *(_BYTE *)(a1 + 137) )
    *(_DWORD *)(a1 + 52) += v19;
  else
    *(_WORD *)(a1 + 52) += v19;
  if ( v20 )
    v21 = v18 + v6;
  else
    v21 = v6 + v19 - 1;
  if ( v21 > *(unsigned __int16 *)(a1 + 68) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return v14;
}
