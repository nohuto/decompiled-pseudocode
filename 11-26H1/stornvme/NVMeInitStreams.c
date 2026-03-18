/*
 * XREFs of NVMeInitStreams @ 0x1400182D4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 *     IoctlStorageStreamsGetParameters @ 0x14001C844 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     NVMeDirectiveIdentifyEnableDirective @ 0x140024D74 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x140024E28 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x140024FBC (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x14002533C (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeInitStreams(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdi
  char v5; // dl
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r8
  __int16 v11; // cx
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // dx
  __int64 v14; // r8
  __int16 v15; // cx
  __int16 v16; // ax
  _OWORD v17[4]; // [rsp+20h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 1560);
  v4 = a2;
  if ( (*(_BYTE *)(v2 + 256) & 0x20) == 0 )
    return 3238002695LL;
  v5 = *(_BYTE *)(a1 + 3728);
  if ( (v5 & 1) != 0 && (v5 & 6) == 2 )
    return *(_BYTE *)(a1 + 3729) != (unsigned __int8)v4 ? 0xC1000003 : 0;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 224) && (v7 = *(_QWORD *)(a1 + 8 * v4 + 1672)) != 0 )
    v8 = *(_DWORD *)(v7 + 16);
  else
    v8 = 0;
  if ( (v5 & 4) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(a1 + 3729);
  }
  else if ( v8 > *(_DWORD *)(v2 + 516) || !*(_QWORD *)(a1 + 8 * v4 + 1672) )
  {
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(a1 + 3728) & 1) == 0 )
  {
    memset(v17, 0, sizeof(v17));
    result = NVMeDirectiveIdentifyReturnParameters(a1, v8, v9, v17);
    if ( (_DWORD)result )
      return result;
    if ( (v17[0] & 2) != 0 )
    {
      result = NVMeDirectiveIdentifyEnableDirective(a1);
      if ( (_DWORD)result )
        return result;
      result = NVMeDirectiveIdentifyReturnParameters(a1, v8, v10, v17);
      if ( (_DWORD)result )
        return result;
      if ( (v17[2] & 2) != 0 )
      {
        *(_BYTE *)(a1 + 3728) |= 1u;
        goto LABEL_20;
      }
    }
    return 3238002695LL;
  }
LABEL_20:
  memset(v17, 0, 32);
  result = NVMeDirectiveStreamsReturnParameters(a1, v8, v2, v17);
  if ( (_DWORD)result )
    return result;
  v11 = WORD3(v17[1]);
  v12 = v17[0];
  v13 = WORD1(v17[0]);
  *(_DWORD *)(a1 + 3740) = v17[1];
  *(_DWORD *)(a1 + 3744) = WORD2(v17[1]);
  *(_WORD *)(a1 + 3734) = WORD4(v17[1]);
  *(_WORD *)(a1 + 3736) = v11 + v13;
  *(_BYTE *)(a1 + 3729) = v4;
  *(_WORD *)(a1 + 3730) = v12;
  *(_WORD *)(a1 + 3732) = v11;
  if ( !v12 )
    return 3238002695LL;
  if ( v12 > v13 )
    v12 = v13;
  if ( !v12 )
    return 3238002695LL;
  result = NVMeDirectiveStreamsAllocateResources(a1, v8);
  if ( !(_DWORD)result )
  {
    result = NVMeDirectiveStreamsReturnParameters(a1, v8, v14, v17);
    if ( !(_DWORD)result )
    {
      v15 = WORD3(v17[1]);
      v16 = WORD3(v17[1]) + WORD1(v17[0]);
      *(_WORD *)(a1 + 3732) = WORD3(v17[1]);
      *(_WORD *)(a1 + 3736) = v16;
      if ( v15 )
      {
        *(_BYTE *)(a1 + 3728) = *(_BYTE *)(a1 + 3728) & 0xF9 | 2;
        return 0LL;
      }
      return 3238002695LL;
    }
  }
  return result;
}
