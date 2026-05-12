/*
 * XREFs of sub_140017D90 @ 0x140017D90
 * Callers:
 *     sub_1400160C0 @ 0x1400160C0 (sub_1400160C0.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14006A2B0 @ 0x14006A2B0 (sub_14006A2B0.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140018B28 @ 0x140018B28 (sub_140018B28.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140017D90(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  KIRQL v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // edi
  bool v9; // di
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64, _QWORD, __int64); // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edi
  int v18; // r14d
  int v19; // edi
  unsigned int v20; // ebp
  int v21; // ecx
  bool v22; // r14
  __int64 *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, bool, _QWORD *, int); // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, int); // rax
  __int64 *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  void (__fastcall *v33)(__int64, _QWORD, __int64); // rax
  int v34; // [rsp+38h] [rbp-50h]

  v5 = KfRaiseIrql(2u);
  if ( !*(_BYTE *)(a1 + 4370) )
  {
LABEL_13:
    v15 = sub_1400184D0(a1, a2);
    goto LABEL_14;
  }
  v6 = a2[21];
  v7 = *(unsigned __int8 *)(v6 + 2);
  if ( (_BYTE)v7 == 40 )
    v8 = *(_DWORD *)(v6 + 24);
  else
    v8 = *(_DWORD *)(v6 + 12);
  if ( (*(_BYTE *)(a1 + 4371) & 4) != 0 )
  {
    v9 = (v8 & 0x40) != 0;
    if ( a2[13] )
    {
      v10 = (__int64 *)(a1 + 880);
      if ( a1 != -880 )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 )
          {
            if ( *(int *)(a1 + 908) >= 3 && (v13 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v12 + 240)) != 0LL )
            {
              LOBYTE(v4) = v9;
              v13(v11, a2[13], v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(v12) = v9;
              KeFlushIoBuffers(a2[13], v12, v4);
            }
          }
        }
      }
    }
    v14 = a2[17];
    if ( v14 )
    {
      v30 = (__int64 *)(a1 + 880);
      if ( a1 != -880 )
      {
        v31 = *v30;
        if ( *v30 )
        {
          v32 = *(_QWORD *)(v31 + 8);
          if ( v32 )
          {
            if ( *(int *)(a1 + 908) >= 3 && (v33 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v32 + 240)) != 0LL )
            {
              LOBYTE(v4) = v9;
              v33(v31, a2[17], v4);
            }
            else
            {
              LOBYTE(v4) = 1;
              LOBYTE(v32) = v9;
              KeFlushIoBuffers(v14, v32, v4);
            }
          }
        }
      }
    }
    goto LABEL_13;
  }
  if ( a2[17] )
  {
    v15 = sub_140018B28(a1, a2);
    goto LABEL_14;
  }
  if ( (v8 & 0xC0) == 0 )
    goto LABEL_13;
  if ( (_BYTE)v7 == 40 )
  {
    v18 = *(_DWORD *)(v6 + 24);
    v20 = *(_DWORD *)(v6 + 60);
    v19 = *(_DWORD *)(v6 + 20);
  }
  else
  {
    v18 = *(_DWORD *)(v6 + 12);
    v19 = *(unsigned __int8 *)(v6 + 2);
    v20 = *(_DWORD *)(v6 + 16);
  }
  v21 = v18 & 0x40;
  v22 = (v18 & 0x80) != 0;
  if ( (*(_DWORD *)(a1 + 604) & 8) == 0 && (*(_BYTE *)(a1 + 108) & 4) == 0 )
  {
    LOBYTE(v4) = 1;
    LOBYTE(v7) = v21 != 0;
    KeFlushIoBuffers(a2[13], v7, v4);
  }
  if ( v19 == 23 && *(_DWORD *)(a2[13] + 40LL) > v20 )
    v20 = *(_DWORD *)(a2[13] + 40LL);
  v23 = (__int64 *)(a1 + 880);
  if ( a1 == -880 )
    goto LABEL_35;
  v24 = *v23;
  if ( !*v23 )
    goto LABEL_35;
  v25 = *(_QWORD *)(v24 + 8);
  if ( !v25 )
    goto LABEL_35;
  v26 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, bool, _QWORD *, int))(v25 + 112);
  if ( !v26 )
    goto LABEL_35;
  v16 = v26(v24, *(_QWORD *)(a1 + 8), a2[13], a2[23], v20, sub_140018030, a2, v22, a2 + 29, 424);
  if ( v16 != -1073741789 )
    goto LABEL_15;
  v27 = *v23;
  if ( !*v23
    || (v28 = *(_QWORD *)(v27 + 8)) == 0
    || (v29 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _QWORD *, int))(v28 + 88)) == 0LL )
  {
LABEL_35:
    v16 = -1073741811;
    goto LABEL_15;
  }
  LOBYTE(v34) = v22;
  v15 = v29(v27, *(_QWORD *)(a1 + 8), a2[13], a2[23], v20, sub_140018030, a2, v34);
LABEL_14:
  v16 = v15;
LABEL_15:
  KeLowerIrql(v5);
  return v16;
}
