/*
 * XREFs of SepAdjustGroups @ 0x1409E12C0
 * Callers:
 *     NtAdjustGroupsToken @ 0x1409E0F30 (NtAdjustGroupsToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall SepAdjustGroups(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        _DWORD *a8,
        _DWORD *a9,
        char *a10,
        char a11)
{
  unsigned int v12; // eax
  char v13; // si
  char v14; // r11
  char v15; // bl
  unsigned int v16; // r8d
  __int64 v17; // r9
  unsigned int v18; // r12d
  int v19; // r10d
  __int64 v20; // rax
  __int64 v21; // r14
  char v22; // dl
  unsigned int v23; // ebp
  PSID v24; // r15
  __int64 v25; // rsi
  BOOLEAN v26; // al
  __int64 v28; // rax
  int v29; // ecx
  PSID v30; // rdx
  size_t v31; // rsi
  char v32; // dl
  int v33; // eax
  int v34; // edx
  char v35; // cl
  char v36; // bp
  size_t v37; // rsi
  _DWORD *v38; // rcx
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // eax
  _QWORD *v43; // rcx
  int v44; // [rsp+20h] [rbp-68h]
  int v45; // [rsp+24h] [rbp-64h]
  unsigned int v46; // [rsp+28h] [rbp-60h]
  PSID Sid1[2]; // [rsp+30h] [rbp-58h]
  char v52; // [rsp+C0h] [rbp+38h]

  v12 = a4;
  v13 = a3;
  v44 = 0;
  v14 = a2;
  v46 = 0;
  v15 = 1;
  *a9 = 0;
  v16 = 1;
  v45 = 1;
  v17 = a1;
  v18 = 0;
  v19 = 0;
  while ( v16 < *(_DWORD *)(v17 + 124) )
  {
    v20 = *(_QWORD *)(v17 + 152);
    v21 = 16LL * v16;
    *(_OWORD *)Sid1 = *(_OWORD *)(v20 + v21);
    if ( !v13 )
    {
      v22 = 0;
      v23 = 0;
      v24 = *(PSID *)(v20 + 16LL * v16);
      v52 = 0;
      while ( 1 )
      {
        v12 = a4;
        if ( v23 >= a4 || v22 )
        {
          v16 = v45;
          v19 = v44;
          v14 = a2;
          v13 = a3;
          goto LABEL_11;
        }
        v25 = 16LL * v23;
        v26 = RtlEqualSid(v24, *(PSID *)(v25 + a5));
        v17 = a1;
        if ( v26 )
        {
          v28 = *(_QWORD *)(a1 + 152);
          v22 = 1;
          ++v46;
          v52 = 1;
          v29 = *(_DWORD *)(v21 + v28 + 8);
          if ( ((*(_BYTE *)(v25 + a5 + 8) ^ *(_BYTE *)(v21 + v28 + 8)) & 4) != 0 )
          {
            if ( (v29 & 1) != 0 )
              return 3221225565LL;
            if ( (v29 & 0x10) != 0 )
              return 3221226163LL;
            v30 = Sid1[0];
            v31 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
            v44 += v31;
            if ( a2 )
            {
              if ( a6 )
              {
                if ( a11 )
                {
                  RtlWriteULongToUser((_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)), (int)Sid1[1]);
                  v30 = Sid1[0];
                }
                else
                {
                  *(_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL)) = Sid1[1];
                }
                v43 = (_QWORD *)(a6 + 16LL * (unsigned int)*a9 + 8);
                if ( a11 )
                {
                  RtlWriteULong64ToUser(v43, (__int64)a7);
                  v24 = Sid1[0];
                  RtlCopyToUser(a7, Sid1[0], v31);
                }
                else
                {
                  *v43 = a7;
                  RtlCopyVolatileMemory(a7, v30, v31);
                  v24 = Sid1[0];
                }
                v17 = a1;
                a7 += v31;
              }
              else
              {
                v24 = Sid1[0];
              }
              *(_DWORD *)(v21 + *(_QWORD *)(v17 + 152) + 8) &= ~(*(_DWORD *)(v21 + *(_QWORD *)(v17 + 152) + 8) & 4);
              *(_DWORD *)(v21 + *(_QWORD *)(v17 + 152) + 8) |= *(_DWORD *)(a5 + 16LL * v23 + 8) & 4;
            }
            else
            {
              v24 = Sid1[0];
            }
            ++*a9;
            v22 = 1;
          }
        }
        else
        {
          v22 = v52;
        }
        ++v23;
      }
    }
    v32 = *(_DWORD *)(v20 + v21 + 8);
    v33 = *(_DWORD *)(v20 + v21 + 8) & 4;
    v34 = v32 & 2;
    if ( !v34 || v33 )
    {
      v35 = 0;
      if ( !v34 && v33 )
      {
        v36 = 0;
LABEL_42:
        v37 = (4 * *((unsigned __int8 *)Sid1[0] + 1) + 11) & 0xFFFFFFFC;
        v19 += v37;
        v44 = v19;
        if ( v14 )
        {
          if ( a6 )
          {
            v38 = (_DWORD *)(a6 + 16 * ((unsigned int)*a9 + 1LL));
            if ( a11 )
              RtlWriteULongToUser(v38, (int)Sid1[1]);
            else
              *v38 = Sid1[1];
            v39 = (_QWORD *)(16LL * (unsigned int)*a9 + a6 + 8);
            if ( a11 )
            {
              RtlWriteULong64ToUser(v39, (__int64)a7);
              RtlCopyToUser(a7, Sid1[0], v37);
            }
            else
            {
              *v39 = a7;
              RtlCopyVolatileMemory(a7, Sid1[0], v37);
            }
            v16 = v45;
            v35 = v36;
            v17 = a1;
            a7 += v37;
            v19 = v44;
            v14 = a2;
          }
          v40 = *(_QWORD *)(v17 + 152);
          v41 = *(_DWORD *)(v21 + v40 + 8);
          if ( v35 )
            v42 = v41 | 4;
          else
            v42 = v41 & 0xFFFFFFFB;
          *(_DWORD *)(v21 + v40 + 8) = v42;
        }
        ++*a9;
        v13 = a3;
        goto LABEL_56;
      }
    }
    else
    {
      v35 = 1;
    }
    v36 = v35;
    if ( v35 )
      goto LABEL_42;
LABEL_56:
    v12 = a4;
LABEL_11:
    v45 = ++v16;
  }
  if ( !v13 && v46 < v12 )
    v18 = 262;
  if ( !*a9 || !v14 )
    v15 = 0;
  *a10 = v15;
  if ( a6 )
    *a8 = v19 + 16 * *a9 + 8;
  return v18;
}
