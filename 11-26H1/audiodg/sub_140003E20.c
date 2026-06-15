/*
 * XREFs of sub_140003E20 @ 0x140003E20
 * Callers:
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_14002678C @ 0x14002678C (sub_14002678C.c)
 *     sub_140026FE0 @ 0x140026FE0 (sub_140026FE0.c)
 *     sub_140028694 @ 0x140028694 (sub_140028694.c)
 *     sub_1400286C4 @ 0x1400286C4 (sub_1400286C4.c)
 *     sub_14002AC80 @ 0x14002AC80 (sub_14002AC80.c)
 *     sub_14002AE20 @ 0x14002AE20 (sub_14002AE20.c)
 *     sub_14002B05C @ 0x14002B05C (sub_14002B05C.c)
 *     sub_14002B264 @ 0x14002B264 (sub_14002B264.c)
 *     sub_14002BF4C @ 0x14002BF4C (sub_14002BF4C.c)
 *     sub_14002EE90 @ 0x14002EE90 (sub_14002EE90.c)
 *     sub_140031DE4 @ 0x140031DE4 (sub_140031DE4.c)
 *     sub_14004375C @ 0x14004375C (sub_14004375C.c)
 *     sub_140043844 @ 0x140043844 (sub_140043844.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14006946C @ 0x14006946C (sub_14006946C.c)
 *     sub_1400694F0 @ 0x1400694F0 (sub_1400694F0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140003E20(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 **v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  void *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v31; // [rsp+50h] [rbp+30h] BYREF
  __int64 v32; // [rsp+58h] [rbp+38h] BYREF
  __int64 v33; // [rsp+60h] [rbp+40h] BYREF
  __int64 *v34; // [rsp+68h] [rbp+48h] BYREF

  v31 = *(_DWORD *)(a1 + 148);
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 50LL, &unk_1400C9A58);
  }
  v2 = *(__int64 **)(a1 + 72);
  v34 = v2;
  v33 = *(_QWORD *)(a1 + 24);
  if ( !v2 )
  {
LABEL_26:
    *(_DWORD *)(a1 + 144) = v31;
    return 0LL;
  }
  while ( 1 )
  {
    if ( v33 )
    {
      v3 = sub_140028694(v2, &v33);
      v4 = *(_QWORD *)v3;
      if ( *(_DWORD *)(*(_QWORD *)v3 + 40LL) == 2 )
      {
        v32 = 0LL;
        v5 = sub_14002678C(*(_QWORD *)(v4 + 32) + 40LL, &v32);
        v7 = v5;
        if ( v5 < 0 )
        {
          v27 = 4035LL;
LABEL_42:
          sub_14000C2A8(retaddr, v27, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v5);
          goto LABEL_43;
        }
        v8 = v32;
        v10 = sub_14002B05C(v6, v4, v32);
        if ( v10 < 0 )
        {
          v29 = 4036LL;
        }
        else
        {
          v10 = sub_14002B264(v9, v4, v8, v31);
          if ( v10 < 0 )
          {
            v29 = 4037LL;
          }
          else
          {
            v10 = sub_14002EE90(v12, v11, v8);
            if ( v10 < 0 )
            {
              v29 = 4038LL;
            }
            else
            {
              v10 = sub_1400286C4(a1, v4, v8);
              if ( v10 < 0 )
              {
                v29 = 4039LL;
              }
              else
              {
                v10 = sub_14002AE20(v13, v4, v8);
                if ( v10 >= 0 )
                {
                  v15 = sub_14002AC80(a1, v4, v8);
                  if ( v15 < 0 )
                  {
                    v28 = 4041LL;
                  }
                  else
                  {
                    v15 = sub_14004375C(a1, v14, v8);
                    if ( v15 < 0 )
                    {
                      v28 = 4042LL;
                    }
                    else
                    {
                      v15 = sub_140043844(a1, v16, v8);
                      if ( v15 < 0 )
                      {
                        v28 = 4043LL;
                      }
                      else
                      {
                        v15 = sub_14002BF4C(a1, v17, v8);
                        if ( v15 < 0 )
                        {
                          v28 = 4044LL;
                        }
                        else
                        {
                          v15 = sub_140031DE4(a1, v18, v8);
                          if ( v15 < 0 )
                          {
                            v28 = 4045LL;
                          }
                          else
                          {
                            v15 = sub_1400694F0(v20, v19, v8);
                            if ( v15 >= 0 )
                            {
                              v5 = sub_14006946C(v22, v21, v8);
                              v7 = v5;
                              if ( v5 >= 0 )
                              {
                                sub_140003238(&v32);
                                goto LABEL_22;
                              }
                              v27 = 4047LL;
                              goto LABEL_42;
                            }
                            v28 = 4046LL;
                          }
                        }
                      }
                    }
                  }
                  sub_14000C2A8(
                    retaddr,
                    v28,
                    "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
                    (unsigned int)v15);
                  v7 = v15;
LABEL_43:
                  sub_140003238(&v32);
                  return v7;
                }
                v29 = 4040LL;
              }
            }
          }
        }
        sub_14000C2A8(retaddr, v29, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v10);
        v7 = v10;
        goto LABEL_43;
      }
    }
LABEL_22:
    v23 = (__int64 **)sub_140028694(v2, &v34);
    v2 = *v23;
    v32 = **v23;
    if ( v32 )
      break;
LABEL_25:
    if ( !v34 )
      goto LABEL_26;
  }
  while ( 1 )
  {
    v24 = (_QWORD *)sub_1400265D8(v2, &v32);
    v25 = sub_140026FE0(*v24, v31, &v31);
    v7 = v25;
    if ( v25 < 0 )
      break;
    if ( !v32 )
      goto LABEL_25;
  }
  sub_14000C2A8(retaddr, 4057LL, "avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp", (unsigned int)v25);
  return v7;
}
