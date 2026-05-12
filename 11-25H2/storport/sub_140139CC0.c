/*
 * XREFs of sub_140139CC0 @ 0x140139CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_14013AC08 @ 0x14013AC08 (sub_14013AC08.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140139CC0(int **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // r9d
  char v8; // r8
  int v9; // r9d
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  const void *v12; // rax
  size_t v13; // r8
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( *(_DWORD *)(a3 + 8) != 5 || *(_DWORD *)(a3 + 12) < 2u )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      v16 = MEMORY[0xC];
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xAu, (__int64)&unk_1401552B8, MEMORY[8], v16);
    }
    v8 = 1;
    LOBYTE(v9) = MEMORY[8];
    v15 = MEMORY[0xC];
    goto LABEL_13;
  }
  v5 = *(__int64 **)(a3 + 16);
  v6 = *v5;
  v7 = *(_DWORD *)(*v5 + 12);
  if ( v7 > 4 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xBu, (__int64)&unk_1401552B8, v7);
    v8 = 2;
    v15 = 0LL;
    v9 = *(_DWORD *)(v6 + 12);
LABEL_13:
    v3 = -1073741435;
    sub_140085D5C(*a1, "ErrInvalidSyncData", v8, v9, v15, 0LL);
    return v3;
  }
  v10 = (_DWORD *)(a2 + 8);
  v11 = *v5;
  *(_DWORD *)(a2 + 8) = 0;
  v12 = (const void *)sub_14013AC08(v11, a2, *(unsigned int *)(v6 + 12));
  memmove(v10, v12, v13);
  sub_1400859FC(*a1, "ParseSyncSessionData", *v10, 0, 0LL, 0LL);
  return v3;
}
