/*
 * XREFs of RtlpReadExtendedContext @ 0x1409EAB30
 * Callers:
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x1403D6E5C (KyRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403D9B20 (RtlpValidateContextFlags.c)
 *     RtlpCopyExtendedContext @ 0x14040BA10 (RtlpCopyExtendedContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlpReadExtendedContextLayout @ 0x1409EADEC (RtlpReadExtendedContextLayout.c)
 */

__int64 __fastcall RtlpReadExtendedContext(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  int v7; // r13d
  __int64 v8; // r12
  _OWORD *v9; // rsi
  __int64 result; // rax
  int v11; // ecx
  char v12; // r15
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-74h]
  int v22; // [rsp+38h] [rbp-70h]
  int v23; // [rsp+3Ch] [rbp-6Ch]
  __int64 v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  _OWORD v26[2]; // [rsp+50h] [rbp-58h] BYREF

  v24 = a3;
  v21 = a2;
  v25 = a3;
  v20 = 0;
  v7 = 0;
  memset(v26, 0, sizeof(v26));
  v8 = 0LL;
  v9 = v26;
  if ( a6 )
    v9 = a6;
  result = RtlpValidateContextFlags(a4, &v20);
  if ( (int)result >= 0 )
  {
    v12 = v20;
    if ( (v20 & 4) != 0 )
      return 3221225659LL;
    result = RtlpReadExtendedContextLayout(v11, a4, a5, v20, (__int64)v9);
    if ( (int)result >= 0 )
    {
      v23 = a4 & 0x10000;
      if ( (a4 & 0x10000) != 0 )
      {
        v7 = 4;
        v8 = a5 + 716;
      }
      else
      {
        if ( (a4 & 0x100000) != 0 )
        {
          v8 = a5 + 1232;
        }
        else
        {
          if ( (a4 & 0x200000) != 0 )
          {
            v7 = 8;
            v8 = a5 + 416;
            goto LABEL_8;
          }
          if ( (a4 & 0x400000) == 0 )
            goto LABEL_8;
          v8 = a5 + 912;
        }
        v7 = 16;
      }
LABEL_8:
      if ( (v12 & 1) != 0 && *((_DWORD *)v9 + 3) && ((v7 - 1) & ((_DWORD)v8 + *((_DWORD *)v9 + 2))) != 0
        || (v12 & 2) != 0 && *((_DWORD *)v9 + 5) && (((_BYTE)v8 + *((_BYTE *)v9 + 16)) & 0x3F) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      v19 = (__int64)v9;
      v13 = v24;
      v14 = RtlpCopyExtendedContext(v21, v24, 0LL, a4, v8, v19);
      v22 = v14;
      if ( v14 < 0 )
        return (unsigned int)v14;
      v15 = *(int *)(v13 + 8);
      if ( (a4 & 0x10000) != 0 )
        goto LABEL_22;
      if ( (a4 & 0x100000) != 0 )
      {
        *(_DWORD *)(v15 + v13 + 48) = a4;
        goto LABEL_23;
      }
      if ( (a4 & 0x200000) != 0 || (a4 & 0x400000) != 0 )
LABEL_22:
        *(_DWORD *)(v15 + v13) = a4;
LABEL_23:
      if ( (v12 & 2) != 0 )
      {
        v16 = v13 + *(int *)(v13 + 16);
        v17 = *(_QWORD *)v16 & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)v16 = v17;
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        {
          v18 = *(_QWORD *)(v16 + 8) & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL);
          *(_QWORD *)(v16 + 8) = v18;
          if ( (~v18 & v17) != 0 )
            return 3221225485LL;
        }
        else
        {
          *(_QWORD *)(v16 + 8) = 0LL;
        }
        *(_OWORD *)(v16 + 16) = 0LL;
        *(_OWORD *)(v16 + 32) = 0LL;
        *(_OWORD *)(v16 + 48) = 0LL;
      }
      return (unsigned int)v14;
    }
  }
  return result;
}
