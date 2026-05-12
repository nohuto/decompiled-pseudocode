/*
 * XREFs of sub_1401366F0 @ 0x1401366F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_1401375E4 @ 0x1401375E4 (sub_1401375E4.c)
 *     sub_14013AC08 @ 0x14013AC08 (sub_14013AC08.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401366F0(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int *v5; // rdi
  unsigned int v6; // ebx
  int **v8; // r15
  __int64 v9; // r13
  int v10; // r9d
  __int64 v11; // rax
  char v12; // r8
  int v13; // r9d
  int v14; // esi
  unsigned int v15; // ebp
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // r12
  __int64 v21; // r15
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  const void *v25; // rax
  size_t v26; // r8
  __int64 v27; // rax
  __int64 v29; // [rsp+20h] [rbp-58h]
  char v30[72]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp+18h] BYREF
  __int64 v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v4 = a4;
  v5 = (unsigned int *)(a3 + 12);
  v6 = 0;
  v8 = a1;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0x14u, (__int64)&unk_140154D88, *(_DWORD *)(a3 + 8), *v5);
    v11 = *v5;
    v12 = 1;
    v13 = *(_DWORD *)(a3 + 8);
    goto LABEL_37;
  }
  v9 = *(_QWORD *)(a3 + 16);
  v10 = *(_DWORD *)(v9 + 8);
  if ( v10 != 5 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0x15u, (__int64)&unk_140154D88, v10, *(_DWORD *)(v9 + 12));
    v11 = *(unsigned int *)(v9 + 12);
    v12 = 2;
    v13 = *(_DWORD *)(v9 + 8);
LABEL_37:
    v29 = v11;
    goto LABEL_38;
  }
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    if ( v15 >= *(_DWORD *)(v4 + 16) )
    {
LABEL_23:
      v8 = a1;
      goto LABEL_24;
    }
    v32 = 0LL;
    v16 = *(_QWORD *)(v4 + 8) + 32LL * v15;
    v17 = sub_1401375E4(v16, v9, &v32);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v20 = v32;
      if ( v32 )
        break;
    }
    ++v15;
    if ( v17 < 0 )
      goto LABEL_23;
LABEL_21:
    v4 = v33;
  }
  v21 = *v32;
  if ( *(_QWORD *)v16 == 9LL )
  {
    if ( *(_DWORD *)(v21 + 8) == 5 )
    {
      v22 = *(_DWORD *)(v21 + 12);
LABEL_17:
      **(_DWORD **)(v16 + 16) = v22;
LABEL_20:
      v14 |= 1 << *((_DWORD *)v20 + 4);
      ++v15;
      goto LABEL_21;
    }
  }
  else if ( *(_QWORD *)v16 == 20LL && *(_DWORD *)(v21 + 8) == 15 )
  {
    *(_DWORD *)v30 = *(_DWORD *)sub_14013AC08(*v32, v18, v19);
    sub_1401352EC(v30, 4u);
    v22 = *(_DWORD *)v30;
    goto LABEL_17;
  }
  v23 = *(_DWORD *)(v16 + 24);
  if ( v23 >= *(_DWORD *)(v21 + 12) )
  {
    memset_0(*(void **)(v16 + 16), 0, v23);
    v25 = (const void *)sub_14013AC08(v21, v24, *(unsigned int *)(v21 + 12));
    memmove(*(void **)(v16 + 16), v25, v26);
    *(_DWORD *)(v16 + 24) = *(_DWORD *)(v21 + 12);
    *(_DWORD *)(v16 + 28) = *(_DWORD *)(v21 + 8);
    goto LABEL_20;
  }
  v6 = -1073741789;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    sub_140067F78(
      (__int64)off_140168120->AttachedDevice,
      0x16u,
      (__int64)&unk_140154D88,
      v15,
      *(_DWORD *)(v16 + 24),
      *(_DWORD *)(v21 + 12));
  v27 = *(unsigned int *)(v21 + 12);
  v8 = a1;
  sub_140085D5C(*a1, "ErrInvalidLockingObjectInfo", 3, *(_QWORD *)v16, *(unsigned int *)(v16 + 24), v27);
LABEL_24:
  if ( (v14 & 0x3FD) != 0x3FD )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055930((__int64)off_140168120->AttachedDevice, 0x17u, (__int64)&unk_140154D88);
    v12 = 4;
    v29 = 0LL;
    LOBYTE(v13) = v14;
LABEL_38:
    v6 = -1073741435;
    sub_140085D5C(*v8, "ErrInvalidLockingObjectInfo", v12, v13, v29, 0LL);
  }
  return v6;
}
