/*
 * XREFs of NVMeReenumerateNameSpaceCompare @ 0x1400284D8
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     NVMeIsLunActive @ 0x14000FE20 (NVMeIsLunActive.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceCompare(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // r14
  unsigned int i; // esi
  unsigned int v11; // r9d
  __int64 v12; // rbp
  bool IsLunActive; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9

  v4 = 0;
  v5 = (unsigned int *)(a2 + 2048);
  for ( i = 0; i < 0x400; ++i )
  {
    v11 = *v5;
    if ( !*v5 )
      break;
    if ( v11 <= a3 )
    {
      _mm_lfence();
      v12 = v11 - 1;
      IsLunActive = NVMeIsLunActive(*(_QWORD *)(a1 + 8 * v12 + 1672));
      if ( v14 )
      {
        if ( !IsLunActive )
        {
          *(_DWORD *)(v14 + 20) |= 8u;
          goto LABEL_20;
        }
        if ( *(_DWORD *)(v15 + 52) != *(_DWORD *)(v14 + 52) )
        {
          *(_DWORD *)(v14 + 20) |= 0x50u;
          goto LABEL_20;
        }
        if ( *(_QWORD *)(v15 + 56) != *(_QWORD *)(v14 + 56)
          || *(_WORD *)(v15 + 92) != *(_WORD *)(v14 + 92)
          || *(_BYTE *)(v15 + 64) != *(_BYTE *)(v14 + 64)
          || *(_DWORD *)(v15 + 48) != *(_DWORD *)(v14 + 48)
          || *(_BYTE *)(v15 + 65) != *(_BYTE *)(v14 + 65)
          || *(_BYTE *)(v15 + 66) != *(_BYTE *)(v14 + 66)
          || *(_BYTE *)(v15 + 10) != *(_BYTE *)(v14 + 10) )
        {
          *(_DWORD *)(v14 + 20) |= 0x10u;
LABEL_20:
          ++v4;
          if ( a4 )
            *a4 = v16;
          goto LABEL_22;
        }
        StorPortExtendedFunction(1LL, a1, v14, v16);
        *(_QWORD *)(a2 + 8 * v12 + 8) = 0LL;
      }
      else if ( IsLunActive )
      {
        *(_DWORD *)(v15 + 20) |= 0x20u;
        goto LABEL_20;
      }
    }
LABEL_22:
    ++v5;
  }
  if ( v4 != 1 )
    *a4 = 0;
  return v4;
}
