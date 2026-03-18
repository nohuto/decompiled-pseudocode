/*
 * XREFs of WheapLogInitEvent @ 0x1407B8B98
 * Callers:
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *Pool2; // rdi
  __int64 *v1; // rdx
  int i; // r8d
  __int64 *v3; // rcx
  __int64 v4; // r9
  char *v5; // rax
  __int128 v6; // xmm1
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // r8d
  unsigned int Size; // [rsp+30h] [rbp-9h] BYREF
  int Size_4; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+50h] [rbp+17h]
  int v14; // [rsp+58h] [rbp+1Fh]
  int v15; // [rsp+5Ch] [rbp+23h]
  unsigned int *p_Size; // [rsp+60h] [rbp+27h]
  int v17; // [rsp+68h] [rbp+2Fh]
  int v18; // [rsp+6Ch] [rbp+33h]
  char *v19; // [rsp+70h] [rbp+37h]
  unsigned int v20; // [rsp+78h] [rbp+3Fh]
  int v21; // [rsp+7Ch] [rbp+43h]

  Size = 1072 * dword_140EEEA44;
  Pool2 = (char *)ExAllocatePool2(0x42uLL);
  if ( Pool2 )
  {
    v1 = (__int64 *)qword_140EEEA50;
    for ( i = 0; v1 != &qword_140EEEA50; v1 = (__int64 *)*v1 )
    {
      v3 = v1;
      v4 = 8LL;
      v5 = &Pool2[1072 * i];
      do
      {
        *(_OWORD *)v5 = *(_OWORD *)v3;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
        *((_OWORD *)v5 + 3) = *((_OWORD *)v3 + 3);
        *((_OWORD *)v5 + 4) = *((_OWORD *)v3 + 4);
        *((_OWORD *)v5 + 5) = *((_OWORD *)v3 + 5);
        *((_OWORD *)v5 + 6) = *((_OWORD *)v3 + 6);
        v5 += 128;
        v6 = *((_OWORD *)v3 + 7);
        v3 += 16;
        *((_OWORD *)v5 - 1) = v6;
        --v4;
      }
      while ( v4 );
      ++i;
      *(_OWORD *)v5 = *(_OWORD *)v3;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
      *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
    }
    UserData.Reserved = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    UserData.Ptr = (ULONGLONG)&dword_140EEEA44;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    v20 = Size;
    UserData.Size = 4;
    Size_4 = 10;
    v14 = 4;
    v17 = 4;
    v19 = Pool2;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.Dpc.DeferredRoutine, &EVENT_WHEA_INIT_OP) == 1 )
      EtwWrite((REGHANDLE)WheapDispatchPtr.Dpc.DeferredRoutine, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
    v7 = (_DWORD *)ExAllocatePool2(0x42uLL);
    v8 = v7;
    if ( v7 )
    {
      v9 = Size;
      v7[3] = 0;
      *v7 = 1733060695;
      v7[1] = 1;
      v7[5] = -2147483646;
      v7[2] = v9 + 32;
      v7[4] = 1280201291;
      v7[6] = 2;
      v7[7] = v9;
      memmove(v7 + 8, Pool2, Size);
      WheaLogInternalEvent(v8);
      ExFreePoolWithTag(v8, 0x61656857u);
    }
    ExFreePoolWithTag(Pool2, 0x61656857u);
  }
}
