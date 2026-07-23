/*
 * XREFs of RtlGetExtendedContextLength3 @ 0x1800B17C0
 * Callers:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength @ 0x1800B1520 (RtlGetExtendedContextLength.c)
 *     RtlGetExtendedContextLength2 @ 0x1800B1670 (RtlGetExtendedContextLength2.c)
 *     RtlWow64GetCurrentCpuArea @ 0x1800B1690 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B20C4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B2120 (RtlpRemoveArchDisallowedXStateFeatures.c)
 */

__int64 __fastcall RtlGetExtendedContextLength3(__int64 a1, _DWORD *a2, unsigned __int64 a3, __int64 a4)
{
  int v6; // ebx
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // r11d
  int v11; // ebx
  int v12; // ebx
  int EntireXStateAreaLength2; // eax
  int v14; // eax
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v15[0] = 0;
  v8 = a1;
  result = RtlpValidateContextFlags2(a1, v15, a4);
  if ( (int)result < 0 )
    return result;
  v10 = 0;
  if ( (v8 & 0x10000) != 0 )
  {
    v6 = 716;
    v10 = 4;
  }
  else
  {
    if ( (v8 & 0x100000) != 0 )
    {
      v6 = 1232;
    }
    else
    {
      if ( (v8 & 0x200000) != 0 )
      {
        v6 = 416;
        v10 = 8;
        goto LABEL_4;
      }
      if ( (v8 & 0x400000) == 0 )
        goto LABEL_4;
      v6 = 912;
    }
    v10 = 16;
  }
LABEL_4:
  v11 = v6 + 32;
  if ( (v15[0] & 2) != 0 )
  {
    v12 = -v10 & (v10 + v11 - 1);
    if ( (*(_BYTE *)(a4 + 20) & 2) != 0 )
    {
      v16 = (*(_QWORD *)a4 | *(_QWORD *)(a4 + 816) | 0x8000000000000000uLL) & a3;
      RtlpRemoveArchDisallowedXStateFeatures(v8, &v16);
      a3 = v16;
    }
    EntireXStateAreaLength2 = RtlpGetEntireXStateAreaLength2(a3, a4);
    v11 = EntireXStateAreaLength2 + v12 - v10 - 448;
  }
  v14 = v11 + 32;
  if ( (v15[0] & 4) == 0 )
    v14 = v11;
  *a2 = v10 + v14 - 1;
  return 0LL;
}
