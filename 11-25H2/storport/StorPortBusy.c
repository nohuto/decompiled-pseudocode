/*
 * XREFs of StorPortBusy @ 0x140042460
 * Callers:
 *     sub_1401B7150 @ 0x1401B7150 (sub_1401B7150.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_14006B1AC @ 0x14006B1AC (sub_14006B1AC.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  char **v2; // rax
  char *v3; // rdi
  char *v4; // r10
  __int64 v5; // rbp
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(char ***)(a1 - 16);
  v3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  if ( v2 && *v2 )
  {
    v6 = *(_DWORD *)*v2;
    if ( ((_BYTE)v2[31] & 1) != 0 )
    {
      if ( v6 == 1314275652 )
        v4 = *v2;
    }
    else if ( v6 == 1094997074 )
    {
      v3 = *v2;
    }
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v7 = (__int64)v3;
    v8 = (__int64)v3;
    if ( !v3 )
    {
      v7 = (__int64)v4;
      v8 = (__int64)v4;
    }
    sub_14000FB90(v8, 18, retaddr, v7, v5, 0LL, 0LL);
  }
  if ( !v3 )
    return 0;
  ++*((_DWORD *)v3 + 1339);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x20) != 0
    && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_140067FD4(off_140168120->AttachedDevice, 21LL, &unk_140149070, v3, v5);
  }
  v9 = sub_14006B1AC(v3 + 1008);
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1401688B8);
    if ( (qword_140168458 & 0x800) != 0 )
      sub_14000FB90((__int64)v3, 22, retaddr, 1085LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v9 + 32) = 7;
  *(_DWORD *)(v9 + 40) = v5;
  sub_14000F5E0(v3 + 1008, (struct _SLIST_ENTRY *)v9);
  return 1;
}
