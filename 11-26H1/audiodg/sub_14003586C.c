/*
 * XREFs of sub_14003586C @ 0x14003586C
 * Callers:
 *     sub_1400357D0 @ 0x1400357D0 (sub_1400357D0.c)
 * Callees:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004FDBC @ 0x14004FDBC (sub_14004FDBC.c)
 *     sub_1400549B0 @ 0x1400549B0 (sub_1400549B0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14003586C(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  __int64 **i; // rbx
  void *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v16 = v4;
  if ( *(_QWORD *)(a1 + 160) )
  {
    v6 = sub_140049338(72LL, &unk_1400C75FC);
    sub_14004FDBC(&v13, v6, 0LL);
    v7 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0x48uLL);
      v11 = sub_140007B68((__int64 *)(a1 + 40), v7 + 1);
      v8 = v11;
      if ( v11 >= 0 )
      {
        *(_DWORD *)v7 = 4;
        v11 = sub_1400549B0(v7, a2);
        v8 = v11;
        if ( v11 >= 0 )
        {
          for ( i = *(__int64 ***)(a1 + 160); i; i = (__int64 **)*i )
            sub_140007394((struct _RTL_CRITICAL_SECTION *)i[1], (__int64 *)&v13);
          if ( v14 )
            sub_140007588(v14);
          v8 = 0;
          goto LABEL_20;
        }
        v10 = 212;
      }
      else
      {
        v10 = 209;
      }
      v9 = v11;
    }
    else
    {
      v8 = -2147024882;
      v9 = -2147024882;
      v10 = 205;
    }
    sub_14000C2A8(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      v9);
    if ( v14 )
      sub_140007588(v14);
LABEL_20:
    sub_140018FF0(&v16);
    return v8;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
