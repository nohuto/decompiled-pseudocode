/*
 * XREFs of PnpiBiosExtendedIrqToIoDescriptor @ 0x1400A9ED8
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400B843C (PnpiUpdateForceActiveBothInterrupts.c)
 *     PnpiUpdateResourceList @ 0x1400CF2EC (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosExtendedIrqToIoDescriptor(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // ebp
  __int64 result; // rax
  char v11; // r15
  char v12; // r14
  unsigned int i; // edx
  int updated; // r8d
  _BYTE *v15; // rdx
  char v16; // al
  int v17; // eax
  _BYTE *v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( a3 < *(_BYTE *)(a2 + 4) )
  {
    v9 = *(_DWORD *)(a2 + 4LL * a3 + 5);
    if ( !v9 )
      return 0LL;
    v11 = 0;
    v12 = *(_BYTE *)(a2 + 3) & 2;
    if ( a1 )
    {
      result = PnpiUpdateForceActiveBothInterrupts();
      if ( (int)result < 0 )
        return result;
      for ( i = 0; i < *(_DWORD *)(a1 + 704); ++i )
      {
        if ( v9 == *(_DWORD *)(*(_QWORD *)(a1 + 696) + 4LL * i) )
        {
          if ( !v12 )
            return 3221225485LL;
          v11 = 1;
          break;
        }
      }
    }
    updated = PnpiUpdateResourceList(a4 + 8LL * a5, &v18);
    if ( updated < 0 )
      return (unsigned int)updated;
    v15 = v18;
    *v18 = a3 != 0 ? 8 : 0;
    v15[1] = 2;
    *((_DWORD *)v15 + 2) = v9;
    *((_DWORD *)v15 + 3) = v9;
    if ( v12 )
    {
      *((_WORD *)v15 + 2) = 1;
      if ( (*(_BYTE *)(a2 + 3) & 8) == 0 )
      {
        v15[2] = 1;
        goto LABEL_19;
      }
      v16 = (v11 != 0) + 2;
    }
    else
    {
      *((_WORD *)v15 + 2) = 0;
      v16 = (unsigned __int8)(*(_BYTE *)(a2 + 3) & 8 | 4) >> 2;
    }
    v15[2] = v16;
LABEL_19:
    if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
      *((_WORD *)v15 + 2) |= 0x20u;
    v17 = (*(unsigned __int8 *)(a2 + 3) >> 1) & 2;
    *((_DWORD *)v15 + 4) = v17;
    if ( v11 )
      *((_DWORD *)v15 + 4) = v17 | 8;
    return (unsigned int)updated;
  }
  return 3221225485LL;
}
