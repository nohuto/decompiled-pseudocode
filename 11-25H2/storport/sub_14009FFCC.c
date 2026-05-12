/*
 * XREFs of sub_14009FFCC @ 0x14009FFCC
 * Callers:
 *     sub_14009F5C4 @ 0x14009F5C4 (sub_14009F5C4.c)
 * Callees:
 *     sub_140014B7C @ 0x140014B7C (sub_140014B7C.c)
 *     sub_1400158A4 @ 0x1400158A4 (sub_1400158A4.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_1400903E0 @ 0x1400903E0 (sub_1400903E0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14009FFCC(__int64 a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // r15
  int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // rsi
  NTSTATUS Status; // r15d
  __int64 v10; // rcx
  unsigned int LockArray_high; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // eax
  IRP *v15; // rax
  IRP *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  char v21; // r10
  unsigned __int8 i; // al
  char v23; // di
  __int64 v24; // rcx
  char v26; // [rsp+38h] [rbp-89h] BYREF
  char v27; // [rsp+39h] [rbp-88h] BYREF
  char v28; // [rsp+3Ah] [rbp-87h] BYREF
  int v29; // [rsp+3Ch] [rbp-85h]
  int v30; // [rsp+40h] [rbp-81h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+68h] [rbp-59h] BYREF
  __int64 v34; // [rsp+88h] [rbp-39h]
  __int64 v35; // [rsp+90h] [rbp-31h]
  int *v36; // [rsp+98h] [rbp-29h]
  __int64 v37; // [rsp+A0h] [rbp-21h]
  char *v38; // [rsp+A8h] [rbp-19h]
  __int64 v39; // [rsp+B0h] [rbp-11h]
  char *v40; // [rsp+B8h] [rbp-9h]
  __int64 v41; // [rsp+C0h] [rbp-1h]
  char *v42; // [rsp+C8h] [rbp+7h]
  __int64 v43; // [rsp+D0h] [rbp+Fh]
  unsigned __int64 *v44; // [rsp+D8h] [rbp+17h]
  __int64 v45; // [rsp+E0h] [rbp+1Fh]

  v32 = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_DWORD **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 104);
  v29 = v4;
  if ( *v3 == 1314275652 )
  {
    v5 = (__int64)v3 + 274;
  }
  else if ( *v3 == 1094997074 )
  {
    v5 = (__int64)v3 + 482;
  }
  else
  {
    v5 = 98LL;
  }
  v6 = sub_140015A14(*(_QWORD *)(a1 + 8), 0x13u, *(_BYTE *)v5, 0);
  v8 = v6;
  if ( v6 )
  {
    if ( *(_BYTE *)v5 == 1 )
    {
      v10 = *(unsigned int *)(v6 + 52);
      *(_DWORD *)(v6 + 20) = 19;
      *(_BYTE *)(v10 + v6 + 8) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v10 + v6 + 9) = *(_BYTE *)(a1 + 105);
      *(_BYTE *)(v10 + v6 + 10) = 0;
      *(_DWORD *)(v6 + 24) = 524560;
      v7 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)v7 == 1094997074 && (*(_BYTE *)(v7 + 111) & 4) != 0 )
      {
        LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v7 + 6168) + 8LL * LockArray_high));
        v12 = **(_QWORD **)(*(_QWORD *)(v7 + 6168) + 8LL * LockArray_high);
        *(_DWORD *)(v8 + 44) = HIDWORD(v12);
      }
      else
      {
        LODWORD(v12) = -1;
      }
      *(_DWORD *)(v8 + 32) = v12;
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_DWORD *)(v8 + 60) = 0;
      *(_QWORD *)(v8 + 80) = 0LL;
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v13 = *(_DWORD *)(a1 + 3388);
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 1392);
        if ( v13 < 0x1E )
          v13 = 30;
      }
      *(_DWORD *)(v8 + 40) = v13;
    }
    else
    {
      *(_WORD *)v6 = 88;
      *(_BYTE *)(v6 + 2) = 19;
      *(_BYTE *)(v6 + 5) = *(_BYTE *)(a1 + 104);
      *(_BYTE *)(v6 + 6) = *(_BYTE *)(a1 + 105);
      *(_WORD *)(v6 + 7) = -256;
      *(_QWORD *)(v6 + 12) = 524560LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v14 = *(_DWORD *)(a1 + 3388);
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 1392);
        if ( v14 < 0x1E )
          v14 = 30;
      }
      *(_DWORD *)(v8 + 20) = v14;
    }
    v15 = sub_140014B7C(*(_QWORD *)(a1 + 8), v8, v7, &v32);
    v16 = v15;
    if ( v15 )
    {
      Status = sub_140018E30(*(PDEVICE_OBJECT *)(a1 + 8), v15);
      if ( Status >= 0 )
        Status = v16->IoStatus.Status;
      sub_1400158A4(v16);
      v19 = *(_QWORD *)(a1 + 24);
      v20 = MEMORY[0xFFFFF78000000014] - v2;
      v21 = *(_BYTE *)(v8 + 3);
      if ( v19 )
      {
        for ( i = 0; i < 5u; ++i )
        {
          v17 = i;
          v18 = (__int64)qword_1401494F0;
          if ( v20 <= qword_1401494F0[i] )
          {
            v18 = 3LL * i;
            ++*(_DWORD *)(v19 + 12LL * i + 5152);
            if ( (v21 & 0x3F) == 1 )
              ++*(_DWORD *)(v19 + 12LL * i + 5156);
            else
              *(_BYTE *)(v19 + 12LL * i + 5160) = v21;
            break;
          }
        }
      }
      v23 = BYTE1(v29);
      if ( (unsigned int)dword_140168178 > 5 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v35 = 16LL;
        v34 = v24 + 5064;
        v30 = *(_DWORD *)(v24 + 56);
        v36 = &v30;
        v38 = &v26;
        v40 = &v27;
        v37 = 4LL;
        v26 = v4;
        v39 = 1LL;
        v27 = BYTE1(v29);
        v41 = 1LL;
        v28 = *(_BYTE *)(v8 + 3);
        v42 = &v28;
        v44 = &v31;
        v43 = 1LL;
        v31 = v20;
        v45 = 8LL;
        sub_140037A5C(8LL, (unsigned __int8 *)dword_140156532, v18, v20, 8u, &v33);
      }
      if ( (byte_1401694F0 & 1) != 0 )
        sub_1400903E0(v19, v17, v18, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v23);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
