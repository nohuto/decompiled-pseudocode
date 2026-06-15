/*
 * XREFs of sub_1400228C0 @ 0x1400228C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140007B68 @ 0x140007B68 (sub_140007B68.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400204AC @ 0x1400204AC (sub_1400204AC.c)
 *     sub_140020F28 @ 0x140020F28 (sub_140020F28.c)
 *     sub_140021570 @ 0x140021570 (sub_140021570.c)
 *     sub_140023334 @ 0x140023334 (sub_140023334.c)
 *     sub_1400237B8 @ 0x1400237B8 (sub_1400237B8.c)
 *     sub_140023A68 @ 0x140023A68 (sub_140023A68.c)
 *     sub_14003E394 @ 0x14003E394 (sub_14003E394.c)
 *     sub_140041100 @ 0x140041100 (sub_140041100.c)
 *     sub_140041294 @ 0x140041294 (sub_140041294.c)
 *     sub_1400469CC @ 0x1400469CC (sub_1400469CC.c)
 *     sub_140047CA8 @ 0x140047CA8 (sub_140047CA8.c)
 *     sub_140047F7C @ 0x140047F7C (sub_140047F7C.c)
 *     sub_140048090 @ 0x140048090 (sub_140048090.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140053700 @ 0x140053700 (sub_140053700.c)
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 *     sub_140053AF0 @ 0x140053AF0 (sub_140053AF0.c)
 *     sub_140054680 @ 0x140054680 (sub_140054680.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1400228C0(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // edi
  void *v9; // rcx
  void *v10; // rcx
  __int64 result; // rax
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  __int64 v16; // [rsp+48h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  LPVOID *p_pv; // [rsp+58h] [rbp-50h] BYREF
  void *v19; // [rsp+60h] [rbp-48h]
  char v20; // [rsp+68h] [rbp-40h]
  __int64 v21; // [rsp+70h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+78h] [rbp-30h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  LPVOID pv; // [rsp+C8h] [rbp+20h] BYREF

  v15 = 0LL;
  try
  {
    v4 = sub_1400B6010(a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      sub_14000C2A8((int)retaddr, 524, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v4);
      return v5;
    }
    v17 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
    v22 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
    v6 = v15;
    v21 = v15;
    sub_140054680(a1 + 184, &p_pv, &v21);
    if ( p_pv == *(LPVOID **)(a1 + 192) )
    {
      sub_14000C2A8(
        (int)retaddr,
        530,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        -2147023728);
      sub_140018FF0(&v22);
      sub_140003238(&v17);
      sub_140003238(&v15);
      return 2147943568LL;
    }
    v7 = (__int64)p_pv[3];
    v17 = v7;
    if ( v7 )
    {
      sub_1400B6010(v7);
      v6 = v15;
    }
    if ( a1 != -144 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
      v6 = v15;
    }
    pv = 0LL;
    v16 = 0LL;
    if ( (int)sub_1400B6010(v6) >= 0 )
    {
      p_pv = &pv;
      v19 = 0LL;
      v20 = 1;
      v8 = sub_1400B6010(v16);
      if ( v20 )
      {
        v10 = *p_pv;
        *p_pv = v19;
        if ( v10 )
          CoTaskMemFree(v10);
      }
      if ( v8 >= 0 )
        goto LABEL_27;
      sub_14000C2A8((int)retaddr, 539, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
      sub_140003238(&v16);
      v12 = pv;
      pv = 0LL;
      if ( v12 )
        CoTaskMemFree(v12);
    }
    else
    {
      p_pv = &pv;
      v19 = 0LL;
      v20 = 1;
      v8 = sub_1400B6010(a2);
      if ( v20 )
      {
        v9 = *p_pv;
        *p_pv = v19;
        if ( v9 )
          CoTaskMemFree(v9);
      }
      if ( v8 >= 0 )
      {
LABEL_27:
        sub_140003238(&v16);
        v14 = pv;
        pv = 0LL;
        if ( v14 )
          CoTaskMemFree(v14);
        sub_140003238(&v17);
        sub_140003238(&v15);
        return 0LL;
      }
      sub_14000C2A8((int)retaddr, 543, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
      sub_140003238(&v16);
      v13 = pv;
      pv = 0LL;
      if ( v13 )
        CoTaskMemFree(v13);
    }
    sub_140003238(&v17);
    sub_140003238(&v15);
    result = (unsigned int)v8;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(retaddr, 634LL, "avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp");
  }
  return result;
}
