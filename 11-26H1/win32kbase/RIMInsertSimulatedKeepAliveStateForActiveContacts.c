/*
 * XREFs of RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1401B5F48
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMCmActiveContactsEnd @ 0x14007B47C (RIMCmActiveContactsEnd.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x14007B554 (RIMCmIsContactDeliveringAnyData.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1400F955C (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 */

__int64 __fastcall RIMInsertSimulatedKeepAliveStateForActiveContacts(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rdi
  __int64 **v9; // rax
  __int64 *v10; // xmm1_8
  __int64 *v11; // rbx
  __int64 result; // rax
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-38h]
  __int64 *v15; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-28h]
  __int64 *v17; // [rsp+58h] [rbp-20h]

  v4 = a2[57];
  v9 = RIMCmActiveContactsBeginNoButton(&v15, v4);
  v10 = v9[2];
  v13 = *(_OWORD *)v9;
  v14 = v10;
  while ( 1 )
  {
    RIMCmActiveContactsEnd((__int64)&v15, v4);
    v11 = v14;
    if ( (__int64 *)v13 == v15 )
    {
      result = v16;
      if ( DWORD2(v13) == v16 && v14 == v17 )
        break;
    }
    if ( (v14[2] & 2) == 0 )
      __int2c();
    if ( (*((_DWORD *)v14 + 587) & 1) == 0 )
    {
      if ( (unsigned int)RIMCmIsContactDeliveringAnyData((__int64)(v14 - 2)) )
        rimInsertSimulatedContactKeepAliveStateInFrame(a1, a2, (_DWORD *)v11 - 4, a3, a4);
    }
    RIMCmActiveContactsNext(v4, (__int64 **)&v13);
  }
  return result;
}
