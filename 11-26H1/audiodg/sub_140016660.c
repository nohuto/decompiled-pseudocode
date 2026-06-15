/*
 * XREFs of sub_140016660 @ 0x140016660
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400165A4 @ 0x1400165A4 (sub_1400165A4.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005D050 @ 0x14005D050 (sub_14005D050.c)
 */

__int64 __fastcall sub_140016660(
        __int64 a1,
        DWORD a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        __int64 a9)
{
  __int64 v13; // rax
  char *v14; // rbx
  HRESULT v15; // eax
  unsigned int v16; // ebx
  HANDLE v17; // rax
  HANDLE v18; // rax
  __int128 v19; // xmm0
  _QWORD v21[2]; // [rsp+20h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-118h] BYREF
  void *retaddr; // [rsp+148h] [rbp+0h]

  v13 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v13, "SrvStreamInstance_Initialize", 0LL);
  v14 = 0LL;
  v21[0] = 0LL;
  if ( a2 )
  {
    v15 = CoImpersonateClient();
    v16 = v15;
    if ( v15 < 0 )
    {
      sub_14000C2A8((int)retaddr, 52, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v15);
      goto LABEL_14;
    }
    v17 = OpenProcess(0x3000u, 0, a2);
    sub_140016858(v21, v17);
    v14 = (char *)v21[0];
    if ( ((v21[0] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v18 = OpenProcess(0x2400u, 0, a2);
      sub_140016858(v21, v18);
      v14 = (char *)v21[0];
    }
    if ( ((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && sub_1400165A4(v21) )
      sub_14005D050(retaddr, 67LL, "avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp");
    CoRevertToSelf();
  }
  *(_QWORD *)(a1 + 80) = a5;
  *(_QWORD *)(a1 + 192) = a6;
  *(_DWORD *)(a1 + 112) = a3;
  *(_QWORD *)(a1 + 88) = a4;
  if ( (_QWORD *)(a1 + 136) != v21 )
  {
    sub_140016858(a1 + 136, v14);
    v14 = 0LL;
  }
  *(_QWORD *)(a1 + 200) = a7;
  v19 = *a8;
  *(_QWORD *)(a1 + 272) = a9;
  *(_OWORD *)(a1 + 208) = v19;
  sub_140007CC0();
  if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v14);
  v16 = 0;
LABEL_14:
  sub_1400066EC(&PerformanceCount);
  return v16;
}
