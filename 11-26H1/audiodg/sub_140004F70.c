/*
 * XREFs of sub_140004F70 @ 0x140004F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050D8 @ 0x1400050D8 (sub_1400050D8.c)
 *     sub_140005D50 @ 0x140005D50 (sub_140005D50.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 */

__int64 __fastcall sub_140004F70(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v13; // edi
  __int64 v14; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v7 = *(_DWORD *)(a1 + 256) == 0;
  v16 = v3;
  if ( v7 )
  {
    v13 = -2005139437;
    v14 = 453LL;
LABEL_15:
    sub_14000C2A8(retaddr, v14, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v13);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v13;
  }
  if ( !a3 )
  {
    v13 = -2147467261;
    v14 = 456LL;
    goto LABEL_15;
  }
  v8 = (_QWORD *)sub_1400050D8(a1, a2);
  if ( v8 )
  {
    v9 = 0LL;
    while ( v8 )
    {
      v16 = 0LL;
      v10 = sub_140005D50(v8, &v16);
      v11 = v10;
      if ( v10 < 0 )
      {
        sub_14000C2A8(
          retaddr,
          467LL,
          "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (unsigned int)v10);
        if ( v3 )
          LeaveCriticalSection(v3);
        return v11;
      }
      v9 += (__int64)v16;
      v8 = (_QWORD *)*v8;
    }
    *a3 = v9;
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(retaddr, 460LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", 2289827866LL);
    sub_140018FF0(&v16);
    return 2289827866LL;
  }
}
