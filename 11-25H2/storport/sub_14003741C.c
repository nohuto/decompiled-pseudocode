/*
 * XREFs of sub_14003741C @ 0x14003741C
 * Callers:
 *     sub_140037250 @ 0x140037250 (sub_140037250.c)
 *     sub_1400BBFCC @ 0x1400BBFCC (sub_1400BBFCC.c)
 * Callees:
 *     sub_140037630 @ 0x140037630 (sub_140037630.c)
 *     __report_rangecheckfailure @ 0x1400564A0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14013CEA0 @ 0x14013CEA0 (sub_14013CEA0.c)
 */

__int64 __fastcall sub_14003741C(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // ebx
  __int64 v6; // rcx
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // r10d
  _BYTE *v11; // rsi
  char v13; // r13
  _BYTE *v14; // rdi
  unsigned int v15; // edx
  int v16; // ecx
  char v17; // dl
  unsigned int v18; // eax
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // [rsp+20h] [rbp-50h]
  __int128 v22; // [rsp+28h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h]
  _BYTE v24[16]; // [rsp+40h] [rbp-30h]
  _BYTE v25[16]; // [rsp+50h] [rbp-20h]

  v2 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v3 = 0;
  while ( v2 <= 8u )
  {
    v6 = v2;
    if ( v2 >= 9uLL )
      _report_rangecheckfailure(v2, a2, a1);
    v24[v2++] = 0;
    v25[v6] = 0;
  }
  if ( a1[1] == 0x83 )
  {
    v7 = (unsigned __int8)a1[3] | ((unsigned __int8)a1[2] << 8);
    v22 = (unsigned __int64)a1;
    v8 = v7 + 4;
    if ( v8 > 0xFFFF )
      v8 = 0xFFFF;
    LODWORD(v23) = v8;
    while ( 1 )
    {
      v9 = sub_140037630(&v22);
      v11 = (_BYTE *)v9;
      if ( !v9 )
        break;
      v13 = *(_BYTE *)(v9 + 1);
      if ( (v13 & 0x30) == 0 && (v13 & 0xFu) <= 8 )
      {
        if ( a2[1] != 0x83 )
          break;
        v14 = 0LL;
        v15 = ((unsigned __int8)a2[3] | ((unsigned __int8)a2[2] << 8)) + 4;
        if ( v15 > v10 )
          v15 = v10;
        v21 = v15;
        while ( 1 )
        {
          v16 = v14 ? (_DWORD)v14 + (unsigned __int8)v14[3] - (_DWORD)a2 + 4 : 4;
          v14 = &a2[v16];
          if ( v16 + 4 > v15 || (unsigned int)(unsigned __int8)v14[3] + v16 + 4 > v15 || !v14 )
            break;
          v17 = v14[1];
          if ( (v17 & 0x30) != 0 || ((*v14 ^ *v11) & 0xF) != 0 )
          {
            v15 = v21;
          }
          else
          {
            v20 = (v13 & 0xF) == (v17 & 0xF);
            v15 = v21;
            if ( v20 )
            {
              v18 = (unsigned __int8)v11[3];
              v24[v13 & 0xF] = 1;
              if ( (_BYTE)v18 == v14[3] )
              {
                v19 = sub_14013CEA0(v11 + 4, v14 + 4, v18);
                v15 = v21;
                if ( !v19 )
                  v25[v13 & 0xF] = 1;
              }
            }
          }
        }
      }
    }
  }
  if ( v24[2] || v24[3] || v24[8] )
  {
    if ( !v25[2] && !v25[3] )
    {
      LOBYTE(v3) = v25[8] == 0;
      return v3;
    }
    return 0LL;
  }
  if ( v24[1] )
    return v25[1] == 0;
  if ( v24[0] )
    return v25[0] == 0;
  return 1LL;
}
