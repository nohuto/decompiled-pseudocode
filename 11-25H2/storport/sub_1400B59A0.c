/*
 * XREFs of sub_1400B59A0 @ 0x1400B59A0
 * Callers:
 *     sub_1400699FC @ 0x1400699FC (sub_1400699FC.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400B59A0(__int64 a1, int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rcx
  int v8; // eax
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  char *v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+ACh] [rbp-54h]
  char *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  char *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  int *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  int *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  int *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]

  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 4);
    if ( !v3 || (a1 = MEMORY[0xFFFFF78000000014] - v3, MEMORY[0xFFFFF78000000014] - v3 >= 864000000000LL) )
    {
      *((_QWORD *)a2 + 4) = MEMORY[0xFFFFF78000000014];
      if ( (unsigned int)dword_140168178 > 5 )
      {
        if ( sub_14003F840(a1, 0x400000000000LL) )
        {
          v7 = *(_QWORD *)(v5 + 24);
          v19 = 0;
          v22 = 0;
          v18 = 16;
          v21 = 16;
          v17 = v7 + 5064;
          v20 = v5 + 2104;
          v8 = *(_DWORD *)(v7 + 56);
          v25 = 0;
          v28 = 0;
          v31 = 0;
          v34 = 0;
          v37 = 0;
          v40 = 0;
          v43 = 0;
          v12 = v8;
          v23 = &v12;
          v9 = *(_BYTE *)(v5 + 104);
          v26 = &v9;
          v10 = *(_BYTE *)(v5 + 105);
          v29 = &v10;
          v11 = *(_BYTE *)(v5 + 106);
          v32 = &v11;
          v13 = *a2;
          v35 = &v13;
          v38 = &v14;
          v15 = a2[7];
          v41 = &v15;
          v24 = 4;
          v36 = 4;
          v39 = 4;
          v42 = 4;
          v27 = 1;
          v30 = 1;
          v33 = 1;
          v14 = v6;
          sub_140037A5C(1LL, (unsigned __int8 *)dword_140156B1B, v4, v5, 0xBu, &v16);
        }
      }
      a2[7] = 0;
    }
  }
}
