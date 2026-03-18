/*
 * XREFs of TranslateBridgeRequirements @ 0x1400BB610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateBridgeRequirements(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 *a5)
{
  __int64 Pool2; // rax
  PVOID *v9; // rdi
  unsigned int v10; // ebx
  ULONGLONG v11; // rax
  __int64 v12; // rdx
  ULONGLONG v13; // rbp
  __int64 v14; // r9
  ULONGLONG v15; // rax
  signed __int64 v16; // r10
  signed __int64 v17; // rcx
  _OWORD *v18; // rax
  unsigned __int64 MaximumAddress[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+50h] [rbp+8h] BYREF

  MinimumAddress = 0LL;
  MaximumAddress[0] = 0LL;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1383097153LL);
  v9 = (PVOID *)a5;
  *a5 = Pool2;
  if ( Pool2 )
  {
    v11 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)a2, 0LL, &MinimumAddress, MaximumAddress);
    v12 = 0LL;
    v13 = v11;
    while ( (unsigned int)v12 < *(_DWORD *)(a1 + 8) )
    {
      v14 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v14 + 40 * v12 + 32) & 2) != 0 && *(_BYTE *)(v14 + 40 * v12 + 1) == *(_BYTE *)(a2 + 1) )
      {
        v15 = *(_QWORD *)(v14 + 40 * v12 + 24);
        if ( v13 <= v15 )
        {
          v16 = *(_QWORD *)(v14 + 40 * v12 + 16);
          v17 = v16 + v15;
          if ( ((__int64)MinimumAddress >= v16 || (__int64)MaximumAddress[0] >= v16)
            && ((__int64)MinimumAddress <= v17 || (__int64)MaximumAddress[0] <= v17) )
          {
            v18 = *v9;
            *v18 = *(_OWORD *)a2;
            v18[1] = *(_OWORD *)(a2 + 16);
            *a4 = 1;
            *((_BYTE *)*v9 + 1) = *(_BYTE *)(v14 + 40 * v12);
            *((_QWORD *)*v9 + 2) = MinimumAddress + *(_QWORD *)(v14 + 40 * v12 + 8) - v16;
            *((_QWORD *)*v9 + 3) = MaximumAddress[0] + *(_QWORD *)(v14 + 40 * v12 + 8) - v16;
            break;
          }
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    if ( (unsigned int)v12 < *(_DWORD *)(a1 + 8) )
      return 288LL;
    *a4 = 0;
    v10 = -1073479626;
  }
  else
  {
    v10 = -1073741670;
  }
  if ( *v9 )
  {
    ExFreePoolWithTag(*v9, 0);
    *v9 = 0LL;
  }
  return v10;
}
