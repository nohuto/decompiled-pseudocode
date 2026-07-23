/*
 * XREFs of MiLogNotifyPageHeat @ 0x140709AA0
 * Callers:
 *     MiNotifyPageHeat @ 0x140531990 (MiNotifyPageHeat.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogNotifyPageHeat(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v4; // rsi
  _QWORD *v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  int *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 result; // rax
  int v16; // [rsp+28h] [rbp-99h]
  int v17; // [rsp+30h] [rbp-91h]
  unsigned __int16 v18; // [rsp+48h] [rbp-79h] BYREF
  int v19; // [rsp+4Ch] [rbp-75h] BYREF
  int v20; // [rsp+50h] [rbp-71h] BYREF
  int v21; // [rsp+54h] [rbp-6Dh] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-59h] BYREF
  int *v25; // [rsp+88h] [rbp-39h]
  __int64 v26; // [rsp+90h] [rbp-31h]
  unsigned __int64 *v27; // [rsp+98h] [rbp-29h]
  __int64 v28; // [rsp+A0h] [rbp-21h]
  unsigned __int64 *v29; // [rsp+A8h] [rbp-19h]
  __int64 v30; // [rsp+B0h] [rbp-11h]
  int *v31; // [rsp+B8h] [rbp-9h]
  __int64 v32; // [rsp+C0h] [rbp-1h]
  int *v33; // [rsp+C8h] [rbp+7h]
  __int64 v34; // [rsp+D0h] [rbp+Fh]
  unsigned __int16 *v35; // [rsp+D8h] [rbp+17h]
  __int64 v36; // [rsp+E0h] [rbp+1Fh]
  _QWORD *v37; // [rsp+E8h] [rbp+27h]
  int v38; // [rsp+F0h] [rbp+2Fh]
  int v39; // [rsp+F4h] [rbp+33h]

  v2 = a2 + 4;
  v4 = 0LL;
  v5 = v2;
  v6 = (unsigned __int64)&a2[2 * a2[1] + 4];
  if ( (unsigned __int64)v2 < v6 )
  {
    do
    {
      v7 = (*v5 & 0x3FFLL) + 1;
      v8 = (*v5 >> 10) & 3LL;
      if ( ((*v5 >> 10) & 3) != 0 )
      {
        do
        {
          v7 <<= 9;
          LODWORD(v8) = v8 - 1;
        }
        while ( (_DWORD)v8 );
      }
      v4 += v7;
      ++v5;
    }
    while ( (unsigned __int64)v5 < v6 );
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( (*a2 & 1) != 0 )
  {
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 64LL) )
    {
      v14 = *v2;
      v12 = (unsigned __int8 *)&byte_14005A1C7;
      v21 = a2[1];
      v25 = &v21;
      v27 = &v23;
      v22 = v14 >> 12;
      v29 = &v22;
      v23 = v4;
      v20 = (v14 & 0x3FF) + 1;
      v19 = (v14 >> 10) & 3;
      v31 = &v20;
      v13 = &v19;
      goto LABEL_16;
    }
  }
  else if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 64LL) )
  {
    v11 = *v2;
    v12 = (unsigned __int8 *)byte_14005A24D;
    v19 = a2[1];
    v25 = &v19;
    v27 = &v22;
    v23 = v11 >> 12;
    v29 = &v23;
    v22 = v4;
    v20 = (v11 & 0x3FF) + 1;
    v21 = (v11 >> 10) & 3;
    v31 = &v20;
    v13 = &v21;
LABEL_16:
    v33 = v13;
    v18 = *((_WORD *)a2 + 2);
    v38 = 8 * v18;
    v35 = &v18;
    v28 = 8LL;
    v26 = 4LL;
    v30 = 8LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 2LL;
    v37 = v2;
    v39 = 0;
    tlgWriteEx_EtwWriteEx(v10, v12, v10, 1u, v16, v17, 9u, &v24);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
