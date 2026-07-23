/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x140A4F728
 * Callers:
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x140A4F8B0 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(
        _QWORD *a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  unsigned __int64 v14; // rbx
  _KPROCESS *Process; // rdx
  __int64 v16; // r8
  __int64 result; // rax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+78h] [rbp+10h]
  int v21; // [rsp+98h] [rbp+30h]

  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v12 = a6 + 1;
  v13 = a6 + 1;
  v14 = a1[7];
  Process = KeGetCurrentThread()->ApcState.Process;
  v21 = (int)Process;
  if ( a6 + 1 > a1[6] )
    v13 = a1[6];
  v16 = (unsigned __int8)a1[8];
  if ( !(unsigned __int8)a1[8] )
    v16 = 1LL;
  v20 = v16;
  if ( v14 < a5 )
    v14 = a5;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v14 >= a6 || a6 - v14 + 1 < a2 )
      {
        v18 = -1073741801;
      }
      else
      {
        result = MiFindEmptyAddressRangeDownTree((int)Process + 1368, a2, a3, a4, v14, v13, a8);
        v18 = result;
        if ( (int)result >= 0 )
          return result;
        v16 = v20;
      }
      if ( v13 == v12 || (a7 & 2) != 0 )
        break;
      LODWORD(Process) = v21;
      v13 = a6 + 1;
    }
    v19 = v16 << 16;
    if ( (a7 & 2) == 0 )
      v19 = 0x10000LL;
    if ( v19 < a5 )
      v19 = a5;
    if ( v19 >= v14 )
      break;
    LODWORD(Process) = v21;
    v14 = v19;
  }
  return v18;
}
