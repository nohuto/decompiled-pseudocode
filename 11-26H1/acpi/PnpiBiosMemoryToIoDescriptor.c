/*
 * XREFs of PnpiBiosMemoryToIoDescriptor @ 0x1400CF1D4
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1400CF2EC (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosMemoryToIoDescriptor(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  int v4; // ecx
  bool v5; // zf
  __int16 v6; // si
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h]
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+8h]

  v4 = *a1;
  HIDWORD(v15) = 0;
  HIDWORD(v13) = 0;
  v5 = (a1[3] & 1) == 0;
  v14 = 0LL;
  v6 = v5;
  v7 = v4 - 129;
  if ( v7 )
  {
    v8 = v7 - 4;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 0LL;
      v9 = 1;
      v10 = *((_DWORD *)a1 + 2);
      LODWORD(v15) = *((_DWORD *)a1 + 1);
      LODWORD(v13) = v10 + v15 - 1;
    }
    else
    {
      v10 = *((_DWORD *)a1 + 4);
      v9 = *((_DWORD *)a1 + 3);
      LODWORD(v15) = *((_DWORD *)a1 + 1);
      LODWORD(v13) = *((_DWORD *)a1 + 2) + v10 - 1;
    }
  }
  else
  {
    v9 = *((unsigned __int16 *)a1 + 4);
    v6 = v5 | 0x10;
    LODWORD(v15) = *((unsigned __int16 *)a1 + 2) << 8;
    v10 = *((unsigned __int16 *)a1 + 5) << 8;
    LODWORD(v13) = v10 + (*((unsigned __int16 *)a1 + 3) << 8) - 1;
    if ( !*((_WORD *)a1 + 4) )
      v9 = 0x10000;
  }
  if ( v10 )
  {
    result = PnpiUpdateResourceList(a2 + 8LL * a3, &v14);
    if ( (int)result < 0 )
      return result;
    v12 = v14;
    *(_WORD *)(v14 + 1) = 259;
    *(_WORD *)(v12 + 4) = v6;
    *(_QWORD *)(v12 + 16) = v15;
    *(_QWORD *)(v12 + 24) = v13;
    *(_DWORD *)(v12 + 12) = v9;
    *(_DWORD *)(v12 + 8) = v10;
  }
  return 0LL;
}
