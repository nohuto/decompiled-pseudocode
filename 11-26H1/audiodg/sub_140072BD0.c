/*
 * XREFs of sub_140072BD0 @ 0x140072BD0
 * Callers:
 *     sub_140072EF0 @ 0x140072EF0 (sub_140072EF0.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14001E3D8 @ 0x14001E3D8 (sub_14001E3D8.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_140023578 @ 0x140023578 (sub_140023578.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140072B44 @ 0x140072B44 (sub_140072B44.c)
 *     sub_140072B5C @ 0x140072B5C (sub_140072B5C.c)
 *     sub_140072B9C @ 0x140072B9C (sub_140072B9C.c)
 *     sub_140072BC0 @ 0x140072BC0 (sub_140072BC0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 sub_140072BD0()
{
  __int64 v0; // rdx
  signed int LastError; // eax
  signed int v2; // ebx
  void *v3; // rbx
  HMODULE *v4; // rbx
  int v5; // edi
  HANDLE CurrentProcess; // rax
  DWORD v7; // esi
  DWORD i; // ebx
  HMODULE *v9; // rax
  wchar_t *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // r9
  DWORD cbNeeded[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h]
  HMODULE *lphModule; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  _WORD *v23; // [rsp+60h] [rbp-A8h] BYREF
  HMODULE Library; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR Filename[264]; // [rsp+78h] [rbp-90h] BYREF
  _WORD v26[264]; // [rsp+288h] [rbp+180h] BYREF
  _UNKNOWN *retaddr; // [rsp+4B0h] [rbp+3A8h]

  Library = LoadLibraryExW(L"apphelp.dll", 0LL, 0);
  if ( GetProcAddress(Library, "ApphelpCheckAPO") )
  {
    v3 = (void *)sub_1400499AC(2080LL, v0);
    memset(v3, 0, 0x820uLL);
    sub_140072B44(&lphModule, (__int64)v3);
    v4 = lphModule;
    if ( lphModule )
    {
      v5 = -2147023728;
      cbNeeded[0] = 0;
      CurrentProcess = GetCurrentProcess();
      if ( K32EnumProcessModules(CurrentProcess, v4, 8 * v22, cbNeeded) )
      {
        v7 = cbNeeded[0] >> 3;
        memset(Filename, 0, 0x208uLL);
        memset(v26, 0, 0x208uLL);
        for ( i = 0; i < v7; ++i )
        {
          v9 = (HMODULE *)sub_140072BC0(&lphModule, i);
          if ( GetModuleFileNameW(*v9, Filename, 0x104u) )
          {
            LODWORD(v20) = 0;
            if ( !(unsigned int)sub_1400B6010(&xmmword_1400C5548) )
            {
              v10 = wcsrchr(Filename, 0x5Cu);
              if ( v10 )
              {
                v19 = 0LL;
                sub_1400118C0(&v19, 0LL);
                sub_14001E3D8(Filename, &v19);
                if ( v19 )
                {
                  v11 = sub_14001EB30(v26, 260LL, (__int64)L"%s %s", v10 + 1, v19);
                  v2 = v11;
                  if ( v11 < 0 )
                  {
                    sub_14000C2A8(
                      (int)retaddr,
                      90,
                      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectbehavior.cpp",
                      v11);
                    sub_14001D96C(&v19);
                    goto LABEL_8;
                  }
                  v13 = (_DWORD *)sub_140006470(v12);
                  if ( *v13 > 4u && sub_14002813C((__int64)v13, 0x400000000100LL) )
                  {
                    v23 = v26;
                    sub_140023578(v14, (int)&unk_1400D26E9, v15, v16, (void **)&v23);
                  }
                }
                sub_14001D96C(&v19);
              }
              v5 = 0;
              break;
            }
          }
        }
      }
      sub_140072B5C((__int64 *)&lphModule);
      v2 = v5;
    }
    else
    {
      v2 = -2147024882;
      sub_14000C2A8(
        (int)retaddr,
        55,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectbehavior.cpp",
        -2147024882);
LABEL_8:
      sub_140072B5C((__int64 *)&lphModule);
    }
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 < 0 )
      sub_14000C2A8((int)retaddr, 52, (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectbehavior.cpp", v2);
  }
  sub_140072B9C(&Library);
  return (unsigned int)v2;
}
