/*
 * XREFs of XmStosOp @ 0x1404A1400
 * Callers:
 *     <none>
 * Callees:
 *     XmGetStringAddressRange @ 0x1404A1A40 (XmGetStringAddressRange.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 *     XmGetStringAddress @ 0x1405B11B8 (XmGetStringAddress.c)
 */

unsigned __int64 __fastcall XmStosOp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // esi
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // edi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned int v11; // r9d
  bool v12; // zf
  int v13; // r9d
  __int64 StringAddress; // rax
  __int64 v15; // rdx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  XmSetSourceValue(a1, a1 + 24);
  if ( *(_BYTE *)(v2 + 139) )
  {
    if ( *(_BYTE *)(v2 + 137) )
    {
      v4 = *(_DWORD *)(v2 + 28);
      *(_DWORD *)(v2 + 28) = 0;
    }
    else
    {
      v4 = *(unsigned __int16 *)(v2 + 28);
      *(_WORD *)(v2 + 28) = 0;
    }
    v5 = *(_DWORD *)(v2 + 120);
    if ( v5 )
    {
      if ( v5 == 1 )
        v7 = *(unsigned __int16 *)(v2 + 108) | (*(unsigned __int16 *)(v2 + 108) << 16);
      else
        v7 = *(_DWORD *)(v2 + 108);
    }
    else
    {
      v6 = *(unsigned __int8 *)(v2 + 108) | (*(unsigned __int8 *)(v2 + 108) << 8);
      v7 = v6 | (v6 << 16);
    }
    result = 4uLL / (unsigned int)(v5 + 1);
    v9 = 4uLL % (unsigned int)(v5 + 1);
    v10 = result;
    while ( v4 )
    {
      v16 = v4;
      result = XmGetStringAddressRange(a1, v9, v3, &v16);
      v11 = v16;
      v4 -= v16;
      v12 = (*(_DWORD *)(a1 + 16) & 0x400) == 0;
      *(_QWORD *)(a1 + 88) = result;
      if ( !v12 )
      {
        result -= v11 * (*(_DWORD *)(a1 + 120) + 1);
        *(_QWORD *)(a1 + 88) = result;
      }
      while ( v11 )
      {
        if ( v11 < v10 || (result & 3) != 0 )
        {
          XmStoreResult(a1, v7);
          *(_QWORD *)(a1 + 88) += *(unsigned int *)(a1 + 120) + 1LL;
          v11 = v13 - 1;
        }
        else
        {
          *(_DWORD *)result = v7;
          *(_QWORD *)(a1 + 88) += 4LL;
          v11 -= v10;
        }
        result = *(_QWORD *)(a1 + 88);
      }
    }
  }
  else
  {
    StringAddress = XmGetStringAddress(v2, 0LL, 7LL);
    v15 = *(unsigned int *)(a1 + 108);
    *(_QWORD *)(a1 + 88) = StringAddress;
    return XmStoreResult(a1, v15);
  }
  return result;
}
