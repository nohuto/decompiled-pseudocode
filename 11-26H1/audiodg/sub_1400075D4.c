/*
 * XREFs of sub_1400075D4 @ 0x1400075D4
 * Callers:
 *     sub_140007394 @ 0x140007394 (sub_140007394.c)
 * Callees:
 *     sub_140007360 @ 0x140007360 (sub_140007360.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400077CC @ 0x1400077CC (sub_1400077CC.c)
 *     sub_1400078F4 @ 0x1400078F4 (sub_1400078F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140054C10 @ 0x140054C10 (sub_140054C10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1400075D4(__int64 a1, __int64 a2)
{
  signed int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  _BYTE v13[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h]
  __int64 v15; // [rsp+B8h] [rbp+50h]

  v4 = 0;
  if ( (unsigned __int8)sub_140054C10(a1 + 80) )
    goto LABEL_9;
  v4 = sub_1400077CC(a1);
  if ( v4 < 0 )
    goto LABEL_9;
  v5 = (_QWORD *)sub_140049338(24LL, &unk_1400C75FC);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v14 = 0LL;
    v9 = *(_QWORD *)(a2 + 56);
    if ( v9 )
      v14 = sub_1400B6010(v9);
    v6[2] = a1;
    v15 = sub_1400492F4(80LL);
    *(_OWORD *)v15 = 0LL;
    *(_DWORD *)(v15 + 8) = 1;
    *(_DWORD *)(v15 + 12) = 1;
    *(_QWORD *)v15 = off_1400B9F68;
    sub_1400078F4(v15 + 16, v13);
    *v6 = v15 + 16;
    v10 = v6[1];
    v6[1] = v15;
    if ( v10 )
      sub_140007588(v10);
    v4 = *v6 == 0LL ? 0x8007000E : 0;
    if ( v14 )
      sub_1400B6010(v14);
    if ( v4 < 0 )
      goto LABEL_7;
    ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)pfnwk, v6, (PTP_CALLBACK_ENVIRON)(a1 + 8));
    if ( ThreadpoolWork )
    {
      v4 = 0;
    }
    else
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( v4 < 0 )
        goto LABEL_7;
    }
    v6 = 0LL;
    SubmitThreadpoolWork(ThreadpoolWork);
  }
  else
  {
    v4 = -2147024882;
  }
LABEL_7:
  if ( v6 )
    sub_140007360((__int64)v6);
LABEL_9:
  v7 = *(_QWORD *)(a2 + 56);
  if ( v7 )
  {
    sub_1400B6010(v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return (unsigned int)v4;
}
