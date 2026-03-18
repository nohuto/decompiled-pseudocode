/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1401310F0
 * Callers:
 *     _GetWindowIcon @ 0x140130B5C (_GetWindowIcon.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x14005FAB4 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x14007B1BC (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v3; // rdx
  __int64 EmptyCursorObject; // rax
  __int64 v5; // rdx
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // eax
  size_t Size; // [rsp+28h] [rbp-E0h]
  unsigned int v10; // [rsp+38h] [rbp-D0h] BYREF
  size_t v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+50h] [rbp-B8h]
  struct _UNICODE_STRING v13; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v14[16]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v15; // [rsp+88h] [rbp-80h]
  __int16 v16; // [rsp+94h] [rbp-74h]
  __int16 v17; // [rsp+96h] [rbp-72h]
  __int128 v18; // [rsp+98h] [rbp-70h]
  unsigned int v19; // [rsp+C8h] [rbp-40h]
  int v20; // [rsp+CCh] [rbp-3Ch]
  int v21; // [rsp+D0h] [rbp-38h]

  v1 = 0LL;
  v10 = 0;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)v11, 0LL, 0LL, &v10, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0LL, v3);
    LOBYTE(v5) = 3;
    v1 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(EmptyCursorObject, v5);
    if ( v1 )
    {
      v13 = 0LL;
      memset_0(v14, 0, 0x88uLL);
      if ( LODWORD(v11[0]) )
        v15 = 3;
      else
        v15 = 1;
      v19 = v10;
      v20 = *((_DWORD *)a1 + 35);
      v21 = *((_DWORD *)a1 + 36);
      v16 = WORD2(v11[0]);
      v17 = v11[1];
      v18 = v12;
      DpiForSystem = GetDpiForSystem();
      DpiDependentMetric = GetDpiDependentMetric(7, DpiForSystem);
      LODWORD(Size) = 0;
      if ( !_SetCursorIconDataEx(v1, &v13, &v13, (struct tagCURSORDATA *)v14, Size, DpiDependentMetric) )
      {
        _DestroyCursor(v1, 0LL);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v12);
      GreDeleteObject(*((_QWORD *)&v12 + 1));
    }
  }
  return v1;
}
