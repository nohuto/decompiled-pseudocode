/*
 * XREFs of sub_14001C154 @ 0x14001C154
 * Callers:
 *     sub_14001BEF8 @ 0x14001BEF8 (sub_14001BEF8.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 *     sub_14001C89C @ 0x14001C89C (sub_14001C89C.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_14001C154(void **pv, HANDLE hSourceHandle)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  int v6; // ebx
  int v8; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !hSourceHandle )
  {
    v6 = -2147467261;
    v8 = 2042;
LABEL_8:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v6);
    return (unsigned int)v6;
  }
  sub_140016858(pv + 14, 0LL);
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( DuplicateHandle(v5, hSourceHandle, CurrentProcess, pv + 14, 0, 0, 2u) )
  {
    v6 = sub_14001C89C(pv);
    if ( v6 < 0 )
    {
      v8 = 2061;
    }
    else
    {
      if ( !*((_BYTE *)pv + 136) )
        return 0LL;
      v6 = sub_140019E50((char *)pv);
      if ( v6 >= 0 )
        return 0LL;
      v8 = 2067;
    }
    goto LABEL_8;
  }
  return sub_1400470EC(retaddr, 2055LL, "avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp");
}
