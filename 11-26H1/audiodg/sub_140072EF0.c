/*
 * XREFs of sub_140072EF0 @ 0x140072EF0
 * Callers:
 *     sub_1400732C4 @ 0x1400732C4 (sub_1400732C4.c)
 * Callees:
 *     sub_14000229C @ 0x14000229C (sub_14000229C.c)
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_140036A30 @ 0x140036A30 (sub_140036A30.c)
 *     sub_14004982C @ 0x14004982C (sub_14004982C.c)
 *     sub_140049894 @ 0x140049894 (sub_140049894.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140072EF0(__int64 a1, int a2, int a3, unsigned __int8 a4, __int64 a5, float a6)
{
  int v6; // r14d
  __int64 v9; // rsi
  __int64 *ThreadLocalStoragePointer; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+50h] [rbp-49h] BYREF
  PROPVARIANT v19[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v20; // [rsp+68h] [rbp-31h]
  void *v21; // [rsp+70h] [rbp-29h] BYREF
  int v22; // [rsp+78h] [rbp-21h] BYREF
  int v23; // [rsp+7Ch] [rbp-1Dh] BYREF
  void *v24; // [rsp+80h] [rbp-19h] BYREF
  __int64 v25; // [rsp+88h] [rbp-11h] BYREF
  __int64 v26; // [rsp+90h] [rbp-9h] BYREF
  PROPVARIANT pvar[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+F8h] [rbp+5Fh] BYREF

  v6 = a4;
  v9 = a1;
  v18 = 0LL;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  ThreadLocalStoragePointer = (__int64 *)NtCurrentTeb()->ThreadLocalStoragePointer;
  v11 = *ThreadLocalStoragePointer;
  if ( dword_1400E9870 > *(_DWORD *)(*ThreadLocalStoragePointer + 4) )
  {
    sub_140049894(&dword_1400E9870);
    if ( dword_1400E9870 == -1 )
    {
      xmmword_1400E96A4 = xmmword_1400CB098;
      dword_1400E96B4 = 9;
      xmmword_1400E96B8 = xmmword_1400CB110;
      dword_1400E96C8 = 8;
      xmmword_1400E96CC = xmmword_1400CB128;
      dword_1400E96DC = 31;
      sub_14004982C(&dword_1400E9870);
    }
  }
  if ( dword_1400E986C > *(_DWORD *)(v11 + 4) )
  {
    sub_140049894(&dword_1400E986C);
    if ( dword_1400E986C == -1 )
    {
      xmmword_1400E96F4 = xmmword_1400CB0C8;
      dword_1400E9704 = 33;
      xmmword_1400E9708 = xmmword_1400CB0F8;
      dword_1400E9718 = 34;
      xmmword_1400E971C = xmmword_1400CB0E0;
      dword_1400E972C = 35;
      sub_14004982C(&dword_1400E986C);
    }
  }
  if ( a2 && !sub_140036A30() )
  {
    v12 = sub_1400B6010(v9);
    if ( v12 >= 0 )
    {
      v12 = sub_1400B6010(v18);
      if ( a3 < 0 )
      {
        if ( LOWORD(v19[0]) != 19 )
        {
          LOWORD(v19[0]) = 19;
          LODWORD(v19[1]) = 0;
        }
        if ( (int)sub_140072BD0() < 0 )
          LODWORD(v19[1]) += (int)(float)(10.0 / a6);
        else
          LODWORD(v19[1]) += 50;
      }
      else
      {
        if ( LOWORD(v19[0]) == 19 && !LODWORD(v19[1]) || !LOWORD(v19[0]) )
        {
LABEL_20:
          PropVariantClear(v19);
          goto LABEL_21;
        }
        LOWORD(v19[0]) = 19;
        if ( (_BYTE)v6 )
        {
          *(_OWORD *)pvar = 0LL;
          v28 = 0LL;
          sub_1400B6010(v18);
          --LODWORD(v19[1]);
          PropVariantClear(pvar);
        }
        else
        {
          LODWORD(v19[1]) = 0;
        }
      }
      v9 = a1;
      v12 = sub_1400B6010(v18);
    }
    if ( a3 < 0 )
    {
      v21 = 0LL;
      sub_1400118C0(&v21, 0LL);
      sub_1400B6010(v9);
      v14 = (_DWORD *)sub_140006470(v13);
      if ( *v14 > 2u && sub_14002813C((__int64)v14, 0x400000000100LL) )
      {
        v24 = v21;
        v25 = a5;
        v30 = a2;
        v22 = a3;
        v23 = v6;
        v26 = 0x1000000LL;
        sub_14000229C(
          v16,
          (int)&unk_1400D2731,
          v15,
          v16,
          (__int64)&v26,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v30,
          &v25,
          &v24);
      }
      sub_14001D96C(&v21);
    }
    goto LABEL_20;
  }
  v12 = 0;
LABEL_21:
  sub_140003238(&v18);
  return (unsigned int)v12;
}
