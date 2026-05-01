/*
 * XREFs of HamConnectForStateChangeNotifications @ 0x180002280
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180002250 (MIDL_user_allocate.c)
 *     HamIpcChannelInitialize @ 0x180003898 (HamIpcChannelInitialize.c)
 *     CempLockInitialize @ 0x180003900 (CempLockInitialize.c)
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x1800040B4 (HampConnectionStart.c)
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 *     memset_0 @ 0x18001A5BE (memset_0.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HamConnectForStateChangeNotifications(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // esi
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-30h]

  v4 = 0;
  if ( a1 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v15 = a3;
    v8 = MIDL_user_allocate(0xA0uLL);
    v9 = v8;
    if ( v8 )
    {
      memset_0(v8, 0, 0xA0uLL);
      CempLockInitialize(v9 + 15);
      v9[13] = a1;
      v9[14] = a2;
      if ( &unk_18001D2B0 == &unk_18001DC80 )
      {
        *((_BYTE *)v9 + 156) = 0;
        HamIpcChannelInitialize(v11, v10, v12, v9 + 3, v15, v16, *((_QWORD *)&v16 + 1), v17);
      }
      else
      {
        *((_BYTE *)v9 + 156) = 6;
      }
      v13 = HampConnectionAllocateState(v9, &unk_18001D2B0, 0LL, &v15);
      if ( v13 < 0 || (v13 = HampConnectionStart(v9), v13 < 0) )
      {
        HampConnectionDestroy(v9);
        return (unsigned int)v13;
      }
      else
      {
        *a4 = v9;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v4;
}
