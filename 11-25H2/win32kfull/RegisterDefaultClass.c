/*
 * XREFs of RegisterDefaultClass @ 0x140240D24
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     NtUserGetClassInfoEx @ 0x1402970E0 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x14029C000 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall RegisterDefaultClass(wchar_t *Str1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // r14
  signed __int32 v5; // eax
  int v6; // r15d
  int IntegerAtom; // r13d
  unsigned int v8; // edi
  int *i; // rsi
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  bool v13; // zf
  const wchar_t *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 result; // rax
  _BYTE v20[4]; // [rsp+20h] [rbp-60h] BYREF
  int v21; // [rsp+24h] [rbp-5Ch]
  __int64 v22; // [rsp+28h] [rbp-58h]
  int v23; // [rsp+30h] [rbp-50h]
  int v24; // [rsp+34h] [rbp-4Ch]
  void *v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  __int64 v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h]
  int v33; // [rsp+78h] [rbp-8h]
  int v34; // [rsp+7Ch] [rbp-4h]
  __int16 v35; // [rsp+C0h] [rbp+40h] BYREF
  signed __int32 v36; // [rsp+C8h] [rbp+48h]

  memset_0(v20, 0, 0x60uLL);
  v4 = PtiCurrent(v3, v2);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 132, 0, 0) & 4;
  v36 = v5;
  v6 = 1;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v35 = 0;
    IntegerAtom = (unsigned __int8)RtlGetIntegerAtom(Str1, &v35);
    v5 = v36;
  }
  else
  {
    IntegerAtom = 1;
    v35 = (__int16)Str1;
  }
  v8 = 0;
  for ( i = gDefaultServerClasses; ; i += 12 )
  {
    if ( !v5 || (*i & 1) != 0 )
    {
      v10 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v4 + 58) + 832LL) >> v8);
      if ( (v10 & 1) == 0 )
      {
        v6 = 0;
        if ( IntegerAtom )
        {
          UserSessionState = W32GetUserSessionState(v8, v10);
          v13 = v35 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19872) + 2LL * (((unsigned int)*i >> 3) & 0x1F) + 868);
        }
        else
        {
          v14 = (const wchar_t *)*((_QWORD *)i + 5);
          if ( ((unsigned __int64)v14 & 0xFFFFFFFFFFFF0000uLL) == 0 )
            goto LABEL_13;
          v13 = _wcsicmp(Str1, v14) == 0;
        }
        if ( v13 )
          break;
      }
    }
LABEL_13:
    if ( ++v8 >= 5 )
    {
      if ( v6 )
        *(_DWORD *)(*((_QWORD *)v4 + 58) + 12LL) |= 0x2000u;
      return 1LL;
    }
    v5 = v36;
  }
  v23 = 0;
  v25 = hModuleWin;
  v26 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v24 = 0;
  v34 = 1;
  v21 = gDefaultServerClasses[12 * v8 + 2];
  v22 = *(_QWORD *)&gDefaultServerClasses[12 * v8 + 4];
  v33 = gDefaultServerClasses[12 * v8 + 6];
  if ( (gDefaultServerClasses[12 * v8] & 2) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(hModuleWin, v12) + 21880) )
      v27 = **(_QWORD **)(W32GetUserSessionState(v16, v15) + 21880);
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  v17 = LOWORD(gDefaultServerClasses[12 * v8 + 1]);
  v18 = HIWORD(gDefaultServerClasses[12 * v8 + 1]) | 0x41;
  v28 = *(_QWORD *)&gDefaultServerClasses[12 * v8 + 8];
  v30 = *(_QWORD *)&gDefaultServerClasses[12 * v8 + 10];
  v32 = v30;
  result = InternalRegisterClassEx((__int64)v20, v17, v18, 0LL);
  if ( result )
  {
    *(_DWORD *)(*((_QWORD *)v4 + 58) + 832LL) |= 1 << v8;
    return 1LL;
  }
  return result;
}
