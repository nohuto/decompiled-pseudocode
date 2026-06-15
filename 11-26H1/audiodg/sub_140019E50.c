/*
 * XREFs of sub_140019E50 @ 0x140019E50
 * Callers:
 *     sub_14001C154 @ 0x14001C154 (sub_14001C154.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140016F80 @ 0x140016F80 (sub_140016F80.c)
 *     sub_14001A1A8 @ 0x14001A1A8 (sub_14001A1A8.c)
 *     sub_14001D1F4 @ 0x14001D1F4 (sub_14001D1F4.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140078C70 @ 0x140078C70 (sub_140078C70.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_140019E50(char *pv)
{
  void *v2; // r14
  RTL_SRWLOCK *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // r9d
  int v9; // edx
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  HANDLE FileW; // rax
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pva; // [rsp+48h] [rbp-B8h] BYREF
  void *v18; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v19; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v20[52]; // [rsp+60h] [rbp-A0h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v18 = 0LL;
  v2 = (void *)*((_QWORD *)pv + 14);
  v16 = 0LL;
  pva = 0LL;
  v3 = (RTL_SRWLOCK *)(pv + 200);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 25);
  v19 = v3;
  v4 = *((_QWORD *)pv + 24);
  *((_QWORD *)pv + 24) = 0LL;
  if ( v4 )
    sub_1400B6010(v4);
  v5 = sub_14001A1A8(v4, pv + 192);
  v6 = v5;
  if ( v5 >= 0 )
  {
    sub_14001D1F4(pv + 184, 0LL);
    if ( *((_QWORD *)pv + 23) )
    {
      ThreadpoolWait = CreateThreadpoolWait(pfnwa, pv, 0LL);
      *((_QWORD *)pv + 22) = ThreadpoolWait;
      if ( ThreadpoolWait )
      {
        SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 23), 0LL);
        if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
        {
          v11 = v16;
          v16 = 0LL;
          if ( v11 )
            sub_1400B6010(v11);
          v12 = sub_1400B6010(*((_QWORD *)pv + 13));
          v6 = v12;
          if ( v12 < 0 )
          {
            v8 = v12;
            v9 = 2150;
            goto LABEL_17;
          }
          sub_1400118C0(&pva, 0LL);
          v13 = sub_1400B6010(v16);
          v6 = v13;
          if ( v13 < 0 )
          {
            v8 = v13;
            v9 = 2153;
            goto LABEL_17;
          }
          FileW = CreateFileW((LPCWSTR)pva, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
          sub_140016858(&v18, FileW);
          v2 = v18;
          if ( !v18 || v18 == (void *)-1LL )
          {
            v6 = sub_1400470EC(retaddr, 2169LL, "avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp");
            goto LABEL_31;
          }
        }
        memset(v20, 0, sizeof(v20));
        LODWORD(v20[0]) = 416;
        LODWORD(v20[1]) = 1;
        v20[2] = v2;
        sub_140016F80((__int64 *)pv + 18, 0LL);
        if ( !(unsigned int)CM_Register_Notification(v20, pv, sub_14003EDD0, pv + 144) )
        {
          v6 = 0;
          goto LABEL_31;
        }
        v9 = 2181;
      }
      else
      {
        v9 = 2141;
      }
      v6 = -2147467259;
      v8 = -2147467259;
    }
    else
    {
      v7 = sub_140078C70();
      v6 = v7;
      if ( v7 >= 0 )
      {
LABEL_31:
        sub_14003A998(&v19);
        sub_14001D96C(&pva);
        sub_140003238(&v16);
        sub_140016F18(&v18);
        return v6;
      }
      v8 = v7;
      v9 = 2138;
    }
LABEL_17:
    sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v8);
    goto LABEL_31;
  }
  sub_14000C2A8((int)retaddr, 2135, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v5);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( pva )
    CoTaskMemFree(pva);
  if ( v16 )
    sub_1400B6010(v16);
  return v6;
}
