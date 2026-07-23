/*
 * XREFs of WheaSelLogErrorPkt @ 0x1406D84A8
 * Callers:
 *     WheaSelLogEvent @ 0x1406D8594 (WheaSelLogEvent.c)
 * Callees:
 *     WheapLogIpmiSELEvent @ 0x1406DB4B0 (WheapLogIpmiSELEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall WheaSelLogErrorPkt(__int64 a1)
{
  _DWORD *v1; // r9
  int v2; // edx
  char *v3; // rcx
  int v4; // edx
  int v5; // edx
  bool v6; // zf
  size_t v7; // rdx
  __int64 *p_Src; // rcx
  __int64 v9; // xmm0_8
  int v10; // eax
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+28h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+38h] [rbp-38h]
  __int64 Src; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+60h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 32);
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v2 = v1[14];
  v3 = (char *)v1 + (unsigned int)v1[16];
  v17 = 0;
  v21 = 0;
  Src = 0LL;
  v19 = 0;
  v20 = 0LL;
  v4 = v2 - 1;
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( v5 )
    {
      v6 = v5 == 1;
      v7 = 12LL;
      if ( v6 )
      {
        v9 = *(_QWORD *)v3;
        v10 = *((_DWORD *)v3 + 2);
        p_Src = &v16;
        v16 = v9;
        v17 = v10;
      }
      else
      {
        p_Src = &v14;
        LODWORD(v14) = v1[7];
        HIDWORD(v14) = v1[5];
        v15 = v1[3];
      }
    }
    else
    {
      v11 = *(_OWORD *)(v3 + 24);
      v7 = 20LL;
      v21 = *((_DWORD *)v3 + 2);
      p_Src = (__int64 *)&v20;
      v20 = v11;
    }
  }
  else
  {
    v7 = 12LL;
    Src = *((_QWORD *)v3 + 5);
    v12 = *((_DWORD *)v3 + 9);
    p_Src = &Src;
    v19 = v12;
  }
  return WheapLogIpmiSELEvent(p_Src, v7);
}
