/*
 * XREFs of HalpCmosRangeHandler @ 0x1404C4344
 * Callers:
 *     HalpcGetCmosDataByType @ 0x1404C4320 (HalpcGetCmosDataByType.c)
 *     HalpcSetCmosDataByType @ 0x14059BF50 (HalpcSetCmosDataByType.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpCmosRangeHandler(unsigned int a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // r14
  unsigned int v11; // r13d
  unsigned int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  __int64 v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v5 = a3;
  if ( a2 )
    return 0LL;
  v7 = 9;
  v8 = 0;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = a3 + a5;
  do
  {
    if ( v5 <= v7 )
    {
      v12 = v7 - v5 + 1;
      v13 = a5 - v8;
      if ( a5 - v8 >= v12 )
        v13 = v12;
      if ( a1 > 1 )
      {
        v14 = 0;
      }
      else
      {
        v14 = guard_dispatch_icall_no_overrides(v5, a4 + v9);
        a4 = v16;
      }
      v8 += v14;
      v5 += v13;
      v9 += v13;
    }
    if ( v5 >= v11 )
      break;
    v10 = (unsigned int)(v10 + 1);
    v7 = *(_DWORD *)&CmosRangeHandlersStdPCAT[24 * v10 + 4];
  }
  while ( v7 );
  return v8;
}
