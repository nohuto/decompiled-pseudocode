/*
 * XREFs of GetClassPtr @ 0x140034BF0
 * Callers:
 *     _GetClassInfoEx @ 0x140034694 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     _GetWOWClass @ 0x1402880C4 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x14017BD38 (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(_QWORD *i, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned __int16 v4; // di
  _QWORD *v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v3 = a2 + 43;
  v4 = (unsigned __int16)i;
  v5 = a2 + 43;
  if ( (_WORD)i )
  {
    while ( *v5 )
    {
      v6 = *(_QWORD *)(*v5 + 8LL);
      if ( *(_WORD *)v6 == (_WORD)i
        && (!a3 || HIWORD(*(_DWORD *)(v6 + 64)) == WORD1(a3))
        && (*(_BYTE *)(v6 + 6) & 4) == 0 )
      {
        if ( v5 )
          return (__int64)v5;
        break;
      }
      v5 = (_QWORD *)*v5;
    }
    v7 = a2 + 44;
    for ( i = a2 + 44; ; i = (_QWORD *)*i )
    {
      a2 = (_QWORD *)*i;
      if ( !*i )
        break;
      v8 = a2[1];
      if ( *(_WORD *)v8 == v4 && (*(_BYTE *)(v8 + 6) & 4) == 0 )
      {
        if ( !i )
          break;
        return (__int64)i;
      }
    }
  }
  else
  {
    v7 = a2 + 44;
  }
  UserSessionState = W32GetUserSessionState(i, a2);
  result = InnerGetClassPtr(v4, v3, *(_QWORD *)(UserSessionState + 20456));
  if ( !result )
  {
    v13 = W32GetUserSessionState(v12, v11);
    return InnerGetClassPtr(v4, v7, *(_QWORD *)(v13 + 20456));
  }
  return result;
}
