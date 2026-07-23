/*
 * XREFs of PiControlQueryDeviceRelations @ 0x140ACBDC0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 *     PiQueryDeviceRelations @ 0x140ACBF40 (PiQueryDeviceRelations.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlQueryDeviceRelations(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // ax
  int v7; // ecx
  void **v8; // rsi
  int v9; // ecx
  void *Pool2; // rdi
  int UserModeCallersCopy; // ebp
  int v13; // eax
  _OWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  v14[0] = 0LL;
  v4 = *a2;
  WORD1(v14[0]) = v4;
  LOWORD(v14[0]) = v4;
  if ( v4 && v4 <= 0x190u && (v4 & 1) == 0 )
  {
    v7 = *((_DWORD *)a2 + 5);
    v8 = (void **)(a2 + 12);
    *((_QWORD *)&v14[0] + 1) = 0LL;
    if ( v7 && *v8 )
      v9 = 2 * v7;
    else
      v9 = 0;
    v15 = v9;
    if ( v9 )
    {
      if ( a4 )
      {
        Pool2 = (void *)ExAllocatePool2(0x101uLL);
        if ( !Pool2 )
        {
          UserModeCallersCopy = -1073741670;
LABEL_12:
          PiControlFreeUserModeCallersBuffer(a4, Pool2);
          PiControlFreeUserModeCallersBuffer(a4, *((void **)&v14[0] + 1));
          return (unsigned int)UserModeCallersCopy;
        }
        v4 = v14[0];
      }
      else
      {
        Pool2 = *v8;
      }
    }
    else
    {
      Pool2 = 0LL;
    }
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)v14 + 1, *((void **)a2 + 1), v4, 2LL, a4, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiQueryDeviceRelations(v14, *((unsigned int *)a2 + 4), &v15, Pool2);
      if ( Pool2 )
      {
        v13 = PiControlMakeUserModeCallersCopy(v8, Pool2, 2 * *((_DWORD *)a2 + 5), 2LL, a4, 0);
        if ( v13 < 0 )
          UserModeCallersCopy = v13;
      }
      *((_DWORD *)a2 + 5) = v15 >> 1;
    }
    goto LABEL_12;
  }
  return 3221225485LL;
}
