/*
 * XREFs of sub_140137980 @ 0x140137980
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_1401375E4 @ 0x1401375E4 (sub_1401375E4.c)
 *     sub_14013AC08 @ 0x14013AC08 (sub_14013AC08.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140137980(int **a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int **v6; // r14
  __int64 v7; // rax
  int v8; // r9d
  char v9; // r8
  __int64 *v10; // r12
  char v11; // cl
  unsigned int i; // r15d
  __int64 v13; // rsi
  __int64 *v14; // r14
  int v15; // eax
  unsigned int v16; // eax
  const void *v17; // rax
  size_t v18; // r8
  void *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rdx
  const void *v24; // rax
  size_t v25; // r8
  int v26; // ecx
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  int v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  _QWORD v32[9]; // [rsp+40h] [rbp-48h] BYREF
  char v34; // [rsp+A0h] [rbp+18h]

  v5 = 0;
  v6 = a1;
  if ( *(_QWORD *)(a3 + 8) != 0x100000005LL )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28(
        (__int64)off_140168120->AttachedDevice,
        0xBu,
        (__int64)&unk_140154F38,
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a3 + 12));
    v9 = 1;
    goto LABEL_51;
  }
  v7 = *(_QWORD *)(a3 + 16);
  v31 = v7;
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 != 5 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xCu, (__int64)&unk_140154F38, v8, *(_DWORD *)(v7 + 12));
    v9 = 2;
LABEL_51:
    v5 = -1073741435;
    sub_140085D5C(*v6, "ErrInvalidColData", v9, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), 0LL);
    return (unsigned int)v5;
  }
  v30 = 0;
  v10 = *(__int64 **)(v7 + 16);
  v11 = 0;
  v34 = 0;
  for ( i = 0; ; ++i )
  {
    if ( v5 < 0 )
      goto LABEL_44;
    if ( !v10 || i >= *(_DWORD *)(a4 + 16) )
      break;
    v32[0] = 0LL;
    v13 = *(_QWORD *)(a4 + 8) + 32LL * i;
    if ( v10[1] != 0x200000006LL )
      goto LABEL_40;
    v14 = (__int64 *)v10[2];
    if ( !v14 )
    {
      v6 = a1;
LABEL_40:
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      {
        LODWORD(v28) = *((_DWORD *)v10 + 3);
        sub_140067F28((__int64)off_140168120->AttachedDevice, 0xDu, (__int64)&unk_140154F38, *((_DWORD *)v10 + 2), v28);
      }
      v5 = -1073741435;
      sub_140085D5C(*v6, "ErrInvalidColData", 3, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), i);
LABEL_44:
      v26 = 0;
      goto LABEL_45;
    }
    if ( *(_DWORD *)(v13 + 12) )
    {
      v34 = 1;
      v15 = sub_1401375E4(v13, v7, v32);
      v14 = (__int64 *)v32[0];
      v5 = v15;
    }
    else
    {
      if ( v11 )
      {
        v5 = -1073741811;
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        {
          sub_140055930((__int64)off_140168120->AttachedDevice, 0xFu, (__int64)&unk_140154F38);
LABEL_36:
          v7 = v31;
        }
        v6 = a1;
        goto LABEL_38;
      }
      v16 = *(_DWORD *)(v13 + 8);
      if ( v16 >= *((_DWORD *)v14 + 3) )
      {
        if ( v16 > 8 )
        {
          memset_0(*(void **)v13, 0, *(unsigned int *)(v13 + 8));
          v17 = (const void *)sub_14013AC08(v14, v20, *((unsigned int *)v14 + 3));
          v19 = *(void **)v13;
        }
        else
        {
          *(_QWORD *)v13 = 0LL;
          v17 = (const void *)sub_14013AC08(v14, a2, *((unsigned int *)v14 + 3));
          v19 = (void *)v13;
        }
        memmove(v19, v17, v18);
        *(_DWORD *)(v13 + 8) = *((_DWORD *)v14 + 3);
        *(_DWORD *)(v13 + 12) = *((_DWORD *)v14 + 2);
        v10 = (__int64 *)*v10;
        goto LABEL_26;
      }
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      {
        LODWORD(v29) = *((_DWORD *)v14 + 3);
        LODWORD(v28) = *(_DWORD *)(v13 + 8);
        sub_140067F78((__int64)off_140168120->AttachedDevice, 0xEu, (__int64)&unk_140154F38, i, v28, v29);
      }
      sub_140085D5C(*a1, "ErrInvalidColData", 4, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), i);
      v14 = 0LL;
      v5 = -1073741789;
    }
    if ( v5 < 0 )
      goto LABEL_36;
LABEL_26:
    if ( !v14 )
      goto LABEL_36;
    v21 = *v14;
    v22 = *(_DWORD *)(v13 + 24);
    if ( v22 >= *(_DWORD *)(v21 + 12) )
    {
      memset_0(*(void **)(v13 + 16), 0, v22);
      v24 = (const void *)sub_14013AC08(v21, v23, *(unsigned int *)(v21 + 12));
      memmove(*(void **)(v13 + 16), v24, v25);
      ++v30;
      *(_DWORD *)(v13 + 24) = *(_DWORD *)(v21 + 12);
      *(_DWORD *)(v13 + 28) = *(_DWORD *)(v21 + 8);
      goto LABEL_36;
    }
    v5 = -1073741789;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      LODWORD(v29) = *(_DWORD *)(v21 + 12);
      LODWORD(v28) = *(_DWORD *)(v13 + 24);
      sub_140067F78((__int64)off_140168120->AttachedDevice, 0x10u, (__int64)&unk_140154F38, i, v28, v29);
    }
    v6 = a1;
    sub_140085D5C(*a1, "ErrInvalidColData", 5, *(_DWORD *)a4, *(unsigned int *)(a4 + 4), i);
    v7 = v31;
LABEL_38:
    v11 = v34;
  }
  v26 = v30;
LABEL_45:
  *(_DWORD *)(a4 + 16) = v26;
  return (unsigned int)v5;
}
