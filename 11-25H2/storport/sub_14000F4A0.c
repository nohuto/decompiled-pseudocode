/*
 * XREFs of sub_14000F4A0 @ 0x14000F4A0
 * Callers:
 *     StorPortPauseDevice @ 0x14000F1B0 (StorPortPauseDevice.c)
 *     sub_1400395B0 @ 0x1400395B0 (sub_1400395B0.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     sub_1400778B0 @ 0x1400778B0 (sub_1400778B0.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 * Callees:
 *     sub_14000F5A8 @ 0x14000F5A8 (sub_14000F5A8.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 */

__int64 __fastcall sub_14000F4A0(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // cl
  int v4; // eax
  int v5; // r8d
  int v6; // ecx
  __int64 result; // rax
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r11
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  sub_14000F5A8(a1 + 720);
  sub_140021810(a1, 4LL);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_BYTE *)(v2 + 56);
  else
    v3 = -1;
  v4 = *(_DWORD *)(a1 + 104);
  v5 = (unsigned __int8)v4 | (v3 << 8);
  v6 = BYTE2(v4);
  result = qword_140168458;
  v8 = v6 | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (v5 << 8)) << 8);
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(int *)(a1 + 744);
    if ( v9 )
    {
      if ( *(_DWORD *)v9 != 1314275652 )
      {
        v11 = *(_DWORD *)(v9 + 4932);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v9 + 4936);
          if ( v12 )
          {
            v13 = v12 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v9 + 4928)) % v11);
            *(_DWORD *)v13 = 4;
            v14 = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v13 + 32) = 0LL;
            *(_QWORD *)(v13 + 40) = v14;
            result = v8;
            *(_QWORD *)(v13 + 16) = v8;
            *(_QWORD *)(v13 + 8) = retaddr;
            *(_QWORD *)(v13 + 24) = v10;
          }
        }
      }
    }
  }
  return result;
}
