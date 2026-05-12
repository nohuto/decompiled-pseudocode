/*
 * XREFs of sub_1401363F0 @ 0x1401363F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_14013AC08 @ 0x14013AC08 (sub_14013AC08.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1401363F0(int **a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int *v5; // rbx
  unsigned int v6; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  const void *v11; // rax
  size_t v12; // r8
  const char *v13; // rdx
  char v14; // r8
  int v15; // r9d
  __int64 v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+20h] [rbp-18h]

  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  if ( *(_QWORD *)(a3 + 8) != 0x200000005LL )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      v18 = *v5;
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xAu, (__int64)&unk_140154D88, *(_DWORD *)(a3 + 8), v18);
    }
    v13 = "ErrInvalidAssignNamespaceResult";
    v14 = 1;
    v15 = *(_DWORD *)(a3 + 8);
    v17 = *v5;
    goto LABEL_12;
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(v9 + 8) != 0x80000000FLL )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xBu, (__int64)&unk_140154D88, *(_DWORD *)(v9 + 8));
    v13 = "ErrInvalidBandMetadata";
    v17 = 0LL;
    v14 = 2;
    v15 = *(_DWORD *)(v9 + 8);
LABEL_12:
    v6 = -1073741435;
    sub_140085D5C(*a1, v13, v14, v15, v17, 0LL);
    return v6;
  }
  v10 = *(_QWORD *)(a3 + 16);
  *a4 = 0LL;
  v11 = (const void *)sub_14013AC08(v10, a2, *(unsigned int *)(v9 + 12));
  memmove(a4, v11, v12);
  sub_1401352EC((char *)a4, 8u);
  return v6;
}
