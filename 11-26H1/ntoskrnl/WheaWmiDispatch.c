/*
 * XREFs of WheaWmiDispatch @ 0x1406DC190
 * Callers:
 *     <none>
 * Callees:
 *     WheapWmiExecuteMethod @ 0x1406DC8E8 (WheapWmiExecuteMethod.c)
 *     WheapWmiRegisterInfo @ 0x1406DCCEC (WheapWmiRegisterInfo.c)
 */

__int64 __fastcall WheaWmiDispatch(int a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int *a6)
{
  int v6; // ecx
  int v8; // edx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx

  if ( a1 > 5 )
  {
    v10 = a1 - 6;
    if ( !v10 )
      goto LABEL_5;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_5;
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 != 1 )
        goto LABEL_5;
      return (unsigned int)WheapWmiExecuteMethod(a2, a3, a4, a6);
    }
    else
    {
      return (unsigned int)WheapWmiRegisterInfo(v12, a3, a4, a6);
    }
  }
  if ( a1 == 5 )
  {
LABEL_5:
    v6 = -1073741808;
    *a6 = 0;
    return (unsigned int)v6;
  }
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_5;
    v8 = 102;
    if ( a3 >= 0x66 )
    {
      *(_DWORD *)a4 = 102;
      v9 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 60) = 38;
      *(_DWORD *)(a4 + 56) = 64;
LABEL_14:
      *(_QWORD *)(a4 + 16) = v9;
      goto LABEL_15;
    }
  }
  else
  {
    v8 = 72;
    if ( a3 >= 0x48 )
    {
      *(_DWORD *)a4 = 72;
      v9 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 60) = 0;
      *(_DWORD *)(a4 + 48) = 72;
      goto LABEL_14;
    }
  }
  if ( a3 >= 0x38 )
  {
    *(_DWORD *)(a4 + 48) = v8;
    v8 = 56;
    *(_DWORD *)(a4 + 44) = 32;
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  v6 = -1073741789;
LABEL_16:
  if ( v6 < 0 )
    v8 = 0;
  *a6 = v8;
  return (unsigned int)v6;
}
