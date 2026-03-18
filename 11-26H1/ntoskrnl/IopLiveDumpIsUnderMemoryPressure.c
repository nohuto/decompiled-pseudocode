/*
 * XREFs of IopLiveDumpIsUnderMemoryPressure @ 0x1404E4788
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404E439C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405CC998 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CD084 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1405CDC6C (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 */

bool __fastcall IopLiveDumpIsUnderMemoryPressure(__int64 a1)
{
  bool v2; // bl
  int SystemInformation; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v10; // rax
  _OWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v12 = 0LL;
  v2 = 0;
  memset(v11, 0, sizeof(v11));
  SystemInformation = ZwQuerySystemInformation(182LL, v11, 56LL, 0LL);
  if ( SystemInformation >= 0 && (*(_DWORD *)(a1 + 40) & 0x10) != 0 && (*(_DWORD *)(a1 + 80) & 0x2000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 1176);
    v8 = *(_QWORD *)&v11[0];
    if ( !v10 )
    {
      v10 = (((unsigned __int64)(10 * ((unsigned int)(*(_QWORD *)&v11[0] >> 20) >> 10)) << 20) + 1790967807) & 0xFFFFFFFFC0000000uLL;
      *(_QWORD *)(a1 + 1176) = v10;
    }
    v7 = *((_QWORD *)&v11[0] + 1);
    v2 = *((_QWORD *)&v11[0] + 1) < v10;
    goto LABEL_9;
  }
  v4 = *(_QWORD *)(a1 + 928);
  if ( v4 && *(_DWORD *)(v4 + 4) || (v5 = *(_QWORD *)(a1 + 936)) != 0 && *(_DWORD *)(v5 + 4) )
  {
    v2 = 1;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 944);
    if ( v6 )
      v2 = *(_DWORD *)(v6 + 4) != 0;
  }
  if ( SystemInformation >= 0 )
  {
    v7 = *((_QWORD *)&v11[0] + 1);
    v8 = *(_QWORD *)&v11[0];
LABEL_9:
    *(_QWORD *)(a1 + 1184) = v7;
    *(_QWORD *)(a1 + 1192) = v8;
  }
  return v2;
}
