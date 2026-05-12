/*
 * XREFs of sub_14008A698 @ 0x14008A698
 * Callers:
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_14008663C @ 0x14008663C (sub_14008663C.c)
 *     sub_14008F454 @ 0x14008F454 (sub_14008F454.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int16 __fastcall sub_14008A698(__int64 a1, _WORD *a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rbx
  unsigned int v6; // r15d
  int v7; // edx
  unsigned int *v8; // r14
  unsigned int v9; // r8d
  char v10; // di
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // r13
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int128 v20; // [rsp+60h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  v2 = &retaddr;
  LOBYTE(v3) = 0;
  LOBYTE(v6) = 0;
  v20 = 0LL;
  if ( !*(_QWORD *)(a1 + 6208) )
    return (__int16)v2;
  if ( a2 && (v7 = 1, *a2 == 1) )
  {
    v8 = (unsigned int *)(a2 + 16);
    v9 = *((_DWORD *)a2 + 8);
    if ( v9 )
    {
      if ( (unsigned __int16)a2[1] != v9 + 36 || v9 > 0x1000 )
        goto LABEL_6;
    }
    else if ( a2[1] != 40 )
    {
LABEL_6:
      v10 = 6;
      goto LABEL_22;
    }
    v11 = *((_QWORD *)a2 + 1);
    if ( !v11 || (v12 = 1, ((v11 - 1) & v11) != 0) )
      v12 = 0;
    v13 = *((_QWORD *)a2 + 2);
    if ( !v13 || ((v13 - 1) & v13) != 0 )
      v7 = 0;
    if ( v12 != v7 )
    {
      v6 = (unsigned __int16)a2[1] + 16;
      v14 = sub_1400143E0(64LL, v6, 1313169746LL, *(_QWORD *)(a1 + 8));
      v15 = (void *)v14;
      if ( v14 )
      {
        memmove((void *)(v14 + 16), a2, (unsigned __int16)a2[1]);
        LODWORD(v2) = sub_14008F454(*(_QWORD *)(a1 + 6208), v15);
        v10 = (char)v2;
        if ( (int)v2 >= 0 )
          return (__int16)v2;
        ExFreePoolWithTag(v15, 0x4E456152u);
      }
      else
      {
        v10 = -102;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v8 = (unsigned int *)(a2 + 16);
  }
  v10 = 13;
LABEL_22:
  LOWORD(v2) = sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)&v20);
  if ( (byte_1401694F8 & 0x40) != 0 )
  {
    if ( a2 )
    {
      v17 = *v8;
      v18 = *((_QWORD *)a2 + 2);
      v3 = *((_QWORD *)a2 + 1);
    }
    else
    {
      v17 = 0LL;
      LOBYTE(v18) = 0;
    }
    LOWORD(v2) = sub_14008663C(
                   a1 + 5064,
                   v17,
                   v16,
                   *(_DWORD *)(a1 + 56),
                   a1 + 5064,
                   *((const wchar_t **)&v20 + 1),
                   *(_DWORD *)(a1 + 4276),
                   v3,
                   v18,
                   v17,
                   v6,
                   v10);
  }
  return (__int16)v2;
}
