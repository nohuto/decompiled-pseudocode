/*
 * XREFs of ExpQuerySystemMemoryNumaCacheInformation @ 0x14084CB94
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaCacheInformation(
        void *Src,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  __int64 result; // rax
  __int128 v9; // [rsp+58h] [rbp-90h] BYREF
  _DWORD Srca[2]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v11; // [rsp+70h] [rbp-78h]
  int v12; // [rsp+78h] [rbp-70h]
  __int16 v13; // [rsp+7Ch] [rbp-6Ch]
  __int16 v14; // [rsp+7Eh] [rbp-6Ah]
  __int128 v15; // [rsp+80h] [rbp-68h]
  int v16; // [rsp+90h] [rbp-58h]
  int v17; // [rsp+94h] [rbp-54h]
  __int128 v18; // [rsp+98h] [rbp-50h]
  __int128 v19; // [rsp+A8h] [rbp-40h]
  __int64 v20; // [rsp+B8h] [rbp-30h]

  v9 = 0LL;
  v14 = 0;
  v17 = 0;
  if ( !Src || a2 < 0x10 )
    return 3221225485LL;
  if ( a6 )
    RtlCopyFromUser(&v9, Src, 0x10uLL);
  else
    RtlCopyVolatileMemory(&v9, Src, 0x10uLL);
  if ( (_DWORD)v9 != 1 || HIDWORD(v9) || WORD2(v9) >= (unsigned __int16)KeNumberNodes || SDWORD2(v9) >= 4 || !a3 && a4 )
    return 3221225485LL;
  if ( a4 >= 0x30 )
  {
    v14 = 0;
    v17 = 0;
    Srca[0] = 1;
    Srca[1] = 48;
    result = guard_dispatch_icall_no_overrides(50LL, 24LL);
    if ( (int)result >= 0 )
    {
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      result = guard_dispatch_icall_no_overrides(WORD2(v9), DWORD2(v9));
      if ( (int)result >= 0 )
      {
        v11 = *((_QWORD *)&v18 + 1);
        v12 = v20;
        v13 = v18;
        v15 = v19;
        v16 = HIDWORD(v20);
        if ( a6 )
          RtlCopyToUser(a3, Srca, 0x30uLL);
        else
          RtlCopyVolatileMemory(a3, Srca, 0x30uLL);
        if ( a5 )
          *a5 = 48;
        return 0LL;
      }
    }
  }
  else
  {
    result = 3221225507LL;
    if ( a5 )
      *a5 = 48;
  }
  return result;
}
