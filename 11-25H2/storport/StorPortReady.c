/*
 * XREFs of StorPortReady @ 0x140056290
 * Callers:
 *     sub_1401B7700 @ 0x1401B7700 (sub_1401B7700.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_14006B1AC @ 0x14006B1AC (sub_14006B1AC.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  char **v1; // rax
  char *v2; // rdi
  char *v3; // r10
  int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = *(char ***)(a1 - 16);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 && *v1 )
  {
    v4 = *(_DWORD *)*v1;
    if ( ((_BYTE)v1[31] & 1) != 0 )
    {
      if ( v4 == 1314275652 )
        v3 = *v1;
    }
    else if ( v4 == 1094997074 )
    {
      v2 = *v1;
    }
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v5 = (__int64)v2;
    v6 = (__int64)v2;
    if ( !v2 )
    {
      v5 = (__int64)v3;
      v6 = (__int64)v3;
    }
    sub_14000FB90(v6, 19, retaddr, v5, 0LL, 0LL, 0LL);
  }
  if ( !v2 )
    return 0;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x20) != 0
    && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_140055C18((__int64)off_140168120->AttachedDevice, 0x16u, (__int64)&unk_140149070, v2);
  }
  v7 = sub_14006B1AC(v2 + 1008);
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_1401688B8);
    if ( (qword_140168458 & 0x800) != 0 )
      sub_14000FB90((__int64)v2, 22, retaddr, 1154LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v7 + 32) = 8;
  sub_14000F5E0(v2 + 1008, (struct _SLIST_ENTRY *)v7);
  return 1;
}
