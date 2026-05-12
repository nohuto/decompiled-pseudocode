/*
 * XREFs of sub_14000D4EC @ 0x14000D4EC
 * Callers:
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14000B358 @ 0x14000B358 (sub_14000B358.c)
 *     sub_14000BF6C @ 0x14000BF6C (sub_14000BF6C.c)
 *     sub_1400395B0 @ 0x1400395B0 (sub_1400395B0.c)
 *     sub_1400422E0 @ 0x1400422E0 (sub_1400422E0.c)
 *     sub_140065290 @ 0x140065290 (sub_140065290.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     sub_1400778B0 @ 0x1400778B0 (sub_1400778B0.c)
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_14000EE58 @ 0x14000EE58 (sub_14000EE58.c)
 */

__int64 __fastcall sub_14000D4EC(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int8 v4; // dl
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // r11
  unsigned int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int)sub_14000EE58(a1 + 704);
  sub_14000D760(a1, 4LL);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = *(_BYTE *)(v3 + 56);
  else
    v4 = -1;
  v5 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)*(_DWORD *)(a1 + 104) | (v4 << 8)) << 8)) << 8);
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(int *)(a1 + 744);
    if ( v6 )
    {
      if ( *(_DWORD *)v6 != 1314275652 )
      {
        v8 = *(_DWORD *)(v6 + 4932);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v6 + 4936);
          if ( v9 )
          {
            v10 = v9 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v6 + 4928)) % v8);
            *(_DWORD *)v10 = 5;
            *(_QWORD *)(v10 + 40) = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v10 + 16) = v5;
            *(_QWORD *)(v10 + 8) = retaddr;
            *(_QWORD *)(v10 + 24) = v7;
            *(_QWORD *)(v10 + 32) = v2;
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
