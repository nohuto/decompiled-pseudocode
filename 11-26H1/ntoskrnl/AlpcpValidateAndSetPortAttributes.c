/*
 * XREFs of AlpcpValidateAndSetPortAttributes @ 0x1408F1C4C
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x140AE55B0 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeValidateSecurityQos @ 0x1408F2300 (SeValidateSecurityQos.c)
 */

__int64 __fastcall AlpcpValidateAndSetPortAttributes(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int128 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+58h] [rbp-28h]
  int v26; // [rsp+60h] [rbp-20h]

  memset_0(&v19, 0, 0x48uLL);
  LOBYTE(v11) = a7;
  if ( a2 )
  {
    v12 = *((_QWORD *)a2 + 2);
    if ( v12 < 0x28 )
      return 3221225485LL;
    if ( v12 > 0xFFFF )
      return 3221225485LL;
    v13 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x100000) != 0 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
        return 3221225485LL;
    }
    *((_DWORD *)a2 + 16) &= 0xFFDu;
    *(_DWORD *)a2 = v13 & 0x3FF0000;
  }
  else
  {
    v20 = 512LL;
    v22 = 0x4000LL;
    a2 = &v19;
    v23 = 0x4000LL;
    v17 = v19;
    if ( a7 )
      v17 = 4096;
    v25 = 0x20000LL;
    LODWORD(v19) = v17;
    v24 = 0LL;
    v21 = 0LL;
    *(_QWORD *)((char *)&v19 + 4) = 12LL;
    HIDWORD(v19) = 257;
    v26 = 0;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v18 = *(_DWORD *)a2 | 0x20000;
    *(_DWORD *)a2 = v18;
    if ( !a7 )
      goto LABEL_13;
    v16 = a5;
    if ( a5 > LpcLegacyMaxMessageLength )
      return 3221225485LL;
    if ( a6 )
      *(_DWORD *)a2 = v18 | 0x40000;
LABEL_29:
    *((_QWORD *)a2 + 2) = v16;
    goto LABEL_13;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 2 )
  {
    *(_DWORD *)a2 &= ~0x20000u;
    if ( !a7 )
      goto LABEL_13;
    v16 = *(_QWORD *)(a3 + 272);
    if ( v16 > (unsigned int)LpcLegacyMaxMessageLength )
      return 3221225485LL;
    goto LABEL_29;
  }
  if ( a2 == &v19 )
    *(_DWORD *)a2 |= 0x10000u;
  if ( a7 )
  {
    *(_DWORD *)a2 |= 0x20000u;
    if ( a4 )
    {
      *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)a4;
      *((_DWORD *)a2 + 3) = *(_DWORD *)(a4 + 8);
    }
    v14 = *(_QWORD *)(a3 + 272);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 272);
    if ( *((_QWORD *)a2 + 2) <= v14 )
      goto LABEL_13;
  }
  *((_QWORD *)a2 + 2) = v14;
LABEL_13:
  result = SeValidateSecurityQos(
             (char *)a2 + 4,
             v11,
             0LL,
             0x20000LL,
             v19,
             *((_QWORD *)&v19 + 1),
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)(a1 + 256) = *a2;
    *(_OWORD *)(a1 + 272) = a2[1];
    *(_OWORD *)(a1 + 288) = a2[2];
    *(_OWORD *)(a1 + 304) = a2[3];
    *(_QWORD *)(a1 + 320) = *((_QWORD *)a2 + 8);
  }
  return result;
}
