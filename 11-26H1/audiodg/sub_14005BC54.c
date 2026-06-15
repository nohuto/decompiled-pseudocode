/*
 * XREFs of sub_14005BC54 @ 0x14005BC54
 * Callers:
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003F528 @ 0x14003F528 (sub_14003F528.c)
 *     sub_14005C3DC @ 0x14005C3DC (sub_14005C3DC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14005BC54(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // ebx
  int v8; // edx
  __int64 (**i)(void); // rax
  int v10; // edx
  ATL::CAtlException *v12; // rbx
  unsigned int v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v17; // [rsp+50h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  int v19; // [rsp+80h] [rbp+8h] BYREF

  EnterCriticalSection(a1);
  v15 = a1;
  v14 = 0LL;
  v6 = a1 + 1;
  v13 = 0;
  v19 = 0;
  if ( sub_14003F528((__int64)&a1[1], a2, &v13, &v19, &v16) )
  {
    v7 = -2147024809;
    v8 = 52;
  }
  else
  {
    v14 = 0LL;
    for ( i = (__int64 (**)(void))&unk_1400BF410; i != off_1400BF430; i += 2 )
    {
      if ( a3 == *(_DWORD *)i )
      {
        v7 = sub_1400B6010(&v14);
        if ( v7 < 0 )
        {
          v10 = 37;
          goto LABEL_13;
        }
        try
        {
          sub_14005C3DC(v6, a2, &v14);
        }
        catch ( ATL::CAtlException *v17 )
        {
          v12 = v17;
          if ( *(_DWORD *)v17 == -1073741571 )
            o__resetstkoflw();
          v19 = *(_DWORD *)v12;
          v7 = v19;
          if ( v19 < 0 )
          {
            v8 = 58;
            goto LABEL_14;
          }
        }
        sub_140003238(&v14);
        sub_140018FF0(&v15);
        return 0LL;
      }
    }
    v7 = -2147024809;
    v10 = 42;
LABEL_13:
    sub_14000C2A8(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
      v7);
    v8 = 54;
  }
LABEL_14:
  sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp", v7);
  sub_140003238(&v14);
  sub_140018FF0(&v15);
  return (unsigned int)v7;
}
