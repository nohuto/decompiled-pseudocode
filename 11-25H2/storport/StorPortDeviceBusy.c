/*
 * XREFs of StorPortDeviceBusy @ 0x14003FFF0
 * Callers:
 *     sub_1401B7190 @ 0x1401B7190 (sub_1401B7190.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140076118 @ 0x140076118 (sub_140076118.c)
 */

char __fastcall StorPortDeviceBusy(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // r10
  __int64 v8; // r15
  int v9; // edi
  unsigned int v10; // r14d
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+8h]

  HIBYTE(v16) = 0;
  v5 = 0LL;
  v6 = *(__int64 **)(a1 - 16);
  v7 = 0LL;
  v8 = a4;
  v9 = (unsigned __int8)a3;
  v10 = (unsigned __int8)a2;
  if ( v6 && *v6 )
  {
    a2 = *(unsigned int *)*v6;
    if ( (v6[31] & 1) != 0 )
    {
      if ( (_DWORD)a2 == 1314275652 )
        v7 = *v6;
    }
    else if ( (_DWORD)a2 == 1094997074 )
    {
      v5 = *v6;
    }
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v11 = v5;
    v12 = v5;
    if ( !v5 )
    {
      v11 = v7;
      v12 = v7;
    }
    sub_14000FB90(v12, 20, retaddr, v11, a5, v8 | (((unsigned __int8)a3 | (v10 << 8)) << 8), 0LL);
  }
  if ( v5 )
  {
    LOBYTE(v16) = v10;
    BYTE1(v16) = v9;
    BYTE2(v16) = v8;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x20) != 0
      && BYTE1(off_140168120->Timer) >= 3u )
    {
      sub_140076118(off_140168120->AttachedDevice, a2, a3, v10, v9, v8, a5);
    }
    v13 = sub_14001F350(v5, v16);
    if ( v13 )
    {
      ++*((_DWORD *)v13 + 569);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v13 + 400, 134684676, 134684677) == 134684677
        && v13 != (__int64 *)-1584LL )
      {
        *((_DWORD *)v13 + 404) = 9;
        *((_DWORD *)v13 + 405) = v16;
        *((_DWORD *)v13 + 406) = a5;
        sub_14000F5E0((char *)(v5 + 1008), (struct _SLIST_ENTRY *)v13 + 99);
        return 1;
      }
      _InterlockedIncrement(&dword_1401688B8);
      if ( (qword_140168458 & 0x800) != 0 )
        sub_14000FB90(v5, 22, retaddr, 916LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
