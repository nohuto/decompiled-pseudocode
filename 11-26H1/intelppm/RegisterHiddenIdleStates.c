/*
 * XREFs of RegisterHiddenIdleStates @ 0x1400386F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     DecodeAcpi2CState @ 0x1400426F8 (DecodeAcpi2CState.c)
 *     DecodeAcpiIdleState @ 0x140042754 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterHiddenIdleStates(__int64 a1)
{
  bool v1; // zf
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // ecx
  __int64 i; // rcx
  __int64 v8; // r8
  int v9; // eax
  _DWORD *v10; // r8
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 80) == 2;
  v12 = 0LL;
  v3 = -1073741823;
  if ( v1 )
  {
    if ( HalPrivateDispatchTable[147] )
    {
      v4 = *(_QWORD *)(a1 + 280);
      if ( (v4 & 0x20E0000000000LL) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 544);
        if ( v5 )
        {
          v6 = *(_DWORD *)(v5 + 16);
          if ( v6 )
          {
            for ( i = (unsigned int)(v6 - 1); (_DWORD)i; i = (unsigned int)(i - 1) )
            {
              v8 = 80 * i;
              if ( (*(_DWORD *)(80 * i + v5 + 32) & 1) != 0 )
              {
                if ( !(v8 + v5 + 24) )
                  return v3;
                v9 = DecodeAcpiIdleState(
                       a1,
                       (int)v8 + (int)v5 + 48,
                       -1,
                       *(_DWORD *)(v8 + v5 + 36),
                       (__int64)&v12,
                       0LL,
                       0LL,
                       0LL);
                goto LABEL_18;
              }
            }
          }
        }
      }
      else if ( (v4 & 0x7F077) != 0 )
      {
        v10 = *(_DWORD **)(a1 + 528);
        if ( v10 )
        {
          if ( *v10 )
          {
            v9 = DecodeAcpi2CState(a1, (int)v10 + 4 * (*v10 + 4 * (*v10 - 1)), (unsigned int)&v12, 0, 0LL);
LABEL_18:
            v3 = v9;
            if ( v9 >= 0 && v12 )
              return ((unsigned int (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[147])(
                       *(unsigned int *)(a1 + 84),
                       v12);
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
