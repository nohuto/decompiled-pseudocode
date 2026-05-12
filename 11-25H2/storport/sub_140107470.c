/*
 * XREFs of sub_140107470 @ 0x140107470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 */

__int64 __fastcall sub_140107470(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  unsigned int v6; // edx
  unsigned int v7; // edx
  __int64 result; // rax
  char v9; // [rsp+28h] [rbp-80h]

  v3 = *a2;
  v5 = *(_QWORD *)(*a2 + 4216);
  if ( a3 )
  {
    *(_WORD *)(v3 + 4260) = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v3 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
  }
  v6 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0 || (v7 = v6 >> 1, (unsigned __int8)v7 > 6u) || (_BYTE)v7 )
  {
    v9 = *(_WORD *)(a3 + 14);
    if ( (unsigned __int8)*(_DWORD *)(*a2 + 4096) == 0x80 )
    {
      sub_1400A870C(
        a1,
        1,
        2,
        (__int64)L"Failed to format the nvme device.",
        L"NVMeStatus",
        v9,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
    }
    else
    {
      sub_1400A870C(
        a1,
        1,
        2,
        (__int64)L"Failed to sanitize the nvme device.",
        L"NVMeStatus",
        v9,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
      if ( (*(_WORD *)(*a2 + 4260) & 0x1FE) == 0x38 )
        *(_BYTE *)(v5 + 642) = 1;
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
