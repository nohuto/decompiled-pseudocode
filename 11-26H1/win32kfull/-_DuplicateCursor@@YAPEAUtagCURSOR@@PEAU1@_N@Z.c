/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294
 * Callers:
 *     _GetWindowIcon @ 0x14013E208 (_GetWindowIcon.c)
 * Callees:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1400295C4 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 EmptyCursorObject; // rax
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // eax
  unsigned int v7; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v8[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v9; // [rsp+50h] [rbp-B8h]
  struct _UNICODE_STRING v10; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v11[16]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v12; // [rsp+88h] [rbp-80h]
  __int16 v13; // [rsp+94h] [rbp-74h]
  __int16 v14; // [rsp+96h] [rbp-72h]
  __int128 v15; // [rsp+98h] [rbp-70h]
  unsigned int v16; // [rsp+C8h] [rbp-40h]
  int v17; // [rsp+CCh] [rbp-3Ch]
  int v18; // [rsp+D0h] [rbp-38h]

  v1 = 0LL;
  v7 = 0;
  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)v8, 0LL, 0LL, &v7, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0);
    v1 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(EmptyCursorObject, 3u);
    if ( v1 )
    {
      v10 = 0LL;
      memset_0(v11, 0, 0x88uLL);
      if ( v8[0] )
        v12 = 3;
      else
        v12 = 1;
      v16 = v7;
      v17 = *((_DWORD *)a1 + 35);
      v18 = *((_DWORD *)a1 + 36);
      v13 = v8[1];
      v14 = v8[2];
      v15 = v9;
      DpiForSystem = GetDpiForSystem();
      DpiDependentMetric = GetDpiDependentMetric(7, DpiForSystem);
      if ( !_SetCursorIconDataEx(v1, &v10, &v10, (struct tagCURSORDATA *)v11, 0, DpiDependentMetric) )
      {
        _DestroyCursor(v1, 0LL);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v9);
      GreDeleteObject(*((_QWORD *)&v9 + 1));
    }
  }
  return v1;
}
