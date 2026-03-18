/*
 * XREFs of PnpiBiosInterruptCombineToIoDescriptor @ 0x140053CF8
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     memmove @ 0x140072440 (memmove.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1400B80B0 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 */

__int64 __fastcall PnpiBiosInterruptCombineToIoDescriptor(
        int a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // esi
  size_t v7; // r14
  unsigned int v11; // edi
  __int16 v12; // bp
  __int64 Pool2; // rax
  unsigned __int8 v14; // dl
  __int64 v15; // rbx
  _WORD *v16; // r9
  __int16 v17; // r8
  __int16 v18; // cx
  _BYTE *v19; // r8
  __int64 v20; // rax
  int v21; // r8d

  v6 = *(unsigned __int8 *)(a2 + 4);
  v7 = a3;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v12 = a3 + 23 + 2 * v6;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)a3 + 23 + 2 * v6, 1383097153LL);
    v14 = 0;
    v15 = Pool2;
    if ( Pool2 )
    {
      *(_BYTE *)Pool2 = -116;
      v16 = (_WORD *)(Pool2 + 7);
      *(_WORD *)(Pool2 + 1) = v12 - 3;
      v17 = *(_WORD *)(Pool2 + 7);
      *(_DWORD *)(Pool2 + 3) = 65537;
      if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
        v17 |= 1u;
      *(_WORD *)(Pool2 + 7) = v17;
      v18 = v17 | 2;
      if ( (*(_BYTE *)(a2 + 3) & 4) == 0 )
        v18 = v17;
      *v16 = v18;
      if ( (*(_BYTE *)(a2 + 3) & 8) != 0 )
        v18 |= 8u;
      *v16 = v18;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
        *v16 = v18 | 0x10;
      *(_BYTE *)(Pool2 + 9) = 0;
      *(_WORD *)(Pool2 + 14) = 23;
      *(_DWORD *)(Pool2 + 10) = 0;
      *(_WORD *)(Pool2 + 21) = 0;
      *(_WORD *)(Pool2 + 17) = 2 * v6 + 23;
      v19 = (_BYTE *)(Pool2 + 23);
      *(_WORD *)(Pool2 + 19) = 2 * v6 + v7 + 23;
      do
      {
        v20 = v14++;
        *v19 = *(_BYTE *)(a2 + 4 * v20 + 5);
        v19 = (_BYTE *)(v15 + 2);
      }
      while ( v14 < (unsigned __int16)v6 );
      *(_BYTE *)(v15 + 16) = *(_BYTE *)((unsigned int)(2 * v6 + 7) + a2);
      memmove((void *)(v15 + *(unsigned __int16 *)(v15 + 17)), (const void *)(a2 + (unsigned int)(2 * v6 + 8)), v7);
      v11 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v15, v21, a4, a5, a6);
      ExFreePoolWithTag((PVOID)v15, 0x52706341u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
