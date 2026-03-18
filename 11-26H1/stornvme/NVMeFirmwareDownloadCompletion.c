/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x14001D8B0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 */

__int64 __fastcall NVMeFirmwareDownloadCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 SrbExtension; // r14
  __int64 v8; // r9
  __int64 v9; // rbp
  _QWORD *v10; // rsi
  int v11; // ecx
  int v12; // eax
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v8 = 64LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v8 = 24LL;
  v9 = *(_QWORD *)(v8 + a2);
  if ( v6 )
  {
    v10 = (_QWORD *)(SrbExtension + 4176);
    *(_DWORD *)(v9 + 20) = *(_BYTE *)(a2 + 3) != 1;
    if ( (*(_DWORD *)(a1 + 56) & 8) != 0 || !*v10 )
    {
      *(_DWORD *)v10 = 0;
    }
    else
    {
      StorPortExtendedFunction(1LL, a1, *v10, v8);
      *v10 = 0LL;
    }
    if ( *(_BYTE *)(a2 + 3) != 1 )
    {
      v11 = 6;
      v12 = *(unsigned __int16 *)(a3 + 14) >> 1;
      if ( (unsigned __int8)v12 != 6 )
      {
        v11 = 16;
        if ( (unsigned __int8)v12 == 7 )
          v11 = 7;
      }
      *(_DWORD *)(v9 + 20) = v11;
      if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
        StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    }
  }
  else
  {
    *(_DWORD *)(v9 + 20) = 16;
    *(_BYTE *)(a2 + 3) = 4;
  }
  result = *(unsigned int *)(a1 + 4344);
  if ( (result & 4) != 0 )
    result = NVMeIceConfigureSrbExclusionAddress(a1, a2, 0LL);
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  return result;
}
