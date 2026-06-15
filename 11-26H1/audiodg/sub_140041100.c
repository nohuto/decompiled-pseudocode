/*
 * XREFs of sub_140041100 @ 0x140041100
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_140037928 @ 0x140037928 (sub_140037928.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140041100(__int64 a1, void **a2, __int64 a3)
{
  void *v5; // rdx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  HRESULT Instance; // eax
  HRESULT v10; // esi
  int v11; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = *a2;
  if ( v5 )
  {
    v15 = 0LL;
    v7 = sub_140021754(a1, v5, &v15);
    v6 = v7;
    if ( v7 < 0 )
    {
      sub_14000C2A8((int)retaddr, 173, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v7);
LABEL_14:
      sub_140003238(&v15);
      return v6;
    }
    sub_140037928(v15, a3);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    v14 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
    if ( !*(_BYTE *)(a1 + 72) )
    {
      v8 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( v8 )
        sub_1400B6010(v8);
      Instance = CoCreateInstance(&rclsid, 0LL, 0x17u, &riid, (LPVOID *)(a1 + 24));
      v10 = Instance;
      if ( Instance < 0 )
      {
        sub_14000C2A8(
          (int)retaddr,
          180,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          Instance);
        sub_140018FF0(&v14);
        v6 = v10;
        goto LABEL_14;
      }
      v11 = sub_1400B6010(*(_QWORD *)(a1 + 24));
      v6 = v11;
      if ( v11 < 0 )
      {
        sub_14000C2A8((int)retaddr, 181, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v11);
        sub_140018FF0(&v14);
        goto LABEL_14;
      }
      *(_BYTE *)(a1 + 72) = 1;
    }
    sub_140018FF0(&v14);
    v6 = 0;
    goto LABEL_14;
  }
  v6 = -2147467261;
  sub_14000C2A8((int)retaddr, 170, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147467261);
  return v6;
}
