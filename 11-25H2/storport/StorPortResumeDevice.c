/*
 * XREFs of StorPortResumeDevice @ 0x14000F620
 * Callers:
 *     sub_1401B7720 @ 0x1401B7720 (sub_1401B7720.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 *     sub_140071EB4 @ 0x140071EB4 (sub_140071EB4.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  char *v4; // rsi
  char **v5; // rax
  char *v6; // rdi
  __int64 v7; // rbp
  int v8; // r13d
  int v9; // r14d
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  int v15; // r9d
  int v16; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v18; // [rsp+60h] [rbp+8h]

  HIBYTE(v18) = 0;
  v4 = 0LL;
  v5 = *(char ***)(a1 - 16);
  v6 = 0LL;
  v7 = a4;
  v8 = a1;
  v9 = a3;
  v10 = a2;
  if ( v5 && *v5 )
  {
    v11 = *(_DWORD *)*v5;
    if ( ((_BYTE)v5[31] & 1) != 0 )
    {
      if ( v11 == 1314275652 )
        v6 = *v5;
    }
    else if ( v11 == 1094997074 )
    {
      v4 = *v5;
    }
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v15 = (int)v4;
    v16 = (int)v4;
    if ( !v4 )
    {
      v15 = (int)v6;
      v16 = (int)v6;
    }
    sub_14000FB90(v16, 17, (_DWORD)retaddr, v15, 0LL, v7 | ((a3 | (a2 << 8)) << 8), 0LL);
  }
  if ( v4 )
  {
    v12 = *((_DWORD *)v4 + 14);
  }
  else if ( v6 )
  {
    v12 = *((_DWORD *)v6 + 14);
  }
  else
  {
    v12 = 255;
  }
  if ( (byte_1401694F0 & 4) != 0 )
    sub_140071EB4(v12, a2, a3, v8, v12, v10, v9, v7);
  if ( !v4 )
    return 0;
  LOBYTE(v18) = v10;
  BYTE1(v18) = v9;
  BYTE2(v18) = v7;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x20) != 0
    && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_140067F78(off_140168120->AttachedDevice, 18LL, &unk_140149070, v10, v9, v7);
  }
  v13 = sub_14001F350(v4, v18);
  if ( !v13 )
    return 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 1520), 134684676, 134684677) != 134684677
    || v13 == -1504 )
  {
    _InterlockedIncrement(&dword_1401688B8);
    if ( (qword_140168458 & 0x800) != 0 )
      sub_14000FB90((_DWORD)v4, 22, (_DWORD)retaddr, 711, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v13 + 1536) = 6;
  *(_DWORD *)(v13 + 1540) = v18;
  sub_14000F5E0(v4 + 1008, (struct _SLIST_ENTRY *)(v13 + 1504));
  return 1;
}
