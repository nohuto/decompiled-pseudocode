/*
 * XREFs of sub_140029920 @ 0x140029920
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_14005E134 @ 0x14005E134 (sub_14005E134.c)
 *     sub_1400681AC @ 0x1400681AC (sub_1400681AC.c)
 *     sub_1400D46D8 @ 0x1400D46D8 (sub_1400D46D8.c)
 */

__int64 __fastcall sub_140029920(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int **v7; // rax
  unsigned int v8; // esi
  int *v9; // rbp
  int *v10; // r14
  int v11; // r10d
  int *v12; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r15

  if ( !a1 || !a2 || !a3 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_1400681AC(off_140168120->AttachedDevice, 75LL, &unk_140149070, a1, a2, a3);
    }
    return 3238002694LL;
  }
  v7 = *(int ***)(a1 - 16);
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( !v7 || !*v7 )
    goto LABEL_17;
  v11 = **v7;
  if ( ((_BYTE)v7[31] & 1) != 0 )
  {
    if ( v11 == 1314275652 )
    {
      v10 = *v7;
      goto LABEL_9;
    }
LABEL_17:
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18(off_140168120->AttachedDevice, 76LL, &unk_140149070, a1);
    }
    return 3238002694LL;
  }
  if ( v11 != 1094997074 )
    goto LABEL_17;
  v9 = *v7;
LABEL_9:
  v12 = *(int **)a2;
  if ( !*(_QWORD *)a2 || *v12 != 1094997074 && *v12 != 1314275652 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055C18(off_140168120->AttachedDevice, 77LL, &unk_140149070, a2);
      return 3238002694LL;
    }
    return 3238002694LL;
  }
  if ( a5 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 136), a3, 0LL) )
    {
      return (unsigned int)-1056964596;
    }
    else
    {
      v14 = -10 * a5;
      *(_QWORD *)(a2 + 144) = a4;
      v15 = a6 / 0x3E8;
      if ( a6 / 0x3E8 >= 0x20 )
      {
        if ( a6 != 1000 * v15 )
          LODWORD(v15) = v15 + 1;
      }
      else
      {
        LODWORD(v15) = 0;
      }
      if ( KeGetCurrentIrql() > 2u )
      {
        if ( v9 )
          return (unsigned int)sub_14005E134(v9, a2, v14, (unsigned int)v15);
        else
          return (unsigned int)sub_1400D46D8(v10, a2, v14, (unsigned int)v15);
      }
      else
      {
        KeSetCoalescableTimer((PKTIMER)(a2 + 8), (LARGE_INTEGER)v14, 0, v15, (PKDPC)(a2 + 72));
      }
    }
  }
  else if ( (v12 == v9 || v12 == v10) && a3 == *(_QWORD *)(a2 + 136) )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
    KeCancelTimer((PKTIMER)(a2 + 8));
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v8;
}
