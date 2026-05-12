/*
 * XREFs of sub_140136540 @ 0x140136540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_14013AC08 @ 0x14013AC08 (sub_14013AC08.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140136540(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  __int64 v9; // rdi
  int v10; // r9d
  size_t v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rdx
  const void *v14; // rax
  size_t v15; // r8
  char v16; // r8
  int v17; // r9d
  __int64 v19; // [rsp+20h] [rbp-18h]

  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xCu, (__int64)&unk_140154D88, *(_DWORD *)(a3 + 8), *v5);
    v16 = 1;
    v17 = *(_DWORD *)(a3 + 8);
    v19 = *v5;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(a3 + 16);
  v10 = *(_DWORD *)(v9 + 8);
  if ( (unsigned int)(v10 - 15) > 2 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xDu, (__int64)&unk_140154D88, v10);
    v16 = 2;
    v19 = 0LL;
    v17 = *(_DWORD *)(v9 + 8);
LABEL_17:
    v6 = -1073741435;
    sub_140085D5C(*a1, "ErrInvalidBandMetadata", v16, v17, v19, 0LL);
    return v6;
  }
  v11 = *(unsigned int *)(a4 + 24);
  v12 = *(_DWORD *)(v9 + 12);
  if ( v12 <= (unsigned int)v11 )
  {
    memset_0(*(void **)(a4 + 16), 0, v11);
    v14 = (const void *)sub_14013AC08(v9, v13, *(unsigned int *)(v9 + 12));
    memmove(*(void **)(a4 + 16), v14, v15);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(v9 + 12);
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xEu, (__int64)&unk_140154D88, v12, *(_DWORD *)(a4 + 24));
    v6 = -1073741789;
    sub_140085D5C(*a1, "ErrInvalidBandMetadata", 3, *(_DWORD *)(v9 + 12), *(unsigned int *)(a4 + 24), 0LL);
  }
  return v6;
}
