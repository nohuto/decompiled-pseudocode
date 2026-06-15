/*
 * XREFs of sub_14005D708 @ 0x14005D708
 * Callers:
 *     sub_14005D2AC @ 0x14005D2AC (sub_14005D2AC.c)
 * Callees:
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005D180 @ 0x14005D180 (sub_14005D180.c)
 *     sub_14005D3B4 @ 0x14005D3B4 (sub_14005D3B4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_14005D708(PVOID pv, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v9; // eax
  int v10; // ebx
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  int v16; // edx
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  __int64 v20; // r12
  int v21; // r9d
  int v22; // edx
  int v23; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v25; // eax
  void *v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-20h] BYREF
  char v30; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  int v33; // [rsp+C0h] [rbp+50h]

  v33 = a3;
  *((_DWORD *)pv + 6) = a2;
  v28 = 0LL;
  v9 = sub_14005D180(a7, &v28);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = v28;
    v13 = *((_QWORD *)pv + 5);
    *((_QWORD *)pv + 5) = 0LL;
    if ( v13 )
      sub_1400B6010(v13);
    v9 = sub_1400B6010(v12);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 61;
      goto LABEL_7;
    }
    v32 = 0LL;
    v14 = sub_1400B6010(a4);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = v14;
      v16 = 64;
LABEL_10:
      sub_14000C2A8((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump_dsp.cpp", v15);
LABEL_11:
      sub_140056130(&v32);
      goto LABEL_28;
    }
    if ( !sub_1400B6010(v32) )
    {
      v10 = -2147418113;
      v15 = -2147418113;
      v16 = 66;
      goto LABEL_10;
    }
    a6 = 0LL;
    v17 = sub_14005D3B4(&a5);
    v10 = v17;
    if ( v17 >= 0 )
    {
      if ( sub_1400B6010(a6) )
      {
        v27 = 0LL;
        v20 = a5;
        v29[0] = &v27;
        v29[1] = 0LL;
        v30 = 1;
        v10 = sub_1400B6010(a5);
        sub_140033E34((__int64)v29);
        if ( v10 >= 0 )
        {
          v23 = sub_1400B6010(*((_QWORD *)pv + 5));
          v10 = v23;
          if ( v23 >= 0 )
          {
            ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_14005D170, pv, 0LL);
            sub_1400471D8((struct _TP_TIMER **)pv + 7, ThreadpoolTimer);
            sub_140019444((__int64 *)pv + 6);
            v25 = sub_1400B6010(v20);
            v10 = v25;
            if ( v25 >= 0 )
            {
              sub_140008C08(&v27, 0LL);
              sub_140056130(&a6);
              sub_140056130(&v32);
              v10 = 0;
              goto LABEL_28;
            }
            v21 = v25;
            v22 = 87;
          }
          else
          {
            v21 = v23;
            v22 = 77;
          }
        }
        else
        {
          v21 = v10;
          v22 = 75;
        }
        sub_14000C2A8((int)retaddr, v22, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump_dsp.cpp", v21);
        sub_140008C08(&v27, 0LL);
        goto LABEL_17;
      }
      v10 = -2147418113;
      v18 = -2147418113;
      v19 = 72;
    }
    else
    {
      v18 = v17;
      v19 = 69;
    }
    sub_14000C2A8((int)retaddr, v19, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump_dsp.cpp", v18);
LABEL_17:
    sub_140056130(&a6);
    goto LABEL_11;
  }
  v11 = 60;
LABEL_7:
  sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump_dsp.cpp", v9);
LABEL_28:
  sub_140056130(&v28);
  return (unsigned int)v10;
}
